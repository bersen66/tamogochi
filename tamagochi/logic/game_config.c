#include <tamagochi/logic/game_config.h>

/**
 * Initializes the game configuration with default values.
 * @param config Pointer to the GameConfig struct to be initialized.
 */
void InitConfig(GameConfig *config)
{
    config->state = ON_MENU;
    config->is_game_over = false;
    config->allow_rerendering = true;
    config->is_fat = false;

    SetupCatLimits(config);
    ClearActivities(&(config->activity));
}

/**
 * @brief Sets up the limits for a cat in the game configuration.
 * 
 * @param config Pointer to the game configuration struct.
 */
void SetupCatLimits(GameConfig *config)
{
    config->type = CAT;

    config->food_lim = 0;
    config->sleep_lim = 0;
    config->love_lim = 0;
    config->wash_lim = 0;

    config->food_dec = 0;
    config->love_dec = 0;
    config->sleep_dec = 0;
    config->wash_dec = 0;

    config->food_inc = 0;
    config->love_inc = 0;
    config->sleep_inc = 0;
    config->wash_inc = 0;
}

/**
 * Sets up the limits for a monkey game configuration.
 * 
 * @param config A pointer to the game configuration struct.
 */
void SetupMonkeyLimits(GameConfig *config)
{
    config->type = MONKEY;

    config->food_lim = 0;
    config->sleep_lim = 0;
    config->love_lim = 0;
    config->wash_lim = 0;

    config->food_dec = 0;
    config->love_dec = 0;
    config->sleep_dec = 0;
    config->wash_dec = 0;

    config->food_inc = 0;
    config->love_inc = 0;
    config->sleep_inc = 0;
    config->wash_inc = 0;
}

/**
 * Sets up the limits for a frog game configuration.
 * 
 * @param config A pointer to the game configuration to be set up.
 */
void SetupFrogLimits(GameConfig *config)
{
    config->type = FROG;

    config->food_lim = 0;
    config->sleep_lim = 0;
    config->love_lim = 0;
    config->wash_lim = 0;

    config->food_dec = 0;
    config->love_dec = 0;
    config->sleep_dec = 0;
    config->wash_dec = 0;

    config->food_inc = 0;
    config->love_inc = 0;
    config->sleep_inc = 0;
    config->wash_inc = 0;
}

/**
 * @brief Clears the activities of an AnimalActivity struct.
 * 
 * @param act Pointer to the AnimalActivity struct to be cleared.
 */
inline void ClearActivities(AnimalActivity *act)
{
    act->Eat = 0;
    act->Love = 0;
    act->Sleep = 0;
    act->Wash = 0;
}


