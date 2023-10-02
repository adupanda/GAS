// Something.


#include "Actor/AuraEffectActor.h"
#include "Components/SphereComponent.h"
#include <AbilitySystemInterface.h>
#include <AbilitySystem/AuraAttributeSet.h>


AAuraEffectActor::AAuraEffectActor()
{
 	
	PrimaryActorTick.bCanEverTick = false;
	
	SetRootComponent(CreateDefaultSubobject<USceneComponent>("Scene Root"));
}



void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();
	
}

