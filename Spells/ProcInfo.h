#ifndef PROCINFO_H
#define PROCINFO_H


namespace ProcInfo {

enum Source {
    MainhandSwing = 0,
    OffhandSwing,
    MainhandSpell,
    OffhandSpell,
    RangedAutoShoot,
    RangedSpell,
    Manual
};

}

#endif // PROCINFO_H