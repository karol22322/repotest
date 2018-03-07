#! /usr/bin/env python
# -*- coding: utf-8 -*-

import rg


class Robot:

    def act(self, game):
        
        def czy_wejscie(poz):
            if 'spawn' in rg.loc_types(poz):
                return True
            return False
        #rg.loc_types zwraca typ pola np: spawn, obstacle, normal, invalid
        
        def czy_wrog(poz):
            if game.robots.get(poz) is not None:
                if game.robots[poz].player_id != self.player_id:
                    return True
            return False
            
        dystans = rg.wdist(self.location, rg.CENTER_POINT)
        if czy_wejscie(self.location):
            return ['move', rg.toward(self.location, rg.CENTER_POINT)]
        elif dystans > 0:
            return ['move', rg.toward(self.location, rg.CENTER_POINT)]
            
                # funkcja zwróci prawdę, jeżeli w odległości 2 kroków z przodu jest wróg
        def zprzodu(l1, l2):
            if rg.wdist(l1, l2) == 2:
                if abs(l1[0] - l2[0]) == 1:
                    return False
                else:
                    return True
            return False
            # rg.wdist()
            
            
        def miedzypole(p1, p2):
            return (int((p1[0]+p2[0]) / 2), int((p1[1]+p2[1]) / 2))

        for poz, robot in game.get('robots').items():
            if czy_wrog(poz):
                if rg.wdist(poz, self.location) == 2:
                    if zprzodu(poz, self.location):
                        return ['attack', miedzypole(poz, self.location)]
                    if rg.wdist(rg.toward(loc, rg.CENTER_POINT), self.location) == 1:
                        return ['attack', rg.toward(poz, rg.CENTER_POINT)]
                    else:
                        return ['attack', (self.location[0], poz[1])]

        lista_wrogow = []
        
        for poz, robot in game.robots.iteritems():
            if robot.player_id != self.player_id:
               # if rg.dist(poz, self.location) <= 1: # funkcja przyjmuje położenie badanego robota i mojego robota
                lista_wrogow.append(poz)
                    #return ['attack', poz1]
        
        wrogowie_obok = []
                    
        for poz in rg.locs_around(self.location):
            if czy_wrog(poz):
                wrogowie_obok.append(poz)
        
        #print rg.locs_around(self.location)
        
        #print(game.robots)
        
        
        
        
                    
        if len(wrogowie_obok) > 2 and self.hp < 27:
            return['suicide']
        elif len(lista_wrogow):
            return ['attack', lista_wrogow[0]]

        if self.location == rg.CENTER_POINT:
            return ['suicide']
        
         # idź do środka planszy, ruch domyślny
        #print rg.toward(self.location, rg.CENTER_POINT)
        if czy_wejscie(self.location) == True:
            return ['move', rg.toward(self.location, rg.CENTER_POINT)]
        #rg.CENTER_POINT - środek planszy
        #self locagtion - położenie robota
        #rg.toward - wyznacza najkrótszą drogę
