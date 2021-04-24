
#include "hartstone.h"
#include "../examples/common.h"

#if configUSE_IDLE_HOOK
void vApplicationIdleHook( void )
{
	/* Schedule the co-routines from within the idle task hook. */
	vCoRoutineSchedule();
}
#else
#error "Idle hook is required."
#endif

#if configUSE_TICK_HOOK
void vApplicationTickHook( void )
{
}
#endif

int main(void) {

	/* Output message */
	printf("*********************************\n");
	printf("****** Hello From FreeRTOS ******\n");
	printf("*********************************\n");

	hartstone_start();

	return 1;
}

