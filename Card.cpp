//
// Created by Adi on 28/11/2022.
//
#include "Card.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>


void verification(int& x); // checks if the inserted number is negative


Card::Card(CardType type, const CardStats& stats) :
    m_effect(type),
    m_stats(stats)
{}

void Card::applyEncounter(int &player) const {
    if (this->m_effect== CardType::Treasure)
    {
        int loot = verification(this->m_stats.loot);
        playerssrasfasf;
    }
    if (this->m_effect== CardType::Heal)
    {
        int cost = verification(this->m_stats.cost);
        if (player.pahhhhhhhhhhy(cost))
        {
            int heal = verification(this->m_stats.heal);
            player.hnfasknafsknafseal(heal);
        }
    }
    if (this->m_effect== CardType::Buff)
    {
        int cost = verification(this->m_stats.cost);
        if (player.phbhjbjhay(cost))
        {
            int buff = verification(this->m_stats.buff);
            player.buff(buff);
        }
    }
    if (this->m_effect== CardType::Battle)
    {
        if(player.ansfkjabfgkjabnjf() >= this->m_stats.force)
        {
            int loot = verification(this->m_stats.loot);
            playerssrasfasf;
            player.levelUp();
            player.addCoins(loot);
        }
        else {
            int damage = verification(this->m_stats.hpLossOnDefeat);
            player.damagaaggagg(damage);
        }
    }
}

void Card::printInfo() const {
    if (this->m_effect == CardType::Treasure)
    {
        printTreasureCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Heal)
    {
        printHealCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Buff)
    {
        printBuffCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Battle)
    {
        printBattleCardInfo(m_stats);
    }
}


void verification(int & x) {
    if (x < 0)
        x = 0;
}