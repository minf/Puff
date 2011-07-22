#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/bin/../lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 385 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2b8f4673c7f0, int arg_0x2b8f4673ca58, size_t arg_0x2b8f4673cd00);
# 71 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b8f4675d968, const void *arg_0x2b8f4675dc40);
# 20 "/opt/tinyos-2.0.2/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;






struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.0.2/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 57 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/bin/../lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.0.2/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.0.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.0.2/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.0.2/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.0.2/tos/platforms/mica2/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 54 "/opt/tinyos-2.0.2/tos/chips/cc1000/CC1000Const.h"
enum __nesc_unnamed4297 {
  CC1K_MAIN = 0x00, 
  CC1K_FREQ_2A = 0x01, 
  CC1K_FREQ_1A = 0x02, 
  CC1K_FREQ_0A = 0x03, 
  CC1K_FREQ_2B = 0x04, 
  CC1K_FREQ_1B = 0x05, 
  CC1K_FREQ_0B = 0x06, 
  CC1K_FSEP1 = 0x07, 
  CC1K_FSEP0 = 0x08, 
  CC1K_CURRENT = 0x09, 
  CC1K_FRONT_END = 0x0A, 
  CC1K_PA_POW = 0x0B, 
  CC1K_PLL = 0x0C, 
  CC1K_LOCK = 0x0D, 
  CC1K_CAL = 0x0E, 
  CC1K_MODEM2 = 0x0F, 
  CC1K_MODEM1 = 0x10, 
  CC1K_MODEM0 = 0x11, 
  CC1K_MATCH = 0x12, 
  CC1K_FSCTRL = 0x13, 
  CC1K_FSHAPE7 = 0x14, 
  CC1K_FSHAPE6 = 0x15, 
  CC1K_FSHAPE5 = 0x16, 
  CC1K_FSHAPE4 = 0x17, 
  CC1K_FSHAPE3 = 0x18, 
  CC1K_FSHAPE2 = 0x19, 
  CC1K_FSHAPE1 = 0x1A, 
  CC1K_FSDELAY = 0x1B, 
  CC1K_PRESCALER = 0x1C, 
  CC1K_TEST6 = 0x40, 
  CC1K_TEST5 = 0x41, 
  CC1K_TEST4 = 0x42, 
  CC1K_TEST3 = 0x43, 
  CC1K_TEST2 = 0x44, 
  CC1K_TEST1 = 0x45, 
  CC1K_TEST0 = 0x46, 


  CC1K_RXTX = 7, 
  CC1K_F_REG = 6, 
  CC1K_RX_PD = 5, 
  CC1K_TX_PD = 4, 
  CC1K_FS_PD = 3, 
  CC1K_CORE_PD = 2, 
  CC1K_BIAS_PD = 1, 
  CC1K_RESET_N = 0, 


  CC1K_VCO_CURRENT = 4, 
  CC1K_LO_DRIVE = 2, 
  CC1K_PA_DRIVE = 0, 


  CC1K_BUF_CURRENT = 5, 
  CC1K_LNA_CURRENT = 3, 
  CC1K_IF_RSSI = 1, 
  CC1K_XOSC_BYPASS = 0, 


  CC1K_PA_HIGHPOWER = 4, 
  CC1K_PA_LOWPOWER = 0, 


  CC1K_EXT_FILTER = 7, 
  CC1K_REFDIV = 3, 
  CC1K_ALARM_DISABLE = 2, 
  CC1K_ALARM_H = 1, 
  CC1K_ALARM_L = 0, 


  CC1K_LOCK_SELECT = 4, 
  CC1K_PLL_LOCK_ACCURACY = 3, 
  CC1K_PLL_LOCK_LENGTH = 2, 
  CC1K_LOCK_INSTANT = 1, 
  CC1K_LOCK_CONTINUOUS = 0, 


  CC1K_CAL_START = 7, 
  CC1K_CAL_DUAL = 6, 
  CC1K_CAL_WAIT = 5, 
  CC1K_CAL_CURRENT = 4, 
  CC1K_CAL_COMPLETE = 3, 
  CC1K_CAL_ITERATE = 0, 


  CC1K_PEAKDETECT = 7, 
  CC1K_PEAK_LEVEL_OFFSET = 0, 


  CC1K_MLIMIT = 5, 
  CC1K_LOCK_AVG_IN = 4, 
  CC1K_LOCK_AVG_MODE = 3, 
  CC1K_SETTLING = 1, 
  CC1K_MODEM_RESET_N = 0, 


  CC1K_BAUDRATE = 4, 
  CC1K_DATA_FORMAT = 2, 
  CC1K_XOSC_FREQ = 0, 


  CC1K_RX_MATCH = 4, 
  CC1K_TX_MATCH = 0, 


  CC1K_DITHER1 = 3, 
  CC1K_DITHER0 = 2, 
  CC1K_SHAPE = 1, 
  CC1K_FS_RESET_N = 0, 


  CC1K_PRE_SWING = 6, 
  CC1K_PRE_CURRENT = 4, 
  CC1K_IF_INPUT = 3, 
  CC1K_IF_FRONT = 2, 


  CC1K_LOOPFILTER_TP1 = 7, 
  CC1K_LOOPFILTER_TP2 = 6, 
  CC1K_CHP_OVERRIDE = 5, 
  CC1K_CHP_CO = 0, 


  CC1K_CHP_DISABLE = 5, 
  CC1K_VCO_OVERRIDE = 4, 
  CC1K_VCO_AO = 0, 


  CC1K_BREAK_LOOP = 4, 
  CC1K_CAL_DAC_OPEN = 0, 
#line 202
  CC1K_433_002_MHZ = 0x00, 
  CC1K_915_998_MHZ = 0x01, 
  CC1K_434_845_MHZ = 0x02, 
  CC1K_914_077_MHZ = 0x03, 
  CC1K_315_178_MHZ = 0x04, 


  CC1K_SquelchInit = 0x120, 
  CC1K_SquelchTableSize = 9, 
  CC1K_MaxRSSISamples = 5, 
  CC1K_Settling = 1, 
  CC1K_ValidPrecursor = 2, 
  CC1K_SquelchIntervalFast = 128, 
  CC1K_SquelchIntervalSlow = 2560, 
  CC1K_SquelchCount = 30, 
  CC1K_SquelchBuffer = 12, 

  CC1K_LPL_STATES = 9, 

  CC1K_LPL_PACKET_TIME = 16, 

  CC1K_LPL_CHECK_TIME = 16, 



  CC1K_LPL_MIN_INTERVAL = 5, 

  CC1K_LPL_MAX_INTERVAL = 10000
};
# 28 "puff.h"
int puff(unsigned char *dest, 
unsigned long *destlen, 
unsigned char *source, 
unsigned long *sourcelen);
# 30 "/opt/tinyos-2.0.2/tos/types/Leds.h"
enum __nesc_unnamed4298 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$SubInit$default$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
#line 51
static error_t HplCC1000P$PlatformInit$init(void );
# 59 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000.nc"
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
# 84 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$rxMode(void );







static void HplCC1000SpiP$HplCC1000Spi$default$dataReady(uint8_t data);
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t HplCC1000SpiP$PlatformInit$init(void );
# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
#line 51
static error_t RealMainP$SoftwareInit$default$init(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8f4685bcb0);
# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
static void BlinkC$Boot$booted(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 23 "/opt/tinyos-2.0.2/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 35
static inline error_t MotePlatformP$SubInit$default$init(void );
# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void HplCC1000P$PCLK$makeOutput(void );
#line 29
static void HplCC1000P$PCLK$set(void );
static void HplCC1000P$PCLK$clr(void );


static void HplCC1000P$CHP_OUT$makeInput(void );

static void HplCC1000P$PALE$makeOutput(void );
#line 29
static void HplCC1000P$PALE$set(void );
static void HplCC1000P$PALE$clr(void );




static void HplCC1000P$PDATA$makeOutput(void );
#line 29
static void HplCC1000P$PDATA$set(void );
static void HplCC1000P$PDATA$clr(void );
# 57 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void );
#line 94
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data);
# 92 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data);
# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void HplCC1000SpiP$SpiSck$makeInput(void );
#line 33
static void HplCC1000SpiP$SpiMiso$makeInput(void );
#line 33
static void HplCC1000SpiP$SpiMosi$makeInput(void );
#line 33
static void HplCC1000SpiP$OC1C$makeInput(void );
# 53 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
uint8_t HplCC1000SpiP$outgoingByte;

static inline error_t HplCC1000SpiP$PlatformInit$init(void );






void __vector_17(void ) __attribute((signal))   ;




static inline void HplCC1000SpiP$HplCC1000Spi$default$dataReady(uint8_t data);
#line 110
static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void );
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void );
# 33 "/opt/tinyos-2.0.2/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4299 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/opt/tinyos-2.0.2/tos/system/RealMainP.nc"
int main(void )   ;
#line 94
static inline error_t RealMainP$SoftwareInit$default$init(void );
# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b8f4685bcb0);
# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4300 {

  SchedulerBasicP$NUM_TASKS = 0U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 164
static inline void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 112
static inline mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void );
# 56 "/opt/tinyos-2.0.2/tos/interfaces/Leds.nc"
static void BlinkC$Leds$led0Toggle(void );
# 42 "BlinkC.nc"
static inline void BlinkC$Boot$booted(void );
# 31 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );



static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );





static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );





static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/opt/tinyos-2.0.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 73
static inline void LedsP$Leds$led0Toggle(void );
# 86 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 67 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$default$dataReady(uint8_t data)
#line 67
{
}

# 92 "/opt/tinyos-2.0.2/tos/chips/cc1000/HplCC1000Spi.nc"
inline static void HplCC1000SpiP$HplCC1000Spi$dataReady(uint8_t data){
#line 92
  HplCC1000SpiP$HplCC1000Spi$default$dataReady(data);
#line 92
}
#line 92
# 113 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 49 "/opt/tinyos-2.0.2/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 2);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMosi$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiMiso$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 110 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline void HplCC1000SpiP$HplCC1000Spi$rxMode(void )
#line 110
{
  HplCC1000SpiP$SpiMiso$makeInput();
  HplCC1000SpiP$SpiMosi$makeInput();
}

# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 7);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$OC1C$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000SpiP$SpiSck$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeInput();
#line 33
}
#line 33
# 55 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
static inline error_t HplCC1000SpiP$PlatformInit$init(void )
#line 55
{
  HplCC1000SpiP$SpiSck$makeInput();
  HplCC1000SpiP$OC1C$makeInput();
  HplCC1000SpiP$HplCC1000Spi$rxMode();
  return SUCCESS;
}

# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 6;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 7;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 4;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 7;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 6;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 4;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$CHP_OUT$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeInput();
#line 33
}
#line 33
# 57 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static inline error_t HplCC1000P$PlatformInit$init(void )
#line 57
{
  HplCC1000P$CHP_OUT$makeInput();
  HplCC1000P$PALE$makeOutput();
  HplCC1000P$PCLK$makeOutput();
  HplCC1000P$PDATA$makeOutput();
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();


  HplCC1000P$HplCC1000$write(CC1K_MAIN, (((((
  1 << CC1K_RX_PD) | (
  1 << CC1K_TX_PD)) | (
  1 << CC1K_FS_PD)) | (
  1 << CC1K_CORE_PD)) | (
  1 << CC1K_BIAS_PD)) | (
  1 << CC1K_RESET_N));
  HplCC1000P$HplCC1000$write(CC1K_PA_POW, 0);
  return SUCCESS;
}

# 35 "/opt/tinyos-2.0.2/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 35
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 23 "/opt/tinyos-2.0.2/tos/platforms/mica2/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.0.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP$Init$init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP$PlatformInit$init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000P$PlatformInit$init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplCC1000SpiP$PlatformInit$init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.0.2/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.0.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP$Init$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PALE$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 7);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PDATA$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP$31$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void HplCC1000P$PCLK$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$clr();
#line 30
}
#line 30
# 54 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 94 "/opt/tinyos-2.0.2/tos/system/RealMainP.nc"
static inline error_t RealMainP$SoftwareInit$default$init(void )
#line 94
{
#line 94
  return SUCCESS;
}

# 51 "/opt/tinyos-2.0.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RealMainP$SoftwareInit$default$init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 82 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 48 "/opt/tinyos-2.0.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.0.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.0.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.0.2/tos/interfaces/Leds.nc"
inline static void BlinkC$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 42 "BlinkC.nc"
static inline void BlinkC$Boot$booted(void )
#line 42
{







  unsigned char data[633] = { 
  0x6d, 0x93, 0x4f, 0x68, 0x13, 0x41, 0x14, 0xc6, 0x67, 0x53, 0x4b, 0x25, 
  0x06, 0x36, 0x55, 0x0f, 0x55, 0x8a, 0x0d, 0x22, 0xa2, 0x37, 0xc1, 0x8b, 
  0x52, 0x91, 0x5e, 0x06, 0xe6, 0x58, 0x90, 0x9c, 0xbc, 0x08, 0x42, 0x10, 
  0x41, 0xec, 0x21, 0x8b, 0x1e, 0xdc, 0xc4, 0xb8, 0x99, 0xc3, 0x30, 0xac, 
  0xf5, 0x60, 0x60, 0x0f, 0x9e, 0x3d, 0x79, 0x95, 0x04, 0xc1, 0x92, 0x36, 
  0xe2, 0xd6, 0x8b, 0x8d, 0x50, 0x24, 0x48, 0x0f, 0x7b, 0x88, 0xb2, 0x71, 
  0x73, 0xa8, 0x1a, 0x71, 0xad, 0x6b, 0xc6, 0x37, 0x93, 0xcd, 0x3f, 0x10, 
  0x42, 0x66, 0xf2, 0xe6, 0x7b, 0xbf, 0xf7, 0xcd, 0x9b, 0x17, 0xd7, 0xff, 
  0xf2, 0x53, 0x08, 0xb6, 0x45, 0x6e, 0x36, 0x72, 0xec, 0x29, 0x5e, 0xfd, 
  0x2b, 0x84, 0x85, 0x3d, 0x8d, 0x63, 0x6f, 0x19, 0xef, 0x3d, 0x68, 0x04, 
  0xa7, 0x60, 0x47, 0x1c, 0xbd, 0x5a, 0x46, 0x37, 0x96, 0x56, 0x90, 0x43, 
  0x9c, 0x9c, 0x5b, 0x56, 0x2a, 0x84, 0xa4, 0xce, 0x32, 0xbd, 0xa3, 0x85, 
  0x3d, 0x62, 0xdb, 0x32, 0x44, 0x6c, 0xfa, 0xf0, 0x40, 0x88, 0x57, 0xc7, 
  0x10, 0x42, 0x84, 0xbd, 0x27, 0xcc, 0xf5, 0xbb, 0xbf, 0x01, 0x8e, 0xdb, 
  0x96, 0xd9, 0x46, 0xf9, 0x64, 0x2d, 0x12, 0x42, 0x74, 0x50, 0x02, 0x21, 
  0x17, 0x7b, 0xa0, 0x41, 0x9d, 0xa4, 0x06, 0x4a, 0xbb, 0x22, 0xb3, 0x08, 
  0xa7, 0xb7, 0xe4, 0xc2, 0x3e, 0xca, 0xbc, 0xab, 0xa1, 0xcc, 0xf3, 0x2d, 
  0xd3, 0xd7, 0x8b, 0x27, 0xc0, 0x02, 0xcf, 0xfa, 0x50, 0x7a, 0xc2, 0x60, 
  0x67, 0x07, 0x49, 0x4c, 0x57, 0x62, 0x40, 0x95, 0x36, 0x56, 0xc0, 0x0a, 
  0x32, 0x92, 0xb5, 0x3f, 0xb2, 0xc6, 0x33, 0xe0, 0x42, 0x96, 0xe5, 0x6b, 
  0xca, 0xbb, 0xca, 0x72, 0x18, 0xee, 0xc6, 0x45, 0x36, 0x12, 0xca, 0xa1, 
  0xeb, 0x7f, 0xed, 0x01, 0xad, 0x3e, 0x03, 0x95, 0x82, 0x2b, 0x40, 0x99, 
  0x37, 0x16, 0x87, 0x8a, 0x99, 0x58, 0xb1, 0x3d, 0x56, 0x9c, 0x1c, 0x9e, 
  0xcd, 0xc5, 0x67, 0x2f, 0xd4, 0xd9, 0x11, 0x38, 0xe3, 0xf0, 0xc9, 0x7a, 
  0x76, 0x2a, 0xc1, 0x71, 0x8b, 0x67, 0x77, 0xed, 0x43, 0x89, 0xcb, 0x9b, 
  0x85, 0x4c, 0xed, 0x40, 0x7a, 0x49, 0x0f, 0xbc, 0xf0, 0x6c, 0x77, 0xfa, 
  0x06, 0x81, 0xf6, 0x04, 0x4a, 0x22, 0xbd, 0x52, 0xb7, 0xee, 0xf8, 0x5a, 
  0xb9, 0x6e, 0x7c, 0x1a, 0x25, 0x2f, 0x63, 0x4f, 0x5f, 0x6f, 0xf7, 0x85, 
  0xd0, 0xab, 0x74, 0x15, 0x18, 0x39, 0x5a, 0x87, 0x9b, 0xfd, 0x92, 0xb4, 
  0x2d, 0xa8, 0x0d, 0xa2, 0xe9, 0x8e, 0xc7, 0xcd, 0x2e, 0x86, 0xa3, 0x66, 
  0xdf, 0x5f, 0x92, 0xdf, 0x85, 0x0c, 0x58, 0x96, 0x02, 0xbd, 0x8a, 0x1c, 
  0xc8, 0x62, 0x1f, 0xce, 0x6f, 0xb2, 0x6d, 0x2b, 0xd4, 0xf2, 0x73, 0x35, 
  0x78, 0x18, 0x11, 0xdc, 0xe3, 0x78, 0x97, 0x38, 0xc4, 0x3e, 0x0e, 0xaf, 
  0x40, 0x15, 0x50, 0x6b, 0xf2, 0x6c, 0x0b, 0xe8, 0x6b, 0x0a, 0xfb, 0x96, 
  0xb0, 0x1d, 0xff, 0xdc, 0x7f, 0xb1, 0x6b, 0x23, 0x6c, 0x6b, 0x12, 0x1b, 
  0x4a, 0x6c, 0x06, 0xde, 0x54, 0x01, 0x6c, 0x7b, 0xea, 0x69, 0x95, 0xcb, 
  0xdb, 0x50, 0x99, 0x94, 0xde, 0x38, 0xb3, 0x08, 0x5d, 0x7f, 0xd7, 0xc8, 
  0x12, 0xf6, 0x99, 0x94, 0xba, 0x17, 0xe4, 0x20, 0xb0, 0xd7, 0x7e, 0x5f, 
  0xca, 0x5e, 0x7a, 0x6a, 0xa9, 0xb4, 0xd4, 0x62, 0x37, 0xfb, 0x0a, 0x31, 
  0x38, 0xa3, 0xfb, 0x83, 0x5f, 0x4a, 0xc2, 0x21, 0x87, 0x86, 0x72, 0xe7, 
  0x52, 0x24, 0xe4, 0x4c, 0x02, 0x85, 0xd3, 0x41, 0x1e, 0x3d, 0x2c, 0x94, 
  0xb2, 0x39, 0x52, 0xa6, 0x85, 0x52, 0x2e, 0xc4, 0x4a, 0x97, 0x66, 0x46, 
  0xbb, 0x33, 0xc3, 0x6c, 0x7b, 0x50, 0xc0, 0xaa, 0x5f, 0x92, 0x5e, 0xcf, 
  0x7e, 0x13, 0x82, 0xd6, 0xf3, 0x29, 0x17, 0x47, 0x72, 0x64, 0x3a, 0x8f, 
  0xc7, 0x92, 0x0d, 0x2d, 0x9e, 0x82, 0xe7, 0xdf, 0x65, 0x7b, 0x7a, 0xc3, 
  0xf0, 0x70, 0xb4, 0xd6, 0x55, 0x38, 0xb4, 0xcc, 0x10, 0x19, 0xf3, 0x43, 
  0x2c, 0xc4, 0xef, 0xfe, 0x80, 0x06, 0x5d, 0x84, 0xb0, 0x36, 0x15, 0x2e, 
  0x41, 0x83, 0x82, 0x45, 0x08, 0x27, 0xa6, 0xc2, 0x8f, 0x60, 0x9c, 0x83, 
  0xd9, 0x1a, 0xb8, 0x03, 0x58, 0x64, 0x99, 0x11, 0x32, 0x52, 0x96, 0xd9, 
  0x43, 0x7a, 0xd9, 0x90, 0x8d, 0x96, 0x23, 0x14, 0xa1, 0xe2, 0x69, 0xc2, 
  0x2b, 0x48, 0x8c, 0xfb, 0xc2, 0xd2, 0x10, 0x58, 0x98, 0xb8, 0x3e, 0x4b, 
  0x73, 0x1c, 0x0d, 0x9a, 0x7d, 0x8d, 0x30, 0xd3, 0x23, 0xf2, 0x5f, 0xcd, 
  0xf0, 0xbe, 0x8b, 0xff, 0x01, 0xcc, 0xf1, 0x44, 0x86 };

  unsigned long data_len = 633;

  unsigned char msg[1024];
  unsigned long msg_len = 1024;

  unsigned long i = 0;
#line 110
  unsigned long u = 0;

  for (i = 0; i < 1024; i++) {
      if (puff(msg, &msg_len, data, &data_len)) {
          u++;
        }
      else 
#line 115
        {
          u--;
        }
    }

  if (u > 0) {
    BlinkC$Leds$led0Toggle();
    }
}

# 49 "/opt/tinyos-2.0.2/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  BlinkC$Boot$booted();
#line 49
}
#line 49
# 164 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.0.2/tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2b8f4685bcb0){
#line 64
    SchedulerBasicP$TaskBasic$default$runTask(arg_0x2b8f4685bcb0);
#line 64
}
#line 64
# 112 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void )
#line 112
{
  return ATM128_POWER_DOWN;
}

# 54 "/opt/tinyos-2.0.2/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = McuSleepC$McuPowerOverride$default$lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.0.2/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.0.2/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.0.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.0.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 62 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 62
{
  register uint8_t temp = * (volatile uint8_t *)(0x0F + 0x20);

#line 64
  * (volatile uint8_t *)(0x0F + 0x20) = HplCC1000SpiP$outgoingByte;
  HplCC1000SpiP$HplCC1000Spi$dataReady(temp);
}

# 52 "/opt/tinyos-2.0.2/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 94 "/opt/tinyos-2.0.2/tos/platforms/mica2/chips/cc1000/HplCC1000P.nc"
static void HplCC1000P$HplCC1000$write(uint8_t addr, uint8_t data)
#line 94
{
  char cnt = 0;


  addr <<= 1;
  HplCC1000P$PALE$clr();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 105
        HplCC1000P$PDATA$clr();
        }
#line 106
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      addr <<= 1;
    }
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$clr();
  HplCC1000P$PCLK$set();

  HplCC1000P$PALE$set();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        HplCC1000P$PDATA$set();
        }
      else {
#line 122
        HplCC1000P$PDATA$clr();
        }
#line 123
      HplCC1000P$PCLK$clr();
      HplCC1000P$PCLK$set();
      data <<= 1;
    }
  HplCC1000P$PALE$set();
  HplCC1000P$PDATA$set();
  HplCC1000P$PCLK$set();
}

# 123 "/opt/tinyos-2.0.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

