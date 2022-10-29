#define _ARMA_

class CfgMods
{
	class BambiAirSoft
	{
		type = "mod";
		author = "AndiTheBambi";
		name = "BambiAirSoft";
		version = "0.1";
		dir = "BambiAirSoft";
	};
};

class CfgPatches
{
	class BambiAirSoft
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Characters","DZ_Weapons_Optics","DZ_Weapons_Supports","DZ_Weapons_Muzzles","DZ_Weapons_Ammunition"};
		magazines[] = {"Ammo_BambiAirSoft556","Ammo_BambiAirSoft762","Ammo_BambiAirSoft308"};
		ammo[] = {"Bullet_BambiAirSoft556","Bullet_BambiAirSoft762","Bullet_BambiAirSoft308"};
	};
};

class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	// Assault Rifles
		// Aug; (Not possible to retexture easily)
		
		// AS Val (9x39)
		// LAR (.308)
		// LE MAS (5.56)
	
	class AKM;
	class BambiAirSoft_AK: AKM
	{
		scope = 2;
		displayName = "Airsoft AK";
		descriptionShort = "Special Non-lethal AK.";
		chamberableFrom[] = {"Ammo_BambiAirSoft762"};
		magazines[] = {"Mag_BambiAirSoft_AK"};
	};
	class BambiAirSoft_AK_Blue: BambiAirSoft_AK
	{
		scope = 2;
		displayName = "Blue Airsoft AK";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\akm\bambi_akm_blue.paa"};
	};
	class BambiAirSoft_AK_Orange: BambiAirSoft_AK 
	{
		scope = 2;
		displayName = "Orange Airsoft AK";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\akm\bambi_akm_orange.paa"};
	};
	
	class M4A1;
	class BambiAirsoft_M4A1: M4A1
	{
		scope = 2;
		displayName = "Airsoft M4A1";
		descriptionShort = "Special non lethal weapon.";
		chamberableFrom[] = {"Ammo_BambiAirSoft556"};
		magazines[] = {"Mag_BambiAirSoft_STANAG"};
	};
	class BambiAirsoft_M4A1_Blue: BambiAirsoft_M4A1
	{
		scope = 2;
		displayName = "Blue Airsoft M4A1";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\m4\bambi_m4a1_blue.paa"};
	};
	class BambiAirsoft_M4A1_Orange: BambiAirsoft_M4A1
	{
		scope = 2;
		displayName = "Orange Airsoft M4A1";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\m4\bambi_m4a1_orange.paa"};
	};
	
	class M16A2;
	class BambiAirsoft_M16A2: M16A2
	{
		scope = 2;
		displayName = "Airsoft M16A2";
		descriptionShort = "Special non lethal weapon.";
		chamberableFrom[] = {"Ammo_BambiAirSoft556"};
		magazines[] = {"Mag_BambiAirSoft_STANAG"};
	};
	class BambiAirsoft_M16A2_Blue: BambiAirsoft_M16A2
	{
		scope = 2;
		displayName = "Blue Airsoft M16A2";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\m16\bambi_m16_blue.paa"};
	};
	class BambiAirsoft_M16A2_Orange: BambiAirsoft_M16A2
	{
		scope = 2;
		displayName = "Orange Airsoft M16A2";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\m16\bambi_m16_orange.paa"};
	};
	
	class FAMAS;
	class BambiAirsoft_LEMAS: FAMAS
	{
		scope = 2;
		displayName = "Airsoft LEMAS";
		descriptionShort = "Special non lethal weapon.";
		chamberableFrom[] = {"Ammo_BambiAirSoft556"};
		magazines[] = {"Mag_BambiAirSoft_LEMAS"};
	};
	// class BambiAirsoft_M4A1_Blue: BambiAirsoft_LEMAS
	// {
		// scope = 2;
		// displayName = "Blue Airsoft LEMAS";
		// hiddenSelectionsTextures[] = {"BambiAirSoft\data\m4\bambi_m4a1_blue.paa"};
	// };
	class BambiAirsoft_LEMAS_Orange: BambiAirsoft_LEMAS
	{
		scope = 2;
		displayName = "Orange Airsoft LEMAS";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\famas_rifle2_co.paa"};
	};
	
	// Sniper Rifles
	
		// Blaze (.308)
		// Mosin (7.62x54)
		// VSD (7.62x54)
		// VSS (7.62x54)
	
	class Winchester70;
	class BambiAirsoft_Sniper: Winchester70
	{
		scope = 2;
		displayName = "Airsoft Sniper";
		descriptionShort = "Special non lethal weapon.";
		chamberSize = 10;
		chamberableFrom[] = {"Ammo_BambiAirSoft308"};
	};
	class BambiAirsoft_Sniper_Blue: BambiAirsoft_Sniper
	{
		scope = 2;
		displayName = "Blue Airsoft Sniper";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\w70\bambi_sniper_blue.paa"};
	};
	class BambiAirsoft_Sniper_Orange: BambiAirsoft_Sniper
	{
		scope = 2;
		displayName = "Orange Airsoft Sniper";
		hiddenSelectionsTextures[] = {"BambiAirSoft\data\w70\bambi_sniper_orange.paa"};
	};
	
	// Sub Machine Guns
	
		// Bizon (.380)
		// Skorpion (.380)
		// MP5 (9x19)
		// USG 45 (.45ACP)
	
	// Rifles
	
		// SK 59/66 (7.62x39)
	
	// Shotguns
	
		// MP 133 
		// Vaiga
	
	// Pistols
	
		// Deagle (.357)
		// FNX45 (.45ACP)
		// Longhorn (.308)
		// MK II (.22)
			
};
class cfgAmmoTypes
{
	// 9mm
	// .380
	// .45ACP
	// Shotgun
	// .22
	
	class AType_Bullet_Airsoft556
	{
		name = "Bullet_BambiAirSoft556";
	};
	class AType_Bullet_Airsoft762
	{
		name = "Bullet_BambiAirSoft762";
	};
	class AType_Bullet_Airsoft308
	{
		name = "Bullet_BambiAirSoft308";
	};
};

class cfgAmmo
{
	class Bullet_Base;
	class Bullet_BambiAirSoft556: Bullet_Base
	{
		scope = 2; casing = "FxCartridge_556"; round = "FxRound_556"; hit = 8; indirectHit = 0; indirectHitRange = 0;
		initSpeed = 1000; typicalSpeed = 1000; airFriction = -0.00105; caliber = 0.9; deflecting = 10;
		tracerScale = 1; tracerStartTime = -1; tracerEndTime = 1; nvgOnly = 1; damageBarrel = 3; damageBarrelDestroyed = 30; weight = 0.00356;
		
		class DamageApplied
		{type = "Projectile"; dispersion = 0; bleedThreshold = 1; class Health {damage = 0;}; class Blood {damage = 0;}; class Shock {damage = 60;}; };
		
		class NoiseHit
		{strength = 10; type = "shot";};
	};
	
	class Bullet_BambiAirSoft762: Bullet_Base
	{
		scope = 2; casing = "FxCartridge_762"; round = "FxRound_762"; hit = 12; indirectHit = 0; indirectHitRange = 0;
		airLock = 1; initSpeed = 790; typicalSpeed = 790; airFriction = -0.0008; caliber = 1; deflecting = 10;
		damageBarrel = 6; damageBarrelDestroyed = 60; weight = 0.01; impactBehaviour = 1;
		
		class DamageApplied
		{type = "Projectile"; dispersion = 0; bleedThreshold = 1; class Health {damage = 0;}; class Blood {damage = 0;}; class Shock {damage = 70;}; };
		
		class NoiseHit
		{strength = 10; type = "shot";};
	};
	
	class Bullet_BambiAirSoft308: Bullet_Base
	{
		scope = 2; casing = "FxCartridge_762"; round = "FxRound_308Win"; hit = 12; indirectHit = 0; indirectHitRange = 0;
		initSpeed = 740; typicalSpeed = 740; airFriction = -0.00085; caliber = 1; deflecting = 10; airLock = 1;
		tracerScale = 1.2; tracerStartTime = -1; tracerEndTime = 1; damageBarrel = 5; damageBarrelDestroyed = 50; weight = 0.01; impactBehaviour = 1;
		
		class DamageApplied
		{type = "Projectile"; dispersion = 0; bleedThreshold = 1; class Health {damage = 0;}; class Blood {damage = 0;}; class Shock {damage = 100;}; };
		
		class NoiseHit
		{strength = 10; type = "shot";};
	};
};

class cfgMagazines
{
	// Magazines
	class Mag_AKM_30Rnd;
	class Mag_BambiAirSoft_AK: Mag_AKM_30Rnd
	{
		scope = 2;
		displayName = "Airsoft magazine for AK ";
		descriptionShort = "Magazine for the Airsoft AK Rifle";
		count = 60;
		ammo = "Bullet_BambiAirSoft762";
		ammoItems[] = {"Ammo_BambiAirSoft762"};
	};
	class Mag_STANAG_30Rnd;
	class Mag_BambiAirSoft_STANAG: Mag_STANAG_30Rnd
	{
		scope = 2;
		displayName = "Airsoft magazine for M4A1, and M16";
		descriptionShort = "Magazine for the Airsoft M4A1 and M16A2 Rifles";
		count = 60;
		ammo = "Bullet_BambiAirSoft556";
		ammoItems[] = {"Ammo_BambiAirSoft556"};
	};
	class Mag_FAMAS_25Rnd;
	class Mag_BambiAirSoft_LEMAS: Mag_FAMAS_25Rnd
	{
		scope = 2;
		displayName = "Airsoft magazine for LEMAS";
		descriptionShort = "Magazine for the Airsoft LEMAS Rifle";
		count = 60;
		ammo = "Bullet_BambiAirSoft556";
		ammoItems[] = {"Ammo_BambiAirSoft556"};
	};
	
	// Loose Ammo
	class Ammo_556x45;
	class Ammo_BambiAirSoft556: Ammo_556x45
	{
		scope = 2;
		displayName = "5.56x45 Airsoft rounds";
		descriptionShort = "Non lethal Airsoft ammunition";
		ammo = "Bullet_BambiAirSoft556";
	};
	
	class Ammo_762x39;
	class Ammo_BambiAirSoft762: Ammo_762x39
	{
		scope = 2;
		displayName = "762x39 Airsoft rounds";
		descriptionShort = "Non lethal Airsoft ammunition";
		count = 20;
		ammo = "Bullet_BambiAirSoft762";
	};
	
	class Ammo_308Win;
	class Ammo_BambiAirSoft308: Ammo_308Win
	{
		scope = 2;
		displayName = ".308 Airsoft rounds";
		descriptionShort = "Non lethal Airsoft ammunition";
		count = 20;
		ammo = "Bullet_BambiAirSoft308";
	};
};
