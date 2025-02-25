// Copyright Josh Mechanics


#include "UI/Widgets/AuraUserWidget.h"
#include "UObject/Object.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	//When we implement WidgetControllerSet in the blueprint, we know that WidgetController is set this way
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
