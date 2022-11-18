// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS_Character.h"
#include "AbilitySystemComponent.h"

// Sets default values
AGAS_Character::AGAS_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
}

UAbilitySystemComponent* AGAS_Character::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AGAS_Character::BeginPlay()
{
	Super::BeginPlay();
    if (AbilitySystemComponent != nullptr)
    {
        if (PreloadedAbilities.Num() > 0)
        {
            for (auto i = 0; i < PreloadedAbilities.Num(); i++)
            {
                if (PreloadedAbilities[i] != nullptr)
                {
                    AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PreloadedAbilities[i].GetDefaultObject(), 1, 0));
                }
            }

        }

        AbilitySystemComponent->InitAbilityActorInfo(this, this);
    }
}

// Called every frame
void AGAS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGAS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

