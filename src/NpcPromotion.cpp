#include "ScriptMgr.h"
#include "Player.h"
#include "Configuration/Config.h"

class NpcPromocionPlayerScript : public PlayerScript{
public:

    NpcPromocionPlayerScript() : PlayerScript("NpcPromocionPlayerScript") { }

    void OnLogin(Player* player) override {
        if (sConfigMgr->GetBoolDefault("npcPromotion.enableHelloWorld", true)) {
            ChatHandler(player->GetSession()).SendSysMessage("Este servidor tiene un npc de promoción. Puedes encontrarlo en las zonas de inicio de cada raza. Pero elije bien la opción, porque solamente podrás obtener 1 promoción, no importa si borras el personaje.");
        }
    }
};

void AddMyPlayerScripts() {
    new NpcPromocionPlayerScript();
}
