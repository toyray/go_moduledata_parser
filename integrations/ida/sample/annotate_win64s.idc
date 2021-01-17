#include <idc.idc>

static main() {
	set_name(0x56c680,"moduledata", 0x800);
	create_struct(0x56c680,-1,"Go_moduledata");
	set_cmt(0x56c680,"types @ 0x4a0000, text @ 0x401000",0);
	set_name(0x401000,"go.buildid", 0x800);
	if (!is_code(get_flags(0x401000)))
	{
		del_items(0x401000);
		add_func(0x401000,BADADDR);
	}
	set_name(0x401070,"internal/cpu.Initialize", 0x800);
	if (!is_code(get_flags(0x401070)))
	{
		del_items(0x401070);
		add_func(0x401070,BADADDR);
	}
	set_name(0x4010d0,"internal/cpu.processOptions", 0x800);
	if (!is_code(get_flags(0x4010d0)))
	{
		del_items(0x4010d0);
		add_func(0x4010d0,BADADDR);
	}
	set_name(0x4017d0,"internal/cpu.indexByte", 0x800);
	if (!is_code(get_flags(0x4017d0)))
	{
		del_items(0x4017d0);
		add_func(0x4017d0,BADADDR);
	}
	set_name(0x401810,"internal/cpu.doinit", 0x800);
	if (!is_code(get_flags(0x401810)))
	{
		del_items(0x401810);
		add_func(0x401810,BADADDR);
	}
	set_name(0x401c10,"internal/cpu.cpuid", 0x800);
	if (!is_code(get_flags(0x401c10)))
	{
		del_items(0x401c10);
		add_func(0x401c10,BADADDR);
	}
	set_name(0x401c30,"internal/cpu.xgetbv", 0x800);
	if (!is_code(get_flags(0x401c30)))
	{
		del_items(0x401c30);
		add_func(0x401c30,BADADDR);
	}
	set_name(0x401c50,"type..eq.internal/cpu.CacheLinePad", 0x800);
	if (!is_code(get_flags(0x401c50)))
	{
		del_items(0x401c50);
		add_func(0x401c50,BADADDR);
	}
	set_name(0x401c60,"type..eq.internal/cpu.arm", 0x800);
	if (!is_code(get_flags(0x401c60)))
	{
		del_items(0x401c60);
		add_func(0x401c60,BADADDR);
	}
	set_name(0x401c90,"type..eq.internal/cpu.arm64", 0x800);
	if (!is_code(get_flags(0x401c90)))
	{
		del_items(0x401c90);
		add_func(0x401c90,BADADDR);
	}
	set_name(0x401d00,"type..eq.internal/cpu.option", 0x800);
	if (!is_code(get_flags(0x401d00)))
	{
		del_items(0x401d00);
		add_func(0x401d00,BADADDR);
	}
	set_name(0x401db0,"type..eq.internal/cpu.x86", 0x800);
	if (!is_code(get_flags(0x401db0)))
	{
		del_items(0x401db0);
		add_func(0x401db0,BADADDR);
	}
	set_name(0x401e10,"type..eq.[15]internal/cpu.option", 0x800);
	if (!is_code(get_flags(0x401e10)))
	{
		del_items(0x401e10);
		add_func(0x401e10,BADADDR);
	}
	set_name(0x401ea0,"runtime/internal/atomic.Cas64", 0x800);
	if (!is_code(get_flags(0x401ea0)))
	{
		del_items(0x401ea0);
		add_func(0x401ea0,BADADDR);
	}
	set_name(0x401ec0,"runtime/internal/atomic.Casuintptr", 0x800);
	if (!is_code(get_flags(0x401ec0)))
	{
		del_items(0x401ec0);
		add_func(0x401ec0,BADADDR);
	}
	set_name(0x401ed0,"runtime/internal/atomic.Storeuintptr", 0x800);
	if (!is_code(get_flags(0x401ed0)))
	{
		del_items(0x401ed0);
		add_func(0x401ed0,BADADDR);
	}
	set_name(0x401ee0,"runtime/internal/atomic.Store", 0x800);
	if (!is_code(get_flags(0x401ee0)))
	{
		del_items(0x401ee0);
		add_func(0x401ee0,BADADDR);
	}
	set_name(0x401ef0,"runtime/internal/atomic.Store64", 0x800);
	if (!is_code(get_flags(0x401ef0)))
	{
		del_items(0x401ef0);
		add_func(0x401ef0,BADADDR);
	}
	set_name(0x401f00,"internal/bytealg.init.0", 0x800);
	if (!is_code(get_flags(0x401f00)))
	{
		del_items(0x401f00);
		add_func(0x401f00,BADADDR);
	}
	set_name(0x401f30,"runtime.cmpstring", 0x800);
	if (!is_code(get_flags(0x401f30)))
	{
		del_items(0x401f30);
		add_func(0x401f30,BADADDR);
	}
	set_name(0x401f50,"cmpbody", 0x800);
	if (!is_code(get_flags(0x401f50)))
	{
		del_items(0x401f50);
		add_func(0x401f50,BADADDR);
	}
	set_name(0x402190,"runtime.memequal", 0x800);
	if (!is_code(get_flags(0x402190)))
	{
		del_items(0x402190);
		add_func(0x402190,BADADDR);
	}
	set_name(0x4021c0,"runtime.memequal_varlen", 0x800);
	if (!is_code(get_flags(0x4021c0)))
	{
		del_items(0x4021c0);
		add_func(0x4021c0,BADADDR);
	}
	set_name(0x4021f0,"memeqbody", 0x800);
	if (!is_code(get_flags(0x4021f0)))
	{
		del_items(0x4021f0);
		add_func(0x4021f0,BADADDR);
	}
	set_name(0x402330,"internal/bytealg.IndexByteString", 0x800);
	if (!is_code(get_flags(0x402330)))
	{
		del_items(0x402330);
		add_func(0x402330,BADADDR);
	}
	set_name(0x402350,"indexbytebody", 0x800);
	if (!is_code(get_flags(0x402350)))
	{
		del_items(0x402350);
		add_func(0x402350,BADADDR);
	}
	set_name(0x402470,"runtime.memhash128", 0x800);
	if (!is_code(get_flags(0x402470)))
	{
		del_items(0x402470);
		add_func(0x402470,BADADDR);
	}
	set_name(0x4024d0,"runtime.strhashFallback", 0x800);
	if (!is_code(get_flags(0x4024d0)))
	{
		del_items(0x4024d0);
		add_func(0x4024d0,BADADDR);
	}
	set_name(0x402540,"runtime.f32hash", 0x800);
	if (!is_code(get_flags(0x402540)))
	{
		del_items(0x402540);
		add_func(0x402540,BADADDR);
	}
	set_name(0x402670,"runtime.f64hash", 0x800);
	if (!is_code(get_flags(0x402670)))
	{
		del_items(0x402670);
		add_func(0x402670,BADADDR);
	}
	set_name(0x4027a0,"runtime.c64hash", 0x800);
	if (!is_code(get_flags(0x4027a0)))
	{
		del_items(0x4027a0);
		add_func(0x4027a0,BADADDR);
	}
	set_name(0x402820,"runtime.c128hash", 0x800);
	if (!is_code(get_flags(0x402820)))
	{
		del_items(0x402820);
		add_func(0x402820,BADADDR);
	}
	set_name(0x4028a0,"runtime.interhash", 0x800);
	if (!is_code(get_flags(0x4028a0)))
	{
		del_items(0x4028a0);
		add_func(0x4028a0,BADADDR);
	}
	set_name(0x402a20,"runtime.nilinterhash", 0x800);
	if (!is_code(get_flags(0x402a20)))
	{
		del_items(0x402a20);
		add_func(0x402a20,BADADDR);
	}
	set_name(0x402ba0,"runtime.typehash", 0x800);
	if (!is_code(get_flags(0x402ba0)))
	{
		del_items(0x402ba0);
		add_func(0x402ba0,BADADDR);
	}
	set_name(0x402fb0,"runtime.memequal0", 0x800);
	if (!is_code(get_flags(0x402fb0)))
	{
		del_items(0x402fb0);
		add_func(0x402fb0,BADADDR);
	}
	set_name(0x402fc0,"runtime.memequal8", 0x800);
	if (!is_code(get_flags(0x402fc0)))
	{
		del_items(0x402fc0);
		add_func(0x402fc0,BADADDR);
	}
	set_name(0x402fe0,"runtime.memequal16", 0x800);
	if (!is_code(get_flags(0x402fe0)))
	{
		del_items(0x402fe0);
		add_func(0x402fe0,BADADDR);
	}
	set_name(0x403000,"runtime.memequal32", 0x800);
	if (!is_code(get_flags(0x403000)))
	{
		del_items(0x403000);
		add_func(0x403000,BADADDR);
	}
	set_name(0x403020,"runtime.memequal64", 0x800);
	if (!is_code(get_flags(0x403020)))
	{
		del_items(0x403020);
		add_func(0x403020,BADADDR);
	}
	set_name(0x403040,"runtime.memequal128", 0x800);
	if (!is_code(get_flags(0x403040)))
	{
		del_items(0x403040);
		add_func(0x403040,BADADDR);
	}
	set_name(0x403070,"runtime.f32equal", 0x800);
	if (!is_code(get_flags(0x403070)))
	{
		del_items(0x403070);
		add_func(0x403070,BADADDR);
	}
	set_name(0x4030a0,"runtime.f64equal", 0x800);
	if (!is_code(get_flags(0x4030a0)))
	{
		del_items(0x4030a0);
		add_func(0x4030a0,BADADDR);
	}
	set_name(0x4030d0,"runtime.c64equal", 0x800);
	if (!is_code(get_flags(0x4030d0)))
	{
		del_items(0x4030d0);
		add_func(0x4030d0,BADADDR);
	}
	set_name(0x403110,"runtime.c128equal", 0x800);
	if (!is_code(get_flags(0x403110)))
	{
		del_items(0x403110);
		add_func(0x403110,BADADDR);
	}
	set_name(0x403150,"runtime.strequal", 0x800);
	if (!is_code(get_flags(0x403150)))
	{
		del_items(0x403150);
		add_func(0x403150,BADADDR);
	}
	set_name(0x4031c0,"runtime.interequal", 0x800);
	if (!is_code(get_flags(0x4031c0)))
	{
		del_items(0x4031c0);
		add_func(0x4031c0,BADADDR);
	}
	set_name(0x403230,"runtime.nilinterequal", 0x800);
	if (!is_code(get_flags(0x403230)))
	{
		del_items(0x403230);
		add_func(0x403230,BADADDR);
	}
	set_name(0x4032a0,"runtime.efaceeq", 0x800);
	if (!is_code(get_flags(0x4032a0)))
	{
		del_items(0x4032a0);
		add_func(0x4032a0,BADADDR);
	}
	set_name(0x4033c0,"runtime.ifaceeq", 0x800);
	if (!is_code(get_flags(0x4033c0)))
	{
		del_items(0x4033c0);
		add_func(0x4033c0,BADADDR);
	}
	set_name(0x4034e0,"runtime.alginit", 0x800);
	if (!is_code(get_flags(0x4034e0)))
	{
		del_items(0x4034e0);
		add_func(0x4034e0,BADADDR);
	}
	set_name(0x4035b0,"runtime.atomicwb", 0x800);
	if (!is_code(get_flags(0x4035b0)))
	{
		del_items(0x4035b0);
		add_func(0x4035b0,BADADDR);
	}
	set_name(0x403630,"runtime.atomicstorep", 0x800);
	if (!is_code(get_flags(0x403630)))
	{
		del_items(0x403630);
		add_func(0x403630,BADADDR);
	}
	set_name(0x403680,"sync/atomic.StorePointer", 0x800);
	if (!is_code(get_flags(0x403680)))
	{
		del_items(0x403680);
		add_func(0x403680,BADADDR);
	}
	set_name(0x4036e0,"sync/atomic.CompareAndSwapPointer", 0x800);
	if (!is_code(get_flags(0x4036e0)))
	{
		del_items(0x4036e0);
		add_func(0x4036e0,BADADDR);
	}
	set_name(0x403750,"runtime.cgocall", 0x800);
	if (!is_code(get_flags(0x403750)))
	{
		del_items(0x403750);
		add_func(0x403750,BADADDR);
	}
	set_name(0x403830,"runtime.cgocallbackg", 0x800);
	if (!is_code(get_flags(0x403830)))
	{
		del_items(0x403830);
		add_func(0x403830,BADADDR);
	}
	set_name(0x4039c0,"runtime.cgocallbackg1", 0x800);
	if (!is_code(get_flags(0x4039c0)))
	{
		del_items(0x4039c0);
		add_func(0x4039c0,BADADDR);
	}
	set_name(0x403ca0,"runtime.unwindm", 0x800);
	if (!is_code(get_flags(0x403ca0)))
	{
		del_items(0x403ca0);
		add_func(0x403ca0,BADADDR);
	}
	set_name(0x403d70,"runtime.cgoIsGoPointer", 0x800);
	if (!is_code(get_flags(0x403d70)))
	{
		del_items(0x403d70);
		add_func(0x403d70,BADADDR);
	}
	set_name(0x403e40,"runtime.cgoCheckWriteBarrier", 0x800);
	if (!is_code(get_flags(0x403e40)))
	{
		del_items(0x403e40);
		add_func(0x403e40,BADADDR);
	}
	set_name(0x403f40,"runtime.cgoCheckMemmove", 0x800);
	if (!is_code(get_flags(0x403f40)))
	{
		del_items(0x403f40);
		add_func(0x403f40,BADADDR);
	}
	set_name(0x403fe0,"runtime.cgoCheckSliceCopy", 0x800);
	if (!is_code(get_flags(0x403fe0)))
	{
		del_items(0x403fe0);
		add_func(0x403fe0,BADADDR);
	}
	set_name(0x4040b0,"runtime.cgoCheckTypedBlock", 0x800);
	if (!is_code(get_flags(0x4040b0)))
	{
		del_items(0x4040b0);
		add_func(0x4040b0,BADADDR);
	}
	set_name(0x404470,"runtime.cgoCheckBits", 0x800);
	if (!is_code(get_flags(0x404470)))
	{
		del_items(0x404470);
		add_func(0x404470,BADADDR);
	}
	set_name(0x404560,"runtime.cgoCheckUsingType", 0x800);
	if (!is_code(get_flags(0x404560)))
	{
		del_items(0x404560);
		add_func(0x404560,BADADDR);
	}
	set_name(0x4047c0,"runtime.makechan", 0x800);
	if (!is_code(get_flags(0x4047c0)))
	{
		del_items(0x4047c0);
		add_func(0x4047c0,BADADDR);
	}
	set_name(0x4049f0,"runtime.chansend1", 0x800);
	if (!is_code(get_flags(0x4049f0)))
	{
		del_items(0x4049f0);
		add_func(0x4049f0,BADADDR);
	}
	set_name(0x404a30,"runtime.chansend", 0x800);
	if (!is_code(get_flags(0x404a30)))
	{
		del_items(0x404a30);
		add_func(0x404a30,BADADDR);
	}
	set_name(0x405060,"runtime.send", 0x800);
	if (!is_code(get_flags(0x405060)))
	{
		del_items(0x405060);
		add_func(0x405060,BADADDR);
	}
	set_name(0x405190,"runtime.sendDirect", 0x800);
	if (!is_code(get_flags(0x405190)))
	{
		del_items(0x405190);
		add_func(0x405190,BADADDR);
	}
	set_name(0x405220,"runtime.recvDirect", 0x800);
	if (!is_code(get_flags(0x405220)))
	{
		del_items(0x405220);
		add_func(0x405220,BADADDR);
	}
	set_name(0x4052b0,"runtime.closechan", 0x800);
	if (!is_code(get_flags(0x4052b0)))
	{
		del_items(0x4052b0);
		add_func(0x4052b0,BADADDR);
	}
	set_name(0x405530,"runtime.chanrecv1", 0x800);
	if (!is_code(get_flags(0x405530)))
	{
		del_items(0x405530);
		add_func(0x405530,BADADDR);
	}
	set_name(0x405570,"runtime.chanrecv2", 0x800);
	if (!is_code(get_flags(0x405570)))
	{
		del_items(0x405570);
		add_func(0x405570,BADADDR);
	}
	set_name(0x4055b0,"runtime.chanrecv", 0x800);
	if (!is_code(get_flags(0x4055b0)))
	{
		del_items(0x4055b0);
		add_func(0x4055b0,BADADDR);
	}
	set_name(0x405c80,"runtime.recv", 0x800);
	if (!is_code(get_flags(0x405c80)))
	{
		del_items(0x405c80);
		add_func(0x405c80,BADADDR);
	}
	set_name(0x405e40,"runtime.chanparkcommit", 0x800);
	if (!is_code(get_flags(0x405e40)))
	{
		del_items(0x405e40);
		add_func(0x405e40,BADADDR);
	}
	set_name(0x405ea0,"reflect.chanlen", 0x800);
	if (!is_code(get_flags(0x405ea0)))
	{
		del_items(0x405ea0);
		add_func(0x405ea0,BADADDR);
	}
	set_name(0x405ec0,"runtime.(*waitq).dequeue", 0x800);
	if (!is_code(get_flags(0x405ec0)))
	{
		del_items(0x405ec0);
		add_func(0x405ec0,BADADDR);
	}
	set_name(0x405fd0,"runtime.init.0", 0x800);
	if (!is_code(get_flags(0x405fd0)))
	{
		del_items(0x405fd0);
		add_func(0x405fd0,BADADDR);
	}
	set_name(0x406020,"runtime.GOMAXPROCS", 0x800);
	if (!is_code(get_flags(0x406020)))
	{
		del_items(0x406020);
		add_func(0x406020,BADADDR);
	}
	set_name(0x4060f0,"runtime.debugCallCheck", 0x800);
	if (!is_code(get_flags(0x4060f0)))
	{
		del_items(0x4060f0);
		add_func(0x4060f0,BADADDR);
	}
	set_name(0x4061d0,"runtime.debugCallWrap", 0x800);
	if (!is_code(get_flags(0x4061d0)))
	{
		del_items(0x4061d0);
		add_func(0x4061d0,BADADDR);
	}
	set_name(0x406290,"runtime.dumpregs", 0x800);
	if (!is_code(get_flags(0x406290)))
	{
		del_items(0x406290);
		add_func(0x406290,BADADDR);
	}
	set_name(0x406850,"runtime.gogetenv", 0x800);
	if (!is_code(get_flags(0x406850)))
	{
		del_items(0x406850);
		add_func(0x406850,BADADDR);
	}
	set_name(0x4069b0,"runtime.envKeyEqual", 0x800);
	if (!is_code(get_flags(0x4069b0)))
	{
		del_items(0x4069b0);
		add_func(0x4069b0,BADADDR);
	}
	set_name(0x406a40,"runtime.(*TypeAssertionError).Error", 0x800);
	if (!is_code(get_flags(0x406a40)))
	{
		del_items(0x406a40);
		add_func(0x406a40,BADADDR);
	}
	set_name(0x406f40,"runtime.itoa", 0x800);
	if (!is_code(get_flags(0x406f40)))
	{
		del_items(0x406f40);
		add_func(0x406f40,BADADDR);
	}
	set_name(0x406ff0,"runtime.errorString.Error", 0x800);
	if (!is_code(get_flags(0x406ff0)))
	{
		del_items(0x406ff0);
		add_func(0x406ff0,BADADDR);
	}
	set_name(0x407070,"runtime.plainError.Error", 0x800);
	if (!is_code(get_flags(0x407070)))
	{
		del_items(0x407070);
		add_func(0x407070,BADADDR);
	}
	set_name(0x407090,"runtime.appendIntStr", 0x800);
	if (!is_code(get_flags(0x407090)))
	{
		del_items(0x407090);
		add_func(0x407090,BADADDR);
	}
	set_name(0x4072c0,"runtime.boundsError.Error", 0x800);
	if (!is_code(get_flags(0x4072c0)))
	{
		del_items(0x4072c0);
		add_func(0x4072c0,BADADDR);
	}
	set_name(0x4075c0,"runtime.printany", 0x800);
	if (!is_code(get_flags(0x4075c0)))
	{
		del_items(0x4075c0);
		add_func(0x4075c0,BADADDR);
	}
	set_name(0x407df0,"runtime.panicwrap", 0x800);
	if (!is_code(get_flags(0x407df0)))
	{
		del_items(0x407df0);
		add_func(0x407df0,BADADDR);
	}
	set_name(0x408250,"runtime.Caller", 0x800);
	if (!is_code(get_flags(0x408250)))
	{
		del_items(0x408250);
		add_func(0x408250,BADADDR);
	}
	set_name(0x408440,"runtime.GOROOT", 0x800);
	if (!is_code(get_flags(0x408440)))
	{
		del_items(0x408440);
		add_func(0x408440,BADADDR);
	}
	set_name(0x4084d0,"runtime.float64frombits", 0x800);
	if (!is_code(get_flags(0x4084d0)))
	{
		del_items(0x4084d0);
		add_func(0x4084d0,BADADDR);
	}
	set_name(0x4084e0,"runtime.memhashFallback", 0x800);
	if (!is_code(get_flags(0x4084e0)))
	{
		del_items(0x4084e0);
		add_func(0x4084e0,BADADDR);
	}
	set_name(0x408750,"runtime.memhash32Fallback", 0x800);
	if (!is_code(get_flags(0x408750)))
	{
		del_items(0x408750);
		add_func(0x408750,BADADDR);
	}
	set_name(0x4087c0,"runtime.memhash64Fallback", 0x800);
	if (!is_code(get_flags(0x4087c0)))
	{
		del_items(0x4087c0);
		add_func(0x4087c0,BADADDR);
	}
	set_name(0x408830,"runtime.getitab", 0x800);
	if (!is_code(get_flags(0x408830)))
	{
		del_items(0x408830);
		add_func(0x408830,BADADDR);
	}
	set_name(0x408bc0,"runtime.(*itabTableType).find", 0x800);
	if (!is_code(get_flags(0x408bc0)))
	{
		del_items(0x408bc0);
		add_func(0x408bc0,BADADDR);
	}
	set_name(0x408c20,"runtime.itabAdd", 0x800);
	if (!is_code(get_flags(0x408c20)))
	{
		del_items(0x408c20);
		add_func(0x408c20,BADADDR);
	}
	set_name(0x408d80,"runtime.(*itabTableType).add", 0x800);
	if (!is_code(get_flags(0x408d80)))
	{
		del_items(0x408d80);
		add_func(0x408d80,BADADDR);
	}
	set_name(0x408de0,"runtime.(*itab).init", 0x800);
	if (!is_code(get_flags(0x408de0)))
	{
		del_items(0x408de0);
		add_func(0x408de0,BADADDR);
	}
	set_name(0x409280,"runtime.itabsinit", 0x800);
	if (!is_code(get_flags(0x409280)))
	{
		del_items(0x409280);
		add_func(0x409280,BADADDR);
	}
	set_name(0x409370,"runtime.panicdottypeE", 0x800);
	if (!is_code(get_flags(0x409370)))
	{
		del_items(0x409370);
		add_func(0x409370,BADADDR);
	}
	set_name(0x409440,"runtime.panicdottypeI", 0x800);
	if (!is_code(get_flags(0x409440)))
	{
		del_items(0x409440);
		add_func(0x409440,BADADDR);
	}
	set_name(0x409520,"runtime.convT2E", 0x800);
	if (!is_code(get_flags(0x409520)))
	{
		del_items(0x409520);
		add_func(0x409520,BADADDR);
	}
	set_name(0x4095b0,"runtime.convT32", 0x800);
	if (!is_code(get_flags(0x4095b0)))
	{
		del_items(0x4095b0);
		add_func(0x4095b0,BADADDR);
	}
	set_name(0x409630,"runtime.convT64", 0x800);
	if (!is_code(get_flags(0x409630)))
	{
		del_items(0x409630);
		add_func(0x409630,BADADDR);
	}
	set_name(0x4096b0,"runtime.convTstring", 0x800);
	if (!is_code(get_flags(0x4096b0)))
	{
		del_items(0x4096b0);
		add_func(0x4096b0,BADADDR);
	}
	set_name(0x409750,"runtime.convTslice", 0x800);
	if (!is_code(get_flags(0x409750)))
	{
		del_items(0x409750);
		add_func(0x409750,BADADDR);
	}
	set_name(0x409800,"runtime.convT2Enoptr", 0x800);
	if (!is_code(get_flags(0x409800)))
	{
		del_items(0x409800);
		add_func(0x409800,BADADDR);
	}
	set_name(0x4098a0,"runtime.assertE2I", 0x800);
	if (!is_code(get_flags(0x4098a0)))
	{
		del_items(0x4098a0);
		add_func(0x4098a0,BADADDR);
	}
	set_name(0x409970,"runtime.assertE2I2", 0x800);
	if (!is_code(get_flags(0x409970)))
	{
		del_items(0x409970);
		add_func(0x409970,BADADDR);
	}
	set_name(0x409a20,"reflect.ifaceE2I", 0x800);
	if (!is_code(get_flags(0x409a20)))
	{
		del_items(0x409a20);
		add_func(0x409a20,BADADDR);
	}
	set_name(0x409ac0,"runtime.iterate_itabs", 0x800);
	if (!is_code(get_flags(0x409ac0)))
	{
		del_items(0x409ac0);
		add_func(0x409ac0,BADADDR);
	}
	set_name(0x409b40,"runtime.(*lfstack).push", 0x800);
	if (!is_code(get_flags(0x409b40)))
	{
		del_items(0x409b40);
		add_func(0x409b40,BADADDR);
	}
	set_name(0x409cb0,"runtime.(*lfstack).pop", 0x800);
	if (!is_code(get_flags(0x409cb0)))
	{
		del_items(0x409cb0);
		add_func(0x409cb0,BADADDR);
	}
	set_name(0x409cf0,"runtime.lfnodeValidate", 0x800);
	if (!is_code(get_flags(0x409cf0)))
	{
		del_items(0x409cf0);
		add_func(0x409cf0,BADADDR);
	}
	set_name(0x409db0,"runtime.lock", 0x800);
	if (!is_code(get_flags(0x409db0)))
	{
		del_items(0x409db0);
		add_func(0x409db0,BADADDR);
	}
	set_name(0x409fa0,"runtime.unlock", 0x800);
	if (!is_code(get_flags(0x409fa0)))
	{
		del_items(0x409fa0);
		add_func(0x409fa0,BADADDR);
	}
	set_name(0x40a090,"runtime.notewakeup", 0x800);
	if (!is_code(get_flags(0x40a090)))
	{
		del_items(0x40a090);
		add_func(0x40a090,BADADDR);
	}
	set_name(0x40a120,"runtime.notesleep", 0x800);
	if (!is_code(get_flags(0x40a120)))
	{
		del_items(0x40a120);
		add_func(0x40a120,BADADDR);
	}
	set_name(0x40a270,"runtime.notetsleep_internal", 0x800);
	if (!is_code(get_flags(0x40a270)))
	{
		del_items(0x40a270);
		add_func(0x40a270,BADADDR);
	}
	set_name(0x40a4e0,"runtime.notetsleep", 0x800);
	if (!is_code(get_flags(0x40a4e0)))
	{
		del_items(0x40a4e0);
		add_func(0x40a4e0,BADADDR);
	}
	set_name(0x40a580,"runtime.notetsleepg", 0x800);
	if (!is_code(get_flags(0x40a580)))
	{
		del_items(0x40a580);
		add_func(0x40a580,BADADDR);
	}
	set_name(0x40a640,"runtime.mallocinit", 0x800);
	if (!is_code(get_flags(0x40a640)))
	{
		del_items(0x40a640);
		add_func(0x40a640,BADADDR);
	}
	set_name(0x40aa00,"runtime.(*mheap).sysAlloc", 0x800);
	if (!is_code(get_flags(0x40aa00)))
	{
		del_items(0x40aa00);
		add_func(0x40aa00,BADADDR);
	}
	set_name(0x40b200,"runtime.sysReserveAligned", 0x800);
	if (!is_code(get_flags(0x40b200)))
	{
		del_items(0x40b200);
		add_func(0x40b200,BADADDR);
	}
	set_name(0x40b380,"runtime.(*mcache).nextFree", 0x800);
	if (!is_code(get_flags(0x40b380)))
	{
		del_items(0x40b380);
		add_func(0x40b380,BADADDR);
	}
	set_name(0x40b5c0,"runtime.mallocgc", 0x800);
	if (!is_code(get_flags(0x40b5c0)))
	{
		del_items(0x40b5c0);
		add_func(0x40b5c0,BADADDR);
	}
	set_name(0x40bfc0,"runtime.largeAlloc", 0x800);
	if (!is_code(get_flags(0x40bfc0)))
	{
		del_items(0x40bfc0);
		add_func(0x40bfc0,BADADDR);
	}
	set_name(0x40c170,"runtime.newobject", 0x800);
	if (!is_code(get_flags(0x40c170)))
	{
		del_items(0x40c170);
		add_func(0x40c170,BADADDR);
	}
	set_name(0x40c1d0,"reflect.unsafe_New", 0x800);
	if (!is_code(get_flags(0x40c1d0)))
	{
		del_items(0x40c1d0);
		add_func(0x40c1d0,BADADDR);
	}
	set_name(0x40c230,"runtime.newarray", 0x800);
	if (!is_code(get_flags(0x40c230)))
	{
		del_items(0x40c230);
		add_func(0x40c230,BADADDR);
	}
	set_name(0x40c310,"runtime.profilealloc", 0x800);
	if (!is_code(get_flags(0x40c310)))
	{
		del_items(0x40c310);
		add_func(0x40c310,BADADDR);
	}
	set_name(0x40c390,"runtime.fastexprand", 0x800);
	if (!is_code(get_flags(0x40c390)))
	{
		del_items(0x40c390);
		add_func(0x40c390,BADADDR);
	}
	set_name(0x40c500,"runtime.persistentalloc", 0x800);
	if (!is_code(get_flags(0x40c500)))
	{
		del_items(0x40c500);
		add_func(0x40c500,BADADDR);
	}
	set_name(0x40c5b0,"runtime.persistentalloc1", 0x800);
	if (!is_code(get_flags(0x40c5b0)))
	{
		del_items(0x40c5b0);
		add_func(0x40c5b0,BADADDR);
	}
	set_name(0x40c8e0,"runtime.inPersistentAlloc", 0x800);
	if (!is_code(get_flags(0x40c8e0)))
	{
		del_items(0x40c8e0);
		add_func(0x40c8e0,BADADDR);
	}
	set_name(0x40c920,"runtime.(*linearAlloc).alloc", 0x800);
	if (!is_code(get_flags(0x40c920)))
	{
		del_items(0x40c920);
		add_func(0x40c920,BADADDR);
	}
	set_name(0x40ca30,"runtime.(*hmap).incrnoverflow", 0x800);
	if (!is_code(get_flags(0x40ca30)))
	{
		del_items(0x40ca30);
		add_func(0x40ca30,BADADDR);
	}
	set_name(0x40cac0,"runtime.(*hmap).newoverflow", 0x800);
	if (!is_code(get_flags(0x40cac0)))
	{
		del_items(0x40cac0);
		add_func(0x40cac0,BADADDR);
	}
	set_name(0x40cda0,"runtime.makemap_small", 0x800);
	if (!is_code(get_flags(0x40cda0)))
	{
		del_items(0x40cda0);
		add_func(0x40cda0,BADADDR);
	}
	set_name(0x40ce40,"runtime.makemap", 0x800);
	if (!is_code(get_flags(0x40ce40)))
	{
		del_items(0x40ce40);
		add_func(0x40ce40,BADADDR);
	}
	set_name(0x40d020,"runtime.makeBucketArray", 0x800);
	if (!is_code(get_flags(0x40d020)))
	{
		del_items(0x40d020);
		add_func(0x40d020,BADADDR);
	}
	set_name(0x40d270,"runtime.mapaccess2", 0x800);
	if (!is_code(get_flags(0x40d270)))
	{
		del_items(0x40d270);
		add_func(0x40d270,BADADDR);
	}
	set_name(0x40d4e0,"runtime.mapaccessK", 0x800);
	if (!is_code(get_flags(0x40d4e0)))
	{
		del_items(0x40d4e0);
		add_func(0x40d4e0,BADADDR);
	}
	set_name(0x40d710,"runtime.mapassign", 0x800);
	if (!is_code(get_flags(0x40d710)))
	{
		del_items(0x40d710);
		add_func(0x40d710,BADADDR);
	}
	set_name(0x40dce0,"runtime.mapiterinit", 0x800);
	if (!is_code(get_flags(0x40dce0)))
	{
		del_items(0x40dce0);
		add_func(0x40dce0,BADADDR);
	}
	set_name(0x40dfb0,"runtime.mapiternext", 0x800);
	if (!is_code(get_flags(0x40dfb0)))
	{
		del_items(0x40dfb0);
		add_func(0x40dfb0,BADADDR);
	}
	set_name(0x40e520,"runtime.hashGrow", 0x800);
	if (!is_code(get_flags(0x40e520)))
	{
		del_items(0x40e520);
		add_func(0x40e520,BADADDR);
	}
	set_name(0x40e750,"runtime.growWork", 0x800);
	if (!is_code(get_flags(0x40e750)))
	{
		del_items(0x40e750);
		add_func(0x40e750,BADADDR);
	}
	set_name(0x40e800,"runtime.evacuate", 0x800);
	if (!is_code(get_flags(0x40e800)))
	{
		del_items(0x40e800);
		add_func(0x40e800,BADADDR);
	}
	set_name(0x40ee20,"runtime.advanceEvacuationMark", 0x800);
	if (!is_code(get_flags(0x40ee20)))
	{
		del_items(0x40ee20);
		add_func(0x40ee20,BADADDR);
	}
	set_name(0x40ef10,"reflect.mapiterinit", 0x800);
	if (!is_code(get_flags(0x40ef10)))
	{
		del_items(0x40ef10);
		add_func(0x40ef10,BADADDR);
	}
	set_name(0x40ef90,"reflect.mapiternext", 0x800);
	if (!is_code(get_flags(0x40ef90)))
	{
		del_items(0x40ef90);
		add_func(0x40ef90,BADADDR);
	}
	set_name(0x40efe0,"reflect.mapiterkey", 0x800);
	if (!is_code(get_flags(0x40efe0)))
	{
		del_items(0x40efe0);
		add_func(0x40efe0,BADADDR);
	}
	set_name(0x40eff0,"reflect.mapiterelem", 0x800);
	if (!is_code(get_flags(0x40eff0)))
	{
		del_items(0x40eff0);
		add_func(0x40eff0,BADADDR);
	}
	set_name(0x40f000,"reflect.maplen", 0x800);
	if (!is_code(get_flags(0x40f000)))
	{
		del_items(0x40f000);
		add_func(0x40f000,BADADDR);
	}
	set_name(0x40f020,"runtime.mapaccess1_fast32", 0x800);
	if (!is_code(get_flags(0x40f020)))
	{
		del_items(0x40f020);
		add_func(0x40f020,BADADDR);
	}
	set_name(0x40f1d0,"runtime.mapaccess2_fast32", 0x800);
	if (!is_code(get_flags(0x40f1d0)))
	{
		del_items(0x40f1d0);
		add_func(0x40f1d0,BADADDR);
	}
	set_name(0x40f390,"runtime.mapassign_fast32", 0x800);
	if (!is_code(get_flags(0x40f390)))
	{
		del_items(0x40f390);
		add_func(0x40f390,BADADDR);
	}
	set_name(0x40f6e0,"runtime.growWork_fast32", 0x800);
	if (!is_code(get_flags(0x40f6e0)))
	{
		del_items(0x40f6e0);
		add_func(0x40f6e0,BADADDR);
	}
	set_name(0x40f790,"runtime.evacuate_fast32", 0x800);
	if (!is_code(get_flags(0x40f790)))
	{
		del_items(0x40f790);
		add_func(0x40f790,BADADDR);
	}
	set_name(0x40fb90,"runtime.mapaccess1_fast64", 0x800);
	if (!is_code(get_flags(0x40fb90)))
	{
		del_items(0x40fb90);
		add_func(0x40fb90,BADADDR);
	}
	set_name(0x40fd40,"runtime.mapaccess2_fast64", 0x800);
	if (!is_code(get_flags(0x40fd40)))
	{
		del_items(0x40fd40);
		add_func(0x40fd40,BADADDR);
	}
	set_name(0x40ff00,"runtime.mapassign_fast64", 0x800);
	if (!is_code(get_flags(0x40ff00)))
	{
		del_items(0x40ff00);
		add_func(0x40ff00,BADADDR);
	}
	set_name(0x410260,"runtime.mapassign_fast64ptr", 0x800);
	if (!is_code(get_flags(0x410260)))
	{
		del_items(0x410260);
		add_func(0x410260,BADADDR);
	}
	set_name(0x4105d0,"runtime.growWork_fast64", 0x800);
	if (!is_code(get_flags(0x4105d0)))
	{
		del_items(0x4105d0);
		add_func(0x4105d0,BADADDR);
	}
	set_name(0x410680,"runtime.evacuate_fast64", 0x800);
	if (!is_code(get_flags(0x410680)))
	{
		del_items(0x410680);
		add_func(0x410680,BADADDR);
	}
	set_name(0x410b10,"runtime.mapaccess1_faststr", 0x800);
	if (!is_code(get_flags(0x410b10)))
	{
		del_items(0x410b10);
		add_func(0x410b10,BADADDR);
	}
	set_name(0x410f60,"runtime.mapassign_faststr", 0x800);
	if (!is_code(get_flags(0x410f60)))
	{
		del_items(0x410f60);
		add_func(0x410f60,BADADDR);
	}
	set_name(0x411390,"runtime.growWork_faststr", 0x800);
	if (!is_code(get_flags(0x411390)))
	{
		del_items(0x411390);
		add_func(0x411390,BADADDR);
	}
	set_name(0x411440,"runtime.evacuate_faststr", 0x800);
	if (!is_code(get_flags(0x411440)))
	{
		del_items(0x411440);
		add_func(0x411440,BADADDR);
	}
	set_name(0x4118a0,"runtime.typedmemmove", 0x800);
	if (!is_code(get_flags(0x4118a0)))
	{
		del_items(0x4118a0);
		add_func(0x4118a0,BADADDR);
	}
	set_name(0x411960,"reflect.typedmemmove", 0x800);
	if (!is_code(get_flags(0x411960)))
	{
		del_items(0x411960);
		add_func(0x411960,BADADDR);
	}
	set_name(0x4119c0,"reflect.typedmemmovepartial", 0x800);
	if (!is_code(get_flags(0x4119c0)))
	{
		del_items(0x4119c0);
		add_func(0x4119c0,BADADDR);
	}
	set_name(0x411b00,"runtime.reflectcallmove", 0x800);
	if (!is_code(get_flags(0x411b00)))
	{
		del_items(0x411b00);
		add_func(0x411b00,BADADDR);
	}
	set_name(0x411ba0,"runtime.typedslicecopy", 0x800);
	if (!is_code(get_flags(0x411ba0)))
	{
		del_items(0x411ba0);
		add_func(0x411ba0,BADADDR);
	}
	set_name(0x411ce0,"runtime.typedmemclr", 0x800);
	if (!is_code(get_flags(0x411ce0)))
	{
		del_items(0x411ce0);
		add_func(0x411ce0,BADADDR);
	}
	set_name(0x411d40,"reflect.typedmemclr", 0x800);
	if (!is_code(get_flags(0x411d40)))
	{
		del_items(0x411d40);
		add_func(0x411d40,BADADDR);
	}
	set_name(0x411d90,"runtime.memclrHasPointers", 0x800);
	if (!is_code(get_flags(0x411d90)))
	{
		del_items(0x411d90);
		add_func(0x411d90,BADADDR);
	}
	set_name(0x411df0,"runtime.(*mspan).refillAllocCache", 0x800);
	if (!is_code(get_flags(0x411df0)))
	{
		del_items(0x411df0);
		add_func(0x411df0,BADADDR);
	}
	set_name(0x411e10,"runtime.(*mspan).nextFreeIndex", 0x800);
	if (!is_code(get_flags(0x411e10)))
	{
		del_items(0x411e10);
		add_func(0x411e10,BADADDR);
	}
	set_name(0x411fa0,"runtime.markBitsForAddr", 0x800);
	if (!is_code(get_flags(0x411fa0)))
	{
		del_items(0x411fa0);
		add_func(0x411fa0,BADADDR);
	}
	set_name(0x4120a0,"runtime.badPointer", 0x800);
	if (!is_code(get_flags(0x4120a0)))
	{
		del_items(0x4120a0);
		add_func(0x4120a0,BADADDR);
	}
	set_name(0x4122f0,"runtime.findObject", 0x800);
	if (!is_code(get_flags(0x4122f0)))
	{
		del_items(0x4122f0);
		add_func(0x4122f0,BADADDR);
	}
	set_name(0x4124e0,"runtime.heapBits.nextArena", 0x800);
	if (!is_code(get_flags(0x4124e0)))
	{
		del_items(0x4124e0);
		add_func(0x4124e0,BADADDR);
	}
	set_name(0x412590,"runtime.heapBits.forward", 0x800);
	if (!is_code(get_flags(0x412590)))
	{
		del_items(0x412590);
		add_func(0x412590,BADADDR);
	}
	set_name(0x412680,"runtime.heapBits.forwardOrBoundary", 0x800);
	if (!is_code(get_flags(0x412680)))
	{
		del_items(0x412680);
		add_func(0x412680,BADADDR);
	}
	set_name(0x412740,"runtime.bulkBarrierPreWrite", 0x800);
	if (!is_code(get_flags(0x412740)))
	{
		del_items(0x412740);
		add_func(0x412740,BADADDR);
	}
	set_name(0x412c00,"runtime.bulkBarrierPreWriteSrcOnly", 0x800);
	if (!is_code(get_flags(0x412c00)))
	{
		del_items(0x412c00);
		add_func(0x412c00,BADADDR);
	}
	set_name(0x412e10,"runtime.bulkBarrierBitmap", 0x800);
	if (!is_code(get_flags(0x412e10)))
	{
		del_items(0x412e10);
		add_func(0x412e10,BADADDR);
	}
	set_name(0x412fb0,"runtime.typeBitsBulkBarrier", 0x800);
	if (!is_code(get_flags(0x412fb0)))
	{
		del_items(0x412fb0);
		add_func(0x412fb0,BADADDR);
	}
	set_name(0x413260,"runtime.heapBits.initSpan", 0x800);
	if (!is_code(get_flags(0x413260)))
	{
		del_items(0x413260);
		add_func(0x413260,BADADDR);
	}
	set_name(0x413410,"runtime.heapBits.initCheckmarkSpan", 0x800);
	if (!is_code(get_flags(0x413410)))
	{
		del_items(0x413410);
		add_func(0x413410,BADADDR);
	}
	set_name(0x413550,"runtime.heapBits.clearCheckmarkSpan", 0x800);
	if (!is_code(get_flags(0x413550)))
	{
		del_items(0x413550);
		add_func(0x413550,BADADDR);
	}
	set_name(0x413600,"runtime.(*mspan).countAlloc", 0x800);
	if (!is_code(get_flags(0x413600)))
	{
		del_items(0x413600);
		add_func(0x413600,BADADDR);
	}
	set_name(0x413680,"runtime.heapBitsSetType", 0x800);
	if (!is_code(get_flags(0x413680)))
	{
		del_items(0x413680);
		add_func(0x413680,BADADDR);
	}
	set_name(0x414170,"runtime.heapBitsSetTypeGCProg", 0x800);
	if (!is_code(get_flags(0x414170)))
	{
		del_items(0x414170);
		add_func(0x414170,BADADDR);
	}
	set_name(0x414510,"runtime.progToPointerMask", 0x800);
	if (!is_code(get_flags(0x414510)))
	{
		del_items(0x414510);
		add_func(0x414510,BADADDR);
	}
	set_name(0x414630,"runtime.runGCProg", 0x800);
	if (!is_code(get_flags(0x414630)))
	{
		del_items(0x414630);
		add_func(0x414630,BADADDR);
	}
	set_name(0x414c80,"runtime.materializeGCProg", 0x800);
	if (!is_code(get_flags(0x414c80)))
	{
		del_items(0x414c80);
		add_func(0x414c80,BADADDR);
	}
	set_name(0x414d40,"runtime.allocmcache", 0x800);
	if (!is_code(get_flags(0x414d40)))
	{
		del_items(0x414d40);
		add_func(0x414d40,BADADDR);
	}
	set_name(0x414e00,"runtime.freemcache", 0x800);
	if (!is_code(get_flags(0x414e00)))
	{
		del_items(0x414e00);
		add_func(0x414e00,BADADDR);
	}
	set_name(0x414e70,"runtime.(*mcache).refill", 0x800);
	if (!is_code(get_flags(0x414e70)))
	{
		del_items(0x414e70);
		add_func(0x414e70,BADADDR);
	}
	set_name(0x414fb0,"runtime.(*mcache).releaseAll", 0x800);
	if (!is_code(get_flags(0x414fb0)))
	{
		del_items(0x414fb0);
		add_func(0x414fb0,BADADDR);
	}
	set_name(0x415060,"runtime.(*mcache).prepareForSweep", 0x800);
	if (!is_code(get_flags(0x415060)))
	{
		del_items(0x415060);
		add_func(0x415060,BADADDR);
	}
	set_name(0x415170,"runtime.(*mcentral).cacheSpan", 0x800);
	if (!is_code(get_flags(0x415170)))
	{
		del_items(0x415170);
		add_func(0x415170,BADADDR);
	}
	set_name(0x415590,"runtime.(*mcentral).uncacheSpan", 0x800);
	if (!is_code(get_flags(0x415590)))
	{
		del_items(0x415590);
		add_func(0x415590,BADADDR);
	}
	set_name(0x4156f0,"runtime.(*mcentral).freeSpan", 0x800);
	if (!is_code(get_flags(0x4156f0)))
	{
		del_items(0x4156f0);
		add_func(0x4156f0,BADADDR);
	}
	set_name(0x415890,"runtime.(*mcentral).grow", 0x800);
	if (!is_code(get_flags(0x415890)))
	{
		del_items(0x415890);
		add_func(0x415890,BADADDR);
	}
	set_name(0x415a40,"runtime.sysAlloc", 0x800);
	if (!is_code(get_flags(0x415a40)))
	{
		del_items(0x415a40);
		add_func(0x415a40,BADADDR);
	}
	set_name(0x415ab0,"runtime.sysUnused", 0x800);
	if (!is_code(get_flags(0x415ab0)))
	{
		del_items(0x415ab0);
		add_func(0x415ab0,BADADDR);
	}
	set_name(0x415c40,"runtime.sysUsed", 0x800);
	if (!is_code(get_flags(0x415c40)))
	{
		del_items(0x415c40);
		add_func(0x415c40,BADADDR);
	}
	set_name(0x415e80,"runtime.sysFree", 0x800);
	if (!is_code(get_flags(0x415e80)))
	{
		del_items(0x415e80);
		add_func(0x415e80,BADADDR);
	}
	set_name(0x415f70,"runtime.sysFault", 0x800);
	if (!is_code(get_flags(0x415f70)))
	{
		del_items(0x415f70);
		add_func(0x415f70,BADADDR);
	}
	set_name(0x415fc0,"runtime.sysReserve", 0x800);
	if (!is_code(get_flags(0x415fc0)))
	{
		del_items(0x415fc0);
		add_func(0x415fc0,BADADDR);
	}
	set_name(0x416090,"runtime.sysMap", 0x800);
	if (!is_code(get_flags(0x416090)))
	{
		del_items(0x416090);
		add_func(0x416090,BADADDR);
	}
	set_name(0x4160e0,"runtime.queuefinalizer", 0x800);
	if (!is_code(get_flags(0x4160e0)))
	{
		del_items(0x4160e0);
		add_func(0x4160e0,BADADDR);
	}
	set_name(0x416340,"runtime.wakefing", 0x800);
	if (!is_code(get_flags(0x416340)))
	{
		del_items(0x416340);
		add_func(0x416340,BADADDR);
	}
	set_name(0x4163e0,"runtime.createfing", 0x800);
	if (!is_code(get_flags(0x4163e0)))
	{
		del_items(0x4163e0);
		add_func(0x4163e0,BADADDR);
	}
	set_name(0x416460,"runtime.runfinq", 0x800);
	if (!is_code(get_flags(0x416460)))
	{
		del_items(0x416460);
		add_func(0x416460,BADADDR);
	}
	set_name(0x416890,"runtime.SetFinalizer", 0x800);
	if (!is_code(get_flags(0x416890)))
	{
		del_items(0x416890);
		add_func(0x416890,BADADDR);
	}
	set_name(0x417060,"runtime.(*fixalloc).alloc", 0x800);
	if (!is_code(get_flags(0x417060)))
	{
		del_items(0x417060);
		add_func(0x417060,BADADDR);
	}
	set_name(0x4171c0,"runtime.gcinit", 0x800);
	if (!is_code(get_flags(0x4171c0)))
	{
		del_items(0x4171c0);
		add_func(0x4171c0,BADADDR);
	}
	set_name(0x4172a0,"runtime.readgogc", 0x800);
	if (!is_code(get_flags(0x4172a0)))
	{
		del_items(0x4172a0);
		add_func(0x4172a0,BADADDR);
	}
	set_name(0x417370,"runtime.gcenable", 0x800);
	if (!is_code(get_flags(0x417370)))
	{
		del_items(0x417370);
		add_func(0x417370,BADADDR);
	}
	set_name(0x417440,"runtime/debug.setGCPercent", 0x800);
	if (!is_code(get_flags(0x417440)))
	{
		del_items(0x417440);
		add_func(0x417440,BADADDR);
	}
	set_name(0x4174e0,"runtime.(*gcControllerState).startCycle", 0x800);
	if (!is_code(get_flags(0x4174e0)))
	{
		del_items(0x4174e0);
		add_func(0x4174e0,BADADDR);
	}
	set_name(0x4177b0,"runtime.(*gcControllerState).revise", 0x800);
	if (!is_code(get_flags(0x4177b0)))
	{
		del_items(0x4177b0);
		add_func(0x4177b0,BADADDR);
	}
	set_name(0x4178e0,"runtime.(*gcControllerState).endCycle", 0x800);
	if (!is_code(get_flags(0x4178e0)))
	{
		del_items(0x4178e0);
		add_func(0x4178e0,BADADDR);
	}
	set_name(0x417df0,"runtime.(*gcControllerState).enlistWorker", 0x800);
	if (!is_code(get_flags(0x417df0)))
	{
		del_items(0x417df0);
		add_func(0x417df0,BADADDR);
	}
	set_name(0x417f80,"runtime.(*gcControllerState).findRunnableGCWorker", 0x800);
	if (!is_code(get_flags(0x417f80)))
	{
		del_items(0x417f80);
		add_func(0x417f80,BADADDR);
	}
	set_name(0x4181d0,"runtime.pollFractionalWorkerExit", 0x800);
	if (!is_code(get_flags(0x4181d0)))
	{
		del_items(0x4181d0);
		add_func(0x4181d0,BADADDR);
	}
	set_name(0x4182a0,"runtime.gcSetTriggerRatio", 0x800);
	if (!is_code(get_flags(0x4182a0)))
	{
		del_items(0x4182a0);
		add_func(0x4182a0,BADADDR);
	}
	set_name(0x418690,"runtime.gcWaitOnMark", 0x800);
	if (!is_code(get_flags(0x418690)))
	{
		del_items(0x418690);
		add_func(0x418690,BADADDR);
	}
	set_name(0x418760,"runtime.gcStart", 0x800);
	if (!is_code(get_flags(0x418760)))
	{
		del_items(0x418760);
		add_func(0x418760,BADADDR);
	}
	set_name(0x418e00,"runtime.gcMarkDone", 0x800);
	if (!is_code(get_flags(0x418e00)))
	{
		del_items(0x418e00);
		add_func(0x418e00,BADADDR);
	}
	set_name(0x4190d0,"runtime.gcMarkTermination", 0x800);
	if (!is_code(get_flags(0x4190d0)))
	{
		del_items(0x4190d0);
		add_func(0x4190d0,BADADDR);
	}
	set_name(0x419c40,"runtime.gcBgMarkStartWorkers", 0x800);
	if (!is_code(get_flags(0x419c40)))
	{
		del_items(0x419c40);
		add_func(0x419c40,BADADDR);
	}
	set_name(0x419d10,"runtime.gcBgMarkWorker", 0x800);
	if (!is_code(get_flags(0x419d10)))
	{
		del_items(0x419d10);
		add_func(0x419d10,BADADDR);
	}
	set_name(0x41a1f0,"runtime.gcMark", 0x800);
	if (!is_code(get_flags(0x41a1f0)))
	{
		del_items(0x41a1f0);
		add_func(0x41a1f0,BADADDR);
	}
	set_name(0x41a6f0,"runtime.gcSweep", 0x800);
	if (!is_code(get_flags(0x41a6f0)))
	{
		del_items(0x41a6f0);
		add_func(0x41a6f0,BADADDR);
	}
	set_name(0x41a8f0,"runtime.gcResetMarkState", 0x800);
	if (!is_code(get_flags(0x41a8f0)))
	{
		del_items(0x41a8f0);
		add_func(0x41a8f0,BADADDR);
	}
	set_name(0x41aa50,"sync.runtime_registerPoolCleanup", 0x800);
	if (!is_code(get_flags(0x41aa50)))
	{
		del_items(0x41aa50);
		add_func(0x41aa50,BADADDR);
	}
	set_name(0x41aab0,"runtime.clearpools", 0x800);
	if (!is_code(get_flags(0x41aab0)))
	{
		del_items(0x41aab0);
		add_func(0x41aab0,BADADDR);
	}
	set_name(0x41ac20,"runtime.itoaDiv", 0x800);
	if (!is_code(get_flags(0x41ac20)))
	{
		del_items(0x41ac20);
		add_func(0x41ac20,BADADDR);
	}
	set_name(0x41ad00,"runtime.fmtNSAsMS", 0x800);
	if (!is_code(get_flags(0x41ad00)))
	{
		del_items(0x41ad00);
		add_func(0x41ad00,BADADDR);
	}
	set_name(0x41ae90,"runtime.gcMarkRootPrepare", 0x800);
	if (!is_code(get_flags(0x41ae90)))
	{
		del_items(0x41ae90);
		add_func(0x41ae90,BADADDR);
	}
	set_name(0x41afd0,"runtime.gcMarkRootCheck", 0x800);
	if (!is_code(get_flags(0x41afd0)))
	{
		del_items(0x41afd0);
		add_func(0x41afd0,BADADDR);
	}
	set_name(0x41b1f0,"runtime.markroot", 0x800);
	if (!is_code(get_flags(0x41b1f0)))
	{
		del_items(0x41b1f0);
		add_func(0x41b1f0,BADADDR);
	}
	set_name(0x41b570,"runtime.markrootBlock", 0x800);
	if (!is_code(get_flags(0x41b570)))
	{
		del_items(0x41b570);
		add_func(0x41b570,BADADDR);
	}
	set_name(0x41b620,"runtime.markrootFreeGStacks", 0x800);
	if (!is_code(get_flags(0x41b620)))
	{
		del_items(0x41b620);
		add_func(0x41b620,BADADDR);
	}
	set_name(0x41b760,"runtime.markrootSpans", 0x800);
	if (!is_code(get_flags(0x41b760)))
	{
		del_items(0x41b760);
		add_func(0x41b760,BADADDR);
	}
	set_name(0x41b9b0,"runtime.gcAssistAlloc", 0x800);
	if (!is_code(get_flags(0x41b9b0)))
	{
		del_items(0x41b9b0);
		add_func(0x41b9b0,BADADDR);
	}
	set_name(0x41bca0,"runtime.gcAssistAlloc1", 0x800);
	if (!is_code(get_flags(0x41bca0)))
	{
		del_items(0x41bca0);
		add_func(0x41bca0,BADADDR);
	}
	set_name(0x41bff0,"runtime.gcWakeAllAssists", 0x800);
	if (!is_code(get_flags(0x41bff0)))
	{
		del_items(0x41bff0);
		add_func(0x41bff0,BADADDR);
	}
	set_name(0x41c070,"runtime.gcParkAssist", 0x800);
	if (!is_code(get_flags(0x41c070)))
	{
		del_items(0x41c070);
		add_func(0x41c070,BADADDR);
	}
	set_name(0x41c1c0,"runtime.gcFlushBgCredit", 0x800);
	if (!is_code(get_flags(0x41c1c0)))
	{
		del_items(0x41c1c0);
		add_func(0x41c1c0,BADADDR);
	}
	set_name(0x41c350,"runtime.scanstack", 0x800);
	if (!is_code(get_flags(0x41c350)))
	{
		del_items(0x41c350);
		add_func(0x41c350,BADADDR);
	}
	set_name(0x41cb40,"runtime.scanframeworker", 0x800);
	if (!is_code(get_flags(0x41cb40)))
	{
		del_items(0x41cb40);
		add_func(0x41cb40,BADADDR);
	}
	set_name(0x41ce10,"runtime.gcDrain", 0x800);
	if (!is_code(get_flags(0x41ce10)))
	{
		del_items(0x41ce10);
		add_func(0x41ce10,BADADDR);
	}
	set_name(0x41d230,"runtime.gcDrainN", 0x800);
	if (!is_code(get_flags(0x41d230)))
	{
		del_items(0x41d230);
		add_func(0x41d230,BADADDR);
	}
	set_name(0x41d470,"runtime.scanblock", 0x800);
	if (!is_code(get_flags(0x41d470)))
	{
		del_items(0x41d470);
		add_func(0x41d470,BADADDR);
	}
	set_name(0x41d5f0,"runtime.scanobject", 0x800);
	if (!is_code(get_flags(0x41d5f0)))
	{
		del_items(0x41d5f0);
		add_func(0x41d5f0,BADADDR);
	}
	set_name(0x41d9d0,"runtime.scanConservative", 0x800);
	if (!is_code(get_flags(0x41d9d0)))
	{
		del_items(0x41d9d0);
		add_func(0x41d9d0,BADADDR);
	}
	set_name(0x41dc20,"runtime.shade", 0x800);
	if (!is_code(get_flags(0x41dc20)))
	{
		del_items(0x41dc20);
		add_func(0x41dc20,BADADDR);
	}
	set_name(0x41dcd0,"runtime.greyobject", 0x800);
	if (!is_code(get_flags(0x41dcd0)))
	{
		del_items(0x41dcd0);
		add_func(0x41dcd0,BADADDR);
	}
	set_name(0x41e2a0,"runtime.gcDumpObject", 0x800);
	if (!is_code(get_flags(0x41e2a0)))
	{
		del_items(0x41e2a0);
		add_func(0x41e2a0,BADADDR);
	}
	set_name(0x41e750,"runtime.gcmarknewobject", 0x800);
	if (!is_code(get_flags(0x41e750)))
	{
		del_items(0x41e750);
		add_func(0x41e750,BADADDR);
	}
	set_name(0x41e7e0,"runtime.gcMarkTinyAllocs", 0x800);
	if (!is_code(get_flags(0x41e7e0)))
	{
		del_items(0x41e7e0);
		add_func(0x41e7e0,BADADDR);
	}
	set_name(0x41e8d0,"runtime.initCheckmarks", 0x800);
	if (!is_code(get_flags(0x41e8d0)))
	{
		del_items(0x41e8d0);
		add_func(0x41e8d0,BADADDR);
	}
	set_name(0x41ea40,"runtime.clearCheckmarks", 0x800);
	if (!is_code(get_flags(0x41ea40)))
	{
		del_items(0x41ea40);
		add_func(0x41ea40,BADADDR);
	}
	set_name(0x41ebb0,"runtime.gcPaceScavenger", 0x800);
	if (!is_code(get_flags(0x41ebb0)))
	{
		del_items(0x41ebb0);
		add_func(0x41ebb0,BADADDR);
	}
	set_name(0x41ed60,"runtime.wakeScavenger", 0x800);
	if (!is_code(get_flags(0x41ed60)))
	{
		del_items(0x41ed60);
		add_func(0x41ed60,BADADDR);
	}
	set_name(0x41edf0,"runtime.scavengeSleep", 0x800);
	if (!is_code(get_flags(0x41edf0)))
	{
		del_items(0x41edf0);
		add_func(0x41edf0,BADADDR);
	}
	set_name(0x41eec0,"runtime.bgscavenge", 0x800);
	if (!is_code(get_flags(0x41eec0)))
	{
		del_items(0x41eec0);
		add_func(0x41eec0,BADADDR);
	}
	set_name(0x41f130,"runtime.(*pageAlloc).scavenge", 0x800);
	if (!is_code(get_flags(0x41f130)))
	{
		del_items(0x41f130);
		add_func(0x41f130,BADADDR);
	}
	set_name(0x41f1c0,"runtime.printScavTrace", 0x800);
	if (!is_code(get_flags(0x41f1c0)))
	{
		del_items(0x41f1c0);
		add_func(0x41f1c0,BADADDR);
	}
	set_name(0x41f330,"runtime.(*pageAlloc).resetScavengeAddr", 0x800);
	if (!is_code(get_flags(0x41f330)))
	{
		del_items(0x41f330);
		add_func(0x41f330,BADADDR);
	}
	set_name(0x41f3d0,"runtime.(*pageAlloc).scavengeOne", 0x800);
	if (!is_code(get_flags(0x41f3d0)))
	{
		del_items(0x41f3d0);
		add_func(0x41f3d0,BADADDR);
	}
	set_name(0x41fa40,"runtime.(*pageAlloc).scavengeRangeLocked", 0x800);
	if (!is_code(get_flags(0x41fa40)))
	{
		del_items(0x41fa40);
		add_func(0x41fa40,BADADDR);
	}
	set_name(0x41fb70,"runtime.fillAligned", 0x800);
	if (!is_code(get_flags(0x41fb70)))
	{
		del_items(0x41fb70);
		add_func(0x41fb70,BADADDR);
	}
	set_name(0x41fd50,"runtime.(*pallocData).hasScavengeCandidate", 0x800);
	if (!is_code(get_flags(0x41fd50)))
	{
		del_items(0x41fd50);
		add_func(0x41fd50,BADADDR);
	}
	set_name(0x41feb0,"runtime.(*pallocData).findScavengeCandidate", 0x800);
	if (!is_code(get_flags(0x41feb0)))
	{
		del_items(0x41feb0);
		add_func(0x41feb0,BADADDR);
	}
	set_name(0x420330,"runtime.(*stackScanState).putPtr", 0x800);
	if (!is_code(get_flags(0x420330)))
	{
		del_items(0x420330);
		add_func(0x420330,BADADDR);
	}
	set_name(0x420460,"runtime.(*stackScanState).getPtr", 0x800);
	if (!is_code(get_flags(0x420460)))
	{
		del_items(0x420460);
		add_func(0x420460,BADADDR);
	}
	set_name(0x4205c0,"runtime.(*stackScanState).addObject", 0x800);
	if (!is_code(get_flags(0x4205c0)))
	{
		del_items(0x4205c0);
		add_func(0x4205c0,BADADDR);
	}
	set_name(0x420740,"runtime.binarySearchTree", 0x800);
	if (!is_code(get_flags(0x420740)))
	{
		del_items(0x420740);
		add_func(0x420740,BADADDR);
	}
	set_name(0x4208b0,"runtime.(*stackScanState).findObject", 0x800);
	if (!is_code(get_flags(0x4208b0)))
	{
		del_items(0x4208b0);
		add_func(0x4208b0,BADADDR);
	}
	set_name(0x420900,"runtime.finishsweep_m", 0x800);
	if (!is_code(get_flags(0x420900)))
	{
		del_items(0x420900);
		add_func(0x420900,BADADDR);
	}
	set_name(0x420950,"runtime.bgsweep", 0x800);
	if (!is_code(get_flags(0x420950)))
	{
		del_items(0x420950);
		add_func(0x420950,BADADDR);
	}
	set_name(0x420ad0,"runtime.sweepone", 0x800);
	if (!is_code(get_flags(0x420ad0)))
	{
		del_items(0x420ad0);
		add_func(0x420ad0,BADADDR);
	}
	set_name(0x420ed0,"runtime.(*mspan).ensureSwept", 0x800);
	if (!is_code(get_flags(0x420ed0)))
	{
		del_items(0x420ed0);
		add_func(0x420ed0,BADADDR);
	}
	set_name(0x420ff0,"runtime.(*mspan).sweep", 0x800);
	if (!is_code(get_flags(0x420ff0)))
	{
		del_items(0x420ff0);
		add_func(0x420ff0,BADADDR);
	}
	set_name(0x421960,"runtime.deductSweepCredit", 0x800);
	if (!is_code(get_flags(0x421960)))
	{
		del_items(0x421960);
		add_func(0x421960,BADADDR);
	}
	set_name(0x421ac0,"runtime.clobberfree", 0x800);
	if (!is_code(get_flags(0x421ac0)))
	{
		del_items(0x421ac0);
		add_func(0x421ac0,BADADDR);
	}
	set_name(0x421ae0,"runtime.(*gcSweepBuf).push", 0x800);
	if (!is_code(get_flags(0x421ae0)))
	{
		del_items(0x421ae0);
		add_func(0x421ae0,BADADDR);
	}
	set_name(0x421cb0,"runtime.(*gcSweepBuf).block", 0x800);
	if (!is_code(get_flags(0x421cb0)))
	{
		del_items(0x421cb0);
		add_func(0x421cb0,BADADDR);
	}
	set_name(0x421d80,"runtime.(*gcWork).init", 0x800);
	if (!is_code(get_flags(0x421d80)))
	{
		del_items(0x421d80);
		add_func(0x421d80,BADADDR);
	}
	set_name(0x421df0,"runtime.(*gcWork).put", 0x800);
	if (!is_code(get_flags(0x421df0)))
	{
		del_items(0x421df0);
		add_func(0x421df0,BADADDR);
	}
	set_name(0x421f10,"runtime.(*gcWork).putBatch", 0x800);
	if (!is_code(get_flags(0x421f10)))
	{
		del_items(0x421f10);
		add_func(0x421f10,BADADDR);
	}
	set_name(0x4220f0,"runtime.(*gcWork).tryGet", 0x800);
	if (!is_code(get_flags(0x4220f0)))
	{
		del_items(0x4220f0);
		add_func(0x4220f0,BADADDR);
	}
	set_name(0x4221e0,"runtime.(*gcWork).dispose", 0x800);
	if (!is_code(get_flags(0x4221e0)))
	{
		del_items(0x4221e0);
		add_func(0x4221e0,BADADDR);
	}
	set_name(0x4222d0,"runtime.(*gcWork).balance", 0x800);
	if (!is_code(get_flags(0x4222d0)))
	{
		del_items(0x4222d0);
		add_func(0x4222d0,BADADDR);
	}
	set_name(0x4223d0,"runtime.(*workbuf).checknonempty", 0x800);
	if (!is_code(get_flags(0x4223d0)))
	{
		del_items(0x4223d0);
		add_func(0x4223d0,BADADDR);
	}
	set_name(0x422430,"runtime.(*workbuf).checkempty", 0x800);
	if (!is_code(get_flags(0x422430)))
	{
		del_items(0x422430);
		add_func(0x422430,BADADDR);
	}
	set_name(0x422490,"runtime.getempty", 0x800);
	if (!is_code(get_flags(0x422490)))
	{
		del_items(0x422490);
		add_func(0x422490,BADADDR);
	}
	set_name(0x4226c0,"runtime.putempty", 0x800);
	if (!is_code(get_flags(0x4226c0)))
	{
		del_items(0x4226c0);
		add_func(0x4226c0,BADADDR);
	}
	set_name(0x422720,"runtime.putfull", 0x800);
	if (!is_code(get_flags(0x422720)))
	{
		del_items(0x422720);
		add_func(0x422720,BADADDR);
	}
	set_name(0x422780,"runtime.trygetfull", 0x800);
	if (!is_code(get_flags(0x422780)))
	{
		del_items(0x422780);
		add_func(0x422780,BADADDR);
	}
	set_name(0x422800,"runtime.handoff", 0x800);
	if (!is_code(get_flags(0x422800)))
	{
		del_items(0x422800);
		add_func(0x422800,BADADDR);
	}
	set_name(0x4228d0,"runtime.prepareFreeWorkbufs", 0x800);
	if (!is_code(get_flags(0x4228d0)))
	{
		del_items(0x4228d0);
		add_func(0x4228d0,BADADDR);
	}
	set_name(0x422980,"runtime.freeSomeWbufs", 0x800);
	if (!is_code(get_flags(0x422980)))
	{
		del_items(0x422980);
		add_func(0x422980,BADADDR);
	}
	set_name(0x422a60,"runtime.recordspan", 0x800);
	if (!is_code(get_flags(0x422a60)))
	{
		del_items(0x422a60);
		add_func(0x422a60,BADADDR);
	}
	set_name(0x422c40,"runtime.inHeapOrStack", 0x800);
	if (!is_code(get_flags(0x422c40)))
	{
		del_items(0x422c40);
		add_func(0x422c40,BADADDR);
	}
	set_name(0x422ce0,"runtime.spanOfHeap", 0x800);
	if (!is_code(get_flags(0x422ce0)))
	{
		del_items(0x422ce0);
		add_func(0x422ce0,BADADDR);
	}
	set_name(0x422d80,"runtime.(*mheap).init", 0x800);
	if (!is_code(get_flags(0x422d80)))
	{
		del_items(0x422d80);
		add_func(0x422d80,BADADDR);
	}
	set_name(0x423150,"runtime.(*mheap).reclaim", 0x800);
	if (!is_code(get_flags(0x423150)))
	{
		del_items(0x423150);
		add_func(0x423150,BADADDR);
	}
	set_name(0x4233c0,"runtime.(*mheap).reclaimChunk", 0x800);
	if (!is_code(get_flags(0x4233c0)))
	{
		del_items(0x4233c0);
		add_func(0x4233c0,BADADDR);
	}
	set_name(0x423760,"runtime.(*mheap).alloc", 0x800);
	if (!is_code(get_flags(0x423760)))
	{
		del_items(0x423760);
		add_func(0x423760,BADADDR);
	}
	set_name(0x423850,"runtime.(*mheap).allocManual", 0x800);
	if (!is_code(get_flags(0x423850)))
	{
		del_items(0x423850);
		add_func(0x423850,BADADDR);
	}
	set_name(0x4238c0,"runtime.(*mheap).setSpans", 0x800);
	if (!is_code(get_flags(0x4238c0)))
	{
		del_items(0x4238c0);
		add_func(0x4238c0,BADADDR);
	}
	set_name(0x4239c0,"runtime.(*mheap).allocNeedsZero", 0x800);
	if (!is_code(get_flags(0x4239c0)))
	{
		del_items(0x4239c0);
		add_func(0x4239c0,BADADDR);
	}
	set_name(0x423b20,"runtime.(*mheap).allocMSpanLocked", 0x800);
	if (!is_code(get_flags(0x423b20)))
	{
		del_items(0x423b20);
		add_func(0x423b20,BADADDR);
	}
	set_name(0x423c40,"runtime.(*mheap).allocSpan", 0x800);
	if (!is_code(get_flags(0x423c40)))
	{
		del_items(0x423c40);
		add_func(0x423c40,BADADDR);
	}
	set_name(0x4244a0,"runtime.(*mheap).grow", 0x800);
	if (!is_code(get_flags(0x4244a0)))
	{
		del_items(0x4244a0);
		add_func(0x4244a0,BADADDR);
	}
	set_name(0x424760,"runtime.(*mheap).freeSpan", 0x800);
	if (!is_code(get_flags(0x424760)))
	{
		del_items(0x424760);
		add_func(0x424760,BADADDR);
	}
	set_name(0x4247e0,"runtime.(*mheap).freeManual", 0x800);
	if (!is_code(get_flags(0x4247e0)))
	{
		del_items(0x4247e0);
		add_func(0x4247e0,BADADDR);
	}
	set_name(0x4248b0,"runtime.(*mheap).freeSpanLocked", 0x800);
	if (!is_code(get_flags(0x4248b0)))
	{
		del_items(0x4248b0);
		add_func(0x4248b0,BADADDR);
	}
	set_name(0x424c40,"runtime.(*mSpanList).remove", 0x800);
	if (!is_code(get_flags(0x424c40)))
	{
		del_items(0x424c40);
		add_func(0x424c40,BADADDR);
	}
	set_name(0x424de0,"runtime.(*mSpanList).insert", 0x800);
	if (!is_code(get_flags(0x424de0)))
	{
		del_items(0x424de0);
		add_func(0x424de0,BADADDR);
	}
	set_name(0x424f00,"runtime.(*mSpanList).insertBack", 0x800);
	if (!is_code(get_flags(0x424f00)))
	{
		del_items(0x424f00);
		add_func(0x424f00,BADADDR);
	}
	set_name(0x425020,"runtime.(*mSpanList).takeAll", 0x800);
	if (!is_code(get_flags(0x425020)))
	{
		del_items(0x425020);
		add_func(0x425020,BADADDR);
	}
	set_name(0x425080,"runtime.addspecial", 0x800);
	if (!is_code(get_flags(0x425080)))
	{
		del_items(0x425080);
		add_func(0x425080,BADADDR);
	}
	set_name(0x425250,"runtime.removespecial", 0x800);
	if (!is_code(get_flags(0x425250)))
	{
		del_items(0x425250);
		add_func(0x425250,BADADDR);
	}
	set_name(0x425410,"runtime.addfinalizer", 0x800);
	if (!is_code(get_flags(0x425410)))
	{
		del_items(0x425410);
		add_func(0x425410,BADADDR);
	}
	set_name(0x425690,"runtime.removefinalizer", 0x800);
	if (!is_code(get_flags(0x425690)))
	{
		del_items(0x425690);
		add_func(0x425690,BADADDR);
	}
	set_name(0x425750,"runtime.setprofilebucket", 0x800);
	if (!is_code(get_flags(0x425750)))
	{
		del_items(0x425750);
		add_func(0x425750,BADADDR);
	}
	set_name(0x425810,"runtime.freespecial", 0x800);
	if (!is_code(get_flags(0x425810)))
	{
		del_items(0x425810);
		add_func(0x425810,BADADDR);
	}
	set_name(0x425970,"runtime.newMarkBits", 0x800);
	if (!is_code(get_flags(0x425970)))
	{
		del_items(0x425970);
		add_func(0x425970,BADADDR);
	}
	set_name(0x425cd0,"runtime.newAllocBits", 0x800);
	if (!is_code(get_flags(0x425cd0)))
	{
		del_items(0x425cd0);
		add_func(0x425cd0,BADADDR);
	}
	set_name(0x425d20,"runtime.nextMarkBitArenaEpoch", 0x800);
	if (!is_code(get_flags(0x425d20)))
	{
		del_items(0x425d20);
		add_func(0x425d20,BADADDR);
	}
	set_name(0x425df0,"runtime.newArenaMayUnlock", 0x800);
	if (!is_code(get_flags(0x425df0)))
	{
		del_items(0x425df0);
		add_func(0x425df0,BADADDR);
	}
	set_name(0x425ee0,"runtime.(*pageAlloc).init", 0x800);
	if (!is_code(get_flags(0x425ee0)))
	{
		del_items(0x425ee0);
		add_func(0x425ee0,BADADDR);
	}
	set_name(0x426080,"runtime.(*pageAlloc).grow", 0x800);
	if (!is_code(get_flags(0x426080)))
	{
		del_items(0x426080);
		add_func(0x426080,BADADDR);
	}
	set_name(0x426310,"runtime.(*pageAlloc).update", 0x800);
	if (!is_code(get_flags(0x426310)))
	{
		del_items(0x426310);
		add_func(0x426310,BADADDR);
	}
	set_name(0x426920,"runtime.(*pageAlloc).allocRange", 0x800);
	if (!is_code(get_flags(0x426920)))
	{
		del_items(0x426920);
		add_func(0x426920,BADADDR);
	}
	set_name(0x426cf0,"runtime.(*pageAlloc).find", 0x800);
	if (!is_code(get_flags(0x426cf0)))
	{
		del_items(0x426cf0);
		add_func(0x426cf0,BADADDR);
	}
	set_name(0x4279f0,"runtime.(*pageAlloc).alloc", 0x800);
	if (!is_code(get_flags(0x4279f0)))
	{
		del_items(0x4279f0);
		add_func(0x4279f0,BADADDR);
	}
	set_name(0x427d40,"runtime.(*pageAlloc).free", 0x800);
	if (!is_code(get_flags(0x427d40)))
	{
		del_items(0x427d40);
		add_func(0x427d40,BADADDR);
	}
	set_name(0x428040,"runtime.mergeSummaries", 0x800);
	if (!is_code(get_flags(0x428040)))
	{
		del_items(0x428040);
		add_func(0x428040,BADADDR);
	}
	set_name(0x4281b0,"runtime.(*pageAlloc).sysInit", 0x800);
	if (!is_code(get_flags(0x4281b0)))
	{
		del_items(0x4281b0);
		add_func(0x4281b0,BADADDR);
	}
	set_name(0x428310,"runtime.(*pageAlloc).sysGrow", 0x800);
	if (!is_code(get_flags(0x428310)))
	{
		del_items(0x428310);
		add_func(0x428310,BADADDR);
	}
	set_name(0x428720,"runtime.(*pageCache).alloc", 0x800);
	if (!is_code(get_flags(0x428720)))
	{
		del_items(0x428720);
		add_func(0x428720,BADADDR);
	}
	set_name(0x428830,"runtime.(*pageCache).allocN", 0x800);
	if (!is_code(get_flags(0x428830)))
	{
		del_items(0x428830);
		add_func(0x428830,BADADDR);
	}
	set_name(0x428970,"runtime.(*pageCache).flush", 0x800);
	if (!is_code(get_flags(0x428970)))
	{
		del_items(0x428970);
		add_func(0x428970,BADADDR);
	}
	set_name(0x428ba0,"runtime.(*pageAlloc).allocToCache", 0x800);
	if (!is_code(get_flags(0x428ba0)))
	{
		del_items(0x428ba0);
		add_func(0x428ba0,BADADDR);
	}
	set_name(0x428eb0,"runtime.(*pageBits).setRange", 0x800);
	if (!is_code(get_flags(0x428eb0)))
	{
		del_items(0x428eb0);
		add_func(0x428eb0,BADADDR);
	}
	set_name(0x428fd0,"runtime.(*pageBits).setAll", 0x800);
	if (!is_code(get_flags(0x428fd0)))
	{
		del_items(0x428fd0);
		add_func(0x428fd0,BADADDR);
	}
	set_name(0x428ff0,"runtime.(*pageBits).clearRange", 0x800);
	if (!is_code(get_flags(0x428ff0)))
	{
		del_items(0x428ff0);
		add_func(0x428ff0,BADADDR);
	}
	set_name(0x429120,"runtime.(*pageBits).clearAll", 0x800);
	if (!is_code(get_flags(0x429120)))
	{
		del_items(0x429120);
		add_func(0x429120,BADADDR);
	}
	set_name(0x429140,"runtime.(*pageBits).popcntRange", 0x800);
	if (!is_code(get_flags(0x429140)))
	{
		del_items(0x429140);
		add_func(0x429140,BADADDR);
	}
	set_name(0x4293f0,"runtime.(*pallocBits).summarize", 0x800);
	if (!is_code(get_flags(0x4293f0)))
	{
		del_items(0x4293f0);
		add_func(0x4293f0,BADADDR);
	}
	set_name(0x4294e0,"runtime.(*pallocBits).find", 0x800);
	if (!is_code(get_flags(0x4294e0)))
	{
		del_items(0x4294e0);
		add_func(0x4294e0,BADADDR);
	}
	set_name(0x4295d0,"runtime.(*pallocBits).find1", 0x800);
	if (!is_code(get_flags(0x4295d0)))
	{
		del_items(0x4295d0);
		add_func(0x4295d0,BADADDR);
	}
	set_name(0x429650,"runtime.(*pallocBits).findSmallN", 0x800);
	if (!is_code(get_flags(0x429650)))
	{
		del_items(0x429650);
		add_func(0x429650,BADADDR);
	}
	set_name(0x429880,"runtime.(*pallocBits).findLargeN", 0x800);
	if (!is_code(get_flags(0x429880)))
	{
		del_items(0x429880);
		add_func(0x429880,BADADDR);
	}
	set_name(0x429b10,"runtime.findBitRange64", 0x800);
	if (!is_code(get_flags(0x429b10)))
	{
		del_items(0x429b10);
		add_func(0x429b10,BADADDR);
	}
	set_name(0x429c10,"runtime.(*pallocData).allocRange", 0x800);
	if (!is_code(get_flags(0x429c10)))
	{
		del_items(0x429c10);
		add_func(0x429c10,BADADDR);
	}
	set_name(0x429c90,"runtime.(*pallocData).allocAll", 0x800);
	if (!is_code(get_flags(0x429c90)))
	{
		del_items(0x429c90);
		add_func(0x429c90,BADADDR);
	}
	set_name(0x429cf0,"runtime.newBucket", 0x800);
	if (!is_code(get_flags(0x429cf0)))
	{
		del_items(0x429cf0);
		add_func(0x429cf0,BADADDR);
	}
	set_name(0x429dc0,"runtime.(*bucket).mp", 0x800);
	if (!is_code(get_flags(0x429dc0)))
	{
		del_items(0x429dc0);
		add_func(0x429dc0,BADADDR);
	}
	set_name(0x429e30,"runtime.(*bucket).bp", 0x800);
	if (!is_code(get_flags(0x429e30)))
	{
		del_items(0x429e30);
		add_func(0x429e30,BADADDR);
	}
	set_name(0x429eb0,"runtime.stkbucket", 0x800);
	if (!is_code(get_flags(0x429eb0)))
	{
		del_items(0x429eb0);
		add_func(0x429eb0,BADADDR);
	}
	set_name(0x42a200,"runtime.eqslice", 0x800);
	if (!is_code(get_flags(0x42a200)))
	{
		del_items(0x42a200);
		add_func(0x42a200,BADADDR);
	}
	set_name(0x42a250,"runtime.mProf_NextCycle", 0x800);
	if (!is_code(get_flags(0x42a250)))
	{
		del_items(0x42a250);
		add_func(0x42a250,BADADDR);
	}
	set_name(0x42a2d0,"runtime.mProf_Flush", 0x800);
	if (!is_code(get_flags(0x42a2d0)))
	{
		del_items(0x42a2d0);
		add_func(0x42a2d0,BADADDR);
	}
	set_name(0x42a340,"runtime.mProf_FlushLocked", 0x800);
	if (!is_code(get_flags(0x42a340)))
	{
		del_items(0x42a340);
		add_func(0x42a340,BADADDR);
	}
	set_name(0x42a420,"runtime.mProf_Malloc", 0x800);
	if (!is_code(get_flags(0x42a420)))
	{
		del_items(0x42a420);
		add_func(0x42a420,BADADDR);
	}
	set_name(0x42a5f0,"runtime.mProf_Free", 0x800);
	if (!is_code(get_flags(0x42a5f0)))
	{
		del_items(0x42a5f0);
		add_func(0x42a5f0,BADADDR);
	}
	set_name(0x42a6b0,"runtime.blockevent", 0x800);
	if (!is_code(get_flags(0x42a6b0)))
	{
		del_items(0x42a6b0);
		add_func(0x42a6b0,BADADDR);
	}
	set_name(0x42a740,"runtime.blocksampled", 0x800);
	if (!is_code(get_flags(0x42a740)))
	{
		del_items(0x42a740);
		add_func(0x42a740,BADADDR);
	}
	set_name(0x42a7d0,"runtime.saveblockevent", 0x800);
	if (!is_code(get_flags(0x42a7d0)))
	{
		del_items(0x42a7d0);
		add_func(0x42a7d0,BADADDR);
	}
	set_name(0x42a990,"sync.event", 0x800);
	if (!is_code(get_flags(0x42a990)))
	{
		del_items(0x42a990);
		add_func(0x42a990,BADADDR);
	}
	set_name(0x42aa80,"runtime.tracealloc", 0x800);
	if (!is_code(get_flags(0x42aa80)))
	{
		del_items(0x42aa80);
		add_func(0x42aa80,BADADDR);
	}
	set_name(0x42ad10,"runtime.tracefree", 0x800);
	if (!is_code(get_flags(0x42ad10)))
	{
		del_items(0x42ad10);
		add_func(0x42ad10,BADADDR);
	}
	set_name(0x42ae70,"runtime.tracegc", 0x800);
	if (!is_code(get_flags(0x42ae70)))
	{
		del_items(0x42ae70);
		add_func(0x42ae70,BADADDR);
	}
	set_name(0x42af60,"runtime.addrRange.subtract", 0x800);
	if (!is_code(get_flags(0x42af60)))
	{
		del_items(0x42af60);
		add_func(0x42af60,BADADDR);
	}
	set_name(0x42b030,"runtime.(*addrRanges).init", 0x800);
	if (!is_code(get_flags(0x42b030)))
	{
		del_items(0x42b030);
		add_func(0x42b030,BADADDR);
	}
	set_name(0x42b0d0,"runtime.(*addrRanges).findSucc", 0x800);
	if (!is_code(get_flags(0x42b0d0)))
	{
		del_items(0x42b0d0);
		add_func(0x42b0d0,BADADDR);
	}
	set_name(0x42b110,"runtime.(*addrRanges).contains", 0x800);
	if (!is_code(get_flags(0x42b110)))
	{
		del_items(0x42b110);
		add_func(0x42b110,BADADDR);
	}
	set_name(0x42b1c0,"runtime.(*addrRanges).add", 0x800);
	if (!is_code(get_flags(0x42b1c0)))
	{
		del_items(0x42b1c0);
		add_func(0x42b1c0,BADADDR);
	}
	set_name(0x42b620,"runtime.init.3", 0x800);
	if (!is_code(get_flags(0x42b620)))
	{
		del_items(0x42b620);
		add_func(0x42b620,BADADDR);
	}
	set_name(0x42b6b0,"runtime.cachestats", 0x800);
	if (!is_code(get_flags(0x42b6b0)))
	{
		del_items(0x42b6b0);
		add_func(0x42b6b0,BADADDR);
	}
	set_name(0x42b740,"runtime.flushmcache", 0x800);
	if (!is_code(get_flags(0x42b740)))
	{
		del_items(0x42b740);
		add_func(0x42b740,BADADDR);
	}
	set_name(0x42b7d0,"runtime.purgecachedstats", 0x800);
	if (!is_code(get_flags(0x42b7d0)))
	{
		del_items(0x42b7d0);
		add_func(0x42b7d0,BADADDR);
	}
	set_name(0x42b870,"runtime.mSysStatInc", 0x800);
	if (!is_code(get_flags(0x42b870)))
	{
		del_items(0x42b870);
		add_func(0x42b870,BADADDR);
	}
	set_name(0x42b930,"runtime.mSysStatDec", 0x800);
	if (!is_code(get_flags(0x42b930)))
	{
		del_items(0x42b930);
		add_func(0x42b930,BADADDR);
	}
	set_name(0x42b9f0,"runtime.(*wbBuf).reset", 0x800);
	if (!is_code(get_flags(0x42b9f0)))
	{
		del_items(0x42b9f0);
		add_func(0x42b9f0,BADADDR);
	}
	set_name(0x42ba80,"runtime.wbBufFlush", 0x800);
	if (!is_code(get_flags(0x42ba80)))
	{
		del_items(0x42ba80);
		add_func(0x42ba80,BADADDR);
	}
	set_name(0x42bb80,"runtime.wbBufFlush1", 0x800);
	if (!is_code(get_flags(0x42bb80)))
	{
		del_items(0x42bb80);
		add_func(0x42bb80,BADADDR);
	}
	set_name(0x42bdd0,"internal/poll.runtime_pollServerInit", 0x800);
	if (!is_code(get_flags(0x42bdd0)))
	{
		del_items(0x42bdd0);
		add_func(0x42bdd0,BADADDR);
	}
	set_name(0x42be10,"runtime.netpollGenericInit", 0x800);
	if (!is_code(get_flags(0x42be10)))
	{
		del_items(0x42be10);
		add_func(0x42be10,BADADDR);
	}
	set_name(0x42be90,"internal/poll.runtime_pollOpen", 0x800);
	if (!is_code(get_flags(0x42be90)))
	{
		del_items(0x42be90);
		add_func(0x42be90,BADADDR);
	}
	set_name(0x42bfe0,"internal/poll.runtime_pollClose", 0x800);
	if (!is_code(get_flags(0x42bfe0)))
	{
		del_items(0x42bfe0);
		add_func(0x42bfe0,BADADDR);
	}
	set_name(0x42c0b0,"runtime.(*pollCache).free", 0x800);
	if (!is_code(get_flags(0x42c0b0)))
	{
		del_items(0x42c0b0);
		add_func(0x42c0b0,BADADDR);
	}
	set_name(0x42c120,"internal/poll.runtime_pollReset", 0x800);
	if (!is_code(get_flags(0x42c120)))
	{
		del_items(0x42c120);
		add_func(0x42c120,BADADDR);
	}
	set_name(0x42c1b0,"internal/poll.runtime_pollWait", 0x800);
	if (!is_code(get_flags(0x42c1b0)))
	{
		del_items(0x42c1b0);
		add_func(0x42c1b0,BADADDR);
	}
	set_name(0x42c2f0,"internal/poll.runtime_pollWaitCanceled", 0x800);
	if (!is_code(get_flags(0x42c2f0)))
	{
		del_items(0x42c2f0);
		add_func(0x42c2f0,BADADDR);
	}
	set_name(0x42c350,"internal/poll.runtime_pollUnblock", 0x800);
	if (!is_code(get_flags(0x42c350)))
	{
		del_items(0x42c350);
		add_func(0x42c350,BADADDR);
	}
	set_name(0x42c550,"runtime.netpollready", 0x800);
	if (!is_code(get_flags(0x42c550)))
	{
		del_items(0x42c550);
		add_func(0x42c550,BADADDR);
	}
	set_name(0x42c640,"runtime.netpollblockcommit", 0x800);
	if (!is_code(get_flags(0x42c640)))
	{
		del_items(0x42c640);
		add_func(0x42c640,BADADDR);
	}
	set_name(0x42c690,"runtime.netpollblock", 0x800);
	if (!is_code(get_flags(0x42c690)))
	{
		del_items(0x42c690);
		add_func(0x42c690,BADADDR);
	}
	set_name(0x42c800,"runtime.netpollunblock", 0x800);
	if (!is_code(get_flags(0x42c800)))
	{
		del_items(0x42c800);
		add_func(0x42c800,BADADDR);
	}
	set_name(0x42c8a0,"runtime.(*pollCache).alloc", 0x800);
	if (!is_code(get_flags(0x42c8a0)))
	{
		del_items(0x42c8a0);
		add_func(0x42c8a0,BADADDR);
	}
	set_name(0x42c970,"runtime.netpollinit", 0x800);
	if (!is_code(get_flags(0x42c970)))
	{
		del_items(0x42c970);
		add_func(0x42c970,BADADDR);
	}
	set_name(0x42ca60,"runtime.netpollopen", 0x800);
	if (!is_code(get_flags(0x42ca60)))
	{
		del_items(0x42ca60);
		add_func(0x42ca60,BADADDR);
	}
	set_name(0x42caf0,"runtime.netpollBreak", 0x800);
	if (!is_code(get_flags(0x42caf0)))
	{
		del_items(0x42caf0);
		add_func(0x42caf0,BADADDR);
	}
	set_name(0x42cbe0,"runtime.netpoll", 0x800);
	if (!is_code(get_flags(0x42cbe0)))
	{
		del_items(0x42cbe0);
		add_func(0x42cbe0,BADADDR);
	}
	set_name(0x42d130,"runtime.handlecompletion", 0x800);
	if (!is_code(get_flags(0x42d130)))
	{
		del_items(0x42d130);
		add_func(0x42d130,BADADDR);
	}
	set_name(0x42d250,"runtime.windowsFindfunc", 0x800);
	if (!is_code(get_flags(0x42d250)))
	{
		del_items(0x42d250);
		add_func(0x42d250,BADADDR);
	}
	set_name(0x42d2f0,"runtime.windowsLoadSystemLib", 0x800);
	if (!is_code(get_flags(0x42d2f0)))
	{
		del_items(0x42d2f0);
		add_func(0x42d2f0,BADADDR);
	}
	set_name(0x42d4f0,"runtime.loadOptionalSyscalls", 0x800);
	if (!is_code(get_flags(0x42d4f0)))
	{
		del_items(0x42d4f0);
		add_func(0x42d4f0,BADADDR);
	}
	set_name(0x42dc90,"runtime.monitorSuspendResume", 0x800);
	if (!is_code(get_flags(0x42dc90)))
	{
		del_items(0x42dc90);
		add_func(0x42dc90,BADADDR);
	}
	set_name(0x42dec0,"runtime.getproccount", 0x800);
	if (!is_code(get_flags(0x42dec0)))
	{
		del_items(0x42dec0);
		add_func(0x42dec0,BADADDR);
	}
	set_name(0x42dfc0,"runtime.osRelax", 0x800);
	if (!is_code(get_flags(0x42dfc0)))
	{
		del_items(0x42dfc0);
		add_func(0x42dfc0,BADADDR);
	}
	set_name(0x42e050,"runtime.osinit", 0x800);
	if (!is_code(get_flags(0x42e050)))
	{
		del_items(0x42e050);
		add_func(0x42e050,BADADDR);
	}
	set_name(0x42e1f0,"runtime.nanotimeQPC", 0x800);
	if (!is_code(get_flags(0x42e1f0)))
	{
		del_items(0x42e1f0);
		add_func(0x42e1f0,BADADDR);
	}
	set_name(0x42e250,"runtime.nowQPC", 0x800);
	if (!is_code(get_flags(0x42e250)))
	{
		del_items(0x42e250);
		add_func(0x42e250,BADADDR);
	}
	set_name(0x42e320,"runtime.initWine", 0x800);
	if (!is_code(get_flags(0x42e320)))
	{
		del_items(0x42e320);
		add_func(0x42e320,BADADDR);
	}
	set_name(0x42e5e0,"runtime.getRandomData", 0x800);
	if (!is_code(get_flags(0x42e5e0)))
	{
		del_items(0x42e5e0);
		add_func(0x42e5e0,BADADDR);
	}
	set_name(0x42e670,"runtime.goenvs", 0x800);
	if (!is_code(get_flags(0x42e670)))
	{
		del_items(0x42e670);
		add_func(0x42e670,BADADDR);
	}
	set_name(0x42e880,"runtime.exit", 0x800);
	if (!is_code(get_flags(0x42e880)))
	{
		del_items(0x42e880);
		add_func(0x42e880,BADADDR);
	}
	set_name(0x42e8e0,"runtime.write1", 0x800);
	if (!is_code(get_flags(0x42e8e0)))
	{
		del_items(0x42e8e0);
		add_func(0x42e8e0,BADADDR);
	}
	set_name(0x42ea50,"runtime.writeConsole", 0x800);
	if (!is_code(get_flags(0x42ea50)))
	{
		del_items(0x42ea50);
		add_func(0x42ea50,BADADDR);
	}
	set_name(0x42ecd0,"runtime.writeConsoleUTF16", 0x800);
	if (!is_code(get_flags(0x42ecd0)))
	{
		del_items(0x42ecd0);
		add_func(0x42ecd0,BADADDR);
	}
	set_name(0x42ed70,"runtime.semasleep", 0x800);
	if (!is_code(get_flags(0x42ed70)))
	{
		del_items(0x42ed70);
		add_func(0x42ed70,BADADDR);
	}
	set_name(0x42ef80,"runtime.semawakeup", 0x800);
	if (!is_code(get_flags(0x42ef80)))
	{
		del_items(0x42ef80);
		add_func(0x42ef80,BADADDR);
	}
	set_name(0x42efe0,"runtime.semacreate", 0x800);
	if (!is_code(get_flags(0x42efe0)))
	{
		del_items(0x42efe0);
		add_func(0x42efe0,BADADDR);
	}
	set_name(0x42f0e0,"runtime.newosproc", 0x800);
	if (!is_code(get_flags(0x42f0e0)))
	{
		del_items(0x42f0e0);
		add_func(0x42f0e0,BADADDR);
	}
	set_name(0x42f230,"runtime.exitThread", 0x800);
	if (!is_code(get_flags(0x42f230)))
	{
		del_items(0x42f230);
		add_func(0x42f230,BADADDR);
	}
	set_name(0x42f280,"runtime.minit", 0x800);
	if (!is_code(get_flags(0x42f280)))
	{
		del_items(0x42f280);
		add_func(0x42f280,BADADDR);
	}
	set_name(0x42f500,"runtime.unminit", 0x800);
	if (!is_code(get_flags(0x42f500)))
	{
		del_items(0x42f500);
		add_func(0x42f500,BADADDR);
	}
	set_name(0x42f590,"runtime.stdcall", 0x800);
	if (!is_code(get_flags(0x42f590)))
	{
		del_items(0x42f590);
		add_func(0x42f590,BADADDR);
	}
	set_name(0x42f660,"runtime.stdcall0", 0x800);
	if (!is_code(get_flags(0x42f660)))
	{
		del_items(0x42f660);
		add_func(0x42f660,BADADDR);
	}
	set_name(0x42f6c0,"runtime.stdcall1", 0x800);
	if (!is_code(get_flags(0x42f6c0)))
	{
		del_items(0x42f6c0);
		add_func(0x42f6c0,BADADDR);
	}
	set_name(0x42f720,"runtime.stdcall2", 0x800);
	if (!is_code(get_flags(0x42f720)))
	{
		del_items(0x42f720);
		add_func(0x42f720,BADADDR);
	}
	set_name(0x42f780,"runtime.stdcall3", 0x800);
	if (!is_code(get_flags(0x42f780)))
	{
		del_items(0x42f780);
		add_func(0x42f780,BADADDR);
	}
	set_name(0x42f7e0,"runtime.stdcall4", 0x800);
	if (!is_code(get_flags(0x42f7e0)))
	{
		del_items(0x42f7e0);
		add_func(0x42f7e0,BADADDR);
	}
	set_name(0x42f840,"runtime.stdcall5", 0x800);
	if (!is_code(get_flags(0x42f840)))
	{
		del_items(0x42f840);
		add_func(0x42f840,BADADDR);
	}
	set_name(0x42f8a0,"runtime.stdcall6", 0x800);
	if (!is_code(get_flags(0x42f8a0)))
	{
		del_items(0x42f8a0);
		add_func(0x42f8a0,BADADDR);
	}
	set_name(0x42f900,"runtime.stdcall7", 0x800);
	if (!is_code(get_flags(0x42f900)))
	{
		del_items(0x42f900);
		add_func(0x42f900,BADADDR);
	}
	set_name(0x42f960,"runtime.osyield", 0x800);
	if (!is_code(get_flags(0x42f960)))
	{
		del_items(0x42f960);
		add_func(0x42f960,BADADDR);
	}
	set_name(0x42f990,"runtime.ctrlhandler1", 0x800);
	if (!is_code(get_flags(0x42f990)))
	{
		del_items(0x42f990);
		add_func(0x42f990,BADADDR);
	}
	set_name(0x42fa40,"runtime.gFromTLS", 0x800);
	if (!is_code(get_flags(0x42fa40)))
	{
		del_items(0x42fa40);
		add_func(0x42fa40,BADADDR);
	}
	set_name(0x42fa50,"runtime.setThreadCPUProfiler", 0x800);
	if (!is_code(get_flags(0x42fa50)))
	{
		del_items(0x42fa50);
		add_func(0x42fa50,BADADDR);
	}
	set_name(0x42fb30,"runtime.preemptM", 0x800);
	if (!is_code(get_flags(0x42fb30)))
	{
		del_items(0x42fb30);
		add_func(0x42fb30,BADADDR);
	}
	set_name(0x42ff20,"runtime.osPreemptExtEnter", 0x800);
	if (!is_code(get_flags(0x42ff20)))
	{
		del_items(0x42ff20);
		add_func(0x42ff20,BADADDR);
	}
	set_name(0x42ff70,"runtime.panicCheck1", 0x800);
	if (!is_code(get_flags(0x42ff70)))
	{
		del_items(0x42ff70);
		add_func(0x42ff70,BADADDR);
	}
	set_name(0x430070,"runtime.panicCheck2", 0x800);
	if (!is_code(get_flags(0x430070)))
	{
		del_items(0x430070);
		add_func(0x430070,BADADDR);
	}
	set_name(0x4300f0,"runtime.goPanicIndex", 0x800);
	if (!is_code(get_flags(0x4300f0)))
	{
		del_items(0x4300f0);
		add_func(0x4300f0,BADADDR);
	}
	set_name(0x4301b0,"runtime.goPanicIndexU", 0x800);
	if (!is_code(get_flags(0x4301b0)))
	{
		del_items(0x4301b0);
		add_func(0x4301b0,BADADDR);
	}
	set_name(0x430270,"runtime.goPanicSliceAlen", 0x800);
	if (!is_code(get_flags(0x430270)))
	{
		del_items(0x430270);
		add_func(0x430270,BADADDR);
	}
	set_name(0x430330,"runtime.goPanicSliceAlenU", 0x800);
	if (!is_code(get_flags(0x430330)))
	{
		del_items(0x430330);
		add_func(0x430330,BADADDR);
	}
	set_name(0x4303f0,"runtime.goPanicSliceAcap", 0x800);
	if (!is_code(get_flags(0x4303f0)))
	{
		del_items(0x4303f0);
		add_func(0x4303f0,BADADDR);
	}
	set_name(0x4304b0,"runtime.goPanicSliceAcapU", 0x800);
	if (!is_code(get_flags(0x4304b0)))
	{
		del_items(0x4304b0);
		add_func(0x4304b0,BADADDR);
	}
	set_name(0x430570,"runtime.goPanicSliceB", 0x800);
	if (!is_code(get_flags(0x430570)))
	{
		del_items(0x430570);
		add_func(0x430570,BADADDR);
	}
	set_name(0x430630,"runtime.goPanicSliceBU", 0x800);
	if (!is_code(get_flags(0x430630)))
	{
		del_items(0x430630);
		add_func(0x430630,BADADDR);
	}
	set_name(0x4306f0,"runtime.goPanicSlice3Alen", 0x800);
	if (!is_code(get_flags(0x4306f0)))
	{
		del_items(0x4306f0);
		add_func(0x4306f0,BADADDR);
	}
	set_name(0x4307b0,"runtime.goPanicSlice3AlenU", 0x800);
	if (!is_code(get_flags(0x4307b0)))
	{
		del_items(0x4307b0);
		add_func(0x4307b0,BADADDR);
	}
	set_name(0x430870,"runtime.goPanicSlice3C", 0x800);
	if (!is_code(get_flags(0x430870)))
	{
		del_items(0x430870);
		add_func(0x430870,BADADDR);
	}
	set_name(0x430930,"runtime.panicshift", 0x800);
	if (!is_code(get_flags(0x430930)))
	{
		del_items(0x430930);
		add_func(0x430930,BADADDR);
	}
	set_name(0x4309b0,"runtime.panicdivide", 0x800);
	if (!is_code(get_flags(0x4309b0)))
	{
		del_items(0x4309b0);
		add_func(0x4309b0,BADADDR);
	}
	set_name(0x430a20,"runtime.deferprocStack", 0x800);
	if (!is_code(get_flags(0x430a20)))
	{
		del_items(0x430a20);
		add_func(0x430a20,BADADDR);
	}
	set_name(0x430ad0,"runtime.testdefersizes", 0x800);
	if (!is_code(get_flags(0x430ad0)))
	{
		del_items(0x430ad0);
		add_func(0x430ad0,BADADDR);
	}
	set_name(0x430d50,"runtime.init.4", 0x800);
	if (!is_code(get_flags(0x430d50)))
	{
		del_items(0x430d50);
		add_func(0x430d50,BADADDR);
	}
	set_name(0x430dd0,"runtime.newdefer", 0x800);
	if (!is_code(get_flags(0x430dd0)))
	{
		del_items(0x430dd0);
		add_func(0x430dd0,BADADDR);
	}
	set_name(0x430ff0,"runtime.freedefer", 0x800);
	if (!is_code(get_flags(0x430ff0)))
	{
		del_items(0x430ff0);
		add_func(0x430ff0,BADADDR);
	}
	set_name(0x431240,"runtime.freedeferpanic", 0x800);
	if (!is_code(get_flags(0x431240)))
	{
		del_items(0x431240);
		add_func(0x431240,BADADDR);
	}
	set_name(0x431290,"runtime.freedeferfn", 0x800);
	if (!is_code(get_flags(0x431290)))
	{
		del_items(0x431290);
		add_func(0x431290,BADADDR);
	}
	set_name(0x4312e0,"runtime.deferreturn", 0x800);
	if (!is_code(get_flags(0x4312e0)))
	{
		del_items(0x4312e0);
		add_func(0x4312e0,BADADDR);
	}
	set_name(0x4314a0,"runtime.preprintpanics", 0x800);
	if (!is_code(get_flags(0x4314a0)))
	{
		del_items(0x4314a0);
		add_func(0x4314a0,BADADDR);
	}
	set_name(0x431660,"runtime.printpanics", 0x800);
	if (!is_code(get_flags(0x431660)))
	{
		del_items(0x431660);
		add_func(0x431660,BADADDR);
	}
	set_name(0x431790,"runtime.addOneOpenDeferFrame", 0x800);
	if (!is_code(get_flags(0x431790)))
	{
		del_items(0x431790);
		add_func(0x431790,BADADDR);
	}
	set_name(0x431840,"runtime.readvarintUnsafe", 0x800);
	if (!is_code(get_flags(0x431840)))
	{
		del_items(0x431840);
		add_func(0x431840,BADADDR);
	}
	set_name(0x431910,"runtime.runOpenDeferFrame", 0x800);
	if (!is_code(get_flags(0x431910)))
	{
		del_items(0x431910);
		add_func(0x431910,BADADDR);
	}
	set_name(0x431cb0,"runtime.reflectcallSave", 0x800);
	if (!is_code(get_flags(0x431cb0)))
	{
		del_items(0x431cb0);
		add_func(0x431cb0,BADADDR);
	}
	set_name(0x431dc0,"runtime.gopanic", 0x800);
	if (!is_code(get_flags(0x431dc0)))
	{
		del_items(0x431dc0);
		add_func(0x431dc0,BADADDR);
	}
	set_name(0x4324c0,"runtime.getargp", 0x800);
	if (!is_code(get_flags(0x4324c0)))
	{
		del_items(0x4324c0);
		add_func(0x4324c0,BADADDR);
	}
	set_name(0x4324d0,"runtime.gorecover", 0x800);
	if (!is_code(get_flags(0x4324d0)))
	{
		del_items(0x4324d0);
		add_func(0x4324d0,BADADDR);
	}
	set_name(0x432530,"sync.throw", 0x800);
	if (!is_code(get_flags(0x432530)))
	{
		del_items(0x432530);
		add_func(0x432530,BADADDR);
	}
	set_name(0x432580,"runtime.throw", 0x800);
	if (!is_code(get_flags(0x432580)))
	{
		del_items(0x432580);
		add_func(0x432580,BADADDR);
	}
	set_name(0x432610,"runtime.recovery", 0x800);
	if (!is_code(get_flags(0x432610)))
	{
		del_items(0x432610);
		add_func(0x432610,BADADDR);
	}
	set_name(0x432760,"runtime.fatalthrow", 0x800);
	if (!is_code(get_flags(0x432760)))
	{
		del_items(0x432760);
		add_func(0x432760,BADADDR);
	}
	set_name(0x4327e0,"runtime.fatalpanic", 0x800);
	if (!is_code(get_flags(0x4327e0)))
	{
		del_items(0x4327e0);
		add_func(0x4327e0,BADADDR);
	}
	set_name(0x432880,"runtime.startpanic_m", 0x800);
	if (!is_code(get_flags(0x432880)))
	{
		del_items(0x432880);
		add_func(0x432880,BADADDR);
	}
	set_name(0x432a30,"runtime.dopanic_m", 0x800);
	if (!is_code(get_flags(0x432a30)))
	{
		del_items(0x432a30);
		add_func(0x432a30,BADADDR);
	}
	set_name(0x432d40,"runtime.canpanic", 0x800);
	if (!is_code(get_flags(0x432d40)))
	{
		del_items(0x432d40);
		add_func(0x432d40,BADADDR);
	}
	set_name(0x432de0,"runtime.suspendG", 0x800);
	if (!is_code(get_flags(0x432de0)))
	{
		del_items(0x432de0);
		add_func(0x432de0,BADADDR);
	}
	set_name(0x4333d0,"runtime.resumeG", 0x800);
	if (!is_code(get_flags(0x4333d0)))
	{
		del_items(0x4333d0);
		add_func(0x4333d0,BADADDR);
	}
	set_name(0x4335f0,"runtime.asyncPreempt2", 0x800);
	if (!is_code(get_flags(0x4335f0)))
	{
		del_items(0x4335f0);
		add_func(0x4335f0,BADADDR);
	}
	set_name(0x433660,"runtime.init.5", 0x800);
	if (!is_code(get_flags(0x433660)))
	{
		del_items(0x433660);
		add_func(0x433660,BADADDR);
	}
	set_name(0x433780,"runtime.isAsyncSafePoint", 0x800);
	if (!is_code(get_flags(0x433780)))
	{
		del_items(0x433780);
		add_func(0x433780,BADADDR);
	}
	set_name(0x433b10,"runtime.recordForPanic", 0x800);
	if (!is_code(get_flags(0x433b10)))
	{
		del_items(0x433b10);
		add_func(0x433b10,BADADDR);
	}
	set_name(0x433c70,"runtime.printlock", 0x800);
	if (!is_code(get_flags(0x433c70)))
	{
		del_items(0x433c70);
		add_func(0x433c70,BADADDR);
	}
	set_name(0x433d00,"runtime.printunlock", 0x800);
	if (!is_code(get_flags(0x433d00)))
	{
		del_items(0x433d00);
		add_func(0x433d00,BADADDR);
	}
	set_name(0x433d70,"runtime.gwrite", 0x800);
	if (!is_code(get_flags(0x433d70)))
	{
		del_items(0x433d70);
		add_func(0x433d70,BADADDR);
	}
	set_name(0x433ec0,"runtime.printsp", 0x800);
	if (!is_code(get_flags(0x433ec0)))
	{
		del_items(0x433ec0);
		add_func(0x433ec0,BADADDR);
	}
	set_name(0x433f10,"runtime.printnl", 0x800);
	if (!is_code(get_flags(0x433f10)))
	{
		del_items(0x433f10);
		add_func(0x433f10,BADADDR);
	}
	set_name(0x433f60,"runtime.printbool", 0x800);
	if (!is_code(get_flags(0x433f60)))
	{
		del_items(0x433f60);
		add_func(0x433f60,BADADDR);
	}
	set_name(0x433fe0,"runtime.printfloat", 0x800);
	if (!is_code(get_flags(0x433fe0)))
	{
		del_items(0x433fe0);
		add_func(0x433fe0,BADADDR);
	}
	set_name(0x434290,"runtime.printcomplex", 0x800);
	if (!is_code(get_flags(0x434290)))
	{
		del_items(0x434290);
		add_func(0x434290,BADADDR);
	}
	set_name(0x434330,"runtime.printuint", 0x800);
	if (!is_code(get_flags(0x434330)))
	{
		del_items(0x434330);
		add_func(0x434330,BADADDR);
	}
	set_name(0x434440,"runtime.printint", 0x800);
	if (!is_code(get_flags(0x434440)))
	{
		del_items(0x434440);
		add_func(0x434440,BADADDR);
	}
	set_name(0x4344b0,"runtime.printhex", 0x800);
	if (!is_code(get_flags(0x4344b0)))
	{
		del_items(0x4344b0);
		add_func(0x4344b0,BADADDR);
	}
	set_name(0x4345d0,"runtime.printpointer", 0x800);
	if (!is_code(get_flags(0x4345d0)))
	{
		del_items(0x4345d0);
		add_func(0x4345d0,BADADDR);
	}
	set_name(0x434620,"runtime.printstring", 0x800);
	if (!is_code(get_flags(0x434620)))
	{
		del_items(0x434620);
		add_func(0x434620,BADADDR);
	}
	set_name(0x4346c0,"runtime.printslice", 0x800);
	if (!is_code(get_flags(0x4346c0)))
	{
		del_items(0x4346c0);
		add_func(0x4346c0,BADADDR);
	}
	set_name(0x434790,"runtime.printeface", 0x800);
	if (!is_code(get_flags(0x434790)))
	{
		del_items(0x434790);
		add_func(0x434790,BADADDR);
	}
	set_name(0x434840,"runtime.hexdumpWords", 0x800);
	if (!is_code(get_flags(0x434840)))
	{
		del_items(0x434840);
		add_func(0x434840,BADADDR);
	}
	set_name(0x434aa0,"runtime.main", 0x800);
	if (!is_code(get_flags(0x434aa0)))
	{
		del_items(0x434aa0);
		add_func(0x434aa0,BADADDR);
	}
	set_name(0x434e00,"runtime.init.6", 0x800);
	if (!is_code(get_flags(0x434e00)))
	{
		del_items(0x434e00);
		add_func(0x434e00,BADADDR);
	}
	set_name(0x434e50,"runtime.forcegchelper", 0x800);
	if (!is_code(get_flags(0x434e50)))
	{
		del_items(0x434e50);
		add_func(0x434e50,BADADDR);
	}
	set_name(0x434f80,"runtime.gopark", 0x800);
	if (!is_code(get_flags(0x434f80)))
	{
		del_items(0x434f80);
		add_func(0x434f80,BADADDR);
	}
	set_name(0x4350d0,"runtime.goready", 0x800);
	if (!is_code(get_flags(0x4350d0)))
	{
		del_items(0x4350d0);
		add_func(0x4350d0,BADADDR);
	}
	set_name(0x435150,"runtime.acquireSudog", 0x800);
	if (!is_code(get_flags(0x435150)))
	{
		del_items(0x435150);
		add_func(0x435150,BADADDR);
	}
	set_name(0x4354f0,"runtime.releaseSudog", 0x800);
	if (!is_code(get_flags(0x4354f0)))
	{
		del_items(0x4354f0);
		add_func(0x4354f0,BADADDR);
	}
	set_name(0x435890,"runtime.funcPC", 0x800);
	if (!is_code(get_flags(0x435890)))
	{
		del_items(0x435890);
		add_func(0x435890,BADADDR);
	}
	set_name(0x4358a0,"runtime.badmcall", 0x800);
	if (!is_code(get_flags(0x4358a0)))
	{
		del_items(0x4358a0);
		add_func(0x4358a0,BADADDR);
	}
	set_name(0x4358f0,"runtime.badmcall2", 0x800);
	if (!is_code(get_flags(0x4358f0)))
	{
		del_items(0x4358f0);
		add_func(0x4358f0,BADADDR);
	}
	set_name(0x435940,"runtime.badreflectcall", 0x800);
	if (!is_code(get_flags(0x435940)))
	{
		del_items(0x435940);
		add_func(0x435940,BADADDR);
	}
	set_name(0x435990,"runtime.badmorestackg0", 0x800);
	if (!is_code(get_flags(0x435990)))
	{
		del_items(0x435990);
		add_func(0x435990,BADADDR);
	}
	set_name(0x4359d0,"runtime.badmorestackgsignal", 0x800);
	if (!is_code(get_flags(0x4359d0)))
	{
		del_items(0x4359d0);
		add_func(0x4359d0,BADADDR);
	}
	set_name(0x435a10,"runtime.badctxt", 0x800);
	if (!is_code(get_flags(0x435a10)))
	{
		del_items(0x435a10);
		add_func(0x435a10,BADADDR);
	}
	set_name(0x435a40,"runtime.allgadd", 0x800);
	if (!is_code(get_flags(0x435a40)))
	{
		del_items(0x435a40);
		add_func(0x435a40,BADADDR);
	}
	set_name(0x435b90,"runtime.cpuinit", 0x800);
	if (!is_code(get_flags(0x435b90)))
	{
		del_items(0x435b90);
		add_func(0x435b90,BADADDR);
	}
	set_name(0x435c20,"runtime.schedinit", 0x800);
	if (!is_code(get_flags(0x435c20)))
	{
		del_items(0x435c20);
		add_func(0x435c20,BADADDR);
	}
	set_name(0x435ea0,"runtime.checkmcount", 0x800);
	if (!is_code(get_flags(0x435ea0)))
	{
		del_items(0x435ea0);
		add_func(0x435ea0,BADADDR);
	}
	set_name(0x435f60,"runtime.mcommoninit", 0x800);
	if (!is_code(get_flags(0x435f60)))
	{
		del_items(0x435f60);
		add_func(0x435f60,BADADDR);
	}
	set_name(0x436170,"runtime.ready", 0x800);
	if (!is_code(get_flags(0x436170)))
	{
		del_items(0x436170);
		add_func(0x436170,BADADDR);
	}
	set_name(0x436450,"runtime.freezetheworld", 0x800);
	if (!is_code(get_flags(0x436450)))
	{
		del_items(0x436450);
		add_func(0x436450,BADADDR);
	}
	set_name(0x436530,"runtime.casfrom_Gscanstatus", 0x800);
	if (!is_code(get_flags(0x436530)))
	{
		del_items(0x436530);
		add_func(0x436530,BADADDR);
	}
	set_name(0x4369a0,"runtime.castogscanstatus", 0x800);
	if (!is_code(get_flags(0x4369a0)))
	{
		del_items(0x4369a0);
		add_func(0x4369a0,BADADDR);
	}
	set_name(0x436a90,"runtime.casgstatus", 0x800);
	if (!is_code(get_flags(0x436a90)))
	{
		del_items(0x436a90);
		add_func(0x436a90,BADADDR);
	}
	set_name(0x436c30,"runtime.casGToPreemptScan", 0x800);
	if (!is_code(get_flags(0x436c30)))
	{
		del_items(0x436c30);
		add_func(0x436c30,BADADDR);
	}
	set_name(0x436cc0,"runtime.casGFromPreempted", 0x800);
	if (!is_code(get_flags(0x436cc0)))
	{
		del_items(0x436cc0);
		add_func(0x436cc0,BADADDR);
	}
	set_name(0x436d40,"runtime.stopTheWorld", 0x800);
	if (!is_code(get_flags(0x436d40)))
	{
		del_items(0x436d40);
		add_func(0x436d40,BADADDR);
	}
	set_name(0x436e00,"runtime.startTheWorld", 0x800);
	if (!is_code(get_flags(0x436e00)))
	{
		del_items(0x436e00);
		add_func(0x436e00,BADADDR);
	}
	set_name(0x436eb0,"runtime.stopTheWorldWithSema", 0x800);
	if (!is_code(get_flags(0x436eb0)))
	{
		del_items(0x436eb0);
		add_func(0x436eb0,BADADDR);
	}
	set_name(0x437170,"runtime.startTheWorldWithSema", 0x800);
	if (!is_code(get_flags(0x437170)))
	{
		del_items(0x437170);
		add_func(0x437170,BADADDR);
	}
	set_name(0x437410,"runtime.mstart", 0x800);
	if (!is_code(get_flags(0x437410)))
	{
		del_items(0x437410);
		add_func(0x437410,BADADDR);
	}
	set_name(0x437490,"runtime.mstart1", 0x800);
	if (!is_code(get_flags(0x437490)))
	{
		del_items(0x437490);
		add_func(0x437490,BADADDR);
	}
	set_name(0x4375b0,"runtime.mstartm0", 0x800);
	if (!is_code(get_flags(0x4375b0)))
	{
		del_items(0x4375b0);
		add_func(0x4375b0,BADADDR);
	}
	set_name(0x437600,"runtime.mexit", 0x800);
	if (!is_code(get_flags(0x437600)))
	{
		del_items(0x437600);
		add_func(0x437600,BADADDR);
	}
	set_name(0x437870,"runtime.forEachP", 0x800);
	if (!is_code(get_flags(0x437870)))
	{
		del_items(0x437870);
		add_func(0x437870,BADADDR);
	}
	set_name(0x437c10,"runtime.runSafePointFn", 0x800);
	if (!is_code(get_flags(0x437c10)))
	{
		del_items(0x437c10);
		add_func(0x437c10,BADADDR);
	}
	set_name(0x437ce0,"runtime.allocm", 0x800);
	if (!is_code(get_flags(0x437ce0)))
	{
		del_items(0x437ce0);
		add_func(0x437ce0,BADADDR);
	}
	set_name(0x437f60,"runtime.needm", 0x800);
	if (!is_code(get_flags(0x437f60)))
	{
		del_items(0x437f60);
		add_func(0x437f60,BADADDR);
	}
	set_name(0x438090,"runtime.newextram", 0x800);
	if (!is_code(get_flags(0x438090)))
	{
		del_items(0x438090);
		add_func(0x438090,BADADDR);
	}
	set_name(0x438130,"runtime.oneNewExtraM", 0x800);
	if (!is_code(get_flags(0x438130)))
	{
		del_items(0x438130);
		add_func(0x438130,BADADDR);
	}
	set_name(0x4382e0,"runtime.dropm", 0x800);
	if (!is_code(get_flags(0x4382e0)))
	{
		del_items(0x4382e0);
		add_func(0x4382e0,BADADDR);
	}
	set_name(0x4383c0,"runtime.lockextra", 0x800);
	if (!is_code(get_flags(0x4383c0)))
	{
		del_items(0x4383c0);
		add_func(0x4383c0,BADADDR);
	}
	set_name(0x4384a0,"runtime.newm", 0x800);
	if (!is_code(get_flags(0x4384a0)))
	{
		del_items(0x4384a0);
		add_func(0x4384a0,BADADDR);
	}
	set_name(0x4385d0,"runtime.newm1", 0x800);
	if (!is_code(get_flags(0x4385d0)))
	{
		del_items(0x4385d0);
		add_func(0x4385d0,BADADDR);
	}
	set_name(0x4386f0,"runtime.templateThread", 0x800);
	if (!is_code(get_flags(0x4386f0)))
	{
		del_items(0x4386f0);
		add_func(0x4386f0,BADADDR);
	}
	set_name(0x438810,"runtime.stopm", 0x800);
	if (!is_code(get_flags(0x438810)))
	{
		del_items(0x438810);
		add_func(0x438810,BADADDR);
	}
	set_name(0x438980,"runtime.mspinning", 0x800);
	if (!is_code(get_flags(0x438980)))
	{
		del_items(0x438980);
		add_func(0x438980,BADADDR);
	}
	set_name(0x4389a0,"runtime.startm", 0x800);
	if (!is_code(get_flags(0x4389a0)))
	{
		del_items(0x4389a0);
		add_func(0x4389a0,BADADDR);
	}
	set_name(0x438bc0,"runtime.handoffp", 0x800);
	if (!is_code(get_flags(0x438bc0)))
	{
		del_items(0x438bc0);
		add_func(0x438bc0,BADADDR);
	}
	set_name(0x438f00,"runtime.stoplockedm", 0x800);
	if (!is_code(get_flags(0x438f00)))
	{
		del_items(0x438f00);
		add_func(0x438f00,BADADDR);
	}
	set_name(0x4391c0,"runtime.startlockedm", 0x800);
	if (!is_code(get_flags(0x4391c0)))
	{
		del_items(0x4391c0);
		add_func(0x4391c0,BADADDR);
	}
	set_name(0x4392a0,"runtime.gcstopm", 0x800);
	if (!is_code(get_flags(0x4392a0)))
	{
		del_items(0x4392a0);
		add_func(0x4392a0,BADADDR);
	}
	set_name(0x4393c0,"runtime.execute", 0x800);
	if (!is_code(get_flags(0x4393c0)))
	{
		del_items(0x4393c0);
		add_func(0x4393c0,BADADDR);
	}
	set_name(0x439540,"runtime.findrunnable", 0x800);
	if (!is_code(get_flags(0x439540)))
	{
		del_items(0x439540);
		add_func(0x439540,BADADDR);
	}
	set_name(0x43a3f0,"runtime.pollWork", 0x800);
	if (!is_code(get_flags(0x43a3f0)))
	{
		del_items(0x43a3f0);
		add_func(0x43a3f0,BADADDR);
	}
	set_name(0x43a4f0,"runtime.wakeNetPoller", 0x800);
	if (!is_code(get_flags(0x43a4f0)))
	{
		del_items(0x43a4f0);
		add_func(0x43a4f0,BADADDR);
	}
	set_name(0x43a550,"runtime.resetspinning", 0x800);
	if (!is_code(get_flags(0x43a550)))
	{
		del_items(0x43a550);
		add_func(0x43a550,BADADDR);
	}
	set_name(0x43a640,"runtime.injectglist", 0x800);
	if (!is_code(get_flags(0x43a640)))
	{
		del_items(0x43a640);
		add_func(0x43a640,BADADDR);
	}
	set_name(0x43a7d0,"runtime.schedule", 0x800);
	if (!is_code(get_flags(0x43a7d0)))
	{
		del_items(0x43a7d0);
		add_func(0x43a7d0,BADADDR);
	}
	set_name(0x43ad10,"runtime.checkTimers", 0x800);
	if (!is_code(get_flags(0x43ad10)))
	{
		del_items(0x43ad10);
		add_func(0x43ad10,BADADDR);
	}
	set_name(0x43af90,"runtime.parkunlock_c", 0x800);
	if (!is_code(get_flags(0x43af90)))
	{
		del_items(0x43af90);
		add_func(0x43af90,BADADDR);
	}
	set_name(0x43afe0,"runtime.park_m", 0x800);
	if (!is_code(get_flags(0x43afe0)))
	{
		del_items(0x43afe0);
		add_func(0x43afe0,BADADDR);
	}
	set_name(0x43b1c0,"runtime.goschedImpl", 0x800);
	if (!is_code(get_flags(0x43b1c0)))
	{
		del_items(0x43b1c0);
		add_func(0x43b1c0,BADADDR);
	}
	set_name(0x43b430,"runtime.gosched_m", 0x800);
	if (!is_code(get_flags(0x43b430)))
	{
		del_items(0x43b430);
		add_func(0x43b430,BADADDR);
	}
	set_name(0x43b4d0,"runtime.gopreempt_m", 0x800);
	if (!is_code(get_flags(0x43b4d0)))
	{
		del_items(0x43b4d0);
		add_func(0x43b4d0,BADADDR);
	}
	set_name(0x43b570,"runtime.preemptPark", 0x800);
	if (!is_code(get_flags(0x43b570)))
	{
		del_items(0x43b570);
		add_func(0x43b570,BADADDR);
	}
	set_name(0x43b7d0,"runtime.goyield_m", 0x800);
	if (!is_code(get_flags(0x43b7d0)))
	{
		del_items(0x43b7d0);
		add_func(0x43b7d0,BADADDR);
	}
	set_name(0x43b8f0,"runtime.goexit1", 0x800);
	if (!is_code(get_flags(0x43b8f0)))
	{
		del_items(0x43b8f0);
		add_func(0x43b8f0,BADADDR);
	}
	set_name(0x43b970,"runtime.goexit0", 0x800);
	if (!is_code(get_flags(0x43b970)))
	{
		del_items(0x43b970);
		add_func(0x43b970,BADADDR);
	}
	set_name(0x43bc50,"runtime.save", 0x800);
	if (!is_code(get_flags(0x43bc50)))
	{
		del_items(0x43bc50);
		add_func(0x43bc50,BADADDR);
	}
	set_name(0x43bca0,"runtime.reentersyscall", 0x800);
	if (!is_code(get_flags(0x43bca0)))
	{
		del_items(0x43bca0);
		add_func(0x43bca0,BADADDR);
	}
	set_name(0x43bee0,"runtime.entersyscall", 0x800);
	if (!is_code(get_flags(0x43bee0)))
	{
		del_items(0x43bee0);
		add_func(0x43bee0,BADADDR);
	}
	set_name(0x43bf10,"runtime.entersyscall_sysmon", 0x800);
	if (!is_code(get_flags(0x43bf10)))
	{
		del_items(0x43bf10);
		add_func(0x43bf10,BADADDR);
	}
	set_name(0x43bf90,"runtime.entersyscall_gcwait", 0x800);
	if (!is_code(get_flags(0x43bf90)))
	{
		del_items(0x43bf90);
		add_func(0x43bf90,BADADDR);
	}
	set_name(0x43c090,"runtime.entersyscallblock", 0x800);
	if (!is_code(get_flags(0x43c090)))
	{
		del_items(0x43c090);
		add_func(0x43c090,BADADDR);
	}
	set_name(0x43c240,"runtime.entersyscallblock_handoff", 0x800);
	if (!is_code(get_flags(0x43c240)))
	{
		del_items(0x43c240);
		add_func(0x43c240,BADADDR);
	}
	set_name(0x43c2e0,"runtime.exitsyscall", 0x800);
	if (!is_code(get_flags(0x43c2e0)))
	{
		del_items(0x43c2e0);
		add_func(0x43c2e0,BADADDR);
	}
	set_name(0x43c580,"runtime.exitsyscallfast", 0x800);
	if (!is_code(get_flags(0x43c580)))
	{
		del_items(0x43c580);
		add_func(0x43c580,BADADDR);
	}
	set_name(0x43c690,"runtime.exitsyscallfast_reacquired", 0x800);
	if (!is_code(get_flags(0x43c690)))
	{
		del_items(0x43c690);
		add_func(0x43c690,BADADDR);
	}
	set_name(0x43c720,"runtime.exitsyscallfast_pidle", 0x800);
	if (!is_code(get_flags(0x43c720)))
	{
		del_items(0x43c720);
		add_func(0x43c720,BADADDR);
	}
	set_name(0x43c810,"runtime.exitsyscall0", 0x800);
	if (!is_code(get_flags(0x43c810)))
	{
		del_items(0x43c810);
		add_func(0x43c810,BADADDR);
	}
	set_name(0x43ca00,"runtime.malg", 0x800);
	if (!is_code(get_flags(0x43ca00)))
	{
		del_items(0x43ca00);
		add_func(0x43ca00,BADADDR);
	}
	set_name(0x43caf0,"runtime.newproc", 0x800);
	if (!is_code(get_flags(0x43caf0)))
	{
		del_items(0x43caf0);
		add_func(0x43caf0,BADADDR);
	}
	set_name(0x43cb70,"runtime.newproc1", 0x800);
	if (!is_code(get_flags(0x43cb70)))
	{
		del_items(0x43cb70);
		add_func(0x43cb70,BADADDR);
	}
	set_name(0x43d090,"runtime.saveAncestors", 0x800);
	if (!is_code(get_flags(0x43d090)))
	{
		del_items(0x43d090);
		add_func(0x43d090,BADADDR);
	}
	set_name(0x43d3e0,"runtime.gfput", 0x800);
	if (!is_code(get_flags(0x43d3e0)))
	{
		del_items(0x43d3e0);
		add_func(0x43d3e0,BADADDR);
	}
	set_name(0x43d550,"runtime.gfget", 0x800);
	if (!is_code(get_flags(0x43d550)))
	{
		del_items(0x43d550);
		add_func(0x43d550,BADADDR);
	}
	set_name(0x43d6d0,"runtime.gfpurge", 0x800);
	if (!is_code(get_flags(0x43d6d0)))
	{
		del_items(0x43d6d0);
		add_func(0x43d6d0,BADADDR);
	}
	set_name(0x43d7a0,"runtime.LockOSThread", 0x800);
	if (!is_code(get_flags(0x43d7a0)))
	{
		del_items(0x43d7a0);
		add_func(0x43d7a0,BADADDR);
	}
	set_name(0x43d870,"runtime.UnlockOSThread", 0x800);
	if (!is_code(get_flags(0x43d870)))
	{
		del_items(0x43d870);
		add_func(0x43d870,BADADDR);
	}
	set_name(0x43d8e0,"runtime.unlockOSThread", 0x800);
	if (!is_code(get_flags(0x43d8e0)))
	{
		del_items(0x43d8e0);
		add_func(0x43d8e0,BADADDR);
	}
	set_name(0x43d980,"runtime.badunlockosthread", 0x800);
	if (!is_code(get_flags(0x43d980)))
	{
		del_items(0x43d980);
		add_func(0x43d980,BADADDR);
	}
	set_name(0x43d9d0,"runtime.(*p).init", 0x800);
	if (!is_code(get_flags(0x43d9d0)))
	{
		del_items(0x43d9d0);
		add_func(0x43d9d0,BADADDR);
	}
	set_name(0x43db30,"runtime.(*p).destroy", 0x800);
	if (!is_code(get_flags(0x43db30)))
	{
		del_items(0x43db30);
		add_func(0x43db30,BADADDR);
	}
	set_name(0x43df80,"runtime.procresize", 0x800);
	if (!is_code(get_flags(0x43df80)))
	{
		del_items(0x43df80);
		add_func(0x43df80,BADADDR);
	}
	set_name(0x43e5b0,"runtime.acquirep", 0x800);
	if (!is_code(get_flags(0x43e5b0)))
	{
		del_items(0x43e5b0);
		add_func(0x43e5b0,BADADDR);
	}
	set_name(0x43e620,"runtime.wirep", 0x800);
	if (!is_code(get_flags(0x43e620)))
	{
		del_items(0x43e620);
		add_func(0x43e620,BADADDR);
	}
	set_name(0x43e780,"runtime.releasep", 0x800);
	if (!is_code(get_flags(0x43e780)))
	{
		del_items(0x43e780);
		add_func(0x43e780,BADADDR);
	}
	set_name(0x43e9b0,"runtime.incidlelocked", 0x800);
	if (!is_code(get_flags(0x43e9b0)))
	{
		del_items(0x43e9b0);
		add_func(0x43e9b0,BADADDR);
	}
	set_name(0x43ea20,"runtime.checkdead", 0x800);
	if (!is_code(get_flags(0x43ea20)))
	{
		del_items(0x43ea20);
		add_func(0x43ea20,BADADDR);
	}
	set_name(0x43eeb0,"runtime.sysmon", 0x800);
	if (!is_code(get_flags(0x43eeb0)))
	{
		del_items(0x43eeb0);
		add_func(0x43eeb0,BADADDR);
	}
	set_name(0x43f3e0,"runtime.retake", 0x800);
	if (!is_code(get_flags(0x43f3e0)))
	{
		del_items(0x43f3e0);
		add_func(0x43f3e0,BADADDR);
	}
	set_name(0x43f640,"runtime.preemptall", 0x800);
	if (!is_code(get_flags(0x43f640)))
	{
		del_items(0x43f640);
		add_func(0x43f640,BADADDR);
	}
	set_name(0x43f6e0,"runtime.preemptone", 0x800);
	if (!is_code(get_flags(0x43f6e0)))
	{
		del_items(0x43f6e0);
		add_func(0x43f6e0,BADADDR);
	}
	set_name(0x43f7a0,"runtime.schedtrace", 0x800);
	if (!is_code(get_flags(0x43f7a0)))
	{
		del_items(0x43f7a0);
		add_func(0x43f7a0,BADADDR);
	}
	set_name(0x4402b0,"runtime.schedEnableUser", 0x800);
	if (!is_code(get_flags(0x4402b0)))
	{
		del_items(0x4402b0);
		add_func(0x4402b0,BADADDR);
	}
	set_name(0x440400,"runtime.schedEnabled", 0x800);
	if (!is_code(get_flags(0x440400)))
	{
		del_items(0x440400);
		add_func(0x440400,BADADDR);
	}
	set_name(0x440470,"runtime.globrunqget", 0x800);
	if (!is_code(get_flags(0x440470)))
	{
		del_items(0x440470);
		add_func(0x440470,BADADDR);
	}
	set_name(0x4405c0,"runtime.pidleput", 0x800);
	if (!is_code(get_flags(0x4405c0)))
	{
		del_items(0x4405c0);
		add_func(0x4405c0,BADADDR);
	}
	set_name(0x440650,"runtime.runqempty", 0x800);
	if (!is_code(get_flags(0x440650)))
	{
		del_items(0x440650);
		add_func(0x440650,BADADDR);
	}
	set_name(0x440690,"runtime.runqput", 0x800);
	if (!is_code(get_flags(0x440690)))
	{
		del_items(0x440690);
		add_func(0x440690,BADADDR);
	}
	set_name(0x440790,"runtime.runqputslow", 0x800);
	if (!is_code(get_flags(0x440790)))
	{
		del_items(0x440790);
		add_func(0x440790,BADADDR);
	}
	set_name(0x440990,"runtime.runqget", 0x800);
	if (!is_code(get_flags(0x440990)))
	{
		del_items(0x440990);
		add_func(0x440990,BADADDR);
	}
	set_name(0x440a40,"runtime.runqgrab", 0x800);
	if (!is_code(get_flags(0x440a40)))
	{
		del_items(0x440a40);
		add_func(0x440a40,BADADDR);
	}
	set_name(0x440bb0,"runtime.runqsteal", 0x800);
	if (!is_code(get_flags(0x440bb0)))
	{
		del_items(0x440bb0);
		add_func(0x440bb0,BADADDR);
	}
	set_name(0x440cb0,"sync.runtime_procPin", 0x800);
	if (!is_code(get_flags(0x440cb0)))
	{
		del_items(0x440cb0);
		add_func(0x440cb0,BADADDR);
	}
	set_name(0x440ce0,"sync.runtime_procUnpin", 0x800);
	if (!is_code(get_flags(0x440ce0)))
	{
		del_items(0x440ce0);
		add_func(0x440ce0,BADADDR);
	}
	set_name(0x440d00,"sync/atomic.runtime_procPin", 0x800);
	if (!is_code(get_flags(0x440d00)))
	{
		del_items(0x440d00);
		add_func(0x440d00,BADADDR);
	}
	set_name(0x440d30,"sync/atomic.runtime_procUnpin", 0x800);
	if (!is_code(get_flags(0x440d30)))
	{
		del_items(0x440d30);
		add_func(0x440d30,BADADDR);
	}
	set_name(0x440d50,"sync.runtime_canSpin", 0x800);
	if (!is_code(get_flags(0x440d50)))
	{
		del_items(0x440d50);
		add_func(0x440d50,BADADDR);
	}
	set_name(0x440de0,"sync.runtime_doSpin", 0x800);
	if (!is_code(get_flags(0x440de0)))
	{
		del_items(0x440de0);
		add_func(0x440de0,BADADDR);
	}
	set_name(0x440e10,"runtime.(*randomOrder).reset", 0x800);
	if (!is_code(get_flags(0x440e10)))
	{
		del_items(0x440e10);
		add_func(0x440e10,BADADDR);
	}
	set_name(0x440f30,"runtime.gcd", 0x800);
	if (!is_code(get_flags(0x440f30)))
	{
		del_items(0x440f30);
		add_func(0x440f30,BADADDR);
	}
	set_name(0x440f50,"runtime.doInit", 0x800);
	if (!is_code(get_flags(0x440f50)))
	{
		del_items(0x440f50);
		add_func(0x440f50,BADADDR);
	}
	set_name(0x441040,"runtime.args", 0x800);
	if (!is_code(get_flags(0x441040)))
	{
		del_items(0x441040);
		add_func(0x441040,BADADDR);
	}
	set_name(0x4410b0,"runtime.testAtomic64", 0x800);
	if (!is_code(get_flags(0x4410b0)))
	{
		del_items(0x4410b0);
		add_func(0x4410b0,BADADDR);
	}
	set_name(0x441300,"runtime.check", 0x800);
	if (!is_code(get_flags(0x441300)))
	{
		del_items(0x441300);
		add_func(0x441300,BADADDR);
	}
	set_name(0x441690,"runtime.parsedebugvars", 0x800);
	if (!is_code(get_flags(0x441690)))
	{
		del_items(0x441690);
		add_func(0x441690,BADADDR);
	}
	set_name(0x441a10,"runtime/debug.SetTraceback", 0x800);
	if (!is_code(get_flags(0x441a10)))
	{
		del_items(0x441a10);
		add_func(0x441a10,BADADDR);
	}
	set_name(0x441b70,"runtime.timediv", 0x800);
	if (!is_code(get_flags(0x441b70)))
	{
		del_items(0x441b70);
		add_func(0x441b70,BADADDR);
	}
	set_name(0x441bd0,"reflect.typelinks", 0x800);
	if (!is_code(get_flags(0x441bd0)))
	{
		del_items(0x441bd0);
		add_func(0x441bd0,BADADDR);
	}
	set_name(0x441fa0,"reflect.resolveNameOff", 0x800);
	if (!is_code(get_flags(0x441fa0)))
	{
		del_items(0x441fa0);
		add_func(0x441fa0,BADADDR);
	}
	set_name(0x442000,"reflect.resolveTypeOff", 0x800);
	if (!is_code(get_flags(0x442000)))
	{
		del_items(0x442000);
		add_func(0x442000,BADADDR);
	}
	set_name(0x442060,"reflect.resolveTextOff", 0x800);
	if (!is_code(get_flags(0x442060)))
	{
		del_items(0x442060);
		add_func(0x442060,BADADDR);
	}
	set_name(0x4420c0,"internal/reflectlite.resolveNameOff", 0x800);
	if (!is_code(get_flags(0x4420c0)))
	{
		del_items(0x4420c0);
		add_func(0x4420c0,BADADDR);
	}
	set_name(0x442120,"internal/reflectlite.resolveTypeOff", 0x800);
	if (!is_code(get_flags(0x442120)))
	{
		del_items(0x442120);
		add_func(0x442120,BADADDR);
	}
	set_name(0x442180,"reflect.addReflectOff", 0x800);
	if (!is_code(get_flags(0x442180)))
	{
		del_items(0x442180);
		add_func(0x442180,BADADDR);
	}
	set_name(0x442320,"runtime.efaceOf", 0x800);
	if (!is_code(get_flags(0x442320)))
	{
		del_items(0x442320);
		add_func(0x442320,BADADDR);
	}
	set_name(0x442330,"runtime.extendRandom", 0x800);
	if (!is_code(get_flags(0x442330)))
	{
		del_items(0x442330);
		add_func(0x442330,BADADDR);
	}
	set_name(0x442420,"runtime.waitReason.String", 0x800);
	if (!is_code(get_flags(0x442420)))
	{
		del_items(0x442420);
		add_func(0x442420,BADADDR);
	}
	set_name(0x442470,"runtime.(*rwmutex).rlock", 0x800);
	if (!is_code(get_flags(0x442470)))
	{
		del_items(0x442470);
		add_func(0x442470,BADADDR);
	}
	set_name(0x442510,"runtime.(*rwmutex).runlock", 0x800);
	if (!is_code(get_flags(0x442510)))
	{
		del_items(0x442510);
		add_func(0x442510,BADADDR);
	}
	set_name(0x442620,"internal/poll.runtime_Semacquire", 0x800);
	if (!is_code(get_flags(0x442620)))
	{
		del_items(0x442620);
		add_func(0x442620,BADADDR);
	}
	set_name(0x442680,"sync.runtime_Semrelease", 0x800);
	if (!is_code(get_flags(0x442680)))
	{
		del_items(0x442680);
		add_func(0x442680,BADADDR);
	}
	set_name(0x4426e0,"sync.runtime_SemacquireMutex", 0x800);
	if (!is_code(get_flags(0x4426e0)))
	{
		del_items(0x4426e0);
		add_func(0x4426e0,BADADDR);
	}
	set_name(0x442740,"internal/poll.runtime_Semrelease", 0x800);
	if (!is_code(get_flags(0x442740)))
	{
		del_items(0x442740);
		add_func(0x442740,BADADDR);
	}
	set_name(0x4427a0,"runtime.readyWithTime", 0x800);
	if (!is_code(get_flags(0x4427a0)))
	{
		del_items(0x4427a0);
		add_func(0x4427a0,BADADDR);
	}
	set_name(0x442810,"runtime.semacquire1", 0x800);
	if (!is_code(get_flags(0x442810)))
	{
		del_items(0x442810);
		add_func(0x442810,BADADDR);
	}
	set_name(0x442af0,"runtime.semrelease1", 0x800);
	if (!is_code(get_flags(0x442af0)))
	{
		del_items(0x442af0);
		add_func(0x442af0,BADADDR);
	}
	set_name(0x442d10,"runtime.cansemacquire", 0x800);
	if (!is_code(get_flags(0x442d10)))
	{
		del_items(0x442d10);
		add_func(0x442d10,BADADDR);
	}
	set_name(0x442d40,"runtime.(*semaRoot).queue", 0x800);
	if (!is_code(get_flags(0x442d40)))
	{
		del_items(0x442d40);
		add_func(0x442d40,BADADDR);
	}
	set_name(0x4431a0,"runtime.(*semaRoot).dequeue", 0x800);
	if (!is_code(get_flags(0x4431a0)))
	{
		del_items(0x4431a0);
		add_func(0x4431a0,BADADDR);
	}
	set_name(0x443520,"runtime.(*semaRoot).rotateLeft", 0x800);
	if (!is_code(get_flags(0x443520)))
	{
		del_items(0x443520);
		add_func(0x443520,BADADDR);
	}
	set_name(0x443690,"runtime.(*semaRoot).rotateRight", 0x800);
	if (!is_code(get_flags(0x443690)))
	{
		del_items(0x443690);
		add_func(0x443690,BADADDR);
	}
	set_name(0x443800,"sync.runtime_notifyListCheck", 0x800);
	if (!is_code(get_flags(0x443800)))
	{
		del_items(0x443800);
		add_func(0x443800,BADADDR);
	}
	set_name(0x4438c0,"sync.runtime_nanotime", 0x800);
	if (!is_code(get_flags(0x4438c0)))
	{
		del_items(0x4438c0);
		add_func(0x4438c0,BADADDR);
	}
	set_name(0x443910,"runtime.disableWER", 0x800);
	if (!is_code(get_flags(0x443910)))
	{
		del_items(0x443910);
		add_func(0x443910,BADADDR);
	}
	set_name(0x443980,"runtime.initExceptionHandler", 0x800);
	if (!is_code(get_flags(0x443980)))
	{
		del_items(0x443980);
		add_func(0x443980,BADADDR);
	}
	set_name(0x443a80,"runtime.isAbort", 0x800);
	if (!is_code(get_flags(0x443a80)))
	{
		del_items(0x443a80);
		add_func(0x443a80,BADADDR);
	}
	set_name(0x443ab0,"runtime.isgoexception", 0x800);
	if (!is_code(get_flags(0x443ab0)))
	{
		del_items(0x443ab0);
		add_func(0x443ab0,BADADDR);
	}
	set_name(0x443b90,"runtime.exceptionhandler", 0x800);
	if (!is_code(get_flags(0x443b90)))
	{
		del_items(0x443b90);
		add_func(0x443b90,BADADDR);
	}
	set_name(0x443cb0,"runtime.firstcontinuehandler", 0x800);
	if (!is_code(get_flags(0x443cb0)))
	{
		del_items(0x443cb0);
		add_func(0x443cb0,BADADDR);
	}
	set_name(0x443d10,"runtime.lastcontinuehandler", 0x800);
	if (!is_code(get_flags(0x443d10)))
	{
		del_items(0x443d10);
		add_func(0x443d10,BADADDR);
	}
	set_name(0x443fe0,"runtime.sigpanic", 0x800);
	if (!is_code(get_flags(0x443fe0)))
	{
		del_items(0x443fe0);
		add_func(0x443fe0,BADADDR);
	}
	set_name(0x444250,"runtime.setBadSignalMsg", 0x800);
	if (!is_code(get_flags(0x444250)))
	{
		del_items(0x444250);
		add_func(0x444250,BADADDR);
	}
	set_name(0x444310,"runtime.sigsend", 0x800);
	if (!is_code(get_flags(0x444310)))
	{
		del_items(0x444310);
		add_func(0x444310,BADADDR);
	}
	set_name(0x4444b0,"runtime.makeslice", 0x800);
	if (!is_code(get_flags(0x4444b0)))
	{
		del_items(0x4444b0);
		add_func(0x4444b0,BADADDR);
	}
	set_name(0x4445c0,"runtime.growslice", 0x800);
	if (!is_code(get_flags(0x4445c0)))
	{
		del_items(0x4445c0);
		add_func(0x4445c0,BADADDR);
	}
	set_name(0x444c90,"runtime.stackinit", 0x800);
	if (!is_code(get_flags(0x444c90)))
	{
		del_items(0x444c90);
		add_func(0x444c90,BADADDR);
	}
	set_name(0x444cf0,"runtime.stacklog2", 0x800);
	if (!is_code(get_flags(0x444cf0)))
	{
		del_items(0x444cf0);
		add_func(0x444cf0,BADADDR);
	}
	set_name(0x444d10,"runtime.stackpoolalloc", 0x800);
	if (!is_code(get_flags(0x444d10)))
	{
		del_items(0x444d10);
		add_func(0x444d10,BADADDR);
	}
	set_name(0x444ee0,"runtime.stackpoolfree", 0x800);
	if (!is_code(get_flags(0x444ee0)))
	{
		del_items(0x444ee0);
		add_func(0x444ee0,BADADDR);
	}
	set_name(0x445090,"runtime.stackcacherefill", 0x800);
	if (!is_code(get_flags(0x445090)))
	{
		del_items(0x445090);
		add_func(0x445090,BADADDR);
	}
	set_name(0x445190,"runtime.stackcacherelease", 0x800);
	if (!is_code(get_flags(0x445190)))
	{
		del_items(0x445190);
		add_func(0x445190,BADADDR);
	}
	set_name(0x4452c0,"runtime.stackcache_clear", 0x800);
	if (!is_code(get_flags(0x4452c0)))
	{
		del_items(0x4452c0);
		add_func(0x4452c0,BADADDR);
	}
	set_name(0x4453b0,"runtime.stackalloc", 0x800);
	if (!is_code(get_flags(0x4453b0)))
	{
		del_items(0x4453b0);
		add_func(0x4453b0,BADADDR);
	}
	set_name(0x445700,"runtime.stackfree", 0x800);
	if (!is_code(get_flags(0x445700)))
	{
		del_items(0x445700);
		add_func(0x445700,BADADDR);
	}
	set_name(0x445a60,"runtime.adjustpointers", 0x800);
	if (!is_code(get_flags(0x445a60)))
	{
		del_items(0x445a60);
		add_func(0x445a60,BADADDR);
	}
	set_name(0x445ca0,"runtime.adjustframe", 0x800);
	if (!is_code(get_flags(0x445ca0)))
	{
		del_items(0x445ca0);
		add_func(0x445ca0,BADADDR);
	}
	set_name(0x446100,"runtime.adjustctxt", 0x800);
	if (!is_code(get_flags(0x446100)))
	{
		del_items(0x446100);
		add_func(0x446100,BADADDR);
	}
	set_name(0x446150,"runtime.adjustdefers", 0x800);
	if (!is_code(get_flags(0x446150)))
	{
		del_items(0x446150);
		add_func(0x446150,BADADDR);
	}
	set_name(0x446290,"runtime.adjustsudogs", 0x800);
	if (!is_code(get_flags(0x446290)))
	{
		del_items(0x446290);
		add_func(0x446290,BADADDR);
	}
	set_name(0x4462d0,"runtime.findsghi", 0x800);
	if (!is_code(get_flags(0x4462d0)))
	{
		del_items(0x4462d0);
		add_func(0x4462d0,BADADDR);
	}
	set_name(0x446320,"runtime.syncadjustsudogs", 0x800);
	if (!is_code(get_flags(0x446320)))
	{
		del_items(0x446320);
		add_func(0x446320,BADADDR);
	}
	set_name(0x446480,"runtime.copystack", 0x800);
	if (!is_code(get_flags(0x446480)))
	{
		del_items(0x446480);
		add_func(0x446480,BADADDR);
	}
	set_name(0x4467a0,"runtime.round2", 0x800);
	if (!is_code(get_flags(0x4467a0)))
	{
		del_items(0x4467a0);
		add_func(0x4467a0,BADADDR);
	}
	set_name(0x4467d0,"runtime.newstack", 0x800);
	if (!is_code(get_flags(0x4467d0)))
	{
		del_items(0x4467d0);
		add_func(0x4467d0,BADADDR);
	}
	set_name(0x4474e0,"runtime.shrinkstack", 0x800);
	if (!is_code(get_flags(0x4474e0)))
	{
		del_items(0x4474e0);
		add_func(0x4474e0,BADADDR);
	}
	set_name(0x4476c0,"runtime.freeStackSpans", 0x800);
	if (!is_code(get_flags(0x4476c0)))
	{
		del_items(0x4476c0);
		add_func(0x4476c0,BADADDR);
	}
	set_name(0x447880,"runtime.getStackMap", 0x800);
	if (!is_code(get_flags(0x447880)))
	{
		del_items(0x447880);
		add_func(0x447880,BADADDR);
	}
	set_name(0x448120,"runtime.morestackc", 0x800);
	if (!is_code(get_flags(0x448120)))
	{
		del_items(0x448120);
		add_func(0x448120,BADADDR);
	}
	set_name(0x448150,"runtime.concatstrings", 0x800);
	if (!is_code(get_flags(0x448150)))
	{
		del_items(0x448150);
		add_func(0x448150,BADADDR);
	}
	set_name(0x448440,"runtime.concatstring2", 0x800);
	if (!is_code(get_flags(0x448440)))
	{
		del_items(0x448440);
		add_func(0x448440,BADADDR);
	}
	set_name(0x4484c0,"runtime.concatstring3", 0x800);
	if (!is_code(get_flags(0x4484c0)))
	{
		del_items(0x4484c0);
		add_func(0x4484c0,BADADDR);
	}
	set_name(0x448540,"runtime.concatstring4", 0x800);
	if (!is_code(get_flags(0x448540)))
	{
		del_items(0x448540);
		add_func(0x448540,BADADDR);
	}
	set_name(0x4485c0,"runtime.concatstring5", 0x800);
	if (!is_code(get_flags(0x4485c0)))
	{
		del_items(0x4485c0);
		add_func(0x4485c0,BADADDR);
	}
	set_name(0x448640,"runtime.slicebytetostring", 0x800);
	if (!is_code(get_flags(0x448640)))
	{
		del_items(0x448640);
		add_func(0x448640,BADADDR);
	}
	set_name(0x448730,"runtime.rawstringtmp", 0x800);
	if (!is_code(get_flags(0x448730)))
	{
		del_items(0x448730);
		add_func(0x448730,BADADDR);
	}
	set_name(0x4487e0,"runtime.stringtoslicebyte", 0x800);
	if (!is_code(get_flags(0x4487e0)))
	{
		del_items(0x4487e0);
		add_func(0x4487e0,BADADDR);
	}
	set_name(0x4488d0,"runtime.stringtoslicerune", 0x800);
	if (!is_code(get_flags(0x4488d0)))
	{
		del_items(0x4488d0);
		add_func(0x4488d0,BADADDR);
	}
	set_name(0x448a80,"runtime.slicerunetostring", 0x800);
	if (!is_code(get_flags(0x448a80)))
	{
		del_items(0x448a80);
		add_func(0x448a80,BADADDR);
	}
	set_name(0x448c80,"runtime.intstring", 0x800);
	if (!is_code(get_flags(0x448c80)))
	{
		del_items(0x448c80);
		add_func(0x448c80,BADADDR);
	}
	set_name(0x448db0,"runtime.rawstring", 0x800);
	if (!is_code(get_flags(0x448db0)))
	{
		del_items(0x448db0);
		add_func(0x448db0,BADADDR);
	}
	set_name(0x448e40,"runtime.rawbyteslice", 0x800);
	if (!is_code(get_flags(0x448e40)))
	{
		del_items(0x448e40);
		add_func(0x448e40,BADADDR);
	}
	set_name(0x448fd0,"runtime.rawruneslice", 0x800);
	if (!is_code(get_flags(0x448fd0)))
	{
		del_items(0x448fd0);
		add_func(0x448fd0,BADADDR);
	}
	set_name(0x4491a0,"runtime.gostring", 0x800);
	if (!is_code(get_flags(0x4491a0)))
	{
		del_items(0x4491a0);
		add_func(0x4491a0,BADADDR);
	}
	set_name(0x449270,"runtime.index", 0x800);
	if (!is_code(get_flags(0x449270)))
	{
		del_items(0x449270);
		add_func(0x449270,BADADDR);
	}
	set_name(0x449370,"runtime.atoi", 0x800);
	if (!is_code(get_flags(0x449370)))
	{
		del_items(0x449370);
		add_func(0x449370,BADADDR);
	}
	set_name(0x4494a0,"runtime.findnull", 0x800);
	if (!is_code(get_flags(0x4494a0)))
	{
		del_items(0x4494a0);
		add_func(0x4494a0,BADADDR);
	}
	set_name(0x449560,"runtime.gostringw", 0x800);
	if (!is_code(get_flags(0x449560)))
	{
		del_items(0x449560);
		add_func(0x449560,BADADDR);
	}
	set_name(0x449790,"runtime.badsystemstack", 0x800);
	if (!is_code(get_flags(0x449790)))
	{
		del_items(0x449790);
		add_func(0x449790,BADADDR);
	}
	set_name(0x4497d0,"reflect.memmove", 0x800);
	if (!is_code(get_flags(0x4497d0)))
	{
		del_items(0x4497d0);
		add_func(0x4497d0,BADADDR);
	}
	set_name(0x449830,"runtime.fastrand", 0x800);
	if (!is_code(get_flags(0x449830)))
	{
		del_items(0x449830);
		add_func(0x449830,BADADDR);
	}
	set_name(0x449880,"runtime.(*Frames).Next", 0x800);
	if (!is_code(get_flags(0x449880)))
	{
		del_items(0x449880);
		add_func(0x449880,BADADDR);
	}
	set_name(0x44a020,"runtime.expandCgoFrames", 0x800);
	if (!is_code(get_flags(0x44a020)))
	{
		del_items(0x44a020);
		add_func(0x44a020,BADADDR);
	}
	set_name(0x44a320,"runtime.modulesinit", 0x800);
	if (!is_code(get_flags(0x44a320)))
	{
		del_items(0x44a320);
		add_func(0x44a320,BADADDR);
	}
	set_name(0x44a5b0,"runtime.moduledataverify", 0x800);
	if (!is_code(get_flags(0x44a5b0)))
	{
		del_items(0x44a5b0);
		add_func(0x44a5b0,BADADDR);
	}
	set_name(0x44a610,"runtime.moduledataverify1", 0x800);
	if (!is_code(get_flags(0x44a610)))
	{
		del_items(0x44a610);
		add_func(0x44a610,BADADDR);
	}
	set_name(0x44acd0,"runtime.FuncForPC", 0x800);
	if (!is_code(get_flags(0x44acd0)))
	{
		del_items(0x44acd0);
		add_func(0x44acd0,BADADDR);
	}
	set_name(0x44af00,"runtime.(*Func).Name", 0x800);
	if (!is_code(get_flags(0x44af00)))
	{
		del_items(0x44af00);
		add_func(0x44af00,BADADDR);
	}
	set_name(0x44afb0,"runtime.findmoduledatap", 0x800);
	if (!is_code(get_flags(0x44afb0)))
	{
		del_items(0x44afb0);
		add_func(0x44afb0,BADADDR);
	}
	set_name(0x44aff0,"runtime.findfunc", 0x800);
	if (!is_code(get_flags(0x44aff0)))
	{
		del_items(0x44aff0);
		add_func(0x44aff0,BADADDR);
	}
	set_name(0x44b1a0,"runtime.pcvalue", 0x800);
	if (!is_code(get_flags(0x44b1a0)))
	{
		del_items(0x44b1a0);
		add_func(0x44b1a0,BADADDR);
	}
	set_name(0x44b760,"runtime.funcname", 0x800);
	if (!is_code(get_flags(0x44b760)))
	{
		del_items(0x44b760);
		add_func(0x44b760,BADADDR);
	}
	set_name(0x44b810,"runtime.funcnameFromNameoff", 0x800);
	if (!is_code(get_flags(0x44b810)))
	{
		del_items(0x44b810);
		add_func(0x44b810,BADADDR);
	}
	set_name(0x44b8c0,"runtime.funcline1", 0x800);
	if (!is_code(get_flags(0x44b8c0)))
	{
		del_items(0x44b8c0);
		add_func(0x44b8c0,BADADDR);
	}
	set_name(0x44baa0,"runtime.funcline", 0x800);
	if (!is_code(get_flags(0x44baa0)))
	{
		del_items(0x44baa0);
		add_func(0x44baa0,BADADDR);
	}
	set_name(0x44bb20,"runtime.funcspdelta", 0x800);
	if (!is_code(get_flags(0x44bb20)))
	{
		del_items(0x44bb20);
		add_func(0x44bb20,BADADDR);
	}
	set_name(0x44bc90,"runtime.funcMaxSPDelta", 0x800);
	if (!is_code(get_flags(0x44bc90)))
	{
		del_items(0x44bc90);
		add_func(0x44bc90,BADADDR);
	}
	set_name(0x44bda0,"runtime.pcdatavalue", 0x800);
	if (!is_code(get_flags(0x44bda0)))
	{
		del_items(0x44bda0);
		add_func(0x44bda0,BADADDR);
	}
	set_name(0x44be50,"runtime.pcdatavalue1", 0x800);
	if (!is_code(get_flags(0x44be50)))
	{
		del_items(0x44be50);
		add_func(0x44be50,BADADDR);
	}
	set_name(0x44bf00,"runtime.funcdata", 0x800);
	if (!is_code(get_flags(0x44bf00)))
	{
		del_items(0x44bf00);
		add_func(0x44bf00,BADADDR);
	}
	set_name(0x44bfe0,"runtime.step", 0x800);
	if (!is_code(get_flags(0x44bfe0)))
	{
		del_items(0x44bfe0);
		add_func(0x44bfe0,BADADDR);
	}
	set_name(0x44c190,"runtime.readvarint", 0x800);
	if (!is_code(get_flags(0x44c190)))
	{
		del_items(0x44c190);
		add_func(0x44c190,BADADDR);
	}
	set_name(0x44c200,"syscall.compileCallback", 0x800);
	if (!is_code(get_flags(0x44c200)))
	{
		del_items(0x44c200);
		add_func(0x44c200,BADADDR);
	}
	set_name(0x44c560,"syscall.loadsystemlibrary", 0x800);
	if (!is_code(get_flags(0x44c560)))
	{
		del_items(0x44c560);
		add_func(0x44c560,BADADDR);
	}
	set_name(0x44c6c0,"syscall.loadlibrary", 0x800);
	if (!is_code(get_flags(0x44c6c0)))
	{
		del_items(0x44c6c0);
		add_func(0x44c6c0,BADADDR);
	}
	set_name(0x44c7f0,"syscall.getprocaddress", 0x800);
	if (!is_code(get_flags(0x44c7f0)))
	{
		del_items(0x44c7f0);
		add_func(0x44c7f0,BADADDR);
	}
	set_name(0x44c920,"syscall.Syscall", 0x800);
	if (!is_code(get_flags(0x44c920)))
	{
		del_items(0x44c920);
		add_func(0x44c920,BADADDR);
	}
	set_name(0x44ca60,"syscall.Syscall6", 0x800);
	if (!is_code(get_flags(0x44ca60)))
	{
		del_items(0x44ca60);
		add_func(0x44ca60,BADADDR);
	}
	set_name(0x44cbb0,"syscall.Syscall9", 0x800);
	if (!is_code(get_flags(0x44cbb0)))
	{
		del_items(0x44cbb0);
		add_func(0x44cbb0,BADADDR);
	}
	set_name(0x44cd00,"runtime.addInitializedTimer", 0x800);
	if (!is_code(get_flags(0x44cd00)))
	{
		del_items(0x44cd00);
		add_func(0x44cd00,BADADDR);
	}
	set_name(0x44ce00,"runtime.doaddtimer", 0x800);
	if (!is_code(get_flags(0x44ce00)))
	{
		del_items(0x44ce00);
		add_func(0x44ce00,BADADDR);
	}
	set_name(0x44cfe0,"runtime.deltimer", 0x800);
	if (!is_code(get_flags(0x44cfe0)))
	{
		del_items(0x44cfe0);
		add_func(0x44cfe0,BADADDR);
	}
	set_name(0x44d190,"runtime.dodeltimer", 0x800);
	if (!is_code(get_flags(0x44d190)))
	{
		del_items(0x44d190);
		add_func(0x44d190,BADADDR);
	}
	set_name(0x44d3d0,"runtime.dodeltimer0", 0x800);
	if (!is_code(get_flags(0x44d3d0)))
	{
		del_items(0x44d3d0);
		add_func(0x44d3d0,BADADDR);
	}
	set_name(0x44d590,"runtime.resettimer", 0x800);
	if (!is_code(get_flags(0x44d590)))
	{
		del_items(0x44d590);
		add_func(0x44d590,BADADDR);
	}
	set_name(0x44d780,"runtime.cleantimers", 0x800);
	if (!is_code(get_flags(0x44d780)))
	{
		del_items(0x44d780);
		add_func(0x44d780,BADADDR);
	}
	set_name(0x44d980,"runtime.moveTimers", 0x800);
	if (!is_code(get_flags(0x44d980)))
	{
		del_items(0x44d980);
		add_func(0x44d980,BADADDR);
	}
	set_name(0x44dc20,"runtime.adjusttimers", 0x800);
	if (!is_code(get_flags(0x44dc20)))
	{
		del_items(0x44dc20);
		add_func(0x44dc20,BADADDR);
	}
	set_name(0x44e030,"runtime.addAdjustedTimers", 0x800);
	if (!is_code(get_flags(0x44e030)))
	{
		del_items(0x44e030);
		add_func(0x44e030,BADADDR);
	}
	set_name(0x44e110,"runtime.runtimer", 0x800);
	if (!is_code(get_flags(0x44e110)))
	{
		del_items(0x44e110);
		add_func(0x44e110,BADADDR);
	}
	set_name(0x44e4b0,"runtime.runOneTimer", 0x800);
	if (!is_code(get_flags(0x44e4b0)))
	{
		del_items(0x44e4b0);
		add_func(0x44e4b0,BADADDR);
	}
	set_name(0x44e6d0,"runtime.clearDeletedTimers", 0x800);
	if (!is_code(get_flags(0x44e6d0)))
	{
		del_items(0x44e6d0);
		add_func(0x44e6d0,BADADDR);
	}
	set_name(0x44eb60,"runtime.timeSleepUntil", 0x800);
	if (!is_code(get_flags(0x44eb60)))
	{
		del_items(0x44eb60);
		add_func(0x44eb60,BADADDR);
	}
	set_name(0x44ed10,"runtime.siftupTimer", 0x800);
	if (!is_code(get_flags(0x44ed10)))
	{
		del_items(0x44ed10);
		add_func(0x44ed10,BADADDR);
	}
	set_name(0x44ee20,"runtime.siftdownTimer", 0x800);
	if (!is_code(get_flags(0x44ee20)))
	{
		del_items(0x44ee20);
		add_func(0x44ee20,BADADDR);
	}
	set_name(0x44f000,"runtime.nanotime", 0x800);
	if (!is_code(get_flags(0x44f000)))
	{
		del_items(0x44f000);
		add_func(0x44f000,BADADDR);
	}
	set_name(0x44f030,"runtime.write", 0x800);
	if (!is_code(get_flags(0x44f030)))
	{
		del_items(0x44f030);
		add_func(0x44f030,BADADDR);
	}
	set_name(0x44f070,"runtime.traceReader", 0x800);
	if (!is_code(get_flags(0x44f070)))
	{
		del_items(0x44f070);
		add_func(0x44f070,BADADDR);
	}
	set_name(0x44f160,"runtime.traceProcFree", 0x800);
	if (!is_code(get_flags(0x44f160)))
	{
		del_items(0x44f160);
		add_func(0x44f160,BADADDR);
	}
	set_name(0x44f220,"runtime.traceEvent", 0x800);
	if (!is_code(get_flags(0x44f220)))
	{
		del_items(0x44f220);
		add_func(0x44f220,BADADDR);
	}
	set_name(0x44f320,"runtime.traceEventLocked", 0x800);
	if (!is_code(get_flags(0x44f320)))
	{
		del_items(0x44f320);
		add_func(0x44f320,BADADDR);
	}
	set_name(0x44f5e0,"runtime.traceStackID", 0x800);
	if (!is_code(get_flags(0x44f5e0)))
	{
		del_items(0x44f5e0);
		add_func(0x44f5e0,BADADDR);
	}
	set_name(0x44f730,"runtime.traceAcquireBuffer", 0x800);
	if (!is_code(get_flags(0x44f730)))
	{
		del_items(0x44f730);
		add_func(0x44f730,BADADDR);
	}
	set_name(0x44f7f0,"runtime.traceReleaseBuffer", 0x800);
	if (!is_code(get_flags(0x44f7f0)))
	{
		del_items(0x44f7f0);
		add_func(0x44f7f0,BADADDR);
	}
	set_name(0x44f880,"runtime.traceFlush", 0x800);
	if (!is_code(get_flags(0x44f880)))
	{
		del_items(0x44f880);
		add_func(0x44f880,BADADDR);
	}
	set_name(0x44fa70,"runtime.(*traceBuf).varint", 0x800);
	if (!is_code(get_flags(0x44fa70)))
	{
		del_items(0x44fa70);
		add_func(0x44fa70,BADADDR);
	}
	set_name(0x44fb00,"runtime.(*traceStackTable).put", 0x800);
	if (!is_code(get_flags(0x44fb00)))
	{
		del_items(0x44fb00);
		add_func(0x44fb00,BADADDR);
	}
	set_name(0x44fd00,"runtime.(*traceStackTable).find", 0x800);
	if (!is_code(get_flags(0x44fd00)))
	{
		del_items(0x44fd00);
		add_func(0x44fd00,BADADDR);
	}
	set_name(0x44fda0,"runtime.(*traceStackTable).newStack", 0x800);
	if (!is_code(get_flags(0x44fda0)))
	{
		del_items(0x44fda0);
		add_func(0x44fda0,BADADDR);
	}
	set_name(0x44fe10,"runtime.(*traceAlloc).alloc", 0x800);
	if (!is_code(get_flags(0x44fe10)))
	{
		del_items(0x44fe10);
		add_func(0x44fe10,BADADDR);
	}
	set_name(0x44ff30,"runtime.traceProcStart", 0x800);
	if (!is_code(get_flags(0x44ff30)))
	{
		del_items(0x44ff30);
		add_func(0x44ff30,BADADDR);
	}
	set_name(0x44ffc0,"runtime.traceProcStop", 0x800);
	if (!is_code(get_flags(0x44ffc0)))
	{
		del_items(0x44ffc0);
		add_func(0x44ffc0,BADADDR);
	}
	set_name(0x4500b0,"runtime.traceGCSweepStart", 0x800);
	if (!is_code(get_flags(0x4500b0)))
	{
		del_items(0x4500b0);
		add_func(0x4500b0,BADADDR);
	}
	set_name(0x450140,"runtime.traceGCSweepSpan", 0x800);
	if (!is_code(get_flags(0x450140)))
	{
		del_items(0x450140);
		add_func(0x450140,BADADDR);
	}
	set_name(0x4501f0,"runtime.traceGCSweepDone", 0x800);
	if (!is_code(get_flags(0x4501f0)))
	{
		del_items(0x4501f0);
		add_func(0x4501f0,BADADDR);
	}
	set_name(0x4502e0,"runtime.traceGoCreate", 0x800);
	if (!is_code(get_flags(0x4502e0)))
	{
		del_items(0x4502e0);
		add_func(0x4502e0,BADADDR);
	}
	set_name(0x4503f0,"runtime.traceGoStart", 0x800);
	if (!is_code(get_flags(0x4503f0)))
	{
		del_items(0x4503f0);
		add_func(0x4503f0,BADADDR);
	}
	set_name(0x4505a0,"runtime.traceGoPark", 0x800);
	if (!is_code(get_flags(0x4505a0)))
	{
		del_items(0x4505a0);
		add_func(0x4505a0,BADADDR);
	}
	set_name(0x450640,"runtime.traceGoUnpark", 0x800);
	if (!is_code(get_flags(0x450640)))
	{
		del_items(0x450640);
		add_func(0x450640,BADADDR);
	}
	set_name(0x450750,"runtime.traceGoSysCall", 0x800);
	if (!is_code(get_flags(0x450750)))
	{
		del_items(0x450750);
		add_func(0x450750,BADADDR);
	}
	set_name(0x4507b0,"runtime.traceGoSysExit", 0x800);
	if (!is_code(get_flags(0x4507b0)))
	{
		del_items(0x4507b0);
		add_func(0x4507b0,BADADDR);
	}
	set_name(0x4508a0,"runtime.traceGoSysBlock", 0x800);
	if (!is_code(get_flags(0x4508a0)))
	{
		del_items(0x4508a0);
		add_func(0x4508a0,BADADDR);
	}
	set_name(0x450990,"runtime.traceHeapAlloc", 0x800);
	if (!is_code(get_flags(0x450990)))
	{
		del_items(0x450990);
		add_func(0x450990,BADADDR);
	}
	set_name(0x450a10,"runtime.traceNextGC", 0x800);
	if (!is_code(get_flags(0x450a10)))
	{
		del_items(0x450a10);
		add_func(0x450a10,BADADDR);
	}
	set_name(0x450ae0,"runtime.tracebackdefers", 0x800);
	if (!is_code(get_flags(0x450ae0)))
	{
		del_items(0x450ae0);
		add_func(0x450ae0,BADADDR);
	}
	set_name(0x450d10,"runtime.gentraceback", 0x800);
	if (!is_code(get_flags(0x450d10)))
	{
		del_items(0x450d10);
		add_func(0x450d10,BADADDR);
	}
	set_name(0x452770,"runtime.getArgInfo", 0x800);
	if (!is_code(get_flags(0x452770)))
	{
		del_items(0x452770);
		add_func(0x452770,BADADDR);
	}
	set_name(0x452930,"runtime.tracebackCgoContext", 0x800);
	if (!is_code(get_flags(0x452930)))
	{
		del_items(0x452930);
		add_func(0x452930,BADADDR);
	}
	set_name(0x452ba0,"runtime.printcreatedby", 0x800);
	if (!is_code(get_flags(0x452ba0)))
	{
		del_items(0x452ba0);
		add_func(0x452ba0,BADADDR);
	}
	set_name(0x452c80,"runtime.printcreatedby1", 0x800);
	if (!is_code(get_flags(0x452c80)))
	{
		del_items(0x452c80);
		add_func(0x452c80,BADADDR);
	}
	set_name(0x452e50,"runtime.traceback", 0x800);
	if (!is_code(get_flags(0x452e50)))
	{
		del_items(0x452e50);
		add_func(0x452e50,BADADDR);
	}
	set_name(0x452ec0,"runtime.tracebacktrap", 0x800);
	if (!is_code(get_flags(0x452ec0)))
	{
		del_items(0x452ec0);
		add_func(0x452ec0,BADADDR);
	}
	set_name(0x452f80,"runtime.traceback1", 0x800);
	if (!is_code(get_flags(0x452f80)))
	{
		del_items(0x452f80);
		add_func(0x452f80,BADADDR);
	}
	set_name(0x4532b0,"runtime.printAncestorTraceback", 0x800);
	if (!is_code(get_flags(0x4532b0)))
	{
		del_items(0x4532b0);
		add_func(0x4532b0,BADADDR);
	}
	set_name(0x4534b0,"runtime.printAncestorTracebackFuncInfo", 0x800);
	if (!is_code(get_flags(0x4534b0)))
	{
		del_items(0x4534b0);
		add_func(0x4534b0,BADADDR);
	}
	set_name(0x4537e0,"runtime.callers", 0x800);
	if (!is_code(get_flags(0x4537e0)))
	{
		del_items(0x4537e0);
		add_func(0x4537e0,BADADDR);
	}
	set_name(0x4538d0,"runtime.gcallers", 0x800);
	if (!is_code(get_flags(0x4538d0)))
	{
		del_items(0x4538d0);
		add_func(0x4538d0,BADADDR);
	}
	set_name(0x453990,"runtime.showframe", 0x800);
	if (!is_code(get_flags(0x453990)))
	{
		del_items(0x453990);
		add_func(0x453990,BADADDR);
	}
	set_name(0x453a60,"runtime.showfuncinfo", 0x800);
	if (!is_code(get_flags(0x453a60)))
	{
		del_items(0x453a60);
		add_func(0x453a60,BADADDR);
	}
	set_name(0x453c50,"runtime.goroutineheader", 0x800);
	if (!is_code(get_flags(0x453c50)))
	{
		del_items(0x453c50);
		add_func(0x453c50,BADADDR);
	}
	set_name(0x453f10,"runtime.tracebackothers", 0x800);
	if (!is_code(get_flags(0x453f10)))
	{
		del_items(0x453f10);
		add_func(0x453f10,BADADDR);
	}
	set_name(0x4541d0,"runtime.tracebackHexdump", 0x800);
	if (!is_code(get_flags(0x4541d0)))
	{
		del_items(0x4541d0);
		add_func(0x4541d0,BADADDR);
	}
	set_name(0x4543d0,"runtime.isSystemGoroutine", 0x800);
	if (!is_code(get_flags(0x4543d0)))
	{
		del_items(0x4543d0);
		add_func(0x4543d0,BADADDR);
	}
	set_name(0x4544e0,"runtime.printCgoTraceback", 0x800);
	if (!is_code(get_flags(0x4544e0)))
	{
		del_items(0x4544e0);
		add_func(0x4544e0,BADADDR);
	}
	set_name(0x454620,"runtime.printOneCgoTraceback", 0x800);
	if (!is_code(get_flags(0x454620)))
	{
		del_items(0x454620);
		add_func(0x454620,BADADDR);
	}
	set_name(0x454870,"runtime.callCgoSymbolizer", 0x800);
	if (!is_code(get_flags(0x454870)))
	{
		del_items(0x454870);
		add_func(0x454870,BADADDR);
	}
	set_name(0x454900,"runtime.cgoContextPCs", 0x800);
	if (!is_code(get_flags(0x454900)))
	{
		del_items(0x454900);
		add_func(0x454900,BADADDR);
	}
	set_name(0x4549e0,"runtime.(*_type).string", 0x800);
	if (!is_code(get_flags(0x4549e0)))
	{
		del_items(0x4549e0);
		add_func(0x4549e0,BADADDR);
	}
	set_name(0x454aa0,"runtime.(*_type).uncommon", 0x800);
	if (!is_code(get_flags(0x454aa0)))
	{
		del_items(0x454aa0);
		add_func(0x454aa0,BADADDR);
	}
	set_name(0x454b50,"runtime.(*_type).pkgpath", 0x800);
	if (!is_code(get_flags(0x454b50)))
	{
		del_items(0x454b50);
		add_func(0x454b50,BADADDR);
	}
	set_name(0x454c60,"runtime.resolveNameOff", 0x800);
	if (!is_code(get_flags(0x454c60)))
	{
		del_items(0x454c60);
		add_func(0x454c60,BADADDR);
	}
	set_name(0x454f60,"runtime.resolveTypeOff", 0x800);
	if (!is_code(get_flags(0x454f60)))
	{
		del_items(0x454f60);
		add_func(0x454f60,BADADDR);
	}
	set_name(0x4552b0,"runtime.(*_type).textOff", 0x800);
	if (!is_code(get_flags(0x4552b0)))
	{
		del_items(0x4552b0);
		add_func(0x4552b0,BADADDR);
	}
	set_name(0x4555f0,"runtime.name.tagLen", 0x800);
	if (!is_code(get_flags(0x4555f0)))
	{
		del_items(0x4555f0);
		add_func(0x4555f0,BADADDR);
	}
	set_name(0x455640,"runtime.name.name", 0x800);
	if (!is_code(get_flags(0x455640)))
	{
		del_items(0x455640);
		add_func(0x455640,BADADDR);
	}
	set_name(0x455680,"runtime.name.tag", 0x800);
	if (!is_code(get_flags(0x455680)))
	{
		del_items(0x455680);
		add_func(0x455680,BADADDR);
	}
	set_name(0x455710,"runtime.name.pkgPath", 0x800);
	if (!is_code(get_flags(0x455710)))
	{
		del_items(0x455710);
		add_func(0x455710,BADADDR);
	}
	set_name(0x455800,"runtime.name.isBlank", 0x800);
	if (!is_code(get_flags(0x455800)))
	{
		del_items(0x455800);
		add_func(0x455800,BADADDR);
	}
	set_name(0x455840,"runtime.typelinksinit", 0x800);
	if (!is_code(get_flags(0x455840)))
	{
		del_items(0x455840);
		add_func(0x455840,BADADDR);
	}
	set_name(0x455ee0,"runtime.typesEqual", 0x800);
	if (!is_code(get_flags(0x455ee0)))
	{
		del_items(0x455ee0);
		add_func(0x455ee0,BADADDR);
	}
	set_name(0x456e20,"runtime.decoderune", 0x800);
	if (!is_code(get_flags(0x456e20)))
	{
		del_items(0x456e20);
		add_func(0x456e20,BADADDR);
	}
	set_name(0x457020,"runtime.encoderune", 0x800);
	if (!is_code(get_flags(0x457020)))
	{
		del_items(0x457020);
		add_func(0x457020,BADADDR);
	}
	set_name(0x457190,"runtime.writeErr", 0x800);
	if (!is_code(get_flags(0x457190)))
	{
		del_items(0x457190);
		add_func(0x457190,BADADDR);
	}
	set_name(0x457200,"runtime.cgocallbackg1.func1", 0x800);
	if (!is_code(get_flags(0x457200)))
	{
		del_items(0x457200);
		add_func(0x457200,BADADDR);
	}
	set_name(0x457210,"runtime.cgoCheckWriteBarrier.func1", 0x800);
	if (!is_code(get_flags(0x457210)))
	{
		del_items(0x457210);
		add_func(0x457210,BADADDR);
	}
	set_name(0x4572d0,"runtime.cgoCheckTypedBlock.func1", 0x800);
	if (!is_code(get_flags(0x4572d0)))
	{
		del_items(0x4572d0);
		add_func(0x4572d0,BADADDR);
	}
	set_name(0x457330,"runtime.chansend.func1", 0x800);
	if (!is_code(get_flags(0x457330)))
	{
		del_items(0x457330);
		add_func(0x457330,BADADDR);
	}
	set_name(0x457380,"runtime.chanrecv.func1", 0x800);
	if (!is_code(get_flags(0x457380)))
	{
		del_items(0x457380);
		add_func(0x457380,BADADDR);
	}
	set_name(0x4573d0,"runtime.debugCallCheck.func1", 0x800);
	if (!is_code(get_flags(0x4573d0)))
	{
		del_items(0x4573d0);
		add_func(0x4573d0,BADADDR);
	}
	set_name(0x4577e0,"runtime.debugCallWrap.func1", 0x800);
	if (!is_code(get_flags(0x4577e0)))
	{
		del_items(0x4577e0);
		add_func(0x4577e0,BADADDR);
	}
	set_name(0x457850,"runtime.mallocgc.func1", 0x800);
	if (!is_code(get_flags(0x457850)))
	{
		del_items(0x457850);
		add_func(0x457850,BADADDR);
	}
	set_name(0x4578c0,"runtime.persistentalloc.func1", 0x800);
	if (!is_code(get_flags(0x4578c0)))
	{
		del_items(0x4578c0);
		add_func(0x4578c0,BADADDR);
	}
	set_name(0x457930,"runtime.allocmcache.func1", 0x800);
	if (!is_code(get_flags(0x457930)))
	{
		del_items(0x457930);
		add_func(0x457930,BADADDR);
	}
	set_name(0x4579c0,"runtime.freemcache.func1", 0x800);
	if (!is_code(get_flags(0x4579c0)))
	{
		del_items(0x4579c0);
		add_func(0x4579c0,BADADDR);
	}
	set_name(0x457a80,"runtime.SetFinalizer.func1", 0x800);
	if (!is_code(get_flags(0x457a80)))
	{
		del_items(0x457a80);
		add_func(0x457a80,BADADDR);
	}
	set_name(0x457ad0,"runtime.SetFinalizer.func2", 0x800);
	if (!is_code(get_flags(0x457ad0)))
	{
		del_items(0x457ad0);
		add_func(0x457ad0,BADADDR);
	}
	set_name(0x457b70,"runtime.setGCPercent.func1", 0x800);
	if (!is_code(get_flags(0x457b70)))
	{
		del_items(0x457b70);
		add_func(0x457b70,BADADDR);
	}
	set_name(0x457c40,"runtime.gcStart.func1", 0x800);
	if (!is_code(get_flags(0x457c40)))
	{
		del_items(0x457c40);
		add_func(0x457c40,BADADDR);
	}
	set_name(0x457c80,"runtime.gcStart.func2", 0x800);
	if (!is_code(get_flags(0x457c80)))
	{
		del_items(0x457c80);
		add_func(0x457c80,BADADDR);
	}
	set_name(0x457d00,"runtime.gcMarkDone.func1.1", 0x800);
	if (!is_code(get_flags(0x457d00)))
	{
		del_items(0x457d00);
		add_func(0x457d00,BADADDR);
	}
	set_name(0x457d80,"runtime.gcMarkDone.func1", 0x800);
	if (!is_code(get_flags(0x457d80)))
	{
		del_items(0x457d80);
		add_func(0x457d80,BADADDR);
	}
	set_name(0x457e20,"runtime.gcMarkDone.func2", 0x800);
	if (!is_code(get_flags(0x457e20)))
	{
		del_items(0x457e20);
		add_func(0x457e20,BADADDR);
	}
	set_name(0x457ef0,"runtime.gcMarkDone.func3", 0x800);
	if (!is_code(get_flags(0x457ef0)))
	{
		del_items(0x457ef0);
		add_func(0x457ef0,BADADDR);
	}
	set_name(0x457f50,"runtime.gcMarkTermination.func1", 0x800);
	if (!is_code(get_flags(0x457f50)))
	{
		del_items(0x457f50);
		add_func(0x457f50,BADADDR);
	}
	set_name(0x457fa0,"runtime.gcMarkTermination.func2", 0x800);
	if (!is_code(get_flags(0x457fa0)))
	{
		del_items(0x457fa0);
		add_func(0x457fa0,BADADDR);
	}
	set_name(0x4580d0,"runtime.gcMarkTermination.func3", 0x800);
	if (!is_code(get_flags(0x4580d0)))
	{
		del_items(0x4580d0);
		add_func(0x4580d0,BADADDR);
	}
	set_name(0x458110,"runtime.gcMarkTermination.func4.1", 0x800);
	if (!is_code(get_flags(0x458110)))
	{
		del_items(0x458110);
		add_func(0x458110,BADADDR);
	}
	set_name(0x458160,"runtime.gcMarkTermination.func4", 0x800);
	if (!is_code(get_flags(0x458160)))
	{
		del_items(0x458160);
		add_func(0x458160,BADADDR);
	}
	set_name(0x4581b0,"runtime.gcBgMarkWorker.func1", 0x800);
	if (!is_code(get_flags(0x4581b0)))
	{
		del_items(0x4581b0);
		add_func(0x4581b0,BADADDR);
	}
	set_name(0x458230,"runtime.gcBgMarkWorker.func2", 0x800);
	if (!is_code(get_flags(0x458230)))
	{
		del_items(0x458230);
		add_func(0x458230,BADADDR);
	}
	set_name(0x4583e0,"runtime.markroot.func1", 0x800);
	if (!is_code(get_flags(0x4583e0)))
	{
		del_items(0x4583e0);
		add_func(0x4583e0,BADADDR);
	}
	set_name(0x458580,"runtime.gcAssistAlloc.func1", 0x800);
	if (!is_code(get_flags(0x458580)))
	{
		del_items(0x458580);
		add_func(0x458580,BADADDR);
	}
	set_name(0x4585d0,"runtime.scanstack.func1", 0x800);
	if (!is_code(get_flags(0x4585d0)))
	{
		del_items(0x4585d0);
		add_func(0x4585d0,BADADDR);
	}
	set_name(0x458630,"runtime.wakeScavenger.func1", 0x800);
	if (!is_code(get_flags(0x458630)))
	{
		del_items(0x458630);
		add_func(0x458630,BADADDR);
	}
	set_name(0x458690,"runtime.bgscavenge.func1", 0x800);
	if (!is_code(get_flags(0x458690)))
	{
		del_items(0x458690);
		add_func(0x458690,BADADDR);
	}
	set_name(0x4586d0,"runtime.bgscavenge.func2", 0x800);
	if (!is_code(get_flags(0x4586d0)))
	{
		del_items(0x4586d0);
		add_func(0x4586d0,BADADDR);
	}
	set_name(0x4587e0,"runtime.(*pageAlloc).scavengeOne.func3", 0x800);
	if (!is_code(get_flags(0x4587e0)))
	{
		del_items(0x4587e0);
		add_func(0x4587e0,BADADDR);
	}
	set_name(0x4588b0,"runtime.getempty.func1", 0x800);
	if (!is_code(get_flags(0x4588b0)))
	{
		del_items(0x4588b0);
		add_func(0x4588b0,BADADDR);
	}
	set_name(0x458920,"runtime.freeSomeWbufs.func1", 0x800);
	if (!is_code(get_flags(0x458920)))
	{
		del_items(0x458920);
		add_func(0x458920,BADADDR);
	}
	set_name(0x458a10,"runtime.(*mheap).alloc.func1", 0x800);
	if (!is_code(get_flags(0x458a10)))
	{
		del_items(0x458a10);
		add_func(0x458a10,BADADDR);
	}
	set_name(0x458ad0,"runtime.(*mheap).freeSpan.func1", 0x800);
	if (!is_code(get_flags(0x458ad0)))
	{
		del_items(0x458ad0);
		add_func(0x458ad0,BADADDR);
	}
	set_name(0x458be0,"runtime.(*pageAlloc).find.func1", 0x800);
	if (!is_code(get_flags(0x458be0)))
	{
		del_items(0x458be0);
		add_func(0x458be0,BADADDR);
	}
	set_name(0x458d60,"runtime.(*pageAlloc).sysGrow.func1", 0x800);
	if (!is_code(get_flags(0x458d60)))
	{
		del_items(0x458d60);
		add_func(0x458d60,BADADDR);
	}
	set_name(0x458e20,"runtime.(*pageAlloc).sysGrow.func2", 0x800);
	if (!is_code(get_flags(0x458e20)))
	{
		del_items(0x458e20);
		add_func(0x458e20,BADADDR);
	}
	set_name(0x458eb0,"runtime.(*pageAlloc).sysGrow.func3", 0x800);
	if (!is_code(get_flags(0x458eb0)))
	{
		del_items(0x458eb0);
		add_func(0x458eb0,BADADDR);
	}
	set_name(0x458f60,"runtime.mProf_Malloc.func1", 0x800);
	if (!is_code(get_flags(0x458f60)))
	{
		del_items(0x458f60);
		add_func(0x458f60,BADADDR);
	}
	set_name(0x458fb0,"runtime.tracealloc.func1", 0x800);
	if (!is_code(get_flags(0x458fb0)))
	{
		del_items(0x458fb0);
		add_func(0x458fb0,BADADDR);
	}
	set_name(0x459010,"runtime.tracefree.func1", 0x800);
	if (!is_code(get_flags(0x459010)))
	{
		del_items(0x459010);
		add_func(0x459010,BADADDR);
	}
	set_name(0x459070,"runtime.wbBufFlush.func1", 0x800);
	if (!is_code(get_flags(0x459070)))
	{
		del_items(0x459070);
		add_func(0x459070,BADADDR);
	}
	set_name(0x4590d0,"runtime.monitorSuspendResume.func1", 0x800);
	if (!is_code(get_flags(0x4590d0)))
	{
		del_items(0x4590d0);
		add_func(0x4590d0,BADADDR);
	}
	set_name(0x459150,"runtime.semasleep.func1", 0x800);
	if (!is_code(get_flags(0x459150)))
	{
		del_items(0x459150);
		add_func(0x459150,BADADDR);
	}
	set_name(0x4591a0,"runtime.semasleep.func2", 0x800);
	if (!is_code(get_flags(0x4591a0)))
	{
		del_items(0x4591a0);
		add_func(0x4591a0,BADADDR);
	}
	set_name(0x459230,"runtime.semasleep.func3", 0x800);
	if (!is_code(get_flags(0x459230)))
	{
		del_items(0x459230);
		add_func(0x459230,BADADDR);
	}
	set_name(0x4592c0,"runtime.semawakeup.func1", 0x800);
	if (!is_code(get_flags(0x4592c0)))
	{
		del_items(0x4592c0);
		add_func(0x4592c0,BADADDR);
	}
	set_name(0x459350,"runtime.semacreate.func1", 0x800);
	if (!is_code(get_flags(0x459350)))
	{
		del_items(0x459350);
		add_func(0x459350,BADADDR);
	}
	set_name(0x4593e0,"runtime.semacreate.func2", 0x800);
	if (!is_code(get_flags(0x4593e0)))
	{
		del_items(0x4593e0);
		add_func(0x4593e0,BADADDR);
	}
	set_name(0x459470,"runtime.newdefer.func1", 0x800);
	if (!is_code(get_flags(0x459470)))
	{
		del_items(0x459470);
		add_func(0x459470,BADADDR);
	}
	set_name(0x459650,"runtime.newdefer.func2", 0x800);
	if (!is_code(get_flags(0x459650)))
	{
		del_items(0x459650);
		add_func(0x459650,BADADDR);
	}
	set_name(0x4597b0,"runtime.freedefer.func1", 0x800);
	if (!is_code(get_flags(0x4597b0)))
	{
		del_items(0x4597b0);
		add_func(0x4597b0,BADADDR);
	}
	set_name(0x459950,"runtime.preprintpanics.func1", 0x800);
	if (!is_code(get_flags(0x459950)))
	{
		del_items(0x459950);
		add_func(0x459950,BADADDR);
	}
	set_name(0x4599c0,"runtime.addOneOpenDeferFrame.func1.1", 0x800);
	if (!is_code(get_flags(0x4599c0)))
	{
		del_items(0x4599c0);
		add_func(0x4599c0,BADADDR);
	}
	set_name(0x459c10,"runtime.addOneOpenDeferFrame.func1", 0x800);
	if (!is_code(get_flags(0x459c10)))
	{
		del_items(0x459c10);
		add_func(0x459c10,BADADDR);
	}
	set_name(0x459cc0,"runtime.throw.func1", 0x800);
	if (!is_code(get_flags(0x459cc0)))
	{
		del_items(0x459cc0);
		add_func(0x459cc0,BADADDR);
	}
	set_name(0x459d50,"runtime.fatalthrow.func1", 0x800);
	if (!is_code(get_flags(0x459d50)))
	{
		del_items(0x459d50);
		add_func(0x459d50,BADADDR);
	}
	set_name(0x459de0,"runtime.fatalpanic.func1", 0x800);
	if (!is_code(get_flags(0x459de0)))
	{
		del_items(0x459de0);
		add_func(0x459de0,BADADDR);
	}
	set_name(0x459eb0,"runtime.fatalpanic.func2", 0x800);
	if (!is_code(get_flags(0x459eb0)))
	{
		del_items(0x459eb0);
		add_func(0x459eb0,BADADDR);
	}
	set_name(0x459f00,"runtime.hexdumpWords.func1", 0x800);
	if (!is_code(get_flags(0x459f00)))
	{
		del_items(0x459f00);
		add_func(0x459f00,BADADDR);
	}
	set_name(0x459fa0,"runtime.main.func1", 0x800);
	if (!is_code(get_flags(0x459fa0)))
	{
		del_items(0x459fa0);
		add_func(0x459fa0,BADADDR);
	}
	set_name(0x459ff0,"runtime.main.func2", 0x800);
	if (!is_code(get_flags(0x459ff0)))
	{
		del_items(0x459ff0);
		add_func(0x459ff0,BADADDR);
	}
	set_name(0x45a040,"runtime.goready.func1", 0x800);
	if (!is_code(get_flags(0x45a040)))
	{
		del_items(0x45a040);
		add_func(0x45a040,BADADDR);
	}
	set_name(0x45a090,"runtime.casgstatus.func1", 0x800);
	if (!is_code(get_flags(0x45a090)))
	{
		del_items(0x45a090);
		add_func(0x45a090,BADADDR);
	}
	set_name(0x45a150,"runtime.startTheWorld.func1", 0x800);
	if (!is_code(get_flags(0x45a150)))
	{
		del_items(0x45a150);
		add_func(0x45a150,BADADDR);
	}
	set_name(0x45a190,"runtime.reentersyscall.func1", 0x800);
	if (!is_code(get_flags(0x45a190)))
	{
		del_items(0x45a190);
		add_func(0x45a190,BADADDR);
	}
	set_name(0x45a2a0,"runtime.entersyscallblock.func1", 0x800);
	if (!is_code(get_flags(0x45a2a0)))
	{
		del_items(0x45a2a0);
		add_func(0x45a2a0,BADADDR);
	}
	set_name(0x45a3e0,"runtime.entersyscallblock.func2", 0x800);
	if (!is_code(get_flags(0x45a3e0)))
	{
		del_items(0x45a3e0);
		add_func(0x45a3e0,BADADDR);
	}
	set_name(0x45a520,"runtime.exitsyscallfast.func1", 0x800);
	if (!is_code(get_flags(0x45a520)))
	{
		del_items(0x45a520);
		add_func(0x45a520,BADADDR);
	}
	set_name(0x45a5e0,"runtime.exitsyscallfast_reacquired.func1", 0x800);
	if (!is_code(get_flags(0x45a5e0)))
	{
		del_items(0x45a5e0);
		add_func(0x45a5e0,BADADDR);
	}
	set_name(0x45a640,"runtime.malg.func1", 0x800);
	if (!is_code(get_flags(0x45a640)))
	{
		del_items(0x45a640);
		add_func(0x45a640,BADADDR);
	}
	set_name(0x45a6a0,"runtime.newproc.func1", 0x800);
	if (!is_code(get_flags(0x45a6a0)))
	{
		del_items(0x45a6a0);
		add_func(0x45a6a0,BADADDR);
	}
	set_name(0x45a710,"runtime.gfget.func1", 0x800);
	if (!is_code(get_flags(0x45a710)))
	{
		del_items(0x45a710);
		add_func(0x45a710,BADADDR);
	}
	set_name(0x45a770,"runtime.(*p).destroy.func1", 0x800);
	if (!is_code(get_flags(0x45a770)))
	{
		del_items(0x45a770);
		add_func(0x45a770,BADADDR);
	}
	set_name(0x45a830,"runtime.(*rwmutex).rlock.func1", 0x800);
	if (!is_code(get_flags(0x45a830)))
	{
		del_items(0x45a830);
		add_func(0x45a830,BADADDR);
	}
	set_name(0x45a900,"runtime.callers.func1", 0x800);
	if (!is_code(get_flags(0x45a900)))
	{
		del_items(0x45a900);
		add_func(0x45a900,BADADDR);
	}
	set_name(0x45a9c0,"runtime.tracebackHexdump.func1", 0x800);
	if (!is_code(get_flags(0x45a9c0)))
	{
		del_items(0x45a9c0);
		add_func(0x45a9c0,BADADDR);
	}
	set_name(0x45aa00,"runtime.init", 0x800);
	if (!is_code(get_flags(0x45aa00)))
	{
		del_items(0x45aa00);
		add_func(0x45aa00,BADADDR);
	}
	set_name(0x45abe0,"runtime.skipPleaseUseCallersFrames", 0x800);
	if (!is_code(get_flags(0x45abe0)))
	{
		del_items(0x45abe0);
		add_func(0x45abe0,BADADDR);
	}
	set_name(0x45ace0,"_rt0_amd64", 0x800);
	if (!is_code(get_flags(0x45ace0)))
	{
		del_items(0x45ace0);
		add_func(0x45ace0,BADADDR);
	}
	set_name(0x45acf0,"runtime.rt0_go", 0x800);
	if (!is_code(get_flags(0x45acf0)))
	{
		del_items(0x45acf0);
		add_func(0x45acf0,BADADDR);
	}
	set_name(0x45ae60,"runtime.asminit", 0x800);
	if (!is_code(get_flags(0x45ae60)))
	{
		del_items(0x45ae60);
		add_func(0x45ae60,BADADDR);
	}
	set_name(0x45ae70,"runtime.gogo", 0x800);
	if (!is_code(get_flags(0x45ae70)))
	{
		del_items(0x45ae70);
		add_func(0x45ae70,BADADDR);
	}
	set_name(0x45aed0,"runtime.mcall", 0x800);
	if (!is_code(get_flags(0x45aed0)))
	{
		del_items(0x45aed0);
		add_func(0x45aed0,BADADDR);
	}
	set_name(0x45af40,"runtime.systemstack_switch", 0x800);
	if (!is_code(get_flags(0x45af40)))
	{
		del_items(0x45af40);
		add_func(0x45af40,BADADDR);
	}
	set_name(0x45af50,"runtime.systemstack", 0x800);
	if (!is_code(get_flags(0x45af50)))
	{
		del_items(0x45af50);
		add_func(0x45af50,BADADDR);
	}
	set_name(0x45b000,"runtime.morestack", 0x800);
	if (!is_code(get_flags(0x45b000)))
	{
		del_items(0x45b000);
		add_func(0x45b000,BADADDR);
	}
	set_name(0x45b0a0,"runtime.morestack_noctxt", 0x800);
	if (!is_code(get_flags(0x45b0a0)))
	{
		del_items(0x45b0a0);
		add_func(0x45b0a0,BADADDR);
	}
	set_name(0x45b0b0,"runtime.reflectcall", 0x800);
	if (!is_code(get_flags(0x45b0b0)))
	{
		del_items(0x45b0b0);
		add_func(0x45b0b0,BADADDR);
	}
	set_name(0x45b290,"callRet", 0x800);
	if (!is_code(get_flags(0x45b290)))
	{
		del_items(0x45b290);
		add_func(0x45b290,BADADDR);
	}
	set_name(0x45b2c0,"runtime.call32", 0x800);
	if (!is_code(get_flags(0x45b2c0)))
	{
		del_items(0x45b2c0);
		add_func(0x45b2c0,BADADDR);
	}
	set_name(0x45b350,"runtime.call64", 0x800);
	if (!is_code(get_flags(0x45b350)))
	{
		del_items(0x45b350);
		add_func(0x45b350,BADADDR);
	}
	set_name(0x45b3e0,"runtime.call128", 0x800);
	if (!is_code(get_flags(0x45b3e0)))
	{
		del_items(0x45b3e0);
		add_func(0x45b3e0,BADADDR);
	}
	set_name(0x45b4a0,"runtime.call256", 0x800);
	if (!is_code(get_flags(0x45b4a0)))
	{
		del_items(0x45b4a0);
		add_func(0x45b4a0,BADADDR);
	}
	set_name(0x45b560,"runtime.call512", 0x800);
	if (!is_code(get_flags(0x45b560)))
	{
		del_items(0x45b560);
		add_func(0x45b560,BADADDR);
	}
	set_name(0x45b620,"runtime.call1024", 0x800);
	if (!is_code(get_flags(0x45b620)))
	{
		del_items(0x45b620);
		add_func(0x45b620,BADADDR);
	}
	set_name(0x45b6e0,"runtime.call2048", 0x800);
	if (!is_code(get_flags(0x45b6e0)))
	{
		del_items(0x45b6e0);
		add_func(0x45b6e0,BADADDR);
	}
	set_name(0x45b7a0,"runtime.call4096", 0x800);
	if (!is_code(get_flags(0x45b7a0)))
	{
		del_items(0x45b7a0);
		add_func(0x45b7a0,BADADDR);
	}
	set_name(0x45b870,"runtime.call8192", 0x800);
	if (!is_code(get_flags(0x45b870)))
	{
		del_items(0x45b870);
		add_func(0x45b870,BADADDR);
	}
	set_name(0x45b940,"runtime.call16384", 0x800);
	if (!is_code(get_flags(0x45b940)))
	{
		del_items(0x45b940);
		add_func(0x45b940,BADADDR);
	}
	set_name(0x45ba10,"runtime.call32768", 0x800);
	if (!is_code(get_flags(0x45ba10)))
	{
		del_items(0x45ba10);
		add_func(0x45ba10,BADADDR);
	}
	set_name(0x45bae0,"runtime.call65536", 0x800);
	if (!is_code(get_flags(0x45bae0)))
	{
		del_items(0x45bae0);
		add_func(0x45bae0,BADADDR);
	}
	set_name(0x45bbb0,"runtime.call131072", 0x800);
	if (!is_code(get_flags(0x45bbb0)))
	{
		del_items(0x45bbb0);
		add_func(0x45bbb0,BADADDR);
	}
	set_name(0x45bc80,"runtime.call262144", 0x800);
	if (!is_code(get_flags(0x45bc80)))
	{
		del_items(0x45bc80);
		add_func(0x45bc80,BADADDR);
	}
	set_name(0x45bd50,"runtime.call524288", 0x800);
	if (!is_code(get_flags(0x45bd50)))
	{
		del_items(0x45bd50);
		add_func(0x45bd50,BADADDR);
	}
	set_name(0x45be20,"runtime.call1048576", 0x800);
	if (!is_code(get_flags(0x45be20)))
	{
		del_items(0x45be20);
		add_func(0x45be20,BADADDR);
	}
	set_name(0x45bef0,"runtime.call2097152", 0x800);
	if (!is_code(get_flags(0x45bef0)))
	{
		del_items(0x45bef0);
		add_func(0x45bef0,BADADDR);
	}
	set_name(0x45bfc0,"runtime.call4194304", 0x800);
	if (!is_code(get_flags(0x45bfc0)))
	{
		del_items(0x45bfc0);
		add_func(0x45bfc0,BADADDR);
	}
	set_name(0x45c090,"runtime.call8388608", 0x800);
	if (!is_code(get_flags(0x45c090)))
	{
		del_items(0x45c090);
		add_func(0x45c090,BADADDR);
	}
	set_name(0x45c160,"runtime.call16777216", 0x800);
	if (!is_code(get_flags(0x45c160)))
	{
		del_items(0x45c160);
		add_func(0x45c160,BADADDR);
	}
	set_name(0x45c230,"runtime.call33554432", 0x800);
	if (!is_code(get_flags(0x45c230)))
	{
		del_items(0x45c230);
		add_func(0x45c230,BADADDR);
	}
	set_name(0x45c300,"runtime.call67108864", 0x800);
	if (!is_code(get_flags(0x45c300)))
	{
		del_items(0x45c300);
		add_func(0x45c300,BADADDR);
	}
	set_name(0x45c3d0,"runtime.call134217728", 0x800);
	if (!is_code(get_flags(0x45c3d0)))
	{
		del_items(0x45c3d0);
		add_func(0x45c3d0,BADADDR);
	}
	set_name(0x45c4a0,"runtime.call268435456", 0x800);
	if (!is_code(get_flags(0x45c4a0)))
	{
		del_items(0x45c4a0);
		add_func(0x45c4a0,BADADDR);
	}
	set_name(0x45c570,"runtime.call536870912", 0x800);
	if (!is_code(get_flags(0x45c570)))
	{
		del_items(0x45c570);
		add_func(0x45c570,BADADDR);
	}
	set_name(0x45c640,"runtime.call1073741824", 0x800);
	if (!is_code(get_flags(0x45c640)))
	{
		del_items(0x45c640);
		add_func(0x45c640,BADADDR);
	}
	set_name(0x45c710,"runtime.procyield", 0x800);
	if (!is_code(get_flags(0x45c710)))
	{
		del_items(0x45c710);
		add_func(0x45c710,BADADDR);
	}
	set_name(0x45c720,"runtime.publicationBarrier", 0x800);
	if (!is_code(get_flags(0x45c720)))
	{
		del_items(0x45c720);
		add_func(0x45c720,BADADDR);
	}
	set_name(0x45c730,"runtime.jmpdefer", 0x800);
	if (!is_code(get_flags(0x45c730)))
	{
		del_items(0x45c730);
		add_func(0x45c730,BADADDR);
	}
	set_name(0x45c750,"gosave", 0x800);
	if (!is_code(get_flags(0x45c750)))
	{
		del_items(0x45c750);
		add_func(0x45c750,BADADDR);
	}
	set_name(0x45c790,"runtime.asmcgocall", 0x800);
	if (!is_code(get_flags(0x45c790)))
	{
		del_items(0x45c790);
		add_func(0x45c790,BADADDR);
	}
	set_name(0x45c860,"runtime.cgocallback_gofunc", 0x800);
	if (!is_code(get_flags(0x45c860)))
	{
		del_items(0x45c860);
		add_func(0x45c860,BADADDR);
	}
	set_name(0x45c980,"runtime.setg", 0x800);
	if (!is_code(get_flags(0x45c980)))
	{
		del_items(0x45c980);
		add_func(0x45c980,BADADDR);
	}
	set_name(0x45c9c0,"setg_gcc", 0x800);
	if (!is_code(get_flags(0x45c9c0)))
	{
		del_items(0x45c9c0);
		add_func(0x45c9c0,BADADDR);
	}
	set_name(0x45c9e0,"runtime.abort", 0x800);
	if (!is_code(get_flags(0x45c9e0)))
	{
		del_items(0x45c9e0);
		add_func(0x45c9e0,BADADDR);
	}
	set_name(0x45c9f0,"runtime.stackcheck", 0x800);
	if (!is_code(get_flags(0x45c9f0)))
	{
		del_items(0x45c9f0);
		add_func(0x45c9f0,BADADDR);
	}
	set_name(0x45ca20,"runtime.cputicks", 0x800);
	if (!is_code(get_flags(0x45ca20)))
	{
		del_items(0x45ca20);
		add_func(0x45ca20,BADADDR);
	}
	set_name(0x45ca40,"runtime.memhash", 0x800);
	if (!is_code(get_flags(0x45ca40)))
	{
		del_items(0x45ca40);
		add_func(0x45ca40,BADADDR);
	}
	set_name(0x45ca70,"runtime.strhash", 0x800);
	if (!is_code(get_flags(0x45ca70)))
	{
		del_items(0x45ca70);
		add_func(0x45ca70,BADADDR);
	}
	set_name(0x45caa0,"aeshashbody", 0x800);
	if (!is_code(get_flags(0x45caa0)))
	{
		del_items(0x45caa0);
		add_func(0x45caa0,BADADDR);
	}
	set_name(0x45cff0,"runtime.memhash32", 0x800);
	if (!is_code(get_flags(0x45cff0)))
	{
		del_items(0x45cff0);
		add_func(0x45cff0,BADADDR);
	}
	set_name(0x45d040,"runtime.memhash64", 0x800);
	if (!is_code(get_flags(0x45d040)))
	{
		del_items(0x45d040);
		add_func(0x45d040,BADADDR);
	}
	set_name(0x45d090,"runtime.checkASM", 0x800);
	if (!is_code(get_flags(0x45d090)))
	{
		del_items(0x45d090);
		add_func(0x45d090,BADADDR);
	}
	set_name(0x45d0b0,"runtime.return0", 0x800);
	if (!is_code(get_flags(0x45d0b0)))
	{
		del_items(0x45d0b0);
		add_func(0x45d0b0,BADADDR);
	}
	set_name(0x45d0c0,"runtime.goexit", 0x800);
	if (!is_code(get_flags(0x45d0c0)))
	{
		del_items(0x45d0c0);
		add_func(0x45d0c0,BADADDR);
	}
	set_name(0x45d0d0,"runtime.gcWriteBarrier", 0x800);
	if (!is_code(get_flags(0x45d0d0)))
	{
		del_items(0x45d0d0);
		add_func(0x45d0d0,BADADDR);
	}
	set_name(0x45d1d0,"runtime.debugCallV1", 0x800);
	if (!is_code(get_flags(0x45d1d0)))
	{
		del_items(0x45d1d0);
		add_func(0x45d1d0,BADADDR);
	}
	set_name(0x45d460,"debugCall32", 0x800);
	if (!is_code(get_flags(0x45d460)))
	{
		del_items(0x45d460);
		add_func(0x45d460,BADADDR);
	}
	set_name(0x45d4b0,"debugCall64", 0x800);
	if (!is_code(get_flags(0x45d4b0)))
	{
		del_items(0x45d4b0);
		add_func(0x45d4b0,BADADDR);
	}
	set_name(0x45d500,"debugCall128", 0x800);
	if (!is_code(get_flags(0x45d500)))
	{
		del_items(0x45d500);
		add_func(0x45d500,BADADDR);
	}
	set_name(0x45d580,"debugCall256", 0x800);
	if (!is_code(get_flags(0x45d580)))
	{
		del_items(0x45d580);
		add_func(0x45d580,BADADDR);
	}
	set_name(0x45d600,"debugCall512", 0x800);
	if (!is_code(get_flags(0x45d600)))
	{
		del_items(0x45d600);
		add_func(0x45d600,BADADDR);
	}
	set_name(0x45d680,"debugCall1024", 0x800);
	if (!is_code(get_flags(0x45d680)))
	{
		del_items(0x45d680);
		add_func(0x45d680,BADADDR);
	}
	set_name(0x45d700,"debugCall2048", 0x800);
	if (!is_code(get_flags(0x45d700)))
	{
		del_items(0x45d700);
		add_func(0x45d700,BADADDR);
	}
	set_name(0x45d780,"debugCall4096", 0x800);
	if (!is_code(get_flags(0x45d780)))
	{
		del_items(0x45d780);
		add_func(0x45d780,BADADDR);
	}
	set_name(0x45d810,"debugCall8192", 0x800);
	if (!is_code(get_flags(0x45d810)))
	{
		del_items(0x45d810);
		add_func(0x45d810,BADADDR);
	}
	set_name(0x45d8a0,"debugCall16384", 0x800);
	if (!is_code(get_flags(0x45d8a0)))
	{
		del_items(0x45d8a0);
		add_func(0x45d8a0,BADADDR);
	}
	set_name(0x45d930,"debugCall32768", 0x800);
	if (!is_code(get_flags(0x45d930)))
	{
		del_items(0x45d930);
		add_func(0x45d930,BADADDR);
	}
	set_name(0x45d9c0,"debugCall65536", 0x800);
	if (!is_code(get_flags(0x45d9c0)))
	{
		del_items(0x45d9c0);
		add_func(0x45d9c0,BADADDR);
	}
	set_name(0x45da50,"runtime.debugCallPanicked", 0x800);
	if (!is_code(get_flags(0x45da50)))
	{
		del_items(0x45da50);
		add_func(0x45da50,BADADDR);
	}
	set_name(0x45da90,"runtime.panicIndex", 0x800);
	if (!is_code(get_flags(0x45da90)))
	{
		del_items(0x45da90);
		add_func(0x45da90,BADADDR);
	}
	set_name(0x45daa0,"runtime.panicIndexU", 0x800);
	if (!is_code(get_flags(0x45daa0)))
	{
		del_items(0x45daa0);
		add_func(0x45daa0,BADADDR);
	}
	set_name(0x45dab0,"runtime.panicSliceAlen", 0x800);
	if (!is_code(get_flags(0x45dab0)))
	{
		del_items(0x45dab0);
		add_func(0x45dab0,BADADDR);
	}
	set_name(0x45dac0,"runtime.panicSliceAlenU", 0x800);
	if (!is_code(get_flags(0x45dac0)))
	{
		del_items(0x45dac0);
		add_func(0x45dac0,BADADDR);
	}
	set_name(0x45dad0,"runtime.panicSliceAcap", 0x800);
	if (!is_code(get_flags(0x45dad0)))
	{
		del_items(0x45dad0);
		add_func(0x45dad0,BADADDR);
	}
	set_name(0x45dae0,"runtime.panicSliceAcapU", 0x800);
	if (!is_code(get_flags(0x45dae0)))
	{
		del_items(0x45dae0);
		add_func(0x45dae0,BADADDR);
	}
	set_name(0x45daf0,"runtime.panicSliceB", 0x800);
	if (!is_code(get_flags(0x45daf0)))
	{
		del_items(0x45daf0);
		add_func(0x45daf0,BADADDR);
	}
	set_name(0x45db00,"runtime.panicSliceBU", 0x800);
	if (!is_code(get_flags(0x45db00)))
	{
		del_items(0x45db00);
		add_func(0x45db00,BADADDR);
	}
	set_name(0x45db10,"runtime.panicSlice3Alen", 0x800);
	if (!is_code(get_flags(0x45db10)))
	{
		del_items(0x45db10);
		add_func(0x45db10,BADADDR);
	}
	set_name(0x45db20,"runtime.panicSlice3AlenU", 0x800);
	if (!is_code(get_flags(0x45db20)))
	{
		del_items(0x45db20);
		add_func(0x45db20,BADADDR);
	}
	set_name(0x45db30,"runtime.panicSlice3C", 0x800);
	if (!is_code(get_flags(0x45db30)))
	{
		del_items(0x45db30);
		add_func(0x45db30,BADADDR);
	}
	set_name(0x45db40,"runtime.duffzero", 0x800);
	if (!is_code(get_flags(0x45db40)))
	{
		del_items(0x45db40);
		add_func(0x45db40,BADADDR);
	}
	set_name(0x45dc80,"runtime.duffcopy", 0x800);
	if (!is_code(get_flags(0x45dc80)))
	{
		del_items(0x45dc80);
		add_func(0x45dc80,BADADDR);
	}
	set_name(0x45e010,"runtime.memclrNoHeapPointers", 0x800);
	if (!is_code(get_flags(0x45e010)))
	{
		del_items(0x45e010);
		add_func(0x45e010,BADADDR);
	}
	set_name(0x45e2a0,"runtime.memmove", 0x800);
	if (!is_code(get_flags(0x45e2a0)))
	{
		del_items(0x45e2a0);
		add_func(0x45e2a0,BADADDR);
	}
	set_name(0x45e960,"runtime.asyncPreempt", 0x800);
	if (!is_code(get_flags(0x45e960)))
	{
		del_items(0x45e960);
		add_func(0x45e960,BADADDR);
	}
	set_name(0x45eb10,"_rt0_amd64_windows", 0x800);
	if (!is_code(get_flags(0x45eb10)))
	{
		del_items(0x45eb10);
		add_func(0x45eb10,BADADDR);
	}
	set_name(0x45eb20,"runtime.asmstdcall", 0x800);
	if (!is_code(get_flags(0x45eb20)))
	{
		del_items(0x45eb20);
		add_func(0x45eb20,BADADDR);
	}
	set_name(0x45eba0,"runtime.badsignal2", 0x800);
	if (!is_code(get_flags(0x45eba0)))
	{
		del_items(0x45eba0);
		add_func(0x45eba0,BADADDR);
	}
	set_name(0x45ec00,"runtime.getlasterror", 0x800);
	if (!is_code(get_flags(0x45ec00)))
	{
		del_items(0x45ec00);
		add_func(0x45ec00,BADADDR);
	}
	set_name(0x45ec20,"sigtramp", 0x800);
	if (!is_code(get_flags(0x45ec20)))
	{
		del_items(0x45ec20);
		add_func(0x45ec20,BADADDR);
	}
	set_name(0x45ed30,"runtime.exceptiontramp", 0x800);
	if (!is_code(get_flags(0x45ed30)))
	{
		del_items(0x45ed30);
		add_func(0x45ed30,BADADDR);
	}
	set_name(0x45ed40,"runtime.firstcontinuetramp", 0x800);
	if (!is_code(get_flags(0x45ed40)))
	{
		del_items(0x45ed40);
		add_func(0x45ed40,BADADDR);
	}
	set_name(0x45ed50,"runtime.lastcontinuetramp", 0x800);
	if (!is_code(get_flags(0x45ed50)))
	{
		del_items(0x45ed50);
		add_func(0x45ed50,BADADDR);
	}
	set_name(0x45ed60,"runtime.ctrlhandler", 0x800);
	if (!is_code(get_flags(0x45ed60)))
	{
		del_items(0x45ed60);
		add_func(0x45ed60,BADADDR);
	}
	set_name(0x45ed80,"runtime.externalthreadhandler", 0x800);
	if (!is_code(get_flags(0x45ed80)))
	{
		del_items(0x45ed80);
		add_func(0x45ed80,BADADDR);
	}
	set_name(0x45ee40,"runtime.callbackasm1", 0x800);
	if (!is_code(get_flags(0x45ee40)))
	{
		del_items(0x45ee40);
		add_func(0x45ee40,BADADDR);
	}
	set_name(0x45ef30,"runtime.tstart_stdcall", 0x800);
	if (!is_code(get_flags(0x45ef30)))
	{
		del_items(0x45ef30);
		add_func(0x45ef30,BADADDR);
	}
	set_name(0x45ef80,"runtime.settls", 0x800);
	if (!is_code(get_flags(0x45ef80)))
	{
		del_items(0x45ef80);
		add_func(0x45ef80,BADADDR);
	}
	set_name(0x45ef90,"runtime.onosstack", 0x800);
	if (!is_code(get_flags(0x45ef90)))
	{
		del_items(0x45ef90);
		add_func(0x45ef90,BADADDR);
	}
	set_name(0x45f010,"runtime.usleep2", 0x800);
	if (!is_code(get_flags(0x45f010)))
	{
		del_items(0x45f010);
		add_func(0x45f010,BADADDR);
	}
	set_name(0x45f050,"runtime.switchtothread", 0x800);
	if (!is_code(get_flags(0x45f050)))
	{
		del_items(0x45f050);
		add_func(0x45f050,BADADDR);
	}
	set_name(0x45f070,"runtime.nanotime1", 0x800);
	if (!is_code(get_flags(0x45f070)))
	{
		del_items(0x45f070);
		add_func(0x45f070,BADADDR);
	}
	set_name(0x45f0b0,"time.now", 0x800);
	if (!is_code(get_flags(0x45f0b0)))
	{
		del_items(0x45f0b0);
		add_func(0x45f0b0,BADADDR);
	}
	set_name(0x45f140,"type..eq.runtime._panic", 0x800);
	if (!is_code(get_flags(0x45f140)))
	{
		del_items(0x45f140);
		add_func(0x45f140,BADADDR);
	}
	set_name(0x45f200,"type..eq.runtime._defer", 0x800);
	if (!is_code(get_flags(0x45f200)))
	{
		del_items(0x45f200);
		add_func(0x45f200,BADADDR);
	}
	set_name(0x45f2a0,"type..eq.runtime.sysmontick", 0x800);
	if (!is_code(get_flags(0x45f2a0)))
	{
		del_items(0x45f2a0);
		add_func(0x45f2a0,BADADDR);
	}
	set_name(0x45f2e0,"type..eq.runtime.special", 0x800);
	if (!is_code(get_flags(0x45f2e0)))
	{
		del_items(0x45f2e0);
		add_func(0x45f2e0,BADADDR);
	}
	set_name(0x45f340,"type..eq.runtime.mspan", 0x800);
	if (!is_code(get_flags(0x45f340)))
	{
		del_items(0x45f340);
		add_func(0x45f340,BADADDR);
	}
	set_name(0x45f3e0,"type..eq.runtime.markBits", 0x800);
	if (!is_code(get_flags(0x45f3e0)))
	{
		del_items(0x45f3e0);
		add_func(0x45f3e0,BADADDR);
	}
	set_name(0x45f410,"type..eq.runtime.mcache", 0x800);
	if (!is_code(get_flags(0x45f410)))
	{
		del_items(0x45f410);
		add_func(0x45f410,BADADDR);
	}
	set_name(0x45f470,"type..eq.struct { runtime.gList; runtime.n int32 }", 0x800);
	if (!is_code(get_flags(0x45f470)))
	{
		del_items(0x45f470);
		add_func(0x45f470,BADADDR);
	}
	set_name(0x45f4a0,"type..eq.runtime.gcWork", 0x800);
	if (!is_code(get_flags(0x45f4a0)))
	{
		del_items(0x45f4a0);
		add_func(0x45f4a0,BADADDR);
	}
	set_name(0x45f560,"type..eq.runtime.wbBuf", 0x800);
	if (!is_code(get_flags(0x45f560)))
	{
		del_items(0x45f560);
		add_func(0x45f560,BADADDR);
	}
	set_name(0x45f5c0,"type..eq.runtime.mOS", 0x800);
	if (!is_code(get_flags(0x45f5c0)))
	{
		del_items(0x45f5c0);
		add_func(0x45f5c0,BADADDR);
	}
	set_name(0x45f620,"runtime.(*waitReason).String", 0x800);
	if (!is_code(get_flags(0x45f620)))
	{
		del_items(0x45f620);
		add_func(0x45f620,BADADDR);
	}
	set_name(0x45f6b0,"type..eq.runtime.sudog", 0x800);
	if (!is_code(get_flags(0x45f6b0)))
	{
		del_items(0x45f6b0);
		add_func(0x45f6b0,BADADDR);
	}
	set_name(0x45f770,"type..eq.runtime.hchan", 0x800);
	if (!is_code(get_flags(0x45f770)))
	{
		del_items(0x45f770);
		add_func(0x45f770,BADADDR);
	}
	set_name(0x45f810,"type..eq.[6]string", 0x800);
	if (!is_code(get_flags(0x45f810)))
	{
		del_items(0x45f810);
		add_func(0x45f810,BADADDR);
	}
	set_name(0x45f8d0,"type..eq.[9]string", 0x800);
	if (!is_code(get_flags(0x45f8d0)))
	{
		del_items(0x45f8d0);
		add_func(0x45f8d0,BADADDR);
	}
	set_name(0x45f990,"type..eq.runtime.bitvector", 0x800);
	if (!is_code(get_flags(0x45f990)))
	{
		del_items(0x45f990);
		add_func(0x45f990,BADADDR);
	}
	set_name(0x45f9c0,"type..eq.runtime.itab", 0x800);
	if (!is_code(get_flags(0x45f9c0)))
	{
		del_items(0x45f9c0);
		add_func(0x45f9c0,BADADDR);
	}
	set_name(0x45fa40,"type..eq.runtime._func", 0x800);
	if (!is_code(get_flags(0x45fa40)))
	{
		del_items(0x45fa40);
		add_func(0x45fa40,BADADDR);
	}
	set_name(0x45fac0,"type..eq.runtime.modulehash", 0x800);
	if (!is_code(get_flags(0x45fac0)))
	{
		del_items(0x45fac0);
		add_func(0x45fac0,BADADDR);
	}
	set_name(0x45fba0,"type..eq.runtime.stackScanState", 0x800);
	if (!is_code(get_flags(0x45fba0)))
	{
		del_items(0x45fba0);
		add_func(0x45fba0,BADADDR);
	}
	set_name(0x45fc40,"type..eq.runtime.gcSweepBuf", 0x800);
	if (!is_code(get_flags(0x45fc40)))
	{
		del_items(0x45fc40);
		add_func(0x45fc40,BADADDR);
	}
	set_name(0x45fca0,"type..eq.[2]runtime.gcSweepBuf", 0x800);
	if (!is_code(get_flags(0x45fca0)))
	{
		del_items(0x45fca0);
		add_func(0x45fca0,BADADDR);
	}
	set_name(0x45fd30,"type..eq.runtime.arenaHint", 0x800);
	if (!is_code(get_flags(0x45fd30)))
	{
		del_items(0x45fd30);
		add_func(0x45fd30,BADADDR);
	}
	set_name(0x45fd60,"type..eq.runtime.mcentral", 0x800);
	if (!is_code(get_flags(0x45fd60)))
	{
		del_items(0x45fd60);
		add_func(0x45fd60,BADADDR);
	}
	set_name(0x45fde0,"type..eq.struct { runtime.mcentral runtime.mcentral; runtime.pad [8]uint8 }", 0x800);
	if (!is_code(get_flags(0x45fde0)))
	{
		del_items(0x45fde0);
		add_func(0x45fde0,BADADDR);
	}
	set_name(0x45fe60,"type..eq.[134]struct { runtime.mcentral runtime.mcentral; runtime.pad [8]uint8 }", 0x800);
	if (!is_code(get_flags(0x45fe60)))
	{
		del_items(0x45fe60);
		add_func(0x45fe60,BADADDR);
	}
	set_name(0x45fef0,"type..eq.runtime.specialfinalizer", 0x800);
	if (!is_code(get_flags(0x45fef0)))
	{
		del_items(0x45fef0);
		add_func(0x45fef0,BADADDR);
	}
	set_name(0x45ff90,"type..eq.runtime.net_op", 0x800);
	if (!is_code(get_flags(0x45ff90)))
	{
		del_items(0x45ff90);
		add_func(0x45ff90,BADADDR);
	}
	set_name(0x45fff0,"type..eq.runtime.overlappedEntry", 0x800);
	if (!is_code(get_flags(0x45fff0)))
	{
		del_items(0x45fff0);
		add_func(0x45fff0,BADADDR);
	}
	set_name(0x460050,"type..eq.[64]runtime.overlappedEntry", 0x800);
	if (!is_code(get_flags(0x460050)))
	{
		del_items(0x460050);
		add_func(0x460050,BADADDR);
	}
	set_name(0x4600c0,"type..eq.runtime.rwmutex", 0x800);
	if (!is_code(get_flags(0x4600c0)))
	{
		del_items(0x4600c0);
		add_func(0x4600c0,BADADDR);
	}
	set_name(0x460160,"type..eq.[2]string", 0x800);
	if (!is_code(get_flags(0x460160)))
	{
		del_items(0x460160);
		add_func(0x460160,BADADDR);
	}
	set_name(0x460220,"type..eq.[3]string", 0x800);
	if (!is_code(get_flags(0x460220)))
	{
		del_items(0x460220);
		add_func(0x460220,BADADDR);
	}
	set_name(0x4602e0,"type..eq.[4]string", 0x800);
	if (!is_code(get_flags(0x4602e0)))
	{
		del_items(0x4602e0);
		add_func(0x4602e0,BADADDR);
	}
	set_name(0x4603a0,"type..eq.[5]string", 0x800);
	if (!is_code(get_flags(0x4603a0)))
	{
		del_items(0x4603a0);
		add_func(0x4603a0,BADADDR);
	}
	set_name(0x460460,"type..eq.struct { runtime.lpFileName *uint16; runtime.hFile uintptr; runtime.flags uint32 }", 0x800);
	if (!is_code(get_flags(0x460460)))
	{
		del_items(0x460460);
		add_func(0x460460,BADADDR);
	}
	set_name(0x4604c0,"runtime.(*itabTableType).add-fm", 0x800);
	if (!is_code(get_flags(0x4604c0)))
	{
		del_items(0x4604c0);
		add_func(0x4604c0,BADADDR);
	}
	set_name(0x460510,"type..eq.runtime.Frame", 0x800);
	if (!is_code(get_flags(0x460510)))
	{
		del_items(0x460510);
		add_func(0x460510,BADADDR);
	}
	set_name(0x460630,"type..eq.[2]runtime.Frame", 0x800);
	if (!is_code(get_flags(0x460630)))
	{
		del_items(0x460630);
		add_func(0x460630,BADADDR);
	}
	set_name(0x4606d0,"type..eq.runtime.TypeAssertionError", 0x800);
	if (!is_code(get_flags(0x4606d0)))
	{
		del_items(0x4606d0);
		add_func(0x4606d0,BADADDR);
	}
	set_name(0x460780,"type..eq.runtime.boundsError", 0x800);
	if (!is_code(get_flags(0x460780)))
	{
		del_items(0x460780);
		add_func(0x460780,BADADDR);
	}
	set_name(0x4607e0,"runtime.(*boundsError).Error", 0x800);
	if (!is_code(get_flags(0x4607e0)))
	{
		del_items(0x4607e0);
		add_func(0x4607e0,BADADDR);
	}
	set_name(0x460880,"type..eq.runtime.wincallbackcontext", 0x800);
	if (!is_code(get_flags(0x460880)))
	{
		del_items(0x460880);
		add_func(0x460880,BADADDR);
	}
	set_name(0x4608e0,"type..eq.runtime.dbgVar", 0x800);
	if (!is_code(get_flags(0x4608e0)))
	{
		del_items(0x4608e0);
		add_func(0x4608e0,BADADDR);
	}
	set_name(0x460970,"runtime.(*errorString).Error", 0x800);
	if (!is_code(get_flags(0x460970)))
	{
		del_items(0x460970);
		add_func(0x460970,BADADDR);
	}
	set_name(0x460a20,"type..eq.runtime.finblock", 0x800);
	if (!is_code(get_flags(0x460a20)))
	{
		del_items(0x460a20);
		add_func(0x460a20,BADADDR);
	}
	set_name(0x460ac0,"type..eq.runtime.forcegcstate", 0x800);
	if (!is_code(get_flags(0x460ac0)))
	{
		del_items(0x460ac0);
		add_func(0x460ac0,BADADDR);
	}
	set_name(0x460b20,"type..eq.runtime.funcinl", 0x800);
	if (!is_code(get_flags(0x460b20)))
	{
		del_items(0x460b20);
		add_func(0x460b20,BADADDR);
	}
	set_name(0x460c20,"type..eq.runtime.gcControllerState", 0x800);
	if (!is_code(get_flags(0x460c20)))
	{
		del_items(0x460c20);
		add_func(0x460c20,BADADDR);
	}
	set_name(0x460cd0,"type..eq.runtime.hiter", 0x800);
	if (!is_code(get_flags(0x460cd0)))
	{
		del_items(0x460cd0);
		add_func(0x460cd0,BADADDR);
	}
	set_name(0x460d60,"type..eq.struct { runtime.size uint32; runtime.nmalloc uint64; runtime.nfree uint64 }", 0x800);
	if (!is_code(get_flags(0x460d60)))
	{
		del_items(0x460d60);
		add_func(0x460d60,BADADDR);
	}
	set_name(0x460d90,"type..eq.[67]struct { runtime.size uint32; runtime.nmalloc uint64; runtime.nfree uint64 }", 0x800);
	if (!is_code(get_flags(0x460d90)))
	{
		del_items(0x460d90);
		add_func(0x460d90,BADADDR);
	}
	set_name(0x460de0,"type..eq.runtime.mstats", 0x800);
	if (!is_code(get_flags(0x460de0)))
	{
		del_items(0x460de0);
		add_func(0x460de0,BADADDR);
	}
	set_name(0x460f80,"runtime.(*plainError).Error", 0x800);
	if (!is_code(get_flags(0x460f80)))
	{
		del_items(0x460f80);
		add_func(0x460f80,BADADDR);
	}
	set_name(0x460fe0,"type..eq.struct { runtime.user bool; runtime.runnable runtime.gQueue; runtime.n int32 }", 0x800);
	if (!is_code(get_flags(0x460fe0)))
	{
		del_items(0x460fe0);
		add_func(0x460fe0,BADADDR);
	}
	set_name(0x461020,"type..eq.struct { runtime.lock runtime.mutex; runtime.stack runtime.gList; runtime.noStack runtime.gList; runtime.n int32 }", 0x800);
	if (!is_code(get_flags(0x461020)))
	{
		del_items(0x461020);
		add_func(0x461020,BADADDR);
	}
	set_name(0x461080,"type..eq.runtime.semaRoot", 0x800);
	if (!is_code(get_flags(0x461080)))
	{
		del_items(0x461080);
		add_func(0x461080,BADADDR);
	}
	set_name(0x4610e0,"type..eq.runtime.sweepdata", 0x800);
	if (!is_code(get_flags(0x4610e0)))
	{
		del_items(0x4610e0);
		add_func(0x4610e0,BADADDR);
	}
	set_name(0x461160,"type..eq.runtime.traceStackTable", 0x800);
	if (!is_code(get_flags(0x461160)))
	{
		del_items(0x461160);
		add_func(0x461160,BADADDR);
	}
	set_name(0x461200,"type..eq.[10]string", 0x800);
	if (!is_code(get_flags(0x461200)))
	{
		del_items(0x461200);
		add_func(0x461200,BADADDR);
	}
	set_name(0x4612c0,"type..eq.[18]runtime.dbgVar", 0x800);
	if (!is_code(get_flags(0x4612c0)))
	{
		del_items(0x4612c0);
		add_func(0x4612c0,BADADDR);
	}
	set_name(0x4613a0,"type..eq.struct { runtime.root runtime.semaRoot; runtime.pad [40]uint8 }", 0x800);
	if (!is_code(get_flags(0x4613a0)))
	{
		del_items(0x4613a0);
		add_func(0x4613a0,BADADDR);
	}
	set_name(0x461430,"type..eq.[251]struct { runtime.root runtime.semaRoot; runtime.pad [40]uint8 }", 0x800);
	if (!is_code(get_flags(0x461430)))
	{
		del_items(0x461430);
		add_func(0x461430,BADADDR);
	}
	set_name(0x4614c0,"type..eq.[26]string", 0x800);
	if (!is_code(get_flags(0x4614c0)))
	{
		del_items(0x4614c0);
		add_func(0x4614c0,BADADDR);
	}
	set_name(0x461580,"type..eq.struct { runtime.item runtime.stackpoolItem; _ [40]uint8 }", 0x800);
	if (!is_code(get_flags(0x461580)))
	{
		del_items(0x461580);
		add_func(0x461580,BADADDR);
	}
	set_name(0x4615c0,"type..eq.[2]struct { runtime.item runtime.stackpoolItem; _ [40]uint8 }", 0x800);
	if (!is_code(get_flags(0x4615c0)))
	{
		del_items(0x4615c0);
		add_func(0x4615c0,BADADDR);
	}
	set_name(0x461620,"type..eq.[33]float64", 0x800);
	if (!is_code(get_flags(0x461620)))
	{
		del_items(0x461620);
		add_func(0x461620,BADADDR);
	}
	set_name(0x461660,"type..eq.[8]string", 0x800);
	if (!is_code(get_flags(0x461660)))
	{
		del_items(0x461660);
		add_func(0x461660,BADADDR);
	}
	set_name(0x461720,"type..eq.struct { runtime.cycle uint32; runtime.flushed bool }", 0x800);
	if (!is_code(get_flags(0x461720)))
	{
		del_items(0x461720);
		add_func(0x461720,BADADDR);
	}
	set_name(0x461750,"type..eq.struct { runtime.enabled bool; runtime.pad [3]uint8; runtime.needed bool; runtime.cgo bool; runtime.alignme uint64 }", 0x800);
	if (!is_code(get_flags(0x461750)))
	{
		del_items(0x461750);
		add_func(0x461750,BADADDR);
	}
	set_name(0x4617d0,"type..eq.struct { runtime.full runtime.lfstack; runtime.empty runtime.lfstack; runtime.pad0 internal/cpu.CacheLinePad; runtime.wbufSpans struct { runtime.lock runtime.mutex; runtime.free runtime.mSpanList; runtime.busy runtime.mSpanList }; _ uint32; runtime.bytesMarked uint64; runtime.markrootNext uint32; runtime.markrootJobs uint32; runtime.nproc uint32; runtime.tstart int64; runtime.nwait uint32; runtime.ndone uint32; runtime.nFlushCacheRoots int; runtime.nDataRoots int; runtime.nBSSRoots int; runtime.nS", 0x800);
	if (!is_code(get_flags(0x4617d0)))
	{
		del_items(0x4617d0);
		add_func(0x4617d0,BADADDR);
	}
	set_name(0x4619a0,"type..eq.struct { runtime.lock runtime.mutex; runtime.g *runtime.g; runtime.parked bool; runtime.timer *runtime.timer }", 0x800);
	if (!is_code(get_flags(0x4619a0)))
	{
		del_items(0x4619a0);
		add_func(0x4619a0,BADADDR);
	}
	set_name(0x461a20,"type..eq.struct { runtime.lock runtime.mutex; runtime.newm runtime.muintptr; runtime.waiting bool; runtime.wake runtime.note; runtime.haveTemplateThread uint32 }", 0x800);
	if (!is_code(get_flags(0x461a20)))
	{
		del_items(0x461a20);
		add_func(0x461a20,BADADDR);
	}
	set_name(0x461ab0,"type..eq.struct { runtime.note runtime.note; runtime.mask [3]uint32; runtime.wanted [3]uint32; runtime.ignored [3]uint32; runtime.recv [3]uint32; runtime.state uint32; runtime.delivering uint32; runtime.inuse bool }", 0x800);
	if (!is_code(get_flags(0x461ab0)))
	{
		del_items(0x461ab0);
		add_func(0x461ab0,BADADDR);
	}
	set_name(0x461b10,"runtime.callbackasm", 0x800);
	if (!is_code(get_flags(0x461b10)))
	{
		del_items(0x461b10);
		add_func(0x461b10,BADADDR);
	}
	set_name(0x464220,"sync/atomic.(*Value).Store", 0x800);
	if (!is_code(get_flags(0x464220)))
	{
		del_items(0x464220);
		add_func(0x464220,BADADDR);
	}
	set_name(0x464360,"sync/atomic.CompareAndSwapUintptr", 0x800);
	if (!is_code(get_flags(0x464360)))
	{
		del_items(0x464360);
		add_func(0x464360,BADADDR);
	}
	set_name(0x464370,"sync/atomic.StoreUint32", 0x800);
	if (!is_code(get_flags(0x464370)))
	{
		del_items(0x464370);
		add_func(0x464370,BADADDR);
	}
	set_name(0x464380,"sync/atomic.StoreUintptr", 0x800);
	if (!is_code(get_flags(0x464380)))
	{
		del_items(0x464380);
		add_func(0x464380,BADADDR);
	}
	set_name(0x464390,"internal/reflectlite.name.tagLen", 0x800);
	if (!is_code(get_flags(0x464390)))
	{
		del_items(0x464390);
		add_func(0x464390,BADADDR);
	}
	set_name(0x4643e0,"internal/reflectlite.name.tag", 0x800);
	if (!is_code(get_flags(0x4643e0)))
	{
		del_items(0x4643e0);
		add_func(0x4643e0,BADADDR);
	}
	set_name(0x464470,"internal/reflectlite.name.pkgPath", 0x800);
	if (!is_code(get_flags(0x464470)))
	{
		del_items(0x464470);
		add_func(0x464470,BADADDR);
	}
	set_name(0x464580,"internal/reflectlite.(*rtype).uncommon", 0x800);
	if (!is_code(get_flags(0x464580)))
	{
		del_items(0x464580);
		add_func(0x464580,BADADDR);
	}
	set_name(0x464640,"internal/reflectlite.(*rtype).String", 0x800);
	if (!is_code(get_flags(0x464640)))
	{
		del_items(0x464640);
		add_func(0x464640,BADADDR);
	}
	set_name(0x464720,"internal/reflectlite.(*rtype).Size", 0x800);
	if (!is_code(get_flags(0x464720)))
	{
		del_items(0x464720);
		add_func(0x464720,BADADDR);
	}
	set_name(0x464730,"internal/reflectlite.(*rtype).Kind", 0x800);
	if (!is_code(get_flags(0x464730)))
	{
		del_items(0x464730);
		add_func(0x464730,BADADDR);
	}
	set_name(0x464750,"internal/reflectlite.(*rtype).common", 0x800);
	if (!is_code(get_flags(0x464750)))
	{
		del_items(0x464750);
		add_func(0x464750,BADADDR);
	}
	set_name(0x464760,"internal/reflectlite.(*rtype).exportedMethods", 0x800);
	if (!is_code(get_flags(0x464760)))
	{
		del_items(0x464760);
		add_func(0x464760,BADADDR);
	}
	set_name(0x464810,"internal/reflectlite.(*rtype).NumMethod", 0x800);
	if (!is_code(get_flags(0x464810)))
	{
		del_items(0x464810);
		add_func(0x464810,BADADDR);
	}
	set_name(0x464880,"internal/reflectlite.(*rtype).PkgPath", 0x800);
	if (!is_code(get_flags(0x464880)))
	{
		del_items(0x464880);
		add_func(0x464880,BADADDR);
	}
	set_name(0x464960,"internal/reflectlite.(*rtype).Name", 0x800);
	if (!is_code(get_flags(0x464960)))
	{
		del_items(0x464960);
		add_func(0x464960,BADADDR);
	}
	set_name(0x464a20,"internal/reflectlite.(*rtype).Elem", 0x800);
	if (!is_code(get_flags(0x464a20)))
	{
		del_items(0x464a20);
		add_func(0x464a20,BADADDR);
	}
	set_name(0x464b80,"internal/reflectlite.(*rtype).In", 0x800);
	if (!is_code(get_flags(0x464b80)))
	{
		del_items(0x464b80);
		add_func(0x464b80,BADADDR);
	}
	set_name(0x464c60,"internal/reflectlite.(*rtype).Len", 0x800);
	if (!is_code(get_flags(0x464c60)))
	{
		del_items(0x464c60);
		add_func(0x464c60,BADADDR);
	}
	set_name(0x464cd0,"internal/reflectlite.(*rtype).NumField", 0x800);
	if (!is_code(get_flags(0x464cd0)))
	{
		del_items(0x464cd0);
		add_func(0x464cd0,BADADDR);
	}
	set_name(0x464d40,"internal/reflectlite.(*rtype).NumIn", 0x800);
	if (!is_code(get_flags(0x464d40)))
	{
		del_items(0x464d40);
		add_func(0x464d40,BADADDR);
	}
	set_name(0x464db0,"internal/reflectlite.(*rtype).NumOut", 0x800);
	if (!is_code(get_flags(0x464db0)))
	{
		del_items(0x464db0);
		add_func(0x464db0,BADADDR);
	}
	set_name(0x464e50,"internal/reflectlite.(*rtype).Out", 0x800);
	if (!is_code(get_flags(0x464e50)))
	{
		del_items(0x464e50);
		add_func(0x464e50,BADADDR);
	}
	set_name(0x464f50,"internal/reflectlite.TypeOf", 0x800);
	if (!is_code(get_flags(0x464f50)))
	{
		del_items(0x464f50);
		add_func(0x464f50,BADADDR);
	}
	set_name(0x464f80,"internal/reflectlite.(*rtype).Implements", 0x800);
	if (!is_code(get_flags(0x464f80)))
	{
		del_items(0x464f80);
		add_func(0x464f80,BADADDR);
	}
	set_name(0x465070,"internal/reflectlite.(*rtype).AssignableTo", 0x800);
	if (!is_code(get_flags(0x465070)))
	{
		del_items(0x465070);
		add_func(0x465070,BADADDR);
	}
	set_name(0x465150,"internal/reflectlite.(*rtype).Comparable", 0x800);
	if (!is_code(get_flags(0x465150)))
	{
		del_items(0x465150);
		add_func(0x465150,BADADDR);
	}
	set_name(0x465160,"internal/reflectlite.implements", 0x800);
	if (!is_code(get_flags(0x465160)))
	{
		del_items(0x465160);
		add_func(0x465160,BADADDR);
	}
	set_name(0x4659f0,"internal/reflectlite.directlyAssignable", 0x800);
	if (!is_code(get_flags(0x4659f0)))
	{
		del_items(0x4659f0);
		add_func(0x4659f0,BADADDR);
	}
	set_name(0x465aa0,"internal/reflectlite.haveIdenticalType", 0x800);
	if (!is_code(get_flags(0x465aa0)))
	{
		del_items(0x465aa0);
		add_func(0x465aa0,BADADDR);
	}
	set_name(0x465c50,"internal/reflectlite.haveIdenticalUnderlyingType", 0x800);
	if (!is_code(get_flags(0x465c50)))
	{
		del_items(0x465c50);
		add_func(0x465c50,BADADDR);
	}
	set_name(0x4666f0,"type..eq.internal/reflectlite.uncommonType", 0x800);
	if (!is_code(get_flags(0x4666f0)))
	{
		del_items(0x4666f0);
		add_func(0x4666f0,BADADDR);
	}
	set_name(0x466750,"errors.New", 0x800);
	if (!is_code(get_flags(0x466750)))
	{
		del_items(0x466750);
		add_func(0x466750,BADADDR);
	}
	set_name(0x4667e0,"errors.(*errorString).Error", 0x800);
	if (!is_code(get_flags(0x4667e0)))
	{
		del_items(0x4667e0);
		add_func(0x4667e0,BADADDR);
	}
	set_name(0x466800,"errors.init", 0x800);
	if (!is_code(get_flags(0x466800)))
	{
		del_items(0x466800);
		add_func(0x466800,BADADDR);
	}
	set_name(0x4668a0,"math.init", 0x800);
	if (!is_code(get_flags(0x4668a0)))
	{
		del_items(0x4668a0);
		add_func(0x4668a0,BADADDR);
	}
	set_name(0x4668c0,"unicode/utf8.DecodeRune", 0x800);
	if (!is_code(get_flags(0x4668c0)))
	{
		del_items(0x4668c0);
		add_func(0x4668c0,BADADDR);
	}
	set_name(0x466ab0,"unicode/utf8.DecodeRuneInString", 0x800);
	if (!is_code(get_flags(0x466ab0)))
	{
		del_items(0x466ab0);
		add_func(0x466ab0,BADADDR);
	}
	set_name(0x466ca0,"unicode/utf8.EncodeRune", 0x800);
	if (!is_code(get_flags(0x466ca0)))
	{
		del_items(0x466ca0);
		add_func(0x466ca0,BADADDR);
	}
	set_name(0x466e10,"unicode/utf8.RuneCount", 0x800);
	if (!is_code(get_flags(0x466e10)))
	{
		del_items(0x466e10);
		add_func(0x466e10,BADADDR);
	}
	set_name(0x466f60,"unicode/utf8.RuneCountInString", 0x800);
	if (!is_code(get_flags(0x466f60)))
	{
		del_items(0x466f60);
		add_func(0x466f60,BADADDR);
	}
	set_name(0x4670b0,"strconv.trim", 0x800);
	if (!is_code(get_flags(0x4670b0)))
	{
		del_items(0x4670b0);
		add_func(0x4670b0,BADADDR);
	}
	set_name(0x467120,"strconv.(*decimal).Assign", 0x800);
	if (!is_code(get_flags(0x467120)))
	{
		del_items(0x467120);
		add_func(0x467120,BADADDR);
	}
	set_name(0x467240,"strconv.rightShift", 0x800);
	if (!is_code(get_flags(0x467240)))
	{
		del_items(0x467240);
		add_func(0x467240,BADADDR);
	}
	set_name(0x467410,"strconv.prefixIsLessThan", 0x800);
	if (!is_code(get_flags(0x467410)))
	{
		del_items(0x467410);
		add_func(0x467410,BADADDR);
	}
	set_name(0x467460,"strconv.leftShift", 0x800);
	if (!is_code(get_flags(0x467460)))
	{
		del_items(0x467460);
		add_func(0x467460,BADADDR);
	}
	set_name(0x4676a0,"strconv.(*decimal).Shift", 0x800);
	if (!is_code(get_flags(0x4676a0)))
	{
		del_items(0x4676a0);
		add_func(0x4676a0,BADADDR);
	}
	set_name(0x467780,"strconv.(*decimal).Round", 0x800);
	if (!is_code(get_flags(0x467780)))
	{
		del_items(0x467780);
		add_func(0x467780,BADADDR);
	}
	set_name(0x467860,"strconv.(*decimal).RoundUp", 0x800);
	if (!is_code(get_flags(0x467860)))
	{
		del_items(0x467860);
		add_func(0x467860,BADADDR);
	}
	set_name(0x467900,"strconv.(*extFloat).AssignComputeBounds", 0x800);
	if (!is_code(get_flags(0x467900)))
	{
		del_items(0x467900);
		add_func(0x467900,BADADDR);
	}
	set_name(0x467a20,"strconv.(*extFloat).frexp10", 0x800);
	if (!is_code(get_flags(0x467a20)))
	{
		del_items(0x467a20);
		add_func(0x467a20,BADADDR);
	}
	set_name(0x467b10,"strconv.frexp10Many", 0x800);
	if (!is_code(get_flags(0x467b10)))
	{
		del_items(0x467b10);
		add_func(0x467b10,BADADDR);
	}
	set_name(0x467bf0,"strconv.(*extFloat).FixedDecimal", 0x800);
	if (!is_code(get_flags(0x467bf0)))
	{
		del_items(0x467bf0);
		add_func(0x467bf0,BADADDR);
	}
	set_name(0x467fd0,"strconv.adjustLastDigitFixed", 0x800);
	if (!is_code(get_flags(0x467fd0)))
	{
		del_items(0x467fd0);
		add_func(0x467fd0,BADADDR);
	}
	set_name(0x468140,"strconv.(*extFloat).ShortestDecimal", 0x800);
	if (!is_code(get_flags(0x468140)))
	{
		del_items(0x468140);
		add_func(0x468140,BADADDR);
	}
	set_name(0x4686a0,"strconv.adjustLastDigit", 0x800);
	if (!is_code(get_flags(0x4686a0)))
	{
		del_items(0x4686a0);
		add_func(0x4686a0,BADADDR);
	}
	set_name(0x4687a0,"strconv.genericFtoa", 0x800);
	if (!is_code(get_flags(0x4687a0)))
	{
		del_items(0x4687a0);
		add_func(0x4687a0,BADADDR);
	}
	set_name(0x4690d0,"strconv.bigFtoa", 0x800);
	if (!is_code(get_flags(0x4690d0)))
	{
		del_items(0x4690d0);
		add_func(0x4690d0,BADADDR);
	}
	set_name(0x4694e0,"strconv.formatDigits", 0x800);
	if (!is_code(get_flags(0x4694e0)))
	{
		del_items(0x4694e0);
		add_func(0x4694e0,BADADDR);
	}
	set_name(0x4698e0,"strconv.roundShortest", 0x800);
	if (!is_code(get_flags(0x4698e0)))
	{
		del_items(0x4698e0);
		add_func(0x4698e0,BADADDR);
	}
	set_name(0x469d80,"strconv.fmtE", 0x800);
	if (!is_code(get_flags(0x469d80)))
	{
		del_items(0x469d80);
		add_func(0x469d80,BADADDR);
	}
	set_name(0x46a440,"strconv.fmtF", 0x800);
	if (!is_code(get_flags(0x46a440)))
	{
		del_items(0x46a440);
		add_func(0x46a440,BADADDR);
	}
	set_name(0x46a850,"strconv.fmtB", 0x800);
	if (!is_code(get_flags(0x46a850)))
	{
		del_items(0x46a850);
		add_func(0x46a850,BADADDR);
	}
	set_name(0x46aaa0,"strconv.fmtX", 0x800);
	if (!is_code(get_flags(0x46aaa0)))
	{
		del_items(0x46aaa0);
		add_func(0x46aaa0,BADADDR);
	}
	set_name(0x46b430,"strconv.FormatInt", 0x800);
	if (!is_code(get_flags(0x46b430)))
	{
		del_items(0x46b430);
		add_func(0x46b430,BADADDR);
	}
	set_name(0x46b570,"strconv.formatBits", 0x800);
	if (!is_code(get_flags(0x46b570)))
	{
		del_items(0x46b570);
		add_func(0x46b570,BADADDR);
	}
	set_name(0x46baf0,"strconv.appendQuotedWith", 0x800);
	if (!is_code(get_flags(0x46baf0)))
	{
		del_items(0x46baf0);
		add_func(0x46baf0,BADADDR);
	}
	set_name(0x46bfa0,"strconv.appendQuotedRuneWith", 0x800);
	if (!is_code(get_flags(0x46bfa0)))
	{
		del_items(0x46bfa0);
		add_func(0x46bfa0,BADADDR);
	}
	set_name(0x46c130,"strconv.appendEscapedRune", 0x800);
	if (!is_code(get_flags(0x46c130)))
	{
		del_items(0x46c130);
		add_func(0x46c130,BADADDR);
	}
	set_name(0x46cc80,"strconv.CanBackquote", 0x800);
	if (!is_code(get_flags(0x46cc80)))
	{
		del_items(0x46cc80);
		add_func(0x46cc80,BADADDR);
	}
	set_name(0x46cd90,"strconv.bsearch16", 0x800);
	if (!is_code(get_flags(0x46cd90)))
	{
		del_items(0x46cd90);
		add_func(0x46cd90,BADADDR);
	}
	set_name(0x46ce20,"strconv.bsearch32", 0x800);
	if (!is_code(get_flags(0x46ce20)))
	{
		del_items(0x46ce20);
		add_func(0x46ce20,BADADDR);
	}
	set_name(0x46cea0,"strconv.IsPrint", 0x800);
	if (!is_code(get_flags(0x46cea0)))
	{
		del_items(0x46cea0);
		add_func(0x46cea0,BADADDR);
	}
	set_name(0x46d1c0,"strconv.isInGraphicList", 0x800);
	if (!is_code(get_flags(0x46d1c0)))
	{
		del_items(0x46d1c0);
		add_func(0x46d1c0,BADADDR);
	}
	set_name(0x46d280,"strconv.init", 0x800);
	if (!is_code(get_flags(0x46d280)))
	{
		del_items(0x46d280);
		add_func(0x46d280,BADADDR);
	}
	set_name(0x46d360,"type..eq.strconv.extFloat", 0x800);
	if (!is_code(get_flags(0x46d360)))
	{
		del_items(0x46d360);
		add_func(0x46d360,BADADDR);
	}
	set_name(0x46d3c0,"type..eq.strconv.leftCheat", 0x800);
	if (!is_code(get_flags(0x46d3c0)))
	{
		del_items(0x46d3c0);
		add_func(0x46d3c0,BADADDR);
	}
	set_name(0x46d440,"type..eq.[61]strconv.leftCheat", 0x800);
	if (!is_code(get_flags(0x46d440)))
	{
		del_items(0x46d440);
		add_func(0x46d440,BADADDR);
	}
	set_name(0x46d520,"type..eq.[87]strconv.extFloat", 0x800);
	if (!is_code(get_flags(0x46d520)))
	{
		del_items(0x46d520);
		add_func(0x46d520,BADADDR);
	}
	set_name(0x46d580,"sync.(*Map).Load", 0x800);
	if (!is_code(get_flags(0x46d580)))
	{
		del_items(0x46d580);
		add_func(0x46d580,BADADDR);
	}
	set_name(0x46d880,"sync.(*Map).Store", 0x800);
	if (!is_code(get_flags(0x46d880)))
	{
		del_items(0x46d880);
		add_func(0x46d880,BADADDR);
	}
	set_name(0x46de30,"sync.(*entry).tryStore", 0x800);
	if (!is_code(get_flags(0x46de30)))
	{
		del_items(0x46de30);
		add_func(0x46de30,BADADDR);
	}
	set_name(0x46deb0,"sync.(*Map).LoadOrStore", 0x800);
	if (!is_code(get_flags(0x46deb0)))
	{
		del_items(0x46deb0);
		add_func(0x46deb0,BADADDR);
	}
	set_name(0x46e570,"sync.(*entry).tryLoadOrStore", 0x800);
	if (!is_code(get_flags(0x46e570)))
	{
		del_items(0x46e570);
		add_func(0x46e570,BADADDR);
	}
	set_name(0x46e710,"sync.(*Map).missLocked", 0x800);
	if (!is_code(get_flags(0x46e710)))
	{
		del_items(0x46e710);
		add_func(0x46e710,BADADDR);
	}
	set_name(0x46e810,"sync.(*Map).dirtyLocked", 0x800);
	if (!is_code(get_flags(0x46e810)))
	{
		del_items(0x46e810);
		add_func(0x46e810,BADADDR);
	}
	set_name(0x46ea40,"sync.(*entry).tryExpungeLocked", 0x800);
	if (!is_code(get_flags(0x46ea40)))
	{
		del_items(0x46ea40);
		add_func(0x46ea40,BADADDR);
	}
	set_name(0x46eae0,"sync.(*Mutex).lockSlow", 0x800);
	if (!is_code(get_flags(0x46eae0)))
	{
		del_items(0x46eae0);
		add_func(0x46eae0,BADADDR);
	}
	set_name(0x46eda0,"sync.(*Mutex).Unlock", 0x800);
	if (!is_code(get_flags(0x46eda0)))
	{
		del_items(0x46eda0);
		add_func(0x46eda0,BADADDR);
	}
	set_name(0x46ee00,"sync.(*Mutex).unlockSlow", 0x800);
	if (!is_code(get_flags(0x46ee00)))
	{
		del_items(0x46ee00);
		add_func(0x46ee00,BADADDR);
	}
	set_name(0x46eef0,"sync.(*Once).doSlow", 0x800);
	if (!is_code(get_flags(0x46eef0)))
	{
		del_items(0x46eef0);
		add_func(0x46eef0,BADADDR);
	}
	set_name(0x46f020,"sync.(*Pool).Put", 0x800);
	if (!is_code(get_flags(0x46f020)))
	{
		del_items(0x46f020);
		add_func(0x46f020,BADADDR);
	}
	set_name(0x46f0f0,"sync.(*Pool).Get", 0x800);
	if (!is_code(get_flags(0x46f0f0)))
	{
		del_items(0x46f0f0);
		add_func(0x46f0f0,BADADDR);
	}
	set_name(0x46f220,"sync.(*Pool).getSlow", 0x800);
	if (!is_code(get_flags(0x46f220)))
	{
		del_items(0x46f220);
		add_func(0x46f220,BADADDR);
	}
	set_name(0x46f410,"sync.(*Pool).pin", 0x800);
	if (!is_code(get_flags(0x46f410)))
	{
		del_items(0x46f410);
		add_func(0x46f410,BADADDR);
	}
	set_name(0x46f4a0,"sync.(*Pool).pinSlow", 0x800);
	if (!is_code(get_flags(0x46f4a0)))
	{
		del_items(0x46f4a0);
		add_func(0x46f4a0,BADADDR);
	}
	set_name(0x46f750,"sync.poolCleanup", 0x800);
	if (!is_code(get_flags(0x46f750)))
	{
		del_items(0x46f750);
		add_func(0x46f750,BADADDR);
	}
	set_name(0x46f8d0,"sync.init.0", 0x800);
	if (!is_code(get_flags(0x46f8d0)))
	{
		del_items(0x46f8d0);
		add_func(0x46f8d0,BADADDR);
	}
	set_name(0x46f920,"sync.(*poolDequeue).pushHead", 0x800);
	if (!is_code(get_flags(0x46f920)))
	{
		del_items(0x46f920);
		add_func(0x46f920,BADADDR);
	}
	set_name(0x46fa20,"sync.(*poolDequeue).popHead", 0x800);
	if (!is_code(get_flags(0x46fa20)))
	{
		del_items(0x46fa20);
		add_func(0x46fa20,BADADDR);
	}
	set_name(0x46fb30,"sync.(*poolDequeue).popTail", 0x800);
	if (!is_code(get_flags(0x46fb30)))
	{
		del_items(0x46fb30);
		add_func(0x46fb30,BADADDR);
	}
	set_name(0x46fc60,"sync.(*poolChain).pushHead", 0x800);
	if (!is_code(get_flags(0x46fc60)))
	{
		del_items(0x46fc60);
		add_func(0x46fc60,BADADDR);
	}
	set_name(0x46fea0,"sync.(*poolChain).popHead", 0x800);
	if (!is_code(get_flags(0x46fea0)))
	{
		del_items(0x46fea0);
		add_func(0x46fea0,BADADDR);
	}
	set_name(0x46ff40,"sync.(*poolChain).popTail", 0x800);
	if (!is_code(get_flags(0x46ff40)))
	{
		del_items(0x46ff40);
		add_func(0x46ff40,BADADDR);
	}
	set_name(0x470050,"sync.init.1", 0x800);
	if (!is_code(get_flags(0x470050)))
	{
		del_items(0x470050);
		add_func(0x470050,BADADDR);
	}
	set_name(0x4700a0,"sync.init", 0x800);
	if (!is_code(get_flags(0x4700a0)))
	{
		del_items(0x4700a0);
		add_func(0x4700a0,BADADDR);
	}
	set_name(0x470110,"type..eq.sync.poolLocalInternal", 0x800);
	if (!is_code(get_flags(0x470110)))
	{
		del_items(0x470110);
		add_func(0x470110,BADADDR);
	}
	set_name(0x4701b0,"type..eq.sync.poolLocal", 0x800);
	if (!is_code(get_flags(0x4701b0)))
	{
		del_items(0x4701b0);
		add_func(0x4701b0,BADADDR);
	}
	set_name(0x470280,"unicode.init", 0x800);
	if (!is_code(get_flags(0x470280)))
	{
		del_items(0x470280);
		add_func(0x470280,BADADDR);
	}
	set_name(0x475250,"reflect.makeMethodValue", 0x800);
	if (!is_code(get_flags(0x475250)))
	{
		del_items(0x475250);
		add_func(0x475250,BADADDR);
	}
	set_name(0x4754d0,"reflect.name.tagLen", 0x800);
	if (!is_code(get_flags(0x4754d0)))
	{
		del_items(0x4754d0);
		add_func(0x4754d0,BADADDR);
	}
	set_name(0x475520,"reflect.name.tag", 0x800);
	if (!is_code(get_flags(0x475520)))
	{
		del_items(0x475520);
		add_func(0x475520,BADADDR);
	}
	set_name(0x4755b0,"reflect.name.pkgPath", 0x800);
	if (!is_code(get_flags(0x4755b0)))
	{
		del_items(0x4755b0);
		add_func(0x4755b0,BADADDR);
	}
	set_name(0x4756c0,"reflect.newName", 0x800);
	if (!is_code(get_flags(0x4756c0)))
	{
		del_items(0x4756c0);
		add_func(0x4756c0,BADADDR);
	}
	set_name(0x4759c0,"reflect.Kind.String", 0x800);
	if (!is_code(get_flags(0x4759c0)))
	{
		del_items(0x4759c0);
		add_func(0x4759c0,BADADDR);
	}
	set_name(0x475aa0,"reflect.(*rtype).uncommon", 0x800);
	if (!is_code(get_flags(0x475aa0)))
	{
		del_items(0x475aa0);
		add_func(0x475aa0,BADADDR);
	}
	set_name(0x475b60,"reflect.(*rtype).String", 0x800);
	if (!is_code(get_flags(0x475b60)))
	{
		del_items(0x475b60);
		add_func(0x475b60,BADADDR);
	}
	set_name(0x475c40,"reflect.(*rtype).Size", 0x800);
	if (!is_code(get_flags(0x475c40)))
	{
		del_items(0x475c40);
		add_func(0x475c40,BADADDR);
	}
	set_name(0x475c50,"reflect.(*rtype).Bits", 0x800);
	if (!is_code(get_flags(0x475c50)))
	{
		del_items(0x475c50);
		add_func(0x475c50,BADADDR);
	}
	set_name(0x475d50,"reflect.(*rtype).Align", 0x800);
	if (!is_code(get_flags(0x475d50)))
	{
		del_items(0x475d50);
		add_func(0x475d50,BADADDR);
	}
	set_name(0x475d60,"reflect.(*rtype).FieldAlign", 0x800);
	if (!is_code(get_flags(0x475d60)))
	{
		del_items(0x475d60);
		add_func(0x475d60,BADADDR);
	}
	set_name(0x475d70,"reflect.(*rtype).Kind", 0x800);
	if (!is_code(get_flags(0x475d70)))
	{
		del_items(0x475d70);
		add_func(0x475d70,BADADDR);
	}
	set_name(0x475d90,"reflect.(*rtype).common", 0x800);
	if (!is_code(get_flags(0x475d90)))
	{
		del_items(0x475d90);
		add_func(0x475d90,BADADDR);
	}
	set_name(0x475da0,"reflect.(*rtype).exportedMethods", 0x800);
	if (!is_code(get_flags(0x475da0)))
	{
		del_items(0x475da0);
		add_func(0x475da0,BADADDR);
	}
	set_name(0x475e50,"reflect.(*rtype).NumMethod", 0x800);
	if (!is_code(get_flags(0x475e50)))
	{
		del_items(0x475e50);
		add_func(0x475e50,BADADDR);
	}
	set_name(0x475ec0,"reflect.(*rtype).Method", 0x800);
	if (!is_code(get_flags(0x475ec0)))
	{
		del_items(0x475ec0);
		add_func(0x475ec0,BADADDR);
	}
	set_name(0x476630,"reflect.(*rtype).MethodByName", 0x800);
	if (!is_code(get_flags(0x476630)))
	{
		del_items(0x476630);
		add_func(0x476630,BADADDR);
	}
	set_name(0x476920,"reflect.(*rtype).PkgPath", 0x800);
	if (!is_code(get_flags(0x476920)))
	{
		del_items(0x476920);
		add_func(0x476920,BADADDR);
	}
	set_name(0x476a00,"reflect.(*rtype).Name", 0x800);
	if (!is_code(get_flags(0x476a00)))
	{
		del_items(0x476a00);
		add_func(0x476a00,BADADDR);
	}
	set_name(0x476ac0,"reflect.(*rtype).ChanDir", 0x800);
	if (!is_code(get_flags(0x476ac0)))
	{
		del_items(0x476ac0);
		add_func(0x476ac0,BADADDR);
	}
	set_name(0x476b90,"reflect.(*rtype).IsVariadic", 0x800);
	if (!is_code(get_flags(0x476b90)))
	{
		del_items(0x476b90);
		add_func(0x476b90,BADADDR);
	}
	set_name(0x476c60,"reflect.(*rtype).Elem", 0x800);
	if (!is_code(get_flags(0x476c60)))
	{
		del_items(0x476c60);
		add_func(0x476c60,BADADDR);
	}
	set_name(0x476e10,"reflect.(*rtype).Field", 0x800);
	if (!is_code(get_flags(0x476e10)))
	{
		del_items(0x476e10);
		add_func(0x476e10,BADADDR);
	}
	set_name(0x476f50,"reflect.(*rtype).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x476f50)))
	{
		del_items(0x476f50);
		add_func(0x476f50,BADADDR);
	}
	set_name(0x4770c0,"reflect.(*rtype).FieldByName", 0x800);
	if (!is_code(get_flags(0x4770c0)))
	{
		del_items(0x4770c0);
		add_func(0x4770c0,BADADDR);
	}
	set_name(0x477260,"reflect.(*rtype).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x477260)))
	{
		del_items(0x477260);
		add_func(0x477260,BADADDR);
	}
	set_name(0x4773f0,"reflect.(*rtype).In", 0x800);
	if (!is_code(get_flags(0x4773f0)))
	{
		del_items(0x4773f0);
		add_func(0x4773f0,BADADDR);
	}
	set_name(0x477530,"reflect.(*rtype).Key", 0x800);
	if (!is_code(get_flags(0x477530)))
	{
		del_items(0x477530);
		add_func(0x477530,BADADDR);
	}
	set_name(0x477610,"reflect.(*rtype).Len", 0x800);
	if (!is_code(get_flags(0x477610)))
	{
		del_items(0x477610);
		add_func(0x477610,BADADDR);
	}
	set_name(0x4776e0,"reflect.(*rtype).NumField", 0x800);
	if (!is_code(get_flags(0x4776e0)))
	{
		del_items(0x4776e0);
		add_func(0x4776e0,BADADDR);
	}
	set_name(0x4777b0,"reflect.(*rtype).NumIn", 0x800);
	if (!is_code(get_flags(0x4777b0)))
	{
		del_items(0x4777b0);
		add_func(0x4777b0,BADADDR);
	}
	set_name(0x477880,"reflect.(*rtype).NumOut", 0x800);
	if (!is_code(get_flags(0x477880)))
	{
		del_items(0x477880);
		add_func(0x477880,BADADDR);
	}
	set_name(0x477980,"reflect.(*rtype).Out", 0x800);
	if (!is_code(get_flags(0x477980)))
	{
		del_items(0x477980);
		add_func(0x477980,BADADDR);
	}
	set_name(0x477ae0,"reflect.ChanDir.String", 0x800);
	if (!is_code(get_flags(0x477ae0)))
	{
		del_items(0x477ae0);
		add_func(0x477ae0,BADADDR);
	}
	set_name(0x477c00,"reflect.(*interfaceType).Method", 0x800);
	if (!is_code(get_flags(0x477c00)))
	{
		del_items(0x477c00);
		add_func(0x477c00,BADADDR);
	}
	set_name(0x477da0,"reflect.(*interfaceType).MethodByName", 0x800);
	if (!is_code(get_flags(0x477da0)))
	{
		del_items(0x477da0);
		add_func(0x477da0,BADADDR);
	}
	set_name(0x477f70,"reflect.(*structType).Field", 0x800);
	if (!is_code(get_flags(0x477f70)))
	{
		del_items(0x477f70);
		add_func(0x477f70,BADADDR);
	}
	set_name(0x478170,"reflect.(*structType).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x478170)))
	{
		del_items(0x478170);
		add_func(0x478170,BADADDR);
	}
	set_name(0x478370,"reflect.(*structType).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x478370)))
	{
		del_items(0x478370);
		add_func(0x478370,BADADDR);
	}
	set_name(0x478e40,"reflect.(*structType).FieldByName", 0x800);
	if (!is_code(get_flags(0x478e40)))
	{
		del_items(0x478e40);
		add_func(0x478e40,BADADDR);
	}
	set_name(0x479140,"reflect.TypeOf", 0x800);
	if (!is_code(get_flags(0x479140)))
	{
		del_items(0x479140);
		add_func(0x479140,BADADDR);
	}
	set_name(0x479170,"reflect.(*rtype).ptrTo", 0x800);
	if (!is_code(get_flags(0x479170)))
	{
		del_items(0x479170);
		add_func(0x479170,BADADDR);
	}
	set_name(0x479550,"reflect.fnv1", 0x800);
	if (!is_code(get_flags(0x479550)))
	{
		del_items(0x479550);
		add_func(0x479550,BADADDR);
	}
	set_name(0x479580,"reflect.(*rtype).Implements", 0x800);
	if (!is_code(get_flags(0x479580)))
	{
		del_items(0x479580);
		add_func(0x479580,BADADDR);
	}
	set_name(0x479670,"reflect.(*rtype).AssignableTo", 0x800);
	if (!is_code(get_flags(0x479670)))
	{
		del_items(0x479670);
		add_func(0x479670,BADADDR);
	}
	set_name(0x479750,"reflect.(*rtype).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x479750)))
	{
		del_items(0x479750);
		add_func(0x479750,BADADDR);
	}
	set_name(0x479810,"reflect.(*rtype).Comparable", 0x800);
	if (!is_code(get_flags(0x479810)))
	{
		del_items(0x479810);
		add_func(0x479810,BADADDR);
	}
	set_name(0x479820,"reflect.implements", 0x800);
	if (!is_code(get_flags(0x479820)))
	{
		del_items(0x479820);
		add_func(0x479820,BADADDR);
	}
	set_name(0x47a0b0,"reflect.specialChannelAssignability", 0x800);
	if (!is_code(get_flags(0x47a0b0)))
	{
		del_items(0x47a0b0);
		add_func(0x47a0b0,BADADDR);
	}
	set_name(0x47a1c0,"reflect.directlyAssignable", 0x800);
	if (!is_code(get_flags(0x47a1c0)))
	{
		del_items(0x47a1c0);
		add_func(0x47a1c0,BADADDR);
	}
	set_name(0x47a2b0,"reflect.haveIdenticalType", 0x800);
	if (!is_code(get_flags(0x47a2b0)))
	{
		del_items(0x47a2b0);
		add_func(0x47a2b0,BADADDR);
	}
	set_name(0x47a470,"reflect.haveIdenticalUnderlyingType", 0x800);
	if (!is_code(get_flags(0x47a470)))
	{
		del_items(0x47a470);
		add_func(0x47a470,BADADDR);
	}
	set_name(0x47ae80,"reflect.typesByString", 0x800);
	if (!is_code(get_flags(0x47ae80)))
	{
		del_items(0x47ae80);
		add_func(0x47ae80,BADADDR);
	}
	set_name(0x47b2b0,"reflect.FuncOf", 0x800);
	if (!is_code(get_flags(0x47b2b0)))
	{
		del_items(0x47b2b0);
		add_func(0x47b2b0,BADADDR);
	}
	set_name(0x47bee0,"reflect.funcStr", 0x800);
	if (!is_code(get_flags(0x47bee0)))
	{
		del_items(0x47bee0);
		add_func(0x47bee0,BADADDR);
	}
	set_name(0x47c750,"reflect.funcLayout", 0x800);
	if (!is_code(get_flags(0x47c750)))
	{
		del_items(0x47c750);
		add_func(0x47c750,BADADDR);
	}
	set_name(0x47d330,"reflect.addTypeBits", 0x800);
	if (!is_code(get_flags(0x47d330)))
	{
		del_items(0x47d330);
		add_func(0x47d330,BADADDR);
	}
	set_name(0x47d880,"reflect.packEface", 0x800);
	if (!is_code(get_flags(0x47d880)))
	{
		del_items(0x47d880);
		add_func(0x47d880,BADADDR);
	}
	set_name(0x47d980,"reflect.(*ValueError).Error", 0x800);
	if (!is_code(get_flags(0x47d980)))
	{
		del_items(0x47d980);
		add_func(0x47d980,BADADDR);
	}
	set_name(0x47db70,"reflect.methodName", 0x800);
	if (!is_code(get_flags(0x47db70)))
	{
		del_items(0x47db70);
		add_func(0x47db70,BADADDR);
	}
	set_name(0x47dc10,"reflect.flag.mustBeAssignableSlow", 0x800);
	if (!is_code(get_flags(0x47dc10)))
	{
		del_items(0x47dc10);
		add_func(0x47dc10,BADADDR);
	}
	set_name(0x47dde0,"reflect.Value.Bool", 0x800);
	if (!is_code(get_flags(0x47dde0)))
	{
		del_items(0x47dde0);
		add_func(0x47dde0,BADADDR);
	}
	set_name(0x47deb0,"reflect.Value.Bytes", 0x800);
	if (!is_code(get_flags(0x47deb0)))
	{
		del_items(0x47deb0);
		add_func(0x47deb0,BADADDR);
	}
	set_name(0x47dfe0,"reflect.Value.runes", 0x800);
	if (!is_code(get_flags(0x47dfe0)))
	{
		del_items(0x47dfe0);
		add_func(0x47dfe0,BADADDR);
	}
	set_name(0x47e110,"reflect.methodReceiver", 0x800);
	if (!is_code(get_flags(0x47e110)))
	{
		del_items(0x47e110);
		add_func(0x47e110,BADADDR);
	}
	set_name(0x47e4e0,"reflect.callMethod", 0x800);
	if (!is_code(get_flags(0x47e4e0)))
	{
		del_items(0x47e4e0);
		add_func(0x47e4e0,BADADDR);
	}
	set_name(0x47e8d0,"reflect.Value.Elem", 0x800);
	if (!is_code(get_flags(0x47e8d0)))
	{
		del_items(0x47e8d0);
		add_func(0x47e8d0,BADADDR);
	}
	set_name(0x47ea90,"reflect.Value.Field", 0x800);
	if (!is_code(get_flags(0x47ea90)))
	{
		del_items(0x47ea90);
		add_func(0x47ea90,BADADDR);
	}
	set_name(0x47ebd0,"reflect.Value.Index", 0x800);
	if (!is_code(get_flags(0x47ebd0)))
	{
		del_items(0x47ebd0);
		add_func(0x47ebd0,BADADDR);
	}
	set_name(0x47edf0,"reflect.valueInterface", 0x800);
	if (!is_code(get_flags(0x47edf0)))
	{
		del_items(0x47edf0);
		add_func(0x47edf0,BADADDR);
	}
	set_name(0x47efb0,"reflect.Value.Kind", 0x800);
	if (!is_code(get_flags(0x47efb0)))
	{
		del_items(0x47efb0);
		add_func(0x47efb0,BADADDR);
	}
	set_name(0x47efc0,"reflect.Value.Len", 0x800);
	if (!is_code(get_flags(0x47efc0)))
	{
		del_items(0x47efc0);
		add_func(0x47efc0,BADADDR);
	}
	set_name(0x47f190,"reflect.(*MapIter).Key", 0x800);
	if (!is_code(get_flags(0x47f190)))
	{
		del_items(0x47f190);
		add_func(0x47f190,BADADDR);
	}
	set_name(0x47f2c0,"reflect.(*MapIter).Value", 0x800);
	if (!is_code(get_flags(0x47f2c0)))
	{
		del_items(0x47f2c0);
		add_func(0x47f2c0,BADADDR);
	}
	set_name(0x47f3f0,"reflect.(*MapIter).Next", 0x800);
	if (!is_code(get_flags(0x47f3f0)))
	{
		del_items(0x47f3f0);
		add_func(0x47f3f0,BADADDR);
	}
	set_name(0x47f520,"reflect.Value.MapRange", 0x800);
	if (!is_code(get_flags(0x47f520)))
	{
		del_items(0x47f520);
		add_func(0x47f520,BADADDR);
	}
	set_name(0x47f650,"reflect.copyVal", 0x800);
	if (!is_code(get_flags(0x47f650)))
	{
		del_items(0x47f650);
		add_func(0x47f650,BADADDR);
	}
	set_name(0x47f710,"reflect.Value.NumMethod", 0x800);
	if (!is_code(get_flags(0x47f710)))
	{
		del_items(0x47f710);
		add_func(0x47f710,BADADDR);
	}
	set_name(0x47f7d0,"reflect.Value.NumField", 0x800);
	if (!is_code(get_flags(0x47f7d0)))
	{
		del_items(0x47f7d0);
		add_func(0x47f7d0,BADADDR);
	}
	set_name(0x47f8a0,"reflect.Value.Pointer", 0x800);
	if (!is_code(get_flags(0x47f8a0)))
	{
		del_items(0x47f8a0);
		add_func(0x47f8a0,BADADDR);
	}
	set_name(0x47fa60,"reflect.Value.SetBytes", 0x800);
	if (!is_code(get_flags(0x47fa60)))
	{
		del_items(0x47fa60);
		add_func(0x47fa60,BADADDR);
	}
	set_name(0x47fbd0,"reflect.Value.setRunes", 0x800);
	if (!is_code(get_flags(0x47fbd0)))
	{
		del_items(0x47fbd0);
		add_func(0x47fbd0,BADADDR);
	}
	set_name(0x47fd40,"reflect.Value.SetString", 0x800);
	if (!is_code(get_flags(0x47fd40)))
	{
		del_items(0x47fd40);
		add_func(0x47fd40,BADADDR);
	}
	set_name(0x47fe60,"reflect.Value.Slice", 0x800);
	if (!is_code(get_flags(0x47fe60)))
	{
		del_items(0x47fe60);
		add_func(0x47fe60,BADADDR);
	}
	set_name(0x480120,"reflect.Value.String", 0x800);
	if (!is_code(get_flags(0x480120)))
	{
		del_items(0x480120);
		add_func(0x480120,BADADDR);
	}
	set_name(0x480250,"reflect.Value.Type", 0x800);
	if (!is_code(get_flags(0x480250)))
	{
		del_items(0x480250);
		add_func(0x480250,BADADDR);
	}
	set_name(0x4803f0,"reflect.Zero", 0x800);
	if (!is_code(get_flags(0x4803f0)))
	{
		del_items(0x4803f0);
		add_func(0x4803f0,BADADDR);
	}
	set_name(0x4804f0,"reflect.New", 0x800);
	if (!is_code(get_flags(0x4804f0)))
	{
		del_items(0x4804f0);
		add_func(0x4804f0,BADADDR);
	}
	set_name(0x4805d0,"reflect.convertOp", 0x800);
	if (!is_code(get_flags(0x4805d0)))
	{
		del_items(0x4805d0);
		add_func(0x4805d0,BADADDR);
	}
	set_name(0x480b80,"reflect.makeInt", 0x800);
	if (!is_code(get_flags(0x480b80)))
	{
		del_items(0x480b80);
		add_func(0x480b80,BADADDR);
	}
	set_name(0x480c60,"reflect.makeFloat", 0x800);
	if (!is_code(get_flags(0x480c60)))
	{
		del_items(0x480c60);
		add_func(0x480c60,BADADDR);
	}
	set_name(0x480d20,"reflect.makeComplex", 0x800);
	if (!is_code(get_flags(0x480d20)))
	{
		del_items(0x480d20);
		add_func(0x480d20,BADADDR);
	}
	set_name(0x480e00,"reflect.makeString", 0x800);
	if (!is_code(get_flags(0x480e00)))
	{
		del_items(0x480e00);
		add_func(0x480e00,BADADDR);
	}
	set_name(0x480ef0,"reflect.makeBytes", 0x800);
	if (!is_code(get_flags(0x480ef0)))
	{
		del_items(0x480ef0);
		add_func(0x480ef0,BADADDR);
	}
	set_name(0x480ff0,"reflect.makeRunes", 0x800);
	if (!is_code(get_flags(0x480ff0)))
	{
		del_items(0x480ff0);
		add_func(0x480ff0,BADADDR);
	}
	set_name(0x4810f0,"reflect.cvtInt", 0x800);
	if (!is_code(get_flags(0x4810f0)))
	{
		del_items(0x4810f0);
		add_func(0x4810f0,BADADDR);
	}
	set_name(0x481250,"reflect.cvtUint", 0x800);
	if (!is_code(get_flags(0x481250)))
	{
		del_items(0x481250);
		add_func(0x481250,BADADDR);
	}
	set_name(0x4813c0,"reflect.cvtFloatInt", 0x800);
	if (!is_code(get_flags(0x4813c0)))
	{
		del_items(0x4813c0);
		add_func(0x4813c0,BADADDR);
	}
	set_name(0x4814e0,"reflect.cvtFloatUint", 0x800);
	if (!is_code(get_flags(0x4814e0)))
	{
		del_items(0x4814e0);
		add_func(0x4814e0,BADADDR);
	}
	set_name(0x481620,"reflect.cvtIntFloat", 0x800);
	if (!is_code(get_flags(0x481620)))
	{
		del_items(0x481620);
		add_func(0x481620,BADADDR);
	}
	set_name(0x481780,"reflect.cvtUintFloat", 0x800);
	if (!is_code(get_flags(0x481780)))
	{
		del_items(0x481780);
		add_func(0x481780,BADADDR);
	}
	set_name(0x481920,"reflect.cvtFloat", 0x800);
	if (!is_code(get_flags(0x481920)))
	{
		del_items(0x481920);
		add_func(0x481920,BADADDR);
	}
	set_name(0x481a40,"reflect.cvtComplex", 0x800);
	if (!is_code(get_flags(0x481a40)))
	{
		del_items(0x481a40);
		add_func(0x481a40,BADADDR);
	}
	set_name(0x481b80,"reflect.cvtIntString", 0x800);
	if (!is_code(get_flags(0x481b80)))
	{
		del_items(0x481b80);
		add_func(0x481b80,BADADDR);
	}
	set_name(0x481d00,"reflect.cvtUintString", 0x800);
	if (!is_code(get_flags(0x481d00)))
	{
		del_items(0x481d00);
		add_func(0x481d00,BADADDR);
	}
	set_name(0x481e90,"reflect.cvtBytesString", 0x800);
	if (!is_code(get_flags(0x481e90)))
	{
		del_items(0x481e90);
		add_func(0x481e90,BADADDR);
	}
	set_name(0x481f90,"reflect.cvtStringBytes", 0x800);
	if (!is_code(get_flags(0x481f90)))
	{
		del_items(0x481f90);
		add_func(0x481f90,BADADDR);
	}
	set_name(0x482090,"reflect.cvtRunesString", 0x800);
	if (!is_code(get_flags(0x482090)))
	{
		del_items(0x482090);
		add_func(0x482090,BADADDR);
	}
	set_name(0x482190,"reflect.cvtStringRunes", 0x800);
	if (!is_code(get_flags(0x482190)))
	{
		del_items(0x482190);
		add_func(0x482190,BADADDR);
	}
	set_name(0x482290,"reflect.cvtDirect", 0x800);
	if (!is_code(get_flags(0x482290)))
	{
		del_items(0x482290);
		add_func(0x482290,BADADDR);
	}
	set_name(0x482370,"reflect.cvtT2I", 0x800);
	if (!is_code(get_flags(0x482370)))
	{
		del_items(0x482370);
		add_func(0x482370,BADADDR);
	}
	set_name(0x482530,"reflect.cvtI2I", 0x800);
	if (!is_code(get_flags(0x482530)))
	{
		del_items(0x482530);
		add_func(0x482530,BADADDR);
	}
	set_name(0x482720,"reflect.(*structType).FieldByName.func1", 0x800);
	if (!is_code(get_flags(0x482720)))
	{
		del_items(0x482720);
		add_func(0x482720,BADADDR);
	}
	set_name(0x482790,"reflect.FuncOf.func1", 0x800);
	if (!is_code(get_flags(0x482790)))
	{
		del_items(0x482790);
		add_func(0x482790,BADADDR);
	}
	set_name(0x482990,"reflect.funcLayout.func1", 0x800);
	if (!is_code(get_flags(0x482990)))
	{
		del_items(0x482990);
		add_func(0x482990,BADADDR);
	}
	set_name(0x4829f0,"reflect.init", 0x800);
	if (!is_code(get_flags(0x4829f0)))
	{
		del_items(0x4829f0);
		add_func(0x4829f0,BADADDR);
	}
	set_name(0x482ab0,"reflect.methodValueCall", 0x800);
	if (!is_code(get_flags(0x482ab0)))
	{
		del_items(0x482ab0);
		add_func(0x482ab0,BADADDR);
	}
	set_name(0x482b20,"reflect.(*ChanDir).String", 0x800);
	if (!is_code(get_flags(0x482b20)))
	{
		del_items(0x482b20);
		add_func(0x482b20,BADADDR);
	}
	set_name(0x482ba0,"reflect.(*Kind).String", 0x800);
	if (!is_code(get_flags(0x482ba0)))
	{
		del_items(0x482ba0);
		add_func(0x482ba0,BADADDR);
	}
	set_name(0x482ca0,"type..eq.reflect.uncommonType", 0x800);
	if (!is_code(get_flags(0x482ca0)))
	{
		del_items(0x482ca0);
		add_func(0x482ca0,BADADDR);
	}
	set_name(0x482d00,"reflect.(*Value).Kind", 0x800);
	if (!is_code(get_flags(0x482d00)))
	{
		del_items(0x482d00);
		add_func(0x482d00,BADADDR);
	}
	set_name(0x482d60,"reflect.(*Value).Len", 0x800);
	if (!is_code(get_flags(0x482d60)))
	{
		del_items(0x482d60);
		add_func(0x482d60,BADADDR);
	}
	set_name(0x482df0,"reflect.(*Value).NumField", 0x800);
	if (!is_code(get_flags(0x482df0)))
	{
		del_items(0x482df0);
		add_func(0x482df0,BADADDR);
	}
	set_name(0x482e80,"reflect.(*Value).NumMethod", 0x800);
	if (!is_code(get_flags(0x482e80)))
	{
		del_items(0x482e80);
		add_func(0x482e80,BADADDR);
	}
	set_name(0x482f10,"reflect.(*Value).String", 0x800);
	if (!is_code(get_flags(0x482f10)))
	{
		del_items(0x482f10);
		add_func(0x482f10,BADADDR);
	}
	set_name(0x482fa0,"type..eq.reflect.Method", 0x800);
	if (!is_code(get_flags(0x482fa0)))
	{
		del_items(0x482fa0);
		add_func(0x482fa0,BADADDR);
	}
	set_name(0x4830f0,"reflect.(*structType).Align", 0x800);
	if (!is_code(get_flags(0x4830f0)))
	{
		del_items(0x4830f0);
		add_func(0x4830f0,BADADDR);
	}
	set_name(0x483110,"reflect.(*structType).AssignableTo", 0x800);
	if (!is_code(get_flags(0x483110)))
	{
		del_items(0x483110);
		add_func(0x483110,BADADDR);
	}
	set_name(0x483130,"reflect.(*structType).Bits", 0x800);
	if (!is_code(get_flags(0x483130)))
	{
		del_items(0x483130);
		add_func(0x483130,BADADDR);
	}
	set_name(0x483150,"reflect.(*structType).ChanDir", 0x800);
	if (!is_code(get_flags(0x483150)))
	{
		del_items(0x483150);
		add_func(0x483150,BADADDR);
	}
	set_name(0x483170,"reflect.(*structType).Comparable", 0x800);
	if (!is_code(get_flags(0x483170)))
	{
		del_items(0x483170);
		add_func(0x483170,BADADDR);
	}
	set_name(0x483190,"reflect.(*structType).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x483190)))
	{
		del_items(0x483190);
		add_func(0x483190,BADADDR);
	}
	set_name(0x4831b0,"reflect.(*structType).Elem", 0x800);
	if (!is_code(get_flags(0x4831b0)))
	{
		del_items(0x4831b0);
		add_func(0x4831b0,BADADDR);
	}
	set_name(0x4831d0,"reflect.(*structType).FieldAlign", 0x800);
	if (!is_code(get_flags(0x4831d0)))
	{
		del_items(0x4831d0);
		add_func(0x4831d0,BADADDR);
	}
	set_name(0x4831f0,"reflect.(*structType).Implements", 0x800);
	if (!is_code(get_flags(0x4831f0)))
	{
		del_items(0x4831f0);
		add_func(0x4831f0,BADADDR);
	}
	set_name(0x483210,"reflect.(*structType).In", 0x800);
	if (!is_code(get_flags(0x483210)))
	{
		del_items(0x483210);
		add_func(0x483210,BADADDR);
	}
	set_name(0x483230,"reflect.(*structType).IsVariadic", 0x800);
	if (!is_code(get_flags(0x483230)))
	{
		del_items(0x483230);
		add_func(0x483230,BADADDR);
	}
	set_name(0x483250,"reflect.(*structType).Key", 0x800);
	if (!is_code(get_flags(0x483250)))
	{
		del_items(0x483250);
		add_func(0x483250,BADADDR);
	}
	set_name(0x483270,"reflect.(*structType).Kind", 0x800);
	if (!is_code(get_flags(0x483270)))
	{
		del_items(0x483270);
		add_func(0x483270,BADADDR);
	}
	set_name(0x483290,"reflect.(*structType).Len", 0x800);
	if (!is_code(get_flags(0x483290)))
	{
		del_items(0x483290);
		add_func(0x483290,BADADDR);
	}
	set_name(0x4832b0,"reflect.(*structType).Method", 0x800);
	if (!is_code(get_flags(0x4832b0)))
	{
		del_items(0x4832b0);
		add_func(0x4832b0,BADADDR);
	}
	set_name(0x483300,"reflect.(*structType).MethodByName", 0x800);
	if (!is_code(get_flags(0x483300)))
	{
		del_items(0x483300);
		add_func(0x483300,BADADDR);
	}
	set_name(0x483350,"reflect.(*structType).Name", 0x800);
	if (!is_code(get_flags(0x483350)))
	{
		del_items(0x483350);
		add_func(0x483350,BADADDR);
	}
	set_name(0x483370,"reflect.(*structType).NumField", 0x800);
	if (!is_code(get_flags(0x483370)))
	{
		del_items(0x483370);
		add_func(0x483370,BADADDR);
	}
	set_name(0x483390,"reflect.(*structType).NumIn", 0x800);
	if (!is_code(get_flags(0x483390)))
	{
		del_items(0x483390);
		add_func(0x483390,BADADDR);
	}
	set_name(0x4833b0,"reflect.(*structType).NumMethod", 0x800);
	if (!is_code(get_flags(0x4833b0)))
	{
		del_items(0x4833b0);
		add_func(0x4833b0,BADADDR);
	}
	set_name(0x4833d0,"reflect.(*structType).NumOut", 0x800);
	if (!is_code(get_flags(0x4833d0)))
	{
		del_items(0x4833d0);
		add_func(0x4833d0,BADADDR);
	}
	set_name(0x4833f0,"reflect.(*structType).Out", 0x800);
	if (!is_code(get_flags(0x4833f0)))
	{
		del_items(0x4833f0);
		add_func(0x4833f0,BADADDR);
	}
	set_name(0x483410,"reflect.(*structType).PkgPath", 0x800);
	if (!is_code(get_flags(0x483410)))
	{
		del_items(0x483410);
		add_func(0x483410,BADADDR);
	}
	set_name(0x483430,"reflect.(*structType).Size", 0x800);
	if (!is_code(get_flags(0x483430)))
	{
		del_items(0x483430);
		add_func(0x483430,BADADDR);
	}
	set_name(0x483450,"reflect.(*structType).String", 0x800);
	if (!is_code(get_flags(0x483450)))
	{
		del_items(0x483450);
		add_func(0x483450,BADADDR);
	}
	set_name(0x483470,"reflect.(*structType).common", 0x800);
	if (!is_code(get_flags(0x483470)))
	{
		del_items(0x483470);
		add_func(0x483470,BADADDR);
	}
	set_name(0x483490,"reflect.(*structType).uncommon", 0x800);
	if (!is_code(get_flags(0x483490)))
	{
		del_items(0x483490);
		add_func(0x483490,BADADDR);
	}
	set_name(0x4834b0,"reflect.(*funcType).Align", 0x800);
	if (!is_code(get_flags(0x4834b0)))
	{
		del_items(0x4834b0);
		add_func(0x4834b0,BADADDR);
	}
	set_name(0x4834d0,"reflect.(*funcType).AssignableTo", 0x800);
	if (!is_code(get_flags(0x4834d0)))
	{
		del_items(0x4834d0);
		add_func(0x4834d0,BADADDR);
	}
	set_name(0x4834f0,"reflect.(*funcType).Bits", 0x800);
	if (!is_code(get_flags(0x4834f0)))
	{
		del_items(0x4834f0);
		add_func(0x4834f0,BADADDR);
	}
	set_name(0x483510,"reflect.(*funcType).ChanDir", 0x800);
	if (!is_code(get_flags(0x483510)))
	{
		del_items(0x483510);
		add_func(0x483510,BADADDR);
	}
	set_name(0x483530,"reflect.(*funcType).Comparable", 0x800);
	if (!is_code(get_flags(0x483530)))
	{
		del_items(0x483530);
		add_func(0x483530,BADADDR);
	}
	set_name(0x483550,"reflect.(*funcType).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x483550)))
	{
		del_items(0x483550);
		add_func(0x483550,BADADDR);
	}
	set_name(0x483570,"reflect.(*funcType).Elem", 0x800);
	if (!is_code(get_flags(0x483570)))
	{
		del_items(0x483570);
		add_func(0x483570,BADADDR);
	}
	set_name(0x483590,"reflect.(*funcType).Field", 0x800);
	if (!is_code(get_flags(0x483590)))
	{
		del_items(0x483590);
		add_func(0x483590,BADADDR);
	}
	set_name(0x4835e0,"reflect.(*funcType).FieldAlign", 0x800);
	if (!is_code(get_flags(0x4835e0)))
	{
		del_items(0x4835e0);
		add_func(0x4835e0,BADADDR);
	}
	set_name(0x483600,"reflect.(*funcType).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x483600)))
	{
		del_items(0x483600);
		add_func(0x483600,BADADDR);
	}
	set_name(0x483650,"reflect.(*funcType).FieldByName", 0x800);
	if (!is_code(get_flags(0x483650)))
	{
		del_items(0x483650);
		add_func(0x483650,BADADDR);
	}
	set_name(0x4836b0,"reflect.(*funcType).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x4836b0)))
	{
		del_items(0x4836b0);
		add_func(0x4836b0,BADADDR);
	}
	set_name(0x483710,"reflect.(*funcType).Implements", 0x800);
	if (!is_code(get_flags(0x483710)))
	{
		del_items(0x483710);
		add_func(0x483710,BADADDR);
	}
	set_name(0x483730,"reflect.(*funcType).In", 0x800);
	if (!is_code(get_flags(0x483730)))
	{
		del_items(0x483730);
		add_func(0x483730,BADADDR);
	}
	set_name(0x483750,"reflect.(*funcType).IsVariadic", 0x800);
	if (!is_code(get_flags(0x483750)))
	{
		del_items(0x483750);
		add_func(0x483750,BADADDR);
	}
	set_name(0x483770,"reflect.(*funcType).Key", 0x800);
	if (!is_code(get_flags(0x483770)))
	{
		del_items(0x483770);
		add_func(0x483770,BADADDR);
	}
	set_name(0x483790,"reflect.(*funcType).Kind", 0x800);
	if (!is_code(get_flags(0x483790)))
	{
		del_items(0x483790);
		add_func(0x483790,BADADDR);
	}
	set_name(0x4837b0,"reflect.(*funcType).Len", 0x800);
	if (!is_code(get_flags(0x4837b0)))
	{
		del_items(0x4837b0);
		add_func(0x4837b0,BADADDR);
	}
	set_name(0x4837d0,"reflect.(*funcType).Method", 0x800);
	if (!is_code(get_flags(0x4837d0)))
	{
		del_items(0x4837d0);
		add_func(0x4837d0,BADADDR);
	}
	set_name(0x483820,"reflect.(*funcType).MethodByName", 0x800);
	if (!is_code(get_flags(0x483820)))
	{
		del_items(0x483820);
		add_func(0x483820,BADADDR);
	}
	set_name(0x483870,"reflect.(*funcType).Name", 0x800);
	if (!is_code(get_flags(0x483870)))
	{
		del_items(0x483870);
		add_func(0x483870,BADADDR);
	}
	set_name(0x483890,"reflect.(*funcType).NumField", 0x800);
	if (!is_code(get_flags(0x483890)))
	{
		del_items(0x483890);
		add_func(0x483890,BADADDR);
	}
	set_name(0x4838b0,"reflect.(*funcType).NumIn", 0x800);
	if (!is_code(get_flags(0x4838b0)))
	{
		del_items(0x4838b0);
		add_func(0x4838b0,BADADDR);
	}
	set_name(0x4838d0,"reflect.(*funcType).NumMethod", 0x800);
	if (!is_code(get_flags(0x4838d0)))
	{
		del_items(0x4838d0);
		add_func(0x4838d0,BADADDR);
	}
	set_name(0x4838f0,"reflect.(*funcType).NumOut", 0x800);
	if (!is_code(get_flags(0x4838f0)))
	{
		del_items(0x4838f0);
		add_func(0x4838f0,BADADDR);
	}
	set_name(0x483910,"reflect.(*funcType).Out", 0x800);
	if (!is_code(get_flags(0x483910)))
	{
		del_items(0x483910);
		add_func(0x483910,BADADDR);
	}
	set_name(0x483930,"reflect.(*funcType).PkgPath", 0x800);
	if (!is_code(get_flags(0x483930)))
	{
		del_items(0x483930);
		add_func(0x483930,BADADDR);
	}
	set_name(0x483950,"reflect.(*funcType).Size", 0x800);
	if (!is_code(get_flags(0x483950)))
	{
		del_items(0x483950);
		add_func(0x483950,BADADDR);
	}
	set_name(0x483970,"reflect.(*funcType).String", 0x800);
	if (!is_code(get_flags(0x483970)))
	{
		del_items(0x483970);
		add_func(0x483970,BADADDR);
	}
	set_name(0x483990,"reflect.(*funcType).common", 0x800);
	if (!is_code(get_flags(0x483990)))
	{
		del_items(0x483990);
		add_func(0x483990,BADADDR);
	}
	set_name(0x4839b0,"reflect.(*funcType).uncommon", 0x800);
	if (!is_code(get_flags(0x4839b0)))
	{
		del_items(0x4839b0);
		add_func(0x4839b0,BADADDR);
	}
	set_name(0x4839d0,"type..eq.reflect.ValueError", 0x800);
	if (!is_code(get_flags(0x4839d0)))
	{
		del_items(0x4839d0);
		add_func(0x4839d0,BADADDR);
	}
	set_name(0x483a60,"reflect.(*funcTypeFixed128).Align", 0x800);
	if (!is_code(get_flags(0x483a60)))
	{
		del_items(0x483a60);
		add_func(0x483a60,BADADDR);
	}
	set_name(0x483a80,"reflect.(*funcTypeFixed128).AssignableTo", 0x800);
	if (!is_code(get_flags(0x483a80)))
	{
		del_items(0x483a80);
		add_func(0x483a80,BADADDR);
	}
	set_name(0x483aa0,"reflect.(*funcTypeFixed128).Bits", 0x800);
	if (!is_code(get_flags(0x483aa0)))
	{
		del_items(0x483aa0);
		add_func(0x483aa0,BADADDR);
	}
	set_name(0x483ac0,"reflect.(*funcTypeFixed128).ChanDir", 0x800);
	if (!is_code(get_flags(0x483ac0)))
	{
		del_items(0x483ac0);
		add_func(0x483ac0,BADADDR);
	}
	set_name(0x483ae0,"reflect.(*funcTypeFixed128).Comparable", 0x800);
	if (!is_code(get_flags(0x483ae0)))
	{
		del_items(0x483ae0);
		add_func(0x483ae0,BADADDR);
	}
	set_name(0x483b00,"reflect.(*funcTypeFixed128).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x483b00)))
	{
		del_items(0x483b00);
		add_func(0x483b00,BADADDR);
	}
	set_name(0x483b20,"reflect.(*funcTypeFixed128).Elem", 0x800);
	if (!is_code(get_flags(0x483b20)))
	{
		del_items(0x483b20);
		add_func(0x483b20,BADADDR);
	}
	set_name(0x483b40,"reflect.(*funcTypeFixed128).Field", 0x800);
	if (!is_code(get_flags(0x483b40)))
	{
		del_items(0x483b40);
		add_func(0x483b40,BADADDR);
	}
	set_name(0x483b90,"reflect.(*funcTypeFixed128).FieldAlign", 0x800);
	if (!is_code(get_flags(0x483b90)))
	{
		del_items(0x483b90);
		add_func(0x483b90,BADADDR);
	}
	set_name(0x483bb0,"reflect.(*funcTypeFixed128).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x483bb0)))
	{
		del_items(0x483bb0);
		add_func(0x483bb0,BADADDR);
	}
	set_name(0x483c00,"reflect.(*funcTypeFixed128).FieldByName", 0x800);
	if (!is_code(get_flags(0x483c00)))
	{
		del_items(0x483c00);
		add_func(0x483c00,BADADDR);
	}
	set_name(0x483c60,"reflect.(*funcTypeFixed128).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x483c60)))
	{
		del_items(0x483c60);
		add_func(0x483c60,BADADDR);
	}
	set_name(0x483cc0,"reflect.(*funcTypeFixed128).Implements", 0x800);
	if (!is_code(get_flags(0x483cc0)))
	{
		del_items(0x483cc0);
		add_func(0x483cc0,BADADDR);
	}
	set_name(0x483ce0,"reflect.(*funcTypeFixed128).In", 0x800);
	if (!is_code(get_flags(0x483ce0)))
	{
		del_items(0x483ce0);
		add_func(0x483ce0,BADADDR);
	}
	set_name(0x483d00,"reflect.(*funcTypeFixed128).IsVariadic", 0x800);
	if (!is_code(get_flags(0x483d00)))
	{
		del_items(0x483d00);
		add_func(0x483d00,BADADDR);
	}
	set_name(0x483d20,"reflect.(*funcTypeFixed128).Key", 0x800);
	if (!is_code(get_flags(0x483d20)))
	{
		del_items(0x483d20);
		add_func(0x483d20,BADADDR);
	}
	set_name(0x483d40,"reflect.(*funcTypeFixed128).Kind", 0x800);
	if (!is_code(get_flags(0x483d40)))
	{
		del_items(0x483d40);
		add_func(0x483d40,BADADDR);
	}
	set_name(0x483d60,"reflect.(*funcTypeFixed128).Len", 0x800);
	if (!is_code(get_flags(0x483d60)))
	{
		del_items(0x483d60);
		add_func(0x483d60,BADADDR);
	}
	set_name(0x483d80,"reflect.(*funcTypeFixed128).Method", 0x800);
	if (!is_code(get_flags(0x483d80)))
	{
		del_items(0x483d80);
		add_func(0x483d80,BADADDR);
	}
	set_name(0x483dd0,"reflect.(*funcTypeFixed128).MethodByName", 0x800);
	if (!is_code(get_flags(0x483dd0)))
	{
		del_items(0x483dd0);
		add_func(0x483dd0,BADADDR);
	}
	set_name(0x483e20,"reflect.(*funcTypeFixed128).Name", 0x800);
	if (!is_code(get_flags(0x483e20)))
	{
		del_items(0x483e20);
		add_func(0x483e20,BADADDR);
	}
	set_name(0x483e40,"reflect.(*funcTypeFixed128).NumField", 0x800);
	if (!is_code(get_flags(0x483e40)))
	{
		del_items(0x483e40);
		add_func(0x483e40,BADADDR);
	}
	set_name(0x483e60,"reflect.(*funcTypeFixed128).NumIn", 0x800);
	if (!is_code(get_flags(0x483e60)))
	{
		del_items(0x483e60);
		add_func(0x483e60,BADADDR);
	}
	set_name(0x483e80,"reflect.(*funcTypeFixed128).NumMethod", 0x800);
	if (!is_code(get_flags(0x483e80)))
	{
		del_items(0x483e80);
		add_func(0x483e80,BADADDR);
	}
	set_name(0x483ea0,"reflect.(*funcTypeFixed128).NumOut", 0x800);
	if (!is_code(get_flags(0x483ea0)))
	{
		del_items(0x483ea0);
		add_func(0x483ea0,BADADDR);
	}
	set_name(0x483ec0,"reflect.(*funcTypeFixed128).Out", 0x800);
	if (!is_code(get_flags(0x483ec0)))
	{
		del_items(0x483ec0);
		add_func(0x483ec0,BADADDR);
	}
	set_name(0x483ee0,"reflect.(*funcTypeFixed128).PkgPath", 0x800);
	if (!is_code(get_flags(0x483ee0)))
	{
		del_items(0x483ee0);
		add_func(0x483ee0,BADADDR);
	}
	set_name(0x483f00,"reflect.(*funcTypeFixed128).Size", 0x800);
	if (!is_code(get_flags(0x483f00)))
	{
		del_items(0x483f00);
		add_func(0x483f00,BADADDR);
	}
	set_name(0x483f20,"reflect.(*funcTypeFixed128).String", 0x800);
	if (!is_code(get_flags(0x483f20)))
	{
		del_items(0x483f20);
		add_func(0x483f20,BADADDR);
	}
	set_name(0x483f40,"reflect.(*funcTypeFixed128).common", 0x800);
	if (!is_code(get_flags(0x483f40)))
	{
		del_items(0x483f40);
		add_func(0x483f40,BADADDR);
	}
	set_name(0x483f60,"reflect.(*funcTypeFixed128).uncommon", 0x800);
	if (!is_code(get_flags(0x483f60)))
	{
		del_items(0x483f60);
		add_func(0x483f60,BADADDR);
	}
	set_name(0x483f80,"reflect.(*funcTypeFixed16).Align", 0x800);
	if (!is_code(get_flags(0x483f80)))
	{
		del_items(0x483f80);
		add_func(0x483f80,BADADDR);
	}
	set_name(0x483fa0,"reflect.(*funcTypeFixed16).AssignableTo", 0x800);
	if (!is_code(get_flags(0x483fa0)))
	{
		del_items(0x483fa0);
		add_func(0x483fa0,BADADDR);
	}
	set_name(0x483fc0,"reflect.(*funcTypeFixed16).Bits", 0x800);
	if (!is_code(get_flags(0x483fc0)))
	{
		del_items(0x483fc0);
		add_func(0x483fc0,BADADDR);
	}
	set_name(0x483fe0,"reflect.(*funcTypeFixed16).ChanDir", 0x800);
	if (!is_code(get_flags(0x483fe0)))
	{
		del_items(0x483fe0);
		add_func(0x483fe0,BADADDR);
	}
	set_name(0x484000,"reflect.(*funcTypeFixed16).Comparable", 0x800);
	if (!is_code(get_flags(0x484000)))
	{
		del_items(0x484000);
		add_func(0x484000,BADADDR);
	}
	set_name(0x484020,"reflect.(*funcTypeFixed16).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x484020)))
	{
		del_items(0x484020);
		add_func(0x484020,BADADDR);
	}
	set_name(0x484040,"reflect.(*funcTypeFixed16).Elem", 0x800);
	if (!is_code(get_flags(0x484040)))
	{
		del_items(0x484040);
		add_func(0x484040,BADADDR);
	}
	set_name(0x484060,"reflect.(*funcTypeFixed16).Field", 0x800);
	if (!is_code(get_flags(0x484060)))
	{
		del_items(0x484060);
		add_func(0x484060,BADADDR);
	}
	set_name(0x4840b0,"reflect.(*funcTypeFixed16).FieldAlign", 0x800);
	if (!is_code(get_flags(0x4840b0)))
	{
		del_items(0x4840b0);
		add_func(0x4840b0,BADADDR);
	}
	set_name(0x4840d0,"reflect.(*funcTypeFixed16).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x4840d0)))
	{
		del_items(0x4840d0);
		add_func(0x4840d0,BADADDR);
	}
	set_name(0x484120,"reflect.(*funcTypeFixed16).FieldByName", 0x800);
	if (!is_code(get_flags(0x484120)))
	{
		del_items(0x484120);
		add_func(0x484120,BADADDR);
	}
	set_name(0x484180,"reflect.(*funcTypeFixed16).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x484180)))
	{
		del_items(0x484180);
		add_func(0x484180,BADADDR);
	}
	set_name(0x4841e0,"reflect.(*funcTypeFixed16).Implements", 0x800);
	if (!is_code(get_flags(0x4841e0)))
	{
		del_items(0x4841e0);
		add_func(0x4841e0,BADADDR);
	}
	set_name(0x484200,"reflect.(*funcTypeFixed16).In", 0x800);
	if (!is_code(get_flags(0x484200)))
	{
		del_items(0x484200);
		add_func(0x484200,BADADDR);
	}
	set_name(0x484220,"reflect.(*funcTypeFixed16).IsVariadic", 0x800);
	if (!is_code(get_flags(0x484220)))
	{
		del_items(0x484220);
		add_func(0x484220,BADADDR);
	}
	set_name(0x484240,"reflect.(*funcTypeFixed16).Key", 0x800);
	if (!is_code(get_flags(0x484240)))
	{
		del_items(0x484240);
		add_func(0x484240,BADADDR);
	}
	set_name(0x484260,"reflect.(*funcTypeFixed16).Kind", 0x800);
	if (!is_code(get_flags(0x484260)))
	{
		del_items(0x484260);
		add_func(0x484260,BADADDR);
	}
	set_name(0x484280,"reflect.(*funcTypeFixed16).Len", 0x800);
	if (!is_code(get_flags(0x484280)))
	{
		del_items(0x484280);
		add_func(0x484280,BADADDR);
	}
	set_name(0x4842a0,"reflect.(*funcTypeFixed16).Method", 0x800);
	if (!is_code(get_flags(0x4842a0)))
	{
		del_items(0x4842a0);
		add_func(0x4842a0,BADADDR);
	}
	set_name(0x4842f0,"reflect.(*funcTypeFixed16).MethodByName", 0x800);
	if (!is_code(get_flags(0x4842f0)))
	{
		del_items(0x4842f0);
		add_func(0x4842f0,BADADDR);
	}
	set_name(0x484340,"reflect.(*funcTypeFixed16).Name", 0x800);
	if (!is_code(get_flags(0x484340)))
	{
		del_items(0x484340);
		add_func(0x484340,BADADDR);
	}
	set_name(0x484360,"reflect.(*funcTypeFixed16).NumField", 0x800);
	if (!is_code(get_flags(0x484360)))
	{
		del_items(0x484360);
		add_func(0x484360,BADADDR);
	}
	set_name(0x484380,"reflect.(*funcTypeFixed16).NumIn", 0x800);
	if (!is_code(get_flags(0x484380)))
	{
		del_items(0x484380);
		add_func(0x484380,BADADDR);
	}
	set_name(0x4843a0,"reflect.(*funcTypeFixed16).NumMethod", 0x800);
	if (!is_code(get_flags(0x4843a0)))
	{
		del_items(0x4843a0);
		add_func(0x4843a0,BADADDR);
	}
	set_name(0x4843c0,"reflect.(*funcTypeFixed16).NumOut", 0x800);
	if (!is_code(get_flags(0x4843c0)))
	{
		del_items(0x4843c0);
		add_func(0x4843c0,BADADDR);
	}
	set_name(0x4843e0,"reflect.(*funcTypeFixed16).Out", 0x800);
	if (!is_code(get_flags(0x4843e0)))
	{
		del_items(0x4843e0);
		add_func(0x4843e0,BADADDR);
	}
	set_name(0x484400,"reflect.(*funcTypeFixed16).PkgPath", 0x800);
	if (!is_code(get_flags(0x484400)))
	{
		del_items(0x484400);
		add_func(0x484400,BADADDR);
	}
	set_name(0x484420,"reflect.(*funcTypeFixed16).Size", 0x800);
	if (!is_code(get_flags(0x484420)))
	{
		del_items(0x484420);
		add_func(0x484420,BADADDR);
	}
	set_name(0x484440,"reflect.(*funcTypeFixed16).String", 0x800);
	if (!is_code(get_flags(0x484440)))
	{
		del_items(0x484440);
		add_func(0x484440,BADADDR);
	}
	set_name(0x484460,"reflect.(*funcTypeFixed16).common", 0x800);
	if (!is_code(get_flags(0x484460)))
	{
		del_items(0x484460);
		add_func(0x484460,BADADDR);
	}
	set_name(0x484480,"reflect.(*funcTypeFixed16).uncommon", 0x800);
	if (!is_code(get_flags(0x484480)))
	{
		del_items(0x484480);
		add_func(0x484480,BADADDR);
	}
	set_name(0x4844a0,"reflect.(*funcTypeFixed32).Align", 0x800);
	if (!is_code(get_flags(0x4844a0)))
	{
		del_items(0x4844a0);
		add_func(0x4844a0,BADADDR);
	}
	set_name(0x4844c0,"reflect.(*funcTypeFixed32).AssignableTo", 0x800);
	if (!is_code(get_flags(0x4844c0)))
	{
		del_items(0x4844c0);
		add_func(0x4844c0,BADADDR);
	}
	set_name(0x4844e0,"reflect.(*funcTypeFixed32).Bits", 0x800);
	if (!is_code(get_flags(0x4844e0)))
	{
		del_items(0x4844e0);
		add_func(0x4844e0,BADADDR);
	}
	set_name(0x484500,"reflect.(*funcTypeFixed32).ChanDir", 0x800);
	if (!is_code(get_flags(0x484500)))
	{
		del_items(0x484500);
		add_func(0x484500,BADADDR);
	}
	set_name(0x484520,"reflect.(*funcTypeFixed32).Comparable", 0x800);
	if (!is_code(get_flags(0x484520)))
	{
		del_items(0x484520);
		add_func(0x484520,BADADDR);
	}
	set_name(0x484540,"reflect.(*funcTypeFixed32).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x484540)))
	{
		del_items(0x484540);
		add_func(0x484540,BADADDR);
	}
	set_name(0x484560,"reflect.(*funcTypeFixed32).Elem", 0x800);
	if (!is_code(get_flags(0x484560)))
	{
		del_items(0x484560);
		add_func(0x484560,BADADDR);
	}
	set_name(0x484580,"reflect.(*funcTypeFixed32).Field", 0x800);
	if (!is_code(get_flags(0x484580)))
	{
		del_items(0x484580);
		add_func(0x484580,BADADDR);
	}
	set_name(0x4845d0,"reflect.(*funcTypeFixed32).FieldAlign", 0x800);
	if (!is_code(get_flags(0x4845d0)))
	{
		del_items(0x4845d0);
		add_func(0x4845d0,BADADDR);
	}
	set_name(0x4845f0,"reflect.(*funcTypeFixed32).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x4845f0)))
	{
		del_items(0x4845f0);
		add_func(0x4845f0,BADADDR);
	}
	set_name(0x484640,"reflect.(*funcTypeFixed32).FieldByName", 0x800);
	if (!is_code(get_flags(0x484640)))
	{
		del_items(0x484640);
		add_func(0x484640,BADADDR);
	}
	set_name(0x4846a0,"reflect.(*funcTypeFixed32).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x4846a0)))
	{
		del_items(0x4846a0);
		add_func(0x4846a0,BADADDR);
	}
	set_name(0x484700,"reflect.(*funcTypeFixed32).Implements", 0x800);
	if (!is_code(get_flags(0x484700)))
	{
		del_items(0x484700);
		add_func(0x484700,BADADDR);
	}
	set_name(0x484720,"reflect.(*funcTypeFixed32).In", 0x800);
	if (!is_code(get_flags(0x484720)))
	{
		del_items(0x484720);
		add_func(0x484720,BADADDR);
	}
	set_name(0x484740,"reflect.(*funcTypeFixed32).IsVariadic", 0x800);
	if (!is_code(get_flags(0x484740)))
	{
		del_items(0x484740);
		add_func(0x484740,BADADDR);
	}
	set_name(0x484760,"reflect.(*funcTypeFixed32).Key", 0x800);
	if (!is_code(get_flags(0x484760)))
	{
		del_items(0x484760);
		add_func(0x484760,BADADDR);
	}
	set_name(0x484780,"reflect.(*funcTypeFixed32).Kind", 0x800);
	if (!is_code(get_flags(0x484780)))
	{
		del_items(0x484780);
		add_func(0x484780,BADADDR);
	}
	set_name(0x4847a0,"reflect.(*funcTypeFixed32).Len", 0x800);
	if (!is_code(get_flags(0x4847a0)))
	{
		del_items(0x4847a0);
		add_func(0x4847a0,BADADDR);
	}
	set_name(0x4847c0,"reflect.(*funcTypeFixed32).Method", 0x800);
	if (!is_code(get_flags(0x4847c0)))
	{
		del_items(0x4847c0);
		add_func(0x4847c0,BADADDR);
	}
	set_name(0x484810,"reflect.(*funcTypeFixed32).MethodByName", 0x800);
	if (!is_code(get_flags(0x484810)))
	{
		del_items(0x484810);
		add_func(0x484810,BADADDR);
	}
	set_name(0x484860,"reflect.(*funcTypeFixed32).Name", 0x800);
	if (!is_code(get_flags(0x484860)))
	{
		del_items(0x484860);
		add_func(0x484860,BADADDR);
	}
	set_name(0x484880,"reflect.(*funcTypeFixed32).NumField", 0x800);
	if (!is_code(get_flags(0x484880)))
	{
		del_items(0x484880);
		add_func(0x484880,BADADDR);
	}
	set_name(0x4848a0,"reflect.(*funcTypeFixed32).NumIn", 0x800);
	if (!is_code(get_flags(0x4848a0)))
	{
		del_items(0x4848a0);
		add_func(0x4848a0,BADADDR);
	}
	set_name(0x4848c0,"reflect.(*funcTypeFixed32).NumMethod", 0x800);
	if (!is_code(get_flags(0x4848c0)))
	{
		del_items(0x4848c0);
		add_func(0x4848c0,BADADDR);
	}
	set_name(0x4848e0,"reflect.(*funcTypeFixed32).NumOut", 0x800);
	if (!is_code(get_flags(0x4848e0)))
	{
		del_items(0x4848e0);
		add_func(0x4848e0,BADADDR);
	}
	set_name(0x484900,"reflect.(*funcTypeFixed32).Out", 0x800);
	if (!is_code(get_flags(0x484900)))
	{
		del_items(0x484900);
		add_func(0x484900,BADADDR);
	}
	set_name(0x484920,"reflect.(*funcTypeFixed32).PkgPath", 0x800);
	if (!is_code(get_flags(0x484920)))
	{
		del_items(0x484920);
		add_func(0x484920,BADADDR);
	}
	set_name(0x484940,"reflect.(*funcTypeFixed32).Size", 0x800);
	if (!is_code(get_flags(0x484940)))
	{
		del_items(0x484940);
		add_func(0x484940,BADADDR);
	}
	set_name(0x484960,"reflect.(*funcTypeFixed32).String", 0x800);
	if (!is_code(get_flags(0x484960)))
	{
		del_items(0x484960);
		add_func(0x484960,BADADDR);
	}
	set_name(0x484980,"reflect.(*funcTypeFixed32).common", 0x800);
	if (!is_code(get_flags(0x484980)))
	{
		del_items(0x484980);
		add_func(0x484980,BADADDR);
	}
	set_name(0x4849a0,"reflect.(*funcTypeFixed32).uncommon", 0x800);
	if (!is_code(get_flags(0x4849a0)))
	{
		del_items(0x4849a0);
		add_func(0x4849a0,BADADDR);
	}
	set_name(0x4849c0,"reflect.(*funcTypeFixed4).Align", 0x800);
	if (!is_code(get_flags(0x4849c0)))
	{
		del_items(0x4849c0);
		add_func(0x4849c0,BADADDR);
	}
	set_name(0x4849e0,"reflect.(*funcTypeFixed4).AssignableTo", 0x800);
	if (!is_code(get_flags(0x4849e0)))
	{
		del_items(0x4849e0);
		add_func(0x4849e0,BADADDR);
	}
	set_name(0x484a00,"reflect.(*funcTypeFixed4).Bits", 0x800);
	if (!is_code(get_flags(0x484a00)))
	{
		del_items(0x484a00);
		add_func(0x484a00,BADADDR);
	}
	set_name(0x484a20,"reflect.(*funcTypeFixed4).ChanDir", 0x800);
	if (!is_code(get_flags(0x484a20)))
	{
		del_items(0x484a20);
		add_func(0x484a20,BADADDR);
	}
	set_name(0x484a40,"reflect.(*funcTypeFixed4).Comparable", 0x800);
	if (!is_code(get_flags(0x484a40)))
	{
		del_items(0x484a40);
		add_func(0x484a40,BADADDR);
	}
	set_name(0x484a60,"reflect.(*funcTypeFixed4).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x484a60)))
	{
		del_items(0x484a60);
		add_func(0x484a60,BADADDR);
	}
	set_name(0x484a80,"reflect.(*funcTypeFixed4).Elem", 0x800);
	if (!is_code(get_flags(0x484a80)))
	{
		del_items(0x484a80);
		add_func(0x484a80,BADADDR);
	}
	set_name(0x484aa0,"reflect.(*funcTypeFixed4).Field", 0x800);
	if (!is_code(get_flags(0x484aa0)))
	{
		del_items(0x484aa0);
		add_func(0x484aa0,BADADDR);
	}
	set_name(0x484af0,"reflect.(*funcTypeFixed4).FieldAlign", 0x800);
	if (!is_code(get_flags(0x484af0)))
	{
		del_items(0x484af0);
		add_func(0x484af0,BADADDR);
	}
	set_name(0x484b10,"reflect.(*funcTypeFixed4).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x484b10)))
	{
		del_items(0x484b10);
		add_func(0x484b10,BADADDR);
	}
	set_name(0x484b60,"reflect.(*funcTypeFixed4).FieldByName", 0x800);
	if (!is_code(get_flags(0x484b60)))
	{
		del_items(0x484b60);
		add_func(0x484b60,BADADDR);
	}
	set_name(0x484bc0,"reflect.(*funcTypeFixed4).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x484bc0)))
	{
		del_items(0x484bc0);
		add_func(0x484bc0,BADADDR);
	}
	set_name(0x484c20,"reflect.(*funcTypeFixed4).Implements", 0x800);
	if (!is_code(get_flags(0x484c20)))
	{
		del_items(0x484c20);
		add_func(0x484c20,BADADDR);
	}
	set_name(0x484c40,"reflect.(*funcTypeFixed4).In", 0x800);
	if (!is_code(get_flags(0x484c40)))
	{
		del_items(0x484c40);
		add_func(0x484c40,BADADDR);
	}
	set_name(0x484c60,"reflect.(*funcTypeFixed4).IsVariadic", 0x800);
	if (!is_code(get_flags(0x484c60)))
	{
		del_items(0x484c60);
		add_func(0x484c60,BADADDR);
	}
	set_name(0x484c80,"reflect.(*funcTypeFixed4).Key", 0x800);
	if (!is_code(get_flags(0x484c80)))
	{
		del_items(0x484c80);
		add_func(0x484c80,BADADDR);
	}
	set_name(0x484ca0,"reflect.(*funcTypeFixed4).Kind", 0x800);
	if (!is_code(get_flags(0x484ca0)))
	{
		del_items(0x484ca0);
		add_func(0x484ca0,BADADDR);
	}
	set_name(0x484cc0,"reflect.(*funcTypeFixed4).Len", 0x800);
	if (!is_code(get_flags(0x484cc0)))
	{
		del_items(0x484cc0);
		add_func(0x484cc0,BADADDR);
	}
	set_name(0x484ce0,"reflect.(*funcTypeFixed4).Method", 0x800);
	if (!is_code(get_flags(0x484ce0)))
	{
		del_items(0x484ce0);
		add_func(0x484ce0,BADADDR);
	}
	set_name(0x484d30,"reflect.(*funcTypeFixed4).MethodByName", 0x800);
	if (!is_code(get_flags(0x484d30)))
	{
		del_items(0x484d30);
		add_func(0x484d30,BADADDR);
	}
	set_name(0x484d80,"reflect.(*funcTypeFixed4).Name", 0x800);
	if (!is_code(get_flags(0x484d80)))
	{
		del_items(0x484d80);
		add_func(0x484d80,BADADDR);
	}
	set_name(0x484da0,"reflect.(*funcTypeFixed4).NumField", 0x800);
	if (!is_code(get_flags(0x484da0)))
	{
		del_items(0x484da0);
		add_func(0x484da0,BADADDR);
	}
	set_name(0x484dc0,"reflect.(*funcTypeFixed4).NumIn", 0x800);
	if (!is_code(get_flags(0x484dc0)))
	{
		del_items(0x484dc0);
		add_func(0x484dc0,BADADDR);
	}
	set_name(0x484de0,"reflect.(*funcTypeFixed4).NumMethod", 0x800);
	if (!is_code(get_flags(0x484de0)))
	{
		del_items(0x484de0);
		add_func(0x484de0,BADADDR);
	}
	set_name(0x484e00,"reflect.(*funcTypeFixed4).NumOut", 0x800);
	if (!is_code(get_flags(0x484e00)))
	{
		del_items(0x484e00);
		add_func(0x484e00,BADADDR);
	}
	set_name(0x484e20,"reflect.(*funcTypeFixed4).Out", 0x800);
	if (!is_code(get_flags(0x484e20)))
	{
		del_items(0x484e20);
		add_func(0x484e20,BADADDR);
	}
	set_name(0x484e40,"reflect.(*funcTypeFixed4).PkgPath", 0x800);
	if (!is_code(get_flags(0x484e40)))
	{
		del_items(0x484e40);
		add_func(0x484e40,BADADDR);
	}
	set_name(0x484e60,"reflect.(*funcTypeFixed4).Size", 0x800);
	if (!is_code(get_flags(0x484e60)))
	{
		del_items(0x484e60);
		add_func(0x484e60,BADADDR);
	}
	set_name(0x484e80,"reflect.(*funcTypeFixed4).String", 0x800);
	if (!is_code(get_flags(0x484e80)))
	{
		del_items(0x484e80);
		add_func(0x484e80,BADADDR);
	}
	set_name(0x484ea0,"reflect.(*funcTypeFixed4).common", 0x800);
	if (!is_code(get_flags(0x484ea0)))
	{
		del_items(0x484ea0);
		add_func(0x484ea0,BADADDR);
	}
	set_name(0x484ec0,"reflect.(*funcTypeFixed4).uncommon", 0x800);
	if (!is_code(get_flags(0x484ec0)))
	{
		del_items(0x484ec0);
		add_func(0x484ec0,BADADDR);
	}
	set_name(0x484ee0,"reflect.(*funcTypeFixed64).Align", 0x800);
	if (!is_code(get_flags(0x484ee0)))
	{
		del_items(0x484ee0);
		add_func(0x484ee0,BADADDR);
	}
	set_name(0x484f00,"reflect.(*funcTypeFixed64).AssignableTo", 0x800);
	if (!is_code(get_flags(0x484f00)))
	{
		del_items(0x484f00);
		add_func(0x484f00,BADADDR);
	}
	set_name(0x484f20,"reflect.(*funcTypeFixed64).Bits", 0x800);
	if (!is_code(get_flags(0x484f20)))
	{
		del_items(0x484f20);
		add_func(0x484f20,BADADDR);
	}
	set_name(0x484f40,"reflect.(*funcTypeFixed64).ChanDir", 0x800);
	if (!is_code(get_flags(0x484f40)))
	{
		del_items(0x484f40);
		add_func(0x484f40,BADADDR);
	}
	set_name(0x484f60,"reflect.(*funcTypeFixed64).Comparable", 0x800);
	if (!is_code(get_flags(0x484f60)))
	{
		del_items(0x484f60);
		add_func(0x484f60,BADADDR);
	}
	set_name(0x484f80,"reflect.(*funcTypeFixed64).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x484f80)))
	{
		del_items(0x484f80);
		add_func(0x484f80,BADADDR);
	}
	set_name(0x484fa0,"reflect.(*funcTypeFixed64).Elem", 0x800);
	if (!is_code(get_flags(0x484fa0)))
	{
		del_items(0x484fa0);
		add_func(0x484fa0,BADADDR);
	}
	set_name(0x484fc0,"reflect.(*funcTypeFixed64).Field", 0x800);
	if (!is_code(get_flags(0x484fc0)))
	{
		del_items(0x484fc0);
		add_func(0x484fc0,BADADDR);
	}
	set_name(0x485010,"reflect.(*funcTypeFixed64).FieldAlign", 0x800);
	if (!is_code(get_flags(0x485010)))
	{
		del_items(0x485010);
		add_func(0x485010,BADADDR);
	}
	set_name(0x485030,"reflect.(*funcTypeFixed64).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x485030)))
	{
		del_items(0x485030);
		add_func(0x485030,BADADDR);
	}
	set_name(0x485080,"reflect.(*funcTypeFixed64).FieldByName", 0x800);
	if (!is_code(get_flags(0x485080)))
	{
		del_items(0x485080);
		add_func(0x485080,BADADDR);
	}
	set_name(0x4850e0,"reflect.(*funcTypeFixed64).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x4850e0)))
	{
		del_items(0x4850e0);
		add_func(0x4850e0,BADADDR);
	}
	set_name(0x485140,"reflect.(*funcTypeFixed64).Implements", 0x800);
	if (!is_code(get_flags(0x485140)))
	{
		del_items(0x485140);
		add_func(0x485140,BADADDR);
	}
	set_name(0x485160,"reflect.(*funcTypeFixed64).In", 0x800);
	if (!is_code(get_flags(0x485160)))
	{
		del_items(0x485160);
		add_func(0x485160,BADADDR);
	}
	set_name(0x485180,"reflect.(*funcTypeFixed64).IsVariadic", 0x800);
	if (!is_code(get_flags(0x485180)))
	{
		del_items(0x485180);
		add_func(0x485180,BADADDR);
	}
	set_name(0x4851a0,"reflect.(*funcTypeFixed64).Key", 0x800);
	if (!is_code(get_flags(0x4851a0)))
	{
		del_items(0x4851a0);
		add_func(0x4851a0,BADADDR);
	}
	set_name(0x4851c0,"reflect.(*funcTypeFixed64).Kind", 0x800);
	if (!is_code(get_flags(0x4851c0)))
	{
		del_items(0x4851c0);
		add_func(0x4851c0,BADADDR);
	}
	set_name(0x4851e0,"reflect.(*funcTypeFixed64).Len", 0x800);
	if (!is_code(get_flags(0x4851e0)))
	{
		del_items(0x4851e0);
		add_func(0x4851e0,BADADDR);
	}
	set_name(0x485200,"reflect.(*funcTypeFixed64).Method", 0x800);
	if (!is_code(get_flags(0x485200)))
	{
		del_items(0x485200);
		add_func(0x485200,BADADDR);
	}
	set_name(0x485250,"reflect.(*funcTypeFixed64).MethodByName", 0x800);
	if (!is_code(get_flags(0x485250)))
	{
		del_items(0x485250);
		add_func(0x485250,BADADDR);
	}
	set_name(0x4852a0,"reflect.(*funcTypeFixed64).Name", 0x800);
	if (!is_code(get_flags(0x4852a0)))
	{
		del_items(0x4852a0);
		add_func(0x4852a0,BADADDR);
	}
	set_name(0x4852c0,"reflect.(*funcTypeFixed64).NumField", 0x800);
	if (!is_code(get_flags(0x4852c0)))
	{
		del_items(0x4852c0);
		add_func(0x4852c0,BADADDR);
	}
	set_name(0x4852e0,"reflect.(*funcTypeFixed64).NumIn", 0x800);
	if (!is_code(get_flags(0x4852e0)))
	{
		del_items(0x4852e0);
		add_func(0x4852e0,BADADDR);
	}
	set_name(0x485300,"reflect.(*funcTypeFixed64).NumMethod", 0x800);
	if (!is_code(get_flags(0x485300)))
	{
		del_items(0x485300);
		add_func(0x485300,BADADDR);
	}
	set_name(0x485320,"reflect.(*funcTypeFixed64).NumOut", 0x800);
	if (!is_code(get_flags(0x485320)))
	{
		del_items(0x485320);
		add_func(0x485320,BADADDR);
	}
	set_name(0x485340,"reflect.(*funcTypeFixed64).Out", 0x800);
	if (!is_code(get_flags(0x485340)))
	{
		del_items(0x485340);
		add_func(0x485340,BADADDR);
	}
	set_name(0x485360,"reflect.(*funcTypeFixed64).PkgPath", 0x800);
	if (!is_code(get_flags(0x485360)))
	{
		del_items(0x485360);
		add_func(0x485360,BADADDR);
	}
	set_name(0x485380,"reflect.(*funcTypeFixed64).Size", 0x800);
	if (!is_code(get_flags(0x485380)))
	{
		del_items(0x485380);
		add_func(0x485380,BADADDR);
	}
	set_name(0x4853a0,"reflect.(*funcTypeFixed64).String", 0x800);
	if (!is_code(get_flags(0x4853a0)))
	{
		del_items(0x4853a0);
		add_func(0x4853a0,BADADDR);
	}
	set_name(0x4853c0,"reflect.(*funcTypeFixed64).common", 0x800);
	if (!is_code(get_flags(0x4853c0)))
	{
		del_items(0x4853c0);
		add_func(0x4853c0,BADADDR);
	}
	set_name(0x4853e0,"reflect.(*funcTypeFixed64).uncommon", 0x800);
	if (!is_code(get_flags(0x4853e0)))
	{
		del_items(0x4853e0);
		add_func(0x4853e0,BADADDR);
	}
	set_name(0x485400,"reflect.(*funcTypeFixed8).Align", 0x800);
	if (!is_code(get_flags(0x485400)))
	{
		del_items(0x485400);
		add_func(0x485400,BADADDR);
	}
	set_name(0x485420,"reflect.(*funcTypeFixed8).AssignableTo", 0x800);
	if (!is_code(get_flags(0x485420)))
	{
		del_items(0x485420);
		add_func(0x485420,BADADDR);
	}
	set_name(0x485440,"reflect.(*funcTypeFixed8).Bits", 0x800);
	if (!is_code(get_flags(0x485440)))
	{
		del_items(0x485440);
		add_func(0x485440,BADADDR);
	}
	set_name(0x485460,"reflect.(*funcTypeFixed8).ChanDir", 0x800);
	if (!is_code(get_flags(0x485460)))
	{
		del_items(0x485460);
		add_func(0x485460,BADADDR);
	}
	set_name(0x485480,"reflect.(*funcTypeFixed8).Comparable", 0x800);
	if (!is_code(get_flags(0x485480)))
	{
		del_items(0x485480);
		add_func(0x485480,BADADDR);
	}
	set_name(0x4854a0,"reflect.(*funcTypeFixed8).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x4854a0)))
	{
		del_items(0x4854a0);
		add_func(0x4854a0,BADADDR);
	}
	set_name(0x4854c0,"reflect.(*funcTypeFixed8).Elem", 0x800);
	if (!is_code(get_flags(0x4854c0)))
	{
		del_items(0x4854c0);
		add_func(0x4854c0,BADADDR);
	}
	set_name(0x4854e0,"reflect.(*funcTypeFixed8).Field", 0x800);
	if (!is_code(get_flags(0x4854e0)))
	{
		del_items(0x4854e0);
		add_func(0x4854e0,BADADDR);
	}
	set_name(0x485530,"reflect.(*funcTypeFixed8).FieldAlign", 0x800);
	if (!is_code(get_flags(0x485530)))
	{
		del_items(0x485530);
		add_func(0x485530,BADADDR);
	}
	set_name(0x485550,"reflect.(*funcTypeFixed8).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x485550)))
	{
		del_items(0x485550);
		add_func(0x485550,BADADDR);
	}
	set_name(0x4855a0,"reflect.(*funcTypeFixed8).FieldByName", 0x800);
	if (!is_code(get_flags(0x4855a0)))
	{
		del_items(0x4855a0);
		add_func(0x4855a0,BADADDR);
	}
	set_name(0x485600,"reflect.(*funcTypeFixed8).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x485600)))
	{
		del_items(0x485600);
		add_func(0x485600,BADADDR);
	}
	set_name(0x485660,"reflect.(*funcTypeFixed8).Implements", 0x800);
	if (!is_code(get_flags(0x485660)))
	{
		del_items(0x485660);
		add_func(0x485660,BADADDR);
	}
	set_name(0x485680,"reflect.(*funcTypeFixed8).In", 0x800);
	if (!is_code(get_flags(0x485680)))
	{
		del_items(0x485680);
		add_func(0x485680,BADADDR);
	}
	set_name(0x4856a0,"reflect.(*funcTypeFixed8).IsVariadic", 0x800);
	if (!is_code(get_flags(0x4856a0)))
	{
		del_items(0x4856a0);
		add_func(0x4856a0,BADADDR);
	}
	set_name(0x4856c0,"reflect.(*funcTypeFixed8).Key", 0x800);
	if (!is_code(get_flags(0x4856c0)))
	{
		del_items(0x4856c0);
		add_func(0x4856c0,BADADDR);
	}
	set_name(0x4856e0,"reflect.(*funcTypeFixed8).Kind", 0x800);
	if (!is_code(get_flags(0x4856e0)))
	{
		del_items(0x4856e0);
		add_func(0x4856e0,BADADDR);
	}
	set_name(0x485700,"reflect.(*funcTypeFixed8).Len", 0x800);
	if (!is_code(get_flags(0x485700)))
	{
		del_items(0x485700);
		add_func(0x485700,BADADDR);
	}
	set_name(0x485720,"reflect.(*funcTypeFixed8).Method", 0x800);
	if (!is_code(get_flags(0x485720)))
	{
		del_items(0x485720);
		add_func(0x485720,BADADDR);
	}
	set_name(0x485770,"reflect.(*funcTypeFixed8).MethodByName", 0x800);
	if (!is_code(get_flags(0x485770)))
	{
		del_items(0x485770);
		add_func(0x485770,BADADDR);
	}
	set_name(0x4857c0,"reflect.(*funcTypeFixed8).Name", 0x800);
	if (!is_code(get_flags(0x4857c0)))
	{
		del_items(0x4857c0);
		add_func(0x4857c0,BADADDR);
	}
	set_name(0x4857e0,"reflect.(*funcTypeFixed8).NumField", 0x800);
	if (!is_code(get_flags(0x4857e0)))
	{
		del_items(0x4857e0);
		add_func(0x4857e0,BADADDR);
	}
	set_name(0x485800,"reflect.(*funcTypeFixed8).NumIn", 0x800);
	if (!is_code(get_flags(0x485800)))
	{
		del_items(0x485800);
		add_func(0x485800,BADADDR);
	}
	set_name(0x485820,"reflect.(*funcTypeFixed8).NumMethod", 0x800);
	if (!is_code(get_flags(0x485820)))
	{
		del_items(0x485820);
		add_func(0x485820,BADADDR);
	}
	set_name(0x485840,"reflect.(*funcTypeFixed8).NumOut", 0x800);
	if (!is_code(get_flags(0x485840)))
	{
		del_items(0x485840);
		add_func(0x485840,BADADDR);
	}
	set_name(0x485860,"reflect.(*funcTypeFixed8).Out", 0x800);
	if (!is_code(get_flags(0x485860)))
	{
		del_items(0x485860);
		add_func(0x485860,BADADDR);
	}
	set_name(0x485880,"reflect.(*funcTypeFixed8).PkgPath", 0x800);
	if (!is_code(get_flags(0x485880)))
	{
		del_items(0x485880);
		add_func(0x485880,BADADDR);
	}
	set_name(0x4858a0,"reflect.(*funcTypeFixed8).Size", 0x800);
	if (!is_code(get_flags(0x4858a0)))
	{
		del_items(0x4858a0);
		add_func(0x4858a0,BADADDR);
	}
	set_name(0x4858c0,"reflect.(*funcTypeFixed8).String", 0x800);
	if (!is_code(get_flags(0x4858c0)))
	{
		del_items(0x4858c0);
		add_func(0x4858c0,BADADDR);
	}
	set_name(0x4858e0,"reflect.(*funcTypeFixed8).common", 0x800);
	if (!is_code(get_flags(0x4858e0)))
	{
		del_items(0x4858e0);
		add_func(0x4858e0,BADADDR);
	}
	set_name(0x485900,"reflect.(*funcTypeFixed8).uncommon", 0x800);
	if (!is_code(get_flags(0x485900)))
	{
		del_items(0x485900);
		add_func(0x485900,BADADDR);
	}
	set_name(0x485920,"reflect.(*ptrType).Align", 0x800);
	if (!is_code(get_flags(0x485920)))
	{
		del_items(0x485920);
		add_func(0x485920,BADADDR);
	}
	set_name(0x485940,"reflect.(*ptrType).AssignableTo", 0x800);
	if (!is_code(get_flags(0x485940)))
	{
		del_items(0x485940);
		add_func(0x485940,BADADDR);
	}
	set_name(0x485960,"reflect.(*ptrType).Bits", 0x800);
	if (!is_code(get_flags(0x485960)))
	{
		del_items(0x485960);
		add_func(0x485960,BADADDR);
	}
	set_name(0x485980,"reflect.(*ptrType).ChanDir", 0x800);
	if (!is_code(get_flags(0x485980)))
	{
		del_items(0x485980);
		add_func(0x485980,BADADDR);
	}
	set_name(0x4859a0,"reflect.(*ptrType).Comparable", 0x800);
	if (!is_code(get_flags(0x4859a0)))
	{
		del_items(0x4859a0);
		add_func(0x4859a0,BADADDR);
	}
	set_name(0x4859c0,"reflect.(*ptrType).ConvertibleTo", 0x800);
	if (!is_code(get_flags(0x4859c0)))
	{
		del_items(0x4859c0);
		add_func(0x4859c0,BADADDR);
	}
	set_name(0x4859e0,"reflect.(*ptrType).Elem", 0x800);
	if (!is_code(get_flags(0x4859e0)))
	{
		del_items(0x4859e0);
		add_func(0x4859e0,BADADDR);
	}
	set_name(0x485a00,"reflect.(*ptrType).Field", 0x800);
	if (!is_code(get_flags(0x485a00)))
	{
		del_items(0x485a00);
		add_func(0x485a00,BADADDR);
	}
	set_name(0x485a50,"reflect.(*ptrType).FieldAlign", 0x800);
	if (!is_code(get_flags(0x485a50)))
	{
		del_items(0x485a50);
		add_func(0x485a50,BADADDR);
	}
	set_name(0x485a70,"reflect.(*ptrType).FieldByIndex", 0x800);
	if (!is_code(get_flags(0x485a70)))
	{
		del_items(0x485a70);
		add_func(0x485a70,BADADDR);
	}
	set_name(0x485ac0,"reflect.(*ptrType).FieldByName", 0x800);
	if (!is_code(get_flags(0x485ac0)))
	{
		del_items(0x485ac0);
		add_func(0x485ac0,BADADDR);
	}
	set_name(0x485b20,"reflect.(*ptrType).FieldByNameFunc", 0x800);
	if (!is_code(get_flags(0x485b20)))
	{
		del_items(0x485b20);
		add_func(0x485b20,BADADDR);
	}
	set_name(0x485b80,"reflect.(*ptrType).Implements", 0x800);
	if (!is_code(get_flags(0x485b80)))
	{
		del_items(0x485b80);
		add_func(0x485b80,BADADDR);
	}
	set_name(0x485ba0,"reflect.(*ptrType).In", 0x800);
	if (!is_code(get_flags(0x485ba0)))
	{
		del_items(0x485ba0);
		add_func(0x485ba0,BADADDR);
	}
	set_name(0x485bc0,"reflect.(*ptrType).IsVariadic", 0x800);
	if (!is_code(get_flags(0x485bc0)))
	{
		del_items(0x485bc0);
		add_func(0x485bc0,BADADDR);
	}
	set_name(0x485be0,"reflect.(*ptrType).Key", 0x800);
	if (!is_code(get_flags(0x485be0)))
	{
		del_items(0x485be0);
		add_func(0x485be0,BADADDR);
	}
	set_name(0x485c00,"reflect.(*ptrType).Kind", 0x800);
	if (!is_code(get_flags(0x485c00)))
	{
		del_items(0x485c00);
		add_func(0x485c00,BADADDR);
	}
	set_name(0x485c20,"reflect.(*ptrType).Len", 0x800);
	if (!is_code(get_flags(0x485c20)))
	{
		del_items(0x485c20);
		add_func(0x485c20,BADADDR);
	}
	set_name(0x485c40,"reflect.(*ptrType).Method", 0x800);
	if (!is_code(get_flags(0x485c40)))
	{
		del_items(0x485c40);
		add_func(0x485c40,BADADDR);
	}
	set_name(0x485c90,"reflect.(*ptrType).MethodByName", 0x800);
	if (!is_code(get_flags(0x485c90)))
	{
		del_items(0x485c90);
		add_func(0x485c90,BADADDR);
	}
	set_name(0x485ce0,"reflect.(*ptrType).Name", 0x800);
	if (!is_code(get_flags(0x485ce0)))
	{
		del_items(0x485ce0);
		add_func(0x485ce0,BADADDR);
	}
	set_name(0x485d00,"reflect.(*ptrType).NumField", 0x800);
	if (!is_code(get_flags(0x485d00)))
	{
		del_items(0x485d00);
		add_func(0x485d00,BADADDR);
	}
	set_name(0x485d20,"reflect.(*ptrType).NumIn", 0x800);
	if (!is_code(get_flags(0x485d20)))
	{
		del_items(0x485d20);
		add_func(0x485d20,BADADDR);
	}
	set_name(0x485d40,"reflect.(*ptrType).NumMethod", 0x800);
	if (!is_code(get_flags(0x485d40)))
	{
		del_items(0x485d40);
		add_func(0x485d40,BADADDR);
	}
	set_name(0x485d60,"reflect.(*ptrType).NumOut", 0x800);
	if (!is_code(get_flags(0x485d60)))
	{
		del_items(0x485d60);
		add_func(0x485d60,BADADDR);
	}
	set_name(0x485d80,"reflect.(*ptrType).Out", 0x800);
	if (!is_code(get_flags(0x485d80)))
	{
		del_items(0x485d80);
		add_func(0x485d80,BADADDR);
	}
	set_name(0x485da0,"reflect.(*ptrType).PkgPath", 0x800);
	if (!is_code(get_flags(0x485da0)))
	{
		del_items(0x485da0);
		add_func(0x485da0,BADADDR);
	}
	set_name(0x485dc0,"reflect.(*ptrType).Size", 0x800);
	if (!is_code(get_flags(0x485dc0)))
	{
		del_items(0x485dc0);
		add_func(0x485dc0,BADADDR);
	}
	set_name(0x485de0,"reflect.(*ptrType).String", 0x800);
	if (!is_code(get_flags(0x485de0)))
	{
		del_items(0x485de0);
		add_func(0x485de0,BADADDR);
	}
	set_name(0x485e00,"reflect.(*ptrType).common", 0x800);
	if (!is_code(get_flags(0x485e00)))
	{
		del_items(0x485e00);
		add_func(0x485e00,BADADDR);
	}
	set_name(0x485e20,"reflect.(*ptrType).uncommon", 0x800);
	if (!is_code(get_flags(0x485e20)))
	{
		del_items(0x485e20);
		add_func(0x485e20,BADADDR);
	}
	set_name(0x485e40,"type..eq.[27]string", 0x800);
	if (!is_code(get_flags(0x485e40)))
	{
		del_items(0x485e40);
		add_func(0x485e40,BADADDR);
	}
	set_name(0x485f00,"type..eq.struct { reflect.b bool; reflect.x interface {} }", 0x800);
	if (!is_code(get_flags(0x485f00)))
	{
		del_items(0x485f00);
		add_func(0x485f00,BADADDR);
	}
	set_name(0x485f80,"sort.insertionSort", 0x800);
	if (!is_code(get_flags(0x485f80)))
	{
		del_items(0x485f80);
		add_func(0x485f80,BADADDR);
	}
	set_name(0x486090,"sort.swapRange", 0x800);
	if (!is_code(get_flags(0x486090)))
	{
		del_items(0x486090);
		add_func(0x486090,BADADDR);
	}
	set_name(0x486110,"sort.Stable", 0x800);
	if (!is_code(get_flags(0x486110)))
	{
		del_items(0x486110);
		add_func(0x486110,BADADDR);
	}
	set_name(0x486180,"sort.stable", 0x800);
	if (!is_code(get_flags(0x486180)))
	{
		del_items(0x486180);
		add_func(0x486180,BADADDR);
	}
	set_name(0x4862e0,"sort.symMerge", 0x800);
	if (!is_code(get_flags(0x4862e0)))
	{
		del_items(0x4862e0);
		add_func(0x4862e0,BADADDR);
	}
	set_name(0x4866e0,"sort.rotate", 0x800);
	if (!is_code(get_flags(0x4866e0)))
	{
		del_items(0x4866e0);
		add_func(0x4866e0,BADADDR);
	}
	set_name(0x486800,"internal/fmtsort.(*SortedMap).Len", 0x800);
	if (!is_code(get_flags(0x486800)))
	{
		del_items(0x486800);
		add_func(0x486800,BADADDR);
	}
	set_name(0x486810,"internal/fmtsort.(*SortedMap).Less", 0x800);
	if (!is_code(get_flags(0x486810)))
	{
		del_items(0x486810);
		add_func(0x486810,BADADDR);
	}
	set_name(0x4868d0,"internal/fmtsort.(*SortedMap).Swap", 0x800);
	if (!is_code(get_flags(0x4868d0)))
	{
		del_items(0x4868d0);
		add_func(0x4868d0,BADADDR);
	}
	set_name(0x486ac0,"internal/fmtsort.Sort", 0x800);
	if (!is_code(get_flags(0x486ac0)))
	{
		del_items(0x486ac0);
		add_func(0x486ac0,BADADDR);
	}
	set_name(0x486f70,"internal/fmtsort.compare", 0x800);
	if (!is_code(get_flags(0x486f70)))
	{
		del_items(0x486f70);
		add_func(0x486f70,BADADDR);
	}
	set_name(0x488340,"internal/fmtsort.nilCompare", 0x800);
	if (!is_code(get_flags(0x488340)))
	{
		del_items(0x488340);
		add_func(0x488340,BADADDR);
	}
	set_name(0x488640,"io.init", 0x800);
	if (!is_code(get_flags(0x488640)))
	{
		del_items(0x488640);
		add_func(0x488640,BADADDR);
	}
	set_name(0x488900,"internal/syscall/windows/sysdll.Add", 0x800);
	if (!is_code(get_flags(0x488900)))
	{
		del_items(0x488900);
		add_func(0x488900,BADADDR);
	}
	set_name(0x488990,"internal/syscall/windows/sysdll.init", 0x800);
	if (!is_code(get_flags(0x488990)))
	{
		del_items(0x488990);
		add_func(0x488990,BADADDR);
	}
	set_name(0x4889f0,"unicode/utf16.Encode", 0x800);
	if (!is_code(get_flags(0x4889f0)))
	{
		del_items(0x4889f0);
		add_func(0x4889f0,BADADDR);
	}
	set_name(0x488ba0,"unicode/utf16.Decode", 0x800);
	if (!is_code(get_flags(0x488ba0)))
	{
		del_items(0x488ba0);
		add_func(0x488ba0,BADADDR);
	}
	set_name(0x488d10,"internal/oserror.init", 0x800);
	if (!is_code(get_flags(0x488d10)))
	{
		del_items(0x488d10);
		add_func(0x488d10,BADADDR);
	}
	set_name(0x488ee0,"syscall.(*DLLError).Error", 0x800);
	if (!is_code(get_flags(0x488ee0)))
	{
		del_items(0x488ee0);
		add_func(0x488ee0,BADADDR);
	}
	set_name(0x488f00,"syscall.init.0", 0x800);
	if (!is_code(get_flags(0x488f00)))
	{
		del_items(0x488f00);
		add_func(0x488f00,BADADDR);
	}
	set_name(0x4890b0,"syscall.LoadDLL", 0x800);
	if (!is_code(get_flags(0x4890b0)))
	{
		del_items(0x4890b0);
		add_func(0x4890b0,BADADDR);
	}
	set_name(0x4894c0,"syscall.(*DLL).FindProc", 0x800);
	if (!is_code(get_flags(0x4894c0)))
	{
		del_items(0x4894c0);
		add_func(0x4894c0,BADADDR);
	}
	set_name(0x489850,"syscall.(*LazyDLL).Load", 0x800);
	if (!is_code(get_flags(0x489850)))
	{
		del_items(0x489850);
		add_func(0x489850,BADADDR);
	}
	set_name(0x4899a0,"syscall.(*LazyDLL).NewProc", 0x800);
	if (!is_code(get_flags(0x4899a0)))
	{
		del_items(0x4899a0);
		add_func(0x4899a0,BADADDR);
	}
	set_name(0x489a50,"syscall.NewLazyDLL", 0x800);
	if (!is_code(get_flags(0x489a50)))
	{
		del_items(0x489a50);
		add_func(0x489a50,BADADDR);
	}
	set_name(0x489ad0,"syscall.(*LazyProc).Find", 0x800);
	if (!is_code(get_flags(0x489ad0)))
	{
		del_items(0x489ad0);
		add_func(0x489ad0,BADADDR);
	}
	set_name(0x489c80,"syscall.(*LazyProc).mustFind", 0x800);
	if (!is_code(get_flags(0x489c80)))
	{
		del_items(0x489c80);
		add_func(0x489c80,BADADDR);
	}
	set_name(0x489cf0,"syscall.(*LazyProc).Addr", 0x800);
	if (!is_code(get_flags(0x489cf0)))
	{
		del_items(0x489cf0);
		add_func(0x489cf0,BADADDR);
	}
	set_name(0x489d50,"syscall.itoa", 0x800);
	if (!is_code(get_flags(0x489d50)))
	{
		del_items(0x489d50);
		add_func(0x489d50,BADADDR);
	}
	set_name(0x489e20,"syscall.uitoa", 0x800);
	if (!is_code(get_flags(0x489e20)))
	{
		del_items(0x489e20);
		add_func(0x489e20,BADADDR);
	}
	set_name(0x489f20,"syscall.ByteSliceFromString", 0x800);
	if (!is_code(get_flags(0x489f20)))
	{
		del_items(0x489f20);
		add_func(0x489f20,BADADDR);
	}
	set_name(0x48a030,"syscall.UTF16FromString", 0x800);
	if (!is_code(get_flags(0x48a030)))
	{
		del_items(0x48a030);
		add_func(0x48a030,BADADDR);
	}
	set_name(0x48a190,"syscall.UTF16ToString", 0x800);
	if (!is_code(get_flags(0x48a190)))
	{
		del_items(0x48a190);
		add_func(0x48a190,BADADDR);
	}
	set_name(0x48a250,"syscall.Errno.Error", 0x800);
	if (!is_code(get_flags(0x48a250)))
	{
		del_items(0x48a250);
		add_func(0x48a250,BADADDR);
	}
	set_name(0x48a500,"syscall.Write", 0x800);
	if (!is_code(get_flags(0x48a500)))
	{
		del_items(0x48a500);
		add_func(0x48a500,BADADDR);
	}
	set_name(0x48a5d0,"syscall.getStdHandle", 0x800);
	if (!is_code(get_flags(0x48a5d0)))
	{
		del_items(0x48a5d0);
		add_func(0x48a5d0,BADADDR);
	}
	set_name(0x48a640,"syscall.formatMessage", 0x800);
	if (!is_code(get_flags(0x48a640)))
	{
		del_items(0x48a640);
		add_func(0x48a640,BADADDR);
	}
	set_name(0x48a7e0,"syscall.WriteFile", 0x800);
	if (!is_code(get_flags(0x48a7e0)))
	{
		del_items(0x48a7e0);
		add_func(0x48a7e0,BADADDR);
	}
	set_name(0x48a940,"syscall.CloseHandle", 0x800);
	if (!is_code(get_flags(0x48a940)))
	{
		del_items(0x48a940);
		add_func(0x48a940,BADADDR);
	}
	set_name(0x48aa20,"syscall.GetStdHandle", 0x800);
	if (!is_code(get_flags(0x48aa20)))
	{
		del_items(0x48aa20);
		add_func(0x48aa20,BADADDR);
	}
	set_name(0x48ab10,"syscall.FindClose", 0x800);
	if (!is_code(get_flags(0x48ab10)))
	{
		del_items(0x48ab10);
		add_func(0x48ab10,BADADDR);
	}
	set_name(0x48abf0,"syscall.CancelIo", 0x800);
	if (!is_code(get_flags(0x48abf0)))
	{
		del_items(0x48abf0);
		add_func(0x48abf0,BADADDR);
	}
	set_name(0x48acd0,"syscall.CancelIoEx", 0x800);
	if (!is_code(get_flags(0x48acd0)))
	{
		del_items(0x48acd0);
		add_func(0x48acd0,BADADDR);
	}
	set_name(0x48adc0,"syscall.GetFileType", 0x800);
	if (!is_code(get_flags(0x48adc0)))
	{
		del_items(0x48adc0);
		add_func(0x48adc0,BADADDR);
	}
	set_name(0x48aeb0,"syscall.GetCommandLine", 0x800);
	if (!is_code(get_flags(0x48aeb0)))
	{
		del_items(0x48aeb0);
		add_func(0x48aeb0,BADADDR);
	}
	set_name(0x48af20,"syscall.SetHandleInformation", 0x800);
	if (!is_code(get_flags(0x48af20)))
	{
		del_items(0x48af20);
		add_func(0x48af20,BADADDR);
	}
	set_name(0x48b000,"syscall.GetConsoleMode", 0x800);
	if (!is_code(get_flags(0x48b000)))
	{
		del_items(0x48b000);
		add_func(0x48b000,BADADDR);
	}
	set_name(0x48b0f0,"syscall.WriteConsole", 0x800);
	if (!is_code(get_flags(0x48b0f0)))
	{
		del_items(0x48b0f0);
		add_func(0x48b0f0,BADADDR);
	}
	set_name(0x48b220,"syscall.WSAStartup", 0x800);
	if (!is_code(get_flags(0x48b220)))
	{
		del_items(0x48b220);
		add_func(0x48b220,BADADDR);
	}
	set_name(0x48b2e0,"syscall.WSAIoctl", 0x800);
	if (!is_code(get_flags(0x48b2e0)))
	{
		del_items(0x48b2e0);
		add_func(0x48b2e0,BADADDR);
	}
	set_name(0x48b470,"syscall.Closesocket", 0x800);
	if (!is_code(get_flags(0x48b470)))
	{
		del_items(0x48b470);
		add_func(0x48b470,BADADDR);
	}
	set_name(0x48b550,"syscall.WSASend", 0x800);
	if (!is_code(get_flags(0x48b550)))
	{
		del_items(0x48b550);
		add_func(0x48b550,BADADDR);
	}
	set_name(0x48b6d0,"syscall.SetFileCompletionNotificationModes", 0x800);
	if (!is_code(get_flags(0x48b6d0)))
	{
		del_items(0x48b6d0);
		add_func(0x48b6d0,BADADDR);
	}
	set_name(0x48b7b0,"syscall.WSAEnumProtocols", 0x800);
	if (!is_code(get_flags(0x48b7b0)))
	{
		del_items(0x48b7b0);
		add_func(0x48b7b0,BADADDR);
	}
	set_name(0x48b8d0,"syscall.getSystemDirectory", 0x800);
	if (!is_code(get_flags(0x48b8d0)))
	{
		del_items(0x48b8d0);
		add_func(0x48b8d0,BADADDR);
	}
	set_name(0x48b9d0,"syscall.init", 0x800);
	if (!is_code(get_flags(0x48b9d0)))
	{
		del_items(0x48b9d0);
		add_func(0x48b9d0,BADADDR);
	}
	set_name(0x48eaf0,"type..eq.syscall.DLL", 0x800);
	if (!is_code(get_flags(0x48eaf0)))
	{
		del_items(0x48eaf0);
		add_func(0x48eaf0,BADADDR);
	}
	set_name(0x48eb80,"type..eq.syscall.Proc", 0x800);
	if (!is_code(get_flags(0x48eb80)))
	{
		del_items(0x48eb80);
		add_func(0x48eb80,BADADDR);
	}
	set_name(0x48ec20,"type..eq.syscall.DLLError", 0x800);
	if (!is_code(get_flags(0x48ec20)))
	{
		del_items(0x48ec20);
		add_func(0x48ec20,BADADDR);
	}
	set_name(0x48ed20,"syscall.(*Errno).Error", 0x800);
	if (!is_code(get_flags(0x48ed20)))
	{
		del_items(0x48ed20);
		add_func(0x48ed20,BADADDR);
	}
	set_name(0x48eda0,"type..eq.syscall.LazyDLL", 0x800);
	if (!is_code(get_flags(0x48eda0)))
	{
		del_items(0x48eda0);
		add_func(0x48eda0,BADADDR);
	}
	set_name(0x48ee40,"type..eq.syscall.LazyProc", 0x800);
	if (!is_code(get_flags(0x48ee40)))
	{
		del_items(0x48ee40);
		add_func(0x48ee40,BADADDR);
	}
	set_name(0x48ef00,"type..eq.syscall.WSABuf", 0x800);
	if (!is_code(get_flags(0x48ef00)))
	{
		del_items(0x48ef00);
		add_func(0x48ef00,BADADDR);
	}
	set_name(0x48ef30,"type..eq.syscall.WSAData", 0x800);
	if (!is_code(get_flags(0x48ef30)))
	{
		del_items(0x48ef30);
		add_func(0x48ef30,BADADDR);
	}
	set_name(0x48ef90,"type..eq.[131]string", 0x800);
	if (!is_code(get_flags(0x48ef90)))
	{
		del_items(0x48ef90);
		add_func(0x48ef90,BADADDR);
	}
	set_name(0x48f050,"internal/syscall/windows.UTF16PtrToString", 0x800);
	if (!is_code(get_flags(0x48f050)))
	{
		del_items(0x48f050);
		add_func(0x48f050,BADADDR);
	}
	set_name(0x48f140,"internal/syscall/windows.GetModuleFileName", 0x800);
	if (!is_code(get_flags(0x48f140)))
	{
		del_items(0x48f140);
		add_func(0x48f140,BADADDR);
	}
	set_name(0x48f240,"internal/syscall/windows.init", 0x800);
	if (!is_code(get_flags(0x48f240)))
	{
		del_items(0x48f240);
		add_func(0x48f240,BADADDR);
	}
	set_name(0x48fd40,"type..eq.internal/syscall/windows.WSAMsg", 0x800);
	if (!is_code(get_flags(0x48fd40)))
	{
		del_items(0x48fd40);
		add_func(0x48fd40,BADADDR);
	}
	set_name(0x48fd90,"internal/syscall/windows/registry.init", 0x800);
	if (!is_code(get_flags(0x48fd90)))
	{
		del_items(0x48fd90);
		add_func(0x48fd90,BADADDR);
	}
	set_name(0x4900f0,"time.init", 0x800);
	if (!is_code(get_flags(0x4900f0)))
	{
		del_items(0x4900f0);
		add_func(0x4900f0,BADADDR);
	}
	set_name(0x490660,"type..eq.time.abbr", 0x800);
	if (!is_code(get_flags(0x490660)))
	{
		del_items(0x490660);
		add_func(0x490660,BADADDR);
	}
	set_name(0x490720,"type..eq.[137]time.abbr", 0x800);
	if (!is_code(get_flags(0x490720)))
	{
		del_items(0x490720);
		add_func(0x490720,BADADDR);
	}
	set_name(0x490850,"type..eq.[137]string", 0x800);
	if (!is_code(get_flags(0x490850)))
	{
		del_items(0x490850);
		add_func(0x490850,BADADDR);
	}
	set_name(0x490910,"internal/poll.(*TimeoutError).Error", 0x800);
	if (!is_code(get_flags(0x490910)))
	{
		del_items(0x490910);
		add_func(0x490910,BADADDR);
	}
	set_name(0x490930,"internal/poll.(*fdMutex).increfAndClose", 0x800);
	if (!is_code(get_flags(0x490930)))
	{
		del_items(0x490930);
		add_func(0x490930,BADADDR);
	}
	set_name(0x490a60,"internal/poll.(*fdMutex).decref", 0x800);
	if (!is_code(get_flags(0x490a60)))
	{
		del_items(0x490a60);
		add_func(0x490a60,BADADDR);
	}
	set_name(0x490af0,"internal/poll.(*fdMutex).rwlock", 0x800);
	if (!is_code(get_flags(0x490af0)))
	{
		del_items(0x490af0);
		add_func(0x490af0,BADADDR);
	}
	set_name(0x490c60,"internal/poll.(*fdMutex).rwunlock", 0x800);
	if (!is_code(get_flags(0x490c60)))
	{
		del_items(0x490c60);
		add_func(0x490c60,BADADDR);
	}
	set_name(0x490d90,"internal/poll.(*FD).decref", 0x800);
	if (!is_code(get_flags(0x490d90)))
	{
		del_items(0x490d90);
		add_func(0x490d90,BADADDR);
	}
	set_name(0x490e10,"internal/poll.(*FD).writeUnlock", 0x800);
	if (!is_code(get_flags(0x490e10)))
	{
		del_items(0x490e10);
		add_func(0x490e10,BADADDR);
	}
	set_name(0x490e80,"internal/poll.(*pollDesc).init", 0x800);
	if (!is_code(get_flags(0x490e80)))
	{
		del_items(0x490e80);
		add_func(0x490e80,BADADDR);
	}
	set_name(0x490f90,"internal/poll.(*pollDesc).prepare", 0x800);
	if (!is_code(get_flags(0x490f90)))
	{
		del_items(0x490f90);
		add_func(0x490f90,BADADDR);
	}
	set_name(0x4910e0,"internal/poll.(*pollDesc).wait", 0x800);
	if (!is_code(get_flags(0x4910e0)))
	{
		del_items(0x4910e0);
		add_func(0x4910e0,BADADDR);
	}
	set_name(0x491260,"internal/poll.checkSetFileCompletionNotificationModes", 0x800);
	if (!is_code(get_flags(0x491260)))
	{
		del_items(0x491260);
		add_func(0x491260,BADADDR);
	}
	set_name(0x4913b0,"internal/poll.init.0", 0x800);
	if (!is_code(get_flags(0x4913b0)))
	{
		del_items(0x4913b0);
		add_func(0x4913b0,BADADDR);
	}
	set_name(0x4914a0,"internal/poll.(*ioSrv).ProcessRemoteIO", 0x800);
	if (!is_code(get_flags(0x4914a0)))
	{
		del_items(0x4914a0);
		add_func(0x4914a0,BADADDR);
	}
	set_name(0x491600,"internal/poll.(*ioSrv).ExecIO", 0x800);
	if (!is_code(get_flags(0x491600)))
	{
		del_items(0x491600);
		add_func(0x491600,BADADDR);
	}
	set_name(0x491cb0,"internal/poll.startServer", 0x800);
	if (!is_code(get_flags(0x491cb0)))
	{
		del_items(0x491cb0);
		add_func(0x491cb0,BADADDR);
	}
	set_name(0x491dc0,"internal/poll.(*FD).Init", 0x800);
	if (!is_code(get_flags(0x491dc0)))
	{
		del_items(0x491dc0);
		add_func(0x491dc0,BADADDR);
	}
	set_name(0x492640,"internal/poll.(*FD).destroy", 0x800);
	if (!is_code(get_flags(0x492640)))
	{
		del_items(0x492640);
		add_func(0x492640,BADADDR);
	}
	set_name(0x492780,"internal/poll.(*FD).Close", 0x800);
	if (!is_code(get_flags(0x492780)))
	{
		del_items(0x492780);
		add_func(0x492780,BADADDR);
	}
	set_name(0x4928b0,"internal/poll.(*FD).Write", 0x800);
	if (!is_code(get_flags(0x4928b0)))
	{
		del_items(0x4928b0);
		add_func(0x4928b0,BADADDR);
	}
	set_name(0x492d60,"internal/poll.(*FD).writeConsole", 0x800);
	if (!is_code(get_flags(0x492d60)))
	{
		del_items(0x492d60);
		add_func(0x492d60,BADADDR);
	}
	set_name(0x493370,"internal/poll.(*FD).Write.func1", 0x800);
	if (!is_code(get_flags(0x493370)))
	{
		del_items(0x493370);
		add_func(0x493370,BADADDR);
	}
	set_name(0x493410,"internal/poll.init", 0x800);
	if (!is_code(get_flags(0x493410)))
	{
		del_items(0x493410);
		add_func(0x493410,BADADDR);
	}
	set_name(0x493590,"os.errInvalid", 0x800);
	if (!is_code(get_flags(0x493590)))
	{
		del_items(0x493590);
		add_func(0x493590,BADADDR);
	}
	set_name(0x4935b0,"os.errPermission", 0x800);
	if (!is_code(get_flags(0x4935b0)))
	{
		del_items(0x4935b0);
		add_func(0x4935b0,BADADDR);
	}
	set_name(0x4935d0,"os.errExist", 0x800);
	if (!is_code(get_flags(0x4935d0)))
	{
		del_items(0x4935d0);
		add_func(0x4935d0,BADADDR);
	}
	set_name(0x4935f0,"os.errNotExist", 0x800);
	if (!is_code(get_flags(0x4935f0)))
	{
		del_items(0x4935f0);
		add_func(0x4935f0,BADADDR);
	}
	set_name(0x493610,"os.errClosed", 0x800);
	if (!is_code(get_flags(0x493610)))
	{
		del_items(0x493610);
		add_func(0x493610,BADADDR);
	}
	set_name(0x493630,"os.errNoDeadline", 0x800);
	if (!is_code(get_flags(0x493630)))
	{
		del_items(0x493630);
		add_func(0x493630,BADADDR);
	}
	set_name(0x493650,"os.(*PathError).Error", 0x800);
	if (!is_code(get_flags(0x493650)))
	{
		del_items(0x493650);
		add_func(0x493650,BADADDR);
	}
	set_name(0x493730,"os.init.0", 0x800);
	if (!is_code(get_flags(0x493730)))
	{
		del_items(0x493730);
		add_func(0x493730,BADADDR);
	}
	set_name(0x493870,"os.appendBSBytes", 0x800);
	if (!is_code(get_flags(0x493870)))
	{
		del_items(0x493870);
		add_func(0x493870,BADADDR);
	}
	set_name(0x493940,"os.readNextArg", 0x800);
	if (!is_code(get_flags(0x493940)))
	{
		del_items(0x493940);
		add_func(0x493940,BADADDR);
	}
	set_name(0x493cf0,"os.commandLineToArgv", 0x800);
	if (!is_code(get_flags(0x493cf0)))
	{
		del_items(0x493cf0);
		add_func(0x493cf0,BADADDR);
	}
	set_name(0x493eb0,"os.Executable", 0x800);
	if (!is_code(get_flags(0x493eb0)))
	{
		del_items(0x493eb0);
		add_func(0x493eb0,BADADDR);
	}
	set_name(0x493f20,"os.getModuleFileName", 0x800);
	if (!is_code(get_flags(0x493f20)))
	{
		del_items(0x493f20);
		add_func(0x493f20,BADADDR);
	}
	set_name(0x494030,"os.(*File).Name", 0x800);
	if (!is_code(get_flags(0x494030)))
	{
		del_items(0x494030);
		add_func(0x494030,BADADDR);
	}
	set_name(0x494060,"os.(*File).Write", 0x800);
	if (!is_code(get_flags(0x494060)))
	{
		del_items(0x494060);
		add_func(0x494060,BADADDR);
	}
	set_name(0x4942f0,"os.newFile", 0x800);
	if (!is_code(get_flags(0x4942f0)))
	{
		del_items(0x4942f0);
		add_func(0x4942f0,BADADDR);
	}
	set_name(0x494500,"os.NewFile", 0x800);
	if (!is_code(get_flags(0x494500)))
	{
		del_items(0x494500);
		add_func(0x494500,BADADDR);
	}
	set_name(0x4945a0,"os.(*file).close", 0x800);
	if (!is_code(get_flags(0x4945a0)))
	{
		del_items(0x4945a0);
		add_func(0x4945a0,BADADDR);
	}
	set_name(0x4947a0,"os.init.1", 0x800);
	if (!is_code(get_flags(0x4947a0)))
	{
		del_items(0x4947a0);
		add_func(0x4947a0,BADADDR);
	}
	set_name(0x4947b0,"os.init", 0x800);
	if (!is_code(get_flags(0x4947b0)))
	{
		del_items(0x4947b0);
		add_func(0x4947b0,BADADDR);
	}
	set_name(0x494a90,"type..eq.os.dirInfo", 0x800);
	if (!is_code(get_flags(0x494a90)))
	{
		del_items(0x494a90);
		add_func(0x494a90,BADADDR);
	}
	set_name(0x494b90,"type..eq.os.PathError", 0x800);
	if (!is_code(get_flags(0x494b90)))
	{
		del_items(0x494b90);
		add_func(0x494b90,BADADDR);
	}
	set_name(0x494c90,"fmt.(*fmt).writePadding", 0x800);
	if (!is_code(get_flags(0x494c90)))
	{
		del_items(0x494c90);
		add_func(0x494c90,BADADDR);
	}
	set_name(0x494e20,"fmt.(*fmt).pad", 0x800);
	if (!is_code(get_flags(0x494e20)))
	{
		del_items(0x494e20);
		add_func(0x494e20,BADADDR);
	}
	set_name(0x495170,"fmt.(*fmt).padString", 0x800);
	if (!is_code(get_flags(0x495170)))
	{
		del_items(0x495170);
		add_func(0x495170,BADADDR);
	}
	set_name(0x4954b0,"fmt.(*fmt).fmtBoolean", 0x800);
	if (!is_code(get_flags(0x4954b0)))
	{
		del_items(0x4954b0);
		add_func(0x4954b0,BADADDR);
	}
	set_name(0x495540,"fmt.(*fmt).fmtUnicode", 0x800);
	if (!is_code(get_flags(0x495540)))
	{
		del_items(0x495540);
		add_func(0x495540,BADADDR);
	}
	set_name(0x4958c0,"fmt.(*fmt).fmtInteger", 0x800);
	if (!is_code(get_flags(0x4958c0)))
	{
		del_items(0x4958c0);
		add_func(0x4958c0,BADADDR);
	}
	set_name(0x495e30,"fmt.(*fmt).truncateString", 0x800);
	if (!is_code(get_flags(0x495e30)))
	{
		del_items(0x495e30);
		add_func(0x495e30,BADADDR);
	}
	set_name(0x495f20,"fmt.(*fmt).truncate", 0x800);
	if (!is_code(get_flags(0x495f20)))
	{
		del_items(0x495f20);
		add_func(0x495f20,BADADDR);
	}
	set_name(0x496060,"fmt.(*fmt).fmtS", 0x800);
	if (!is_code(get_flags(0x496060)))
	{
		del_items(0x496060);
		add_func(0x496060,BADADDR);
	}
	set_name(0x4960e0,"fmt.(*fmt).fmtBs", 0x800);
	if (!is_code(get_flags(0x4960e0)))
	{
		del_items(0x4960e0);
		add_func(0x4960e0,BADADDR);
	}
	set_name(0x496170,"fmt.(*fmt).fmtSbx", 0x800);
	if (!is_code(get_flags(0x496170)))
	{
		del_items(0x496170);
		add_func(0x496170,BADADDR);
	}
	set_name(0x496720,"fmt.(*fmt).fmtQ", 0x800);
	if (!is_code(get_flags(0x496720)))
	{
		del_items(0x496720);
		add_func(0x496720,BADADDR);
	}
	set_name(0x496920,"fmt.(*fmt).fmtC", 0x800);
	if (!is_code(get_flags(0x496920)))
	{
		del_items(0x496920);
		add_func(0x496920,BADADDR);
	}
	set_name(0x4969e0,"fmt.(*fmt).fmtQc", 0x800);
	if (!is_code(get_flags(0x4969e0)))
	{
		del_items(0x4969e0);
		add_func(0x4969e0,BADADDR);
	}
	set_name(0x496af0,"fmt.(*fmt).fmtFloat", 0x800);
	if (!is_code(get_flags(0x496af0)))
	{
		del_items(0x496af0);
		add_func(0x496af0,BADADDR);
	}
	set_name(0x497430,"fmt.(*buffer).writeRune", 0x800);
	if (!is_code(get_flags(0x497430)))
	{
		del_items(0x497430);
		add_func(0x497430,BADADDR);
	}
	set_name(0x497640,"fmt.newPrinter", 0x800);
	if (!is_code(get_flags(0x497640)))
	{
		del_items(0x497640);
		add_func(0x497640,BADADDR);
	}
	set_name(0x497700,"fmt.(*pp).free", 0x800);
	if (!is_code(get_flags(0x497700)))
	{
		del_items(0x497700);
		add_func(0x497700,BADADDR);
	}
	set_name(0x497810,"fmt.(*pp).Width", 0x800);
	if (!is_code(get_flags(0x497810)))
	{
		del_items(0x497810);
		add_func(0x497810,BADADDR);
	}
	set_name(0x497830,"fmt.(*pp).Precision", 0x800);
	if (!is_code(get_flags(0x497830)))
	{
		del_items(0x497830);
		add_func(0x497830,BADADDR);
	}
	set_name(0x497850,"fmt.(*pp).Flag", 0x800);
	if (!is_code(get_flags(0x497850)))
	{
		del_items(0x497850);
		add_func(0x497850,BADADDR);
	}
	set_name(0x4978e0,"fmt.(*pp).Write", 0x800);
	if (!is_code(get_flags(0x4978e0)))
	{
		del_items(0x4978e0);
		add_func(0x4978e0,BADADDR);
	}
	set_name(0x497a00,"fmt.Fprintf", 0x800);
	if (!is_code(get_flags(0x497a00)))
	{
		del_items(0x497a00);
		add_func(0x497a00,BADADDR);
	}
	set_name(0x497b20,"fmt.getField", 0x800);
	if (!is_code(get_flags(0x497b20)))
	{
		del_items(0x497b20);
		add_func(0x497b20,BADADDR);
	}
	set_name(0x497c20,"fmt.parsenum", 0x800);
	if (!is_code(get_flags(0x497c20)))
	{
		del_items(0x497c20);
		add_func(0x497c20,BADADDR);
	}
	set_name(0x497d00,"fmt.(*pp).unknownType", 0x800);
	if (!is_code(get_flags(0x497d00)))
	{
		del_items(0x497d00);
		add_func(0x497d00,BADADDR);
	}
	set_name(0x498030,"fmt.(*pp).badVerb", 0x800);
	if (!is_code(get_flags(0x498030)))
	{
		del_items(0x498030);
		add_func(0x498030,BADADDR);
	}
	set_name(0x4986c0,"fmt.(*pp).fmtBool", 0x800);
	if (!is_code(get_flags(0x4986c0)))
	{
		del_items(0x4986c0);
		add_func(0x4986c0,BADADDR);
	}
	set_name(0x498740,"fmt.(*pp).fmt0x64", 0x800);
	if (!is_code(get_flags(0x498740)))
	{
		del_items(0x498740);
		add_func(0x498740,BADADDR);
	}
	set_name(0x4987e0,"fmt.(*pp).fmtInteger", 0x800);
	if (!is_code(get_flags(0x4987e0)))
	{
		del_items(0x4987e0);
		add_func(0x4987e0,BADADDR);
	}
	set_name(0x498b10,"fmt.(*pp).fmtFloat", 0x800);
	if (!is_code(get_flags(0x498b10)))
	{
		del_items(0x498b10);
		add_func(0x498b10,BADADDR);
	}
	set_name(0x498cb0,"fmt.(*pp).fmtComplex", 0x800);
	if (!is_code(get_flags(0x498cb0)))
	{
		del_items(0x498cb0);
		add_func(0x498cb0,BADADDR);
	}
	set_name(0x498ef0,"fmt.(*pp).fmtString", 0x800);
	if (!is_code(get_flags(0x498ef0)))
	{
		del_items(0x498ef0);
		add_func(0x498ef0,BADADDR);
	}
	set_name(0x4990c0,"fmt.(*pp).fmtBytes", 0x800);
	if (!is_code(get_flags(0x4990c0)))
	{
		del_items(0x4990c0);
		add_func(0x4990c0,BADADDR);
	}
	set_name(0x4999c0,"fmt.(*pp).fmtPointer", 0x800);
	if (!is_code(get_flags(0x4999c0)))
	{
		del_items(0x4999c0);
		add_func(0x4999c0,BADADDR);
	}
	set_name(0x499f20,"fmt.(*pp).catchPanic", 0x800);
	if (!is_code(get_flags(0x499f20)))
	{
		del_items(0x499f20);
		add_func(0x499f20,BADADDR);
	}
	set_name(0x49a5b0,"fmt.(*pp).handleMethods", 0x800);
	if (!is_code(get_flags(0x49a5b0)))
	{
		del_items(0x49a5b0);
		add_func(0x49a5b0,BADADDR);
	}
	set_name(0x49ac70,"fmt.(*pp).printArg", 0x800);
	if (!is_code(get_flags(0x49ac70)))
	{
		del_items(0x49ac70);
		add_func(0x49ac70,BADADDR);
	}
	set_name(0x49b630,"fmt.(*pp).printValue", 0x800);
	if (!is_code(get_flags(0x49b630)))
	{
		del_items(0x49b630);
		add_func(0x49b630,BADADDR);
	}
	set_name(0x49dda0,"fmt.intFromArg", 0x800);
	if (!is_code(get_flags(0x49dda0)))
	{
		del_items(0x49dda0);
		add_func(0x49dda0,BADADDR);
	}
	set_name(0x49e060,"fmt.parseArgNumber", 0x800);
	if (!is_code(get_flags(0x49e060)))
	{
		del_items(0x49e060);
		add_func(0x49e060,BADADDR);
	}
	set_name(0x49e190,"fmt.(*pp).argNumber", 0x800);
	if (!is_code(get_flags(0x49e190)))
	{
		del_items(0x49e190);
		add_func(0x49e190,BADADDR);
	}
	set_name(0x49e2b0,"fmt.(*pp).badArgNum", 0x800);
	if (!is_code(get_flags(0x49e2b0)))
	{
		del_items(0x49e2b0);
		add_func(0x49e2b0,BADADDR);
	}
	set_name(0x49e440,"fmt.(*pp).missingArg", 0x800);
	if (!is_code(get_flags(0x49e440)))
	{
		del_items(0x49e440);
		add_func(0x49e440,BADADDR);
	}
	set_name(0x49e5d0,"fmt.(*pp).doPrintf", 0x800);
	if (!is_code(get_flags(0x49e5d0)))
	{
		del_items(0x49e5d0);
		add_func(0x49e5d0,BADADDR);
	}
	set_name(0x49f760,"fmt.glob..func1", 0x800);
	if (!is_code(get_flags(0x49f760)))
	{
		del_items(0x49f760);
		add_func(0x49f760,BADADDR);
	}
	set_name(0x49f7c0,"fmt.init", 0x800);
	if (!is_code(get_flags(0x49f7c0)))
	{
		del_items(0x49f7c0);
		add_func(0x49f7c0,BADADDR);
	}
	set_name(0x49f8a0,"type..eq.fmt.fmt", 0x800);
	if (!is_code(get_flags(0x49f8a0)))
	{
		del_items(0x49f8a0);
		add_func(0x49f8a0,BADADDR);
	}
	set_name(0x49f950,"main.(*custom).UpdateQty", 0x800);
	if (!is_code(get_flags(0x49f950)))
	{
		del_items(0x49f950);
		add_func(0x49f950,BADADDR);
	}
	set_name(0x49f980,"main.custom.PrintName", 0x800);
	if (!is_code(get_flags(0x49f980)))
	{
		del_items(0x49f980);
		add_func(0x49f980,BADADDR);
	}
	set_name(0x49faa0,"main.main", 0x800);
	if (!is_code(get_flags(0x49faa0)))
	{
		del_items(0x49faa0);
		add_func(0x49faa0,BADADDR);
	}
	set_name(0x49ff30,"type..eq.[2]interface {}", 0x800);
	if (!is_code(get_flags(0x49ff30)))
	{
		del_items(0x49ff30);
		add_func(0x49ff30,BADADDR);
	}
	set_name(0x4a8800,"**runtime.stackWorkBuf", 0x800);
	create_struct(0x4a8800,-1,"Go_ptrtype");
	set_name(0x4a9000,"*poll.fileKind", 0x800);
	create_struct(0x4a9000,-1,"Go_ptrtype");
	set_name(0x4ab000,"*sort.Interface", 0x800);
	create_struct(0x4ab000,-1,"Go_ptrtype");
	set_name(0x4a9800,"*reflect.methodValue", 0x800);
	create_struct(0x4a9800,-1,"Go_ptrtype");
	set_name(0x4aa800,"*runtime.ptrtype", 0x800);
	create_struct(0x4aa800,-1,"Go_ptrtype");
	set_name(0x4aa000,"*runtime.gcMarkWorkerMode", 0x800);
	create_struct(0x4aa000,-1,"Go_ptrtype");
	set_name(0x4af000,"[14]unicode.Range16", 0x800);
	create_struct(0x4af000,-1,"Go_arraytype");
	set_name(0x4b0800,"[2]unicode.Range16", 0x800);
	create_struct(0x4b0800,-1,"Go_arraytype");
	set_name(0x4b2000,"[67]uint64", 0x800);
	create_struct(0x4b2000,-1,"Go_arraytype");
	set_name(0x4b9000,"struct { root runtime.semaRoot; pad [40]uint8 }", 0x800);
	create_struct(0x4b9000,-1,"Go_structType");
	set_name(0x4b2300,"[6]unicode.Range32", 0x800);
	create_struct(0x4b2300,-1,"Go_arraytype");
	set_name(0x4ca020,"*reflect.funcTypeFixed128", 0x800);
	create_struct(0x4ca020,-1,"Go_ptrtype");
	set_name(0x4ae820,"[11]unicode.Range16", 0x800);
	create_struct(0x4ae820,-1,"Go_arraytype");
	set_name(0x4b0020,"[256]uint8", 0x800);
	create_struct(0x4b0020,-1,"Go_arraytype");
	set_name(0x4b1820,"[5][]*runtime._defer", 0x800);
	create_struct(0x4b1820,-1,"Go_arraytype");
	set_name(0x4ab820,"[]**runtime.stackWorkBuf", 0x800);
	create_struct(0x4ab820,-1,"Go_slicetype");
	set_name(0x4ac020,"[]int8", 0x800);
	create_struct(0x4ac020,-1,"Go_slicetype");
	set_name(0x4ac820,"[]runtime.traceStackPtr", 0x800);
	create_struct(0x4ac820,-1,"Go_slicetype");
	set_name(0x4b3020,"func(interface {}, uintptr)", 0x800);
	create_struct(0x4b3020,-1,"Go__type");
	set_name(0x4b5020,"map[string]int64", 0x800);
	create_struct(0x4b5020,-1,"Go_maptype");
	set_name(0x4b2fc0,"func(int, int)", 0x800);
	create_struct(0x4b2fc0,-1,"Go__type");
	set_name(0x4a8840,"**runtime.wincallbackcontext", 0x800);
	create_struct(0x4a8840,-1,"Go_ptrtype");
	set_name(0x4a9040,"*poll.ioSrvReq", 0x800);
	create_struct(0x4a9040,-1,"Go_ptrtype");
	set_name(0x4a9840,"*reflect.nameOff", 0x800);
	create_struct(0x4a9840,-1,"Go_ptrtype");
	set_name(0x4aa040,"*runtime.gcMode", 0x800);
	create_struct(0x4aa040,-1,"Go_ptrtype");
	set_name(0x4ab040,"*strconv.decimalSlice", 0x800);
	create_struct(0x4ab040,-1,"Go_ptrtype");
	set_name(0x4aa840,"*runtime.schedt", 0x800);
	create_struct(0x4aa840,-1,"Go_ptrtype");
	set_name(0x4b4840,"*runtime.itab", 0x800);
	create_struct(0x4b4840,-1,"Go_ptrtype");
	set_name(0x4af840,"[1]uint8", 0x800);
	create_struct(0x4af840,-1,"Go_arraytype");
	set_name(0x4b1040,"[41]unicode.Range32", 0x800);
	create_struct(0x4b1040,-1,"Go_arraytype");
	set_name(0x4b2840,"[8]unicode.Range16", 0x800);
	create_struct(0x4b2840,-1,"Go_arraytype");
	set_name(0x4b4c60,"func(uintptr, uint32, uintptr) uintptr", 0x800);
	create_struct(0x4b4c60,-1,"Go__type");
	set_name(0x4c0340,"struct { lock runtime.mutex; next int32; m map[int32]unsafe.Pointer; minv map[unsafe.Pointer]int32 }", 0x800);
	create_struct(0x4c0340,-1,"Go_structType");
	set_name(0x4bc860,"*sync.Pool", 0x800);
	create_struct(0x4bc860,-1,"Go_ptrtype");
	set_name(0x4b6060,"*runtime.funcInfo", 0x800);
	create_struct(0x4b6060,-1,"Go_ptrtype");
	set_name(0x4b9860,"*runtime.wbBuf", 0x800);
	create_struct(0x4b9860,-1,"Go_ptrtype");
	set_name(0x4b6860,"*runtime.wincallbackcontext", 0x800);
	create_struct(0x4b6860,-1,"Go_ptrtype");
	set_name(0x4af060,"[14]unicode.Range32", 0x800);
	create_struct(0x4af060,-1,"Go_arraytype");
	set_name(0x4b0860,"[2]unicode.Range32", 0x800);
	create_struct(0x4b0860,-1,"Go_arraytype");
	set_name(0x4b2060,"[67]uint8", 0x800);
	create_struct(0x4b2060,-1,"Go_arraytype");
	set_name(0x4ab860,"[]*[1048576]*runtime.heapArena", 0x800);
	create_struct(0x4ab860,-1,"Go_slicetype");
	set_name(0x4ac060,"[]interface {}", 0x800);
	create_struct(0x4ac060,-1,"Go_slicetype");
	set_name(0x4ac860,"[]runtime.typeOff", 0x800);
	create_struct(0x4ac860,-1,"Go_slicetype");
	set_name(0x4b3c80,"func(int, int) bool", 0x800);
	create_struct(0x4b3c80,-1,"Go__type");
	set_name(0x4bd6c0,"struct { lpFileName *uint16; hFile uintptr; flags uint32 }", 0x800);
	create_struct(0x4bd6c0,-1,"Go_structType");
	set_name(0x4ab080,"*strconv.floatInfo", 0x800);
	create_struct(0x4ab080,-1,"Go_ptrtype");
	set_name(0x4a8880,"**sync.entry", 0x800);
	create_struct(0x4a8880,-1,"Go_ptrtype");
	set_name(0x4a9880,"*reflect.stringHeader", 0x800);
	create_struct(0x4a9880,-1,"Go_ptrtype");
	set_name(0x4c0880,"*sync.entry", 0x800);
	create_struct(0x4c0880,-1,"Go_ptrtype");
	set_name(0x4a9080,"*reflectlite.Kind", 0x800);
	create_struct(0x4a9080,-1,"Go_ptrtype");
	set_name(0x4aa080,"*runtime.gobuf", 0x800);
	create_struct(0x4aa080,-1,"Go_ptrtype");
	set_name(0x4aa880,"*runtime.sigset", 0x800);
	create_struct(0x4aa880,-1,"Go_ptrtype");
	set_name(0x4ae880,"[120]unicode.Range16", 0x800);
	create_struct(0x4ae880,-1,"Go_arraytype");
	set_name(0x4b0080,"[257]uint8", 0x800);
	create_struct(0x4b0080,-1,"Go_arraytype");
	set_name(0x4b1880,"[5][]runtime.pallocSum", 0x800);
	create_struct(0x4b1880,-1,"Go_arraytype");
	set_name(0x4b2180,"[68]unicode.Range32", 0x800);
	create_struct(0x4b2180,-1,"Go_arraytype");
	set_name(0x4b48a0,"*runtime.notInHeap", 0x800);
	create_struct(0x4b48a0,-1,"Go_ptrtype");
	set_name(0x4af8a0,"[1]uintptr", 0x800);
	create_struct(0x4af8a0,-1,"Go_arraytype");
	set_name(0x4b10a0,"[43]unicode.Range16", 0x800);
	create_struct(0x4b10a0,-1,"Go_arraytype");
	set_name(0x4b28a0,"[8]unicode.Range32", 0x800);
	create_struct(0x4b28a0,-1,"Go_arraytype");
	set_name(0x4ab8a0,"[]*[8192]runtime.pallocData", 0x800);
	create_struct(0x4ab8a0,-1,"Go_slicetype");
	set_name(0x4ac0a0,"[]cpu.option", 0x800);
	create_struct(0x4ac0a0,-1,"Go_slicetype");
	set_name(0x4ac8a0,"[]strconv.extFloat", 0x800);
	create_struct(0x4ac8a0,-1,"Go_slicetype");
	set_name(0x4ac220,"[]runtime._typePair", 0x800);
	create_struct(0x4ac220,-1,"Go_slicetype");
	set_name(0x4b2e40,"func(int) bool", 0x800);
	create_struct(0x4b2e40,-1,"Go__type");
	set_name(0x4b0680,"[2]runtime.stackfreelist", 0x800);
	create_struct(0x4b0680,-1,"Go_arraytype");
	set_name(0x4a90c0,"*reflectlite.Type", 0x800);
	create_struct(0x4a90c0,-1,"Go_ptrtype");
	set_name(0x4a98c0,"*reflect.tflag", 0x800);
	create_struct(0x4a98c0,-1,"Go_ptrtype");
	set_name(0x4a88c0,"**uint8", 0x800);
	create_struct(0x4a88c0,-1,"Go_ptrtype");
	set_name(0x4c70c0,"*fmt.fmt", 0x800);
	create_struct(0x4c70c0,-1,"Go_ptrtype");
	set_name(0x4aa0c0,"*runtime.gsignalStack", 0x800);
	create_struct(0x4aa0c0,-1,"Go_ptrtype");
	set_name(0x4ca8c0,"*reflect.funcTypeFixed4", 0x800);
	create_struct(0x4ca8c0,-1,"Go_ptrtype");
	set_name(0x4aa8c0,"*runtime.sliceInterfacePtr", 0x800);
	create_struct(0x4aa8c0,-1,"Go_ptrtype");
	set_name(0x4ab0c0,"*strconv.leftCheat", 0x800);
	create_struct(0x4ab0c0,-1,"Go_ptrtype");
	set_name(0x4af0c0,"[15]cpu.option", 0x800);
	create_struct(0x4af0c0,-1,"Go_arraytype");
	set_name(0x4b08c0,"[32]*reflect.rtype", 0x800);
	create_struct(0x4b08c0,-1,"Go_arraytype");
	set_name(0x4b5140,"map[uint32][]*runtime._type", 0x800);
	create_struct(0x4b5140,-1,"Go_maptype");
	set_name(0x4b8a80,"struct { base uintptr; bound uintptr }", 0x800);
	create_struct(0x4b8a80,-1,"Go_structType");
	set_name(0x4b3b00,"func() (unsafe.Pointer, int32, error)", 0x800);
	create_struct(0x4b3b00,-1,"Go__type");
	set_name(0x4b60e0,"*runtime.gcBits", 0x800);
	create_struct(0x4b60e0,-1,"Go_ptrtype");
	set_name(0x4b68e0,"*runtime.workbuf", 0x800);
	create_struct(0x4b68e0,-1,"Go_ptrtype");
	set_name(0x4ae8e0,"[125]unicode.Range16", 0x800);
	create_struct(0x4ae8e0,-1,"Go_arraytype");
	set_name(0x4b00e0,"[259]uint16", 0x800);
	create_struct(0x4b00e0,-1,"Go_arraytype");
	set_name(0x4b18e0,"[5]string", 0x800);
	create_struct(0x4b18e0,-1,"Go_arraytype");
	set_name(0x4ab8e0,"[]*reflect.rtype", 0x800);
	create_struct(0x4ab8e0,-1,"Go_slicetype");
	set_name(0x4ac0e0,"[]map[runtime.typeOff]*runtime._type", 0x800);
	create_struct(0x4ac0e0,-1,"Go_slicetype");
	set_name(0x4ac8e0,"[]strconv.leftCheat", 0x800);
	create_struct(0x4ac8e0,-1,"Go_slicetype");
	set_name(0x4b30e0,"func(reflect.Type) bool", 0x800);
	create_struct(0x4b30e0,-1,"Go__type");
	set_name(0x4b50e0,"map[string]uint64", 0x800);
	create_struct(0x4b50e0,-1,"Go_maptype");
	set_name(0x4aca20,"[]struct { size uint32; nmalloc uint64; nfree uint64 }", 0x800);
	create_struct(0x4aca20,-1,"Go_slicetype");
	set_name(0x4aa100,"*runtime.heapArena", 0x800);
	create_struct(0x4aa100,-1,"Go_ptrtype");
	set_name(0x4aa900,"*runtime.special", 0x800);
	create_struct(0x4aa900,-1,"Go_ptrtype");
	set_name(0x4ab100,"*string", 0x800);
	create_struct(0x4ab100,-1,"Go_ptrtype");
	set_name(0x4a8900,"*[1048576]*runtime.heapArena", 0x800);
	create_struct(0x4a8900,-1,"Go_ptrtype");
	set_name(0x4b4900,"*runtime.stackObject", 0x800);
	create_struct(0x4b4900,-1,"Go_ptrtype");
	set_name(0x4bc900,"*sync.poolChainElt", 0x800);
	create_struct(0x4bc900,-1,"Go_ptrtype");
	set_name(0x4a9100,"*reflectlite.nameOff", 0x800);
	create_struct(0x4a9100,-1,"Go_ptrtype");
	set_name(0x4a9900,"*reflect.typeOff", 0x800);
	create_struct(0x4a9900,-1,"Go_ptrtype");
	set_name(0x4b9900,"*struct { runtime.gList; n int32 }", 0x800);
	create_struct(0x4b9900,-1,"Go_ptrtype");
	set_name(0x4af900,"[1]unicode.Range16", 0x800);
	create_struct(0x4af900,-1,"Go_arraytype");
	set_name(0x4af120,"[15]unicode.Range16", 0x800);
	create_struct(0x4af120,-1,"Go_arraytype");
	set_name(0x4b0920,"[32]*runtime._defer", 0x800);
	create_struct(0x4b0920,-1,"Go_arraytype");
	set_name(0x4b2120,"[68]uint8", 0x800);
	create_struct(0x4b2120,-1,"Go_arraytype");
	set_name(0x4ab920,"[]*reflect.structType", 0x800);
	create_struct(0x4ab920,-1,"Go_slicetype");
	set_name(0x4ac120,"[]reflect.Value", 0x800);
	create_struct(0x4ac120,-1,"Go_slicetype");
	set_name(0x4ac920,"[]string", 0x800);
	create_struct(0x4ac920,-1,"Go_slicetype");
	set_name(0x4b2cc0,"func(*poll.operation) error", 0x800);
	create_struct(0x4b2cc0,-1,"Go__type");
	set_name(0x4b4fc0,"map[string]bool", 0x800);
	create_struct(0x4b4fc0,-1,"Go_maptype");
	set_name(0x4a9140,"*reflectlite.tflag", 0x800);
	create_struct(0x4a9140,-1,"Go_ptrtype");
	set_name(0x4a9940,"*runtime.Frame", 0x800);
	create_struct(0x4a9940,-1,"Go_ptrtype");
	set_name(0x4bd940,"*runtime.gQueue", 0x800);
	create_struct(0x4bd940,-1,"Go_ptrtype");
	set_name(0x4a8940,"*[179999]*runtime.bucket", 0x800);
	create_struct(0x4a8940,-1,"Go_ptrtype");
	set_name(0x4aa140,"*runtime.hiter", 0x800);
	create_struct(0x4aa140,-1,"Go_ptrtype");
	set_name(0x4c2140,"*runtime.pageBits", 0x800);
	create_struct(0x4c2140,-1,"Go_ptrtype");
	set_name(0x4aa940,"*runtime.specialfinalizer", 0x800);
	create_struct(0x4aa940,-1,"Go_ptrtype");
	set_name(0x4ae940,"[128]*reflect.rtype", 0x800);
	create_struct(0x4ae940,-1,"Go_arraytype");
	set_name(0x4ab140,"*struct { base uintptr; bound uintptr }", 0x800);
	create_struct(0x4ab140,-1,"Go_ptrtype");
	set_name(0x4b0140,"[25]unicode.Range16", 0x800);
	create_struct(0x4b0140,-1,"Go_arraytype");
	set_name(0x4c8f60,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }", 0x800);
	create_struct(0x4c8f60,-1,"Go_structType");
	set_name(0x4b6960,"*sync.Once", 0x800);
	create_struct(0x4b6960,-1,"Go_ptrtype");
	set_name(0x4b4960,"*runtime.structfield", 0x800);
	create_struct(0x4b4960,-1,"Go_ptrtype");
	set_name(0x4cb160,"*poll.FD", 0x800);
	create_struct(0x4cb160,-1,"Go_ptrtype");
	set_name(0x4b6160,"*runtime.hchan", 0x800);
	create_struct(0x4b6160,-1,"Go_ptrtype");
	set_name(0x4af960,"[1]unicode.Range32", 0x800);
	create_struct(0x4af960,-1,"Go_arraytype");
	set_name(0x4b1160,"[44]unicode.Range32", 0x800);
	create_struct(0x4b1160,-1,"Go_arraytype");
	set_name(0x4b2960,"[92]unicode.Range32", 0x800);
	create_struct(0x4b2960,-1,"Go_arraytype");
	set_name(0x4ab960,"[]*runtime._defer", 0x800);
	create_struct(0x4ab960,-1,"Go_slicetype");
	set_name(0x4ac160,"[]reflect.fieldScan", 0x800);
	create_struct(0x4ac160,-1,"Go_slicetype");
	set_name(0x4ac960,"[]struct { item runtime.stackpoolItem; _ [40]uint8 }", 0x800);
	create_struct(0x4ac960,-1,"Go_slicetype");
	set_name(0x4b1e80,"[66]unicode.Range32", 0x800);
	create_struct(0x4b1e80,-1,"Go_arraytype");
	set_name(0x4a9180,"*reflectlite.typeOff", 0x800);
	create_struct(0x4a9180,-1,"Go_ptrtype");
	set_name(0x4a9980,"*runtime._defer", 0x800);
	create_struct(0x4a9980,-1,"Go_ptrtype");
	set_name(0x4aa180,"*runtime.imethod", 0x800);
	create_struct(0x4aa180,-1,"Go_ptrtype");
	set_name(0x4aa980,"*runtime.stack", 0x800);
	create_struct(0x4aa980,-1,"Go_ptrtype");
	set_name(0x4ab180,"*sync.eface", 0x800);
	create_struct(0x4ab180,-1,"Go_ptrtype");
	set_name(0x4a8980,"*[8192]runtime.pallocData", 0x800);
	create_struct(0x4a8980,-1,"Go_ptrtype");
	set_name(0x4b9180,"*fmt.buffer", 0x800);
	create_struct(0x4b9180,-1,"Go_ptrtype");
	set_name(0x4b7180,"*fmtsort.SortedMap", 0x800);
	create_struct(0x4b7180,-1,"Go_ptrtype");
	set_name(0x4af180,"[16]*reflect.rtype", 0x800);
	create_struct(0x4af180,-1,"Go_arraytype");
	set_name(0x4b0980,"[32]uintptr", 0x800);
	create_struct(0x4b0980,-1,"Go_arraytype");
	set_name(0x4b2b40,"[9]unicode.Range16", 0x800);
	create_struct(0x4b2b40,-1,"Go_arraytype");
	set_name(0x4ae9a0,"[128]*runtime.mspan", 0x800);
	create_struct(0x4ae9a0,-1,"Go_arraytype");
	set_name(0x4b99a0,"*struct { sync.Mutex; m sync.Map }", 0x800);
	create_struct(0x4b99a0,-1,"Go_ptrtype");
	set_name(0x4bc9a0,"*sync.poolDequeue", 0x800);
	create_struct(0x4bc9a0,-1,"Go_ptrtype");
	set_name(0x4b01a0,"[26]string", 0x800);
	create_struct(0x4b01a0,-1,"Go_arraytype");
	set_name(0x4b19a0,"[5]uint8", 0x800);
	create_struct(0x4b19a0,-1,"Go_arraytype");
	set_name(0x4ab9a0,"[]*runtime._type", 0x800);
	create_struct(0x4ab9a0,-1,"Go_slicetype");
	set_name(0x4ac1a0,"[]reflect.structField", 0x800);
	create_struct(0x4ac1a0,-1,"Go_slicetype");
	set_name(0x4ac9a0,"[]struct { mcentral runtime.mcentral; pad [8]uint8 }", 0x800);
	create_struct(0x4ac9a0,-1,"Go_slicetype");
	set_name(0x4b31a0,"func(syscall.Handle) error", 0x800);
	create_struct(0x4b31a0,-1,"Go__type");
	set_name(0x4b51a0,"map[unsafe.Pointer]int32", 0x800);
	create_struct(0x4b51a0,-1,"Go_maptype");
	set_name(0x4b4e40,"map[interface {}]*sync.entry", 0x800);
	create_struct(0x4b4e40,-1,"Go_maptype");
	set_name(0x4aa9c0,"*runtime.stackObjectBuf", 0x800);
	create_struct(0x4aa9c0,-1,"Go_ptrtype");
	set_name(0x4ab1c0,"*sync.poolLocal", 0x800);
	create_struct(0x4ab1c0,-1,"Go_ptrtype");
	set_name(0x4b49c0,"*runtime.traceStackPtr", 0x800);
	create_struct(0x4b49c0,-1,"Go_ptrtype");
	set_name(0x4a91c0,"*windows.WSAMsg", 0x800);
	create_struct(0x4a91c0,-1,"Go_ptrtype");
	set_name(0x4a99c0,"*runtime._func", 0x800);
	create_struct(0x4a99c0,-1,"Go_ptrtype");
	set_name(0x4a89c0,"*[]*runtime.bmap", 0x800);
	create_struct(0x4a89c0,-1,"Go_ptrtype");
	set_name(0x4c81c0,"*fmt.pp", 0x800);
	create_struct(0x4c81c0,-1,"Go_ptrtype");
	set_name(0x4aa1c0,"*runtime.initTask", 0x800);
	create_struct(0x4aa1c0,-1,"Go_ptrtype");
	set_name(0x4af9c0,"[1]unsafe.Pointer", 0x800);
	create_struct(0x4af9c0,-1,"Go_arraytype");
	set_name(0x4b11c0,"[450]uint32", 0x800);
	create_struct(0x4b11c0,-1,"Go_arraytype");
	set_name(0x4b3e60,"func(unsafe.Pointer, uintptr) uintptr", 0x800);
	create_struct(0x4b3e60,-1,"Go__type");
	set_name(0x4b69e0,"*sync.noCopy", 0x800);
	create_struct(0x4b69e0,-1,"Go_ptrtype");
	set_name(0x4b61e0,"*runtime.itabTableType", 0x800);
	create_struct(0x4b61e0,-1,"Go_ptrtype");
	set_name(0x4c59e0,"*runtime.pageAlloc", 0x800);
	create_struct(0x4c59e0,-1,"Go_ptrtype");
	set_name(0x4af1e0,"[16]uint16", 0x800);
	create_struct(0x4af1e0,-1,"Go_arraytype");
	set_name(0x4b09e0,"[32]unicode.Range16", 0x800);
	create_struct(0x4b09e0,-1,"Go_arraytype");
	set_name(0x4b21e0,"[6]string", 0x800);
	create_struct(0x4b21e0,-1,"Go_arraytype");
	set_name(0x4ab9e0,"[]*runtime.bmap", 0x800);
	create_struct(0x4ab9e0,-1,"Go_slicetype");
	set_name(0x4ac1e0,"[]runtime.Frame", 0x800);
	create_struct(0x4ac1e0,-1,"Go_slicetype");
	set_name(0x4ac9e0,"[]struct { root runtime.semaRoot; pad [40]uint8 }", 0x800);
	create_struct(0x4ac9e0,-1,"Go_slicetype");
	set_name(0x4b1d00,"[64]runtime.overlappedEntry", 0x800);
	create_struct(0x4b1d00,-1,"Go_arraytype");
	set_name(0x4af540,"[180]unicode.Range16", 0x800);
	create_struct(0x4af540,-1,"Go_arraytype");
	set_name(0x4b8f80,"struct { runtime.mutex; runtime.persistentAlloc }", 0x800);
	create_struct(0x4b8f80,-1,"Go_structType");
	set_name(0x4a8a00,"*[]*runtime.moduledata", 0x800);
	create_struct(0x4a8a00,-1,"Go_ptrtype");
	set_name(0x4a9200,"*io.Writer", 0x800);
	create_struct(0x4a9200,-1,"Go_ptrtype");
	set_name(0x4b7200,"*poll.TimeoutError", 0x800);
	create_struct(0x4b7200,-1,"Go_ptrtype");
	set_name(0x4a9a00,"*runtime._panic", 0x800);
	create_struct(0x4a9a00,-1,"Go_ptrtype");
	set_name(0x4bda00,"*runtime.mSpanList", 0x800);
	create_struct(0x4bda00,-1,"Go_ptrtype");
	set_name(0x4aa200,"*runtime.interfacetype", 0x800);
	create_struct(0x4aa200,-1,"Go_ptrtype");
	set_name(0x4aaa00,"*runtime.stackObjectBufHdr", 0x800);
	create_struct(0x4aaa00,-1,"Go_ptrtype");
	set_name(0x4ab200,"*sync.poolLocalInternal", 0x800);
	create_struct(0x4ab200,-1,"Go_ptrtype");
	set_name(0x4aea00,"[128]*runtime.sudog", 0x800);
	create_struct(0x4aea00,-1,"Go_arraytype");
	set_name(0x4b0200,"[26]unicode.Range32", 0x800);
	create_struct(0x4b0200,-1,"Go_arraytype");
	set_name(0x4b29c0,"[96]uint8", 0x800);
	create_struct(0x4b29c0,-1,"Go_arraytype");
	set_name(0x4c8a20,"*os.File", 0x800);
	create_struct(0x4c8a20,-1,"Go_ptrtype");
	set_name(0x4b9220,"*poll.operation", 0x800);
	create_struct(0x4b9220,-1,"Go_ptrtype");
	set_name(0x4c9220,"*reflect.ptrType", 0x800);
	create_struct(0x4c9220,-1,"Go_ptrtype");
	set_name(0x4c6220,"*runtime.mheap", 0x800);
	create_struct(0x4c6220,-1,"Go_ptrtype");
	set_name(0x4c4a20,"*runtime.pallocData", 0x800);
	create_struct(0x4c4a20,-1,"Go_ptrtype");
	set_name(0x4b4a20,"*runtime.waitReason", 0x800);
	create_struct(0x4b4a20,-1,"Go_ptrtype");
	set_name(0x4afa20,"[2000]*runtime.wincallbackcontext", 0x800);
	create_struct(0x4afa20,-1,"Go_arraytype");
	set_name(0x4b1220,"[4]*reflect.rtype", 0x800);
	create_struct(0x4b1220,-1,"Go_arraytype");
	set_name(0x4b2a20,"[96]unicode.Range16", 0x800);
	create_struct(0x4b2a20,-1,"Go_arraytype");
	set_name(0x4aba20,"[]*runtime.bucket", 0x800);
	create_struct(0x4aba20,-1,"Go_slicetype");
	set_name(0x4b4cc0,"map[*reflect.structType]bool", 0x800);
	create_struct(0x4b4cc0,-1,"Go_maptype");
	set_name(0x4b0ec0,"[3]unicode.Range16", 0x800);
	create_struct(0x4b0ec0,-1,"Go_arraytype");
	set_name(0x4a9a40,"*runtime._typePair", 0x800);
	create_struct(0x4a9a40,-1,"Go_ptrtype");
	set_name(0x4b9a40,"*sync.Mutex", 0x800);
	create_struct(0x4b9a40,-1,"Go_ptrtype");
	set_name(0x4a8a40,"*[]runtime.ancestorInfo", 0x800);
	create_struct(0x4a8a40,-1,"Go_ptrtype");
	set_name(0x4a9240,"*main.Updater", 0x800);
	create_struct(0x4a9240,-1,"Go_ptrtype");
	set_name(0x4aa240,"*runtime.lfnode", 0x800);
	create_struct(0x4aa240,-1,"Go_ptrtype");
	set_name(0x4aaa40,"*runtime.stackObjectRecord", 0x800);
	create_struct(0x4aaa40,-1,"Go_ptrtype");
	set_name(0x4ab240,"*sync.readOnly", 0x800);
	create_struct(0x4ab240,-1,"Go_ptrtype");
	set_name(0x4af240,"[16]uintptr", 0x800);
	create_struct(0x4af240,-1,"Go_arraytype");
	set_name(0x4b0a40,"[33]float64", 0x800);
	create_struct(0x4b0a40,-1,"Go_arraytype");
	set_name(0x4b2240,"[6]uintptr", 0x800);
	create_struct(0x4b2240,-1,"Go_arraytype");
	set_name(0x4b3ce0,"func(int, int) int", 0x800);
	create_struct(0x4b3ce0,-1,"Go__type");
	set_name(0x4b4340,"struct {}", 0x800);
	create_struct(0x4b4340,-1,"Go_structType");
	set_name(0x4b1b80,"[63]runtime.stackObject", 0x800);
	create_struct(0x4b1b80,-1,"Go_arraytype");
	set_name(0x4b5a60,"*poll.ioSrv", 0x800);
	create_struct(0x4b5a60,-1,"Go_ptrtype");
	set_name(0x4b6a60,"*atomic.Value", 0x800);
	create_struct(0x4b6a60,-1,"Go_ptrtype");
	set_name(0x4b6260,"*runtime.linearAlloc", 0x800);
	create_struct(0x4b6260,-1,"Go_ptrtype");
	set_name(0x4aea60,"[128]uint8", 0x800);
	create_struct(0x4aea60,-1,"Go_arraytype");
	set_name(0x4b0260,"[279]unicode.Range16", 0x800);
	create_struct(0x4b0260,-1,"Go_arraytype");
	set_name(0x4b1a60,"[5]unicode.Range32", 0x800);
	create_struct(0x4b1a60,-1,"Go_arraytype");
	set_name(0x4aba60,"[]*runtime.g", 0x800);
	create_struct(0x4aba60,-1,"Go_slicetype");
	set_name(0x4ac260,"[]runtime.addrRange", 0x800);
	create_struct(0x4ac260,-1,"Go_slicetype");
	set_name(0x4aca60,"[]struct {}", 0x800);
	create_struct(0x4aca60,-1,"Go_slicetype");
	set_name(0x4ad260,"chan bool", 0x800);
	create_struct(0x4ad260,-1,"Go_chantype");
	set_name(0x4b8e00,"struct { lock runtime.mutex; list runtime.gList }", 0x800);
	create_struct(0x4b8e00,-1,"Go_structType");
	set_name(0x4ab280,"*syscall.Handle", 0x800);
	create_struct(0x4ab280,-1,"Go_ptrtype");
	set_name(0x4a8a80,"*bool", 0x800);
	create_struct(0x4a8a80,-1,"Go_ptrtype");
	set_name(0x4a9280,"*map.bucket[*reflect.structType]bool", 0x800);
	create_struct(0x4a9280,-1,"Go_ptrtype");
	set_name(0x4b7280,"*os.PathError", 0x800);
	create_struct(0x4b7280,-1,"Go_ptrtype");
	set_name(0x4b4a80,"*syscall.DLLError", 0x800);
	create_struct(0x4b4a80,-1,"Go_ptrtype");
	set_name(0x4a9a80,"*runtime.ancestorInfo", 0x800);
	create_struct(0x4a9a80,-1,"Go_ptrtype");
	set_name(0x4aa280,"*runtime.libcall", 0x800);
	create_struct(0x4aa280,-1,"Go_ptrtype");
	set_name(0x4ae280,"[0]unicode.Range16", 0x800);
	create_struct(0x4ae280,-1,"Go_arraytype");
	set_name(0x4aaa80,"*runtime.stackWorkBuf", 0x800);
	create_struct(0x4aaa80,-1,"Go_ptrtype");
	set_name(0x4afa80,"[20]uint64", 0x800);
	create_struct(0x4afa80,-1,"Go_arraytype");
	set_name(0x4af2a0,"[16]unicode.Range16", 0x800);
	create_struct(0x4af2a0,-1,"Go_arraytype");
	set_name(0x4b0aa0,"[34]unicode.Range32", 0x800);
	create_struct(0x4b0aa0,-1,"Go_arraytype");
	set_name(0x4b22a0,"[6]unicode.Range16", 0x800);
	create_struct(0x4b22a0,-1,"Go_arraytype");
	set_name(0x4abaa0,"[]*runtime.heapArena", 0x800);
	create_struct(0x4abaa0,-1,"Go_slicetype");
	set_name(0x4ac2a0,"[]runtime.ancestorInfo", 0x800);
	create_struct(0x4ac2a0,-1,"Go_slicetype");
	set_name(0x4acaa0,"[]sync.eface", 0x800);
	create_struct(0x4acaa0,-1,"Go_slicetype");
	set_name(0x4ad2a0,"chan error", 0x800);
	create_struct(0x4ad2a0,-1,"Go_chantype");
	set_name(0x4b0d40,"[3]string", 0x800);
	create_struct(0x4b0d40,-1,"Go_arraytype");
	set_name(0x4b92c0,"*runtime.addrRanges", 0x800);
	create_struct(0x4b92c0,-1,"Go_ptrtype");
	set_name(0x4a9ac0,"*runtime.arenaHint", 0x800);
	create_struct(0x4a9ac0,-1,"Go_ptrtype");
	set_name(0x4a8ac0,"*complex128", 0x800);
	create_struct(0x4a8ac0,-1,"Go_ptrtype");
	set_name(0x4a92c0,"*map.bucket[*reflect.structType]int", 0x800);
	create_struct(0x4a92c0,-1,"Go_ptrtype");
	set_name(0x4aa2c0,"*runtime.m", 0x800);
	create_struct(0x4aa2c0,-1,"Go_ptrtype");
	set_name(0x4aaac0,"*runtime.stackWorkBufHdr", 0x800);
	create_struct(0x4aaac0,-1,"Go_ptrtype");
	set_name(0x4ab2c0,"*syscall.Overlapped", 0x800);
	create_struct(0x4ab2c0,-1,"Go_ptrtype");
	set_name(0x4aeac0,"[129]uint8", 0x800);
	create_struct(0x4aeac0,-1,"Go_arraytype");
	set_name(0x4b02c0,"[27]string", 0x800);
	create_struct(0x4b02c0,-1,"Go_arraytype");
	set_name(0x4b1ac0,"[61]strconv.leftCheat", 0x800);
	create_struct(0x4b1ac0,-1,"Go_arraytype");
	set_name(0x4b1a00,"[5]unicode.Range16", 0x800);
	create_struct(0x4b1a00,-1,"Go_arraytype");
	set_name(0x4b4ae0,"*syscall.Filetime", 0x800);
	create_struct(0x4b4ae0,-1,"Go_ptrtype");
	set_name(0x4b5ae0,"*reflectlite.uncommonType", 0x800);
	create_struct(0x4b5ae0,-1,"Go_ptrtype");
	set_name(0x4b62e0,"*runtime.mSpanStateBox", 0x800);
	create_struct(0x4b62e0,-1,"Go_ptrtype");
	set_name(0x4b9ae0,"*syscall.Errno", 0x800);
	create_struct(0x4b9ae0,-1,"Go_ptrtype");
	set_name(0x4ae2e0,"[1000]uint16", 0x800);
	create_struct(0x4ae2e0,-1,"Go_arraytype");
	set_name(0x4b6ae0,"*syscall.Proc", 0x800);
	create_struct(0x4b6ae0,-1,"Go_ptrtype");
	set_name(0x4afae0,"[216]unicode.Range32", 0x800);
	create_struct(0x4afae0,-1,"Go_arraytype");
	set_name(0x4b12e0,"[4]uint8", 0x800);
	create_struct(0x4b12e0,-1,"Go_arraytype");
	set_name(0x4b2ae0,"[9]string", 0x800);
	create_struct(0x4b2ae0,-1,"Go_arraytype");
	set_name(0x4abae0,"[]*runtime.itab", 0x800);
	create_struct(0x4abae0,-1,"Go_slicetype");
	set_name(0x4b8c80,"struct { item runtime.stackpoolItem; _ [40]uint8 }", 0x800);
	create_struct(0x4b8c80,-1,"Go_structType");
	set_name(0x4b26c0,"[8]*reflect.rtype", 0x800);
	create_struct(0x4b26c0,-1,"Go_arraytype");
	set_name(0x4aff00,"[256]runtime.guintptr", 0x800);
	create_struct(0x4aff00,-1,"Go_arraytype");
	set_name(0x4ca300,"*reflect.funcTypeFixed16", 0x800);
	create_struct(0x4ca300,-1,"Go_ptrtype");
	set_name(0x4aa300,"*runtime.mOS", 0x800);
	create_struct(0x4aa300,-1,"Go_ptrtype");
	set_name(0x4aab00,"*runtime.stackfreelist", 0x800);
	create_struct(0x4aab00,-1,"Go_ptrtype");
	set_name(0x4ab300,"*syscall.RawSockaddr", 0x800);
	create_struct(0x4ab300,-1,"Go_ptrtype");
	set_name(0x4a8b00,"*complex64", 0x800);
	create_struct(0x4a8b00,-1,"Go_ptrtype");
	set_name(0x4a9300,"*map.bucket[int32]unsafe.Pointer", 0x800);
	create_struct(0x4a9300,-1,"Go_ptrtype");
	set_name(0x4b7300,"*reflect.MapIter", 0x800);
	create_struct(0x4b7300,-1,"Go_ptrtype");
	set_name(0x4a9b00,"*runtime.boundsErrorCode", 0x800);
	create_struct(0x4a9b00,-1,"Go_ptrtype");
	set_name(0x4af300,"[16]unicode.Range32", 0x800);
	create_struct(0x4af300,-1,"Go_arraytype");
	set_name(0x4b0b00,"[359]unicode.Range16", 0x800);
	create_struct(0x4b0b00,-1,"Go_arraytype");
	set_name(0x4aeb20,"[12]unicode.Range16", 0x800);
	create_struct(0x4aeb20,-1,"Go_arraytype");
	set_name(0x4b0320,"[28]unicode.Range16", 0x800);
	create_struct(0x4b0320,-1,"Go_arraytype");
	set_name(0x4b1b20,"[62]unicode.Range32", 0x800);
	create_struct(0x4b1b20,-1,"Go_arraytype");
	set_name(0x4abb20,"[]*runtime.moduledata", 0x800);
	create_struct(0x4abb20,-1,"Go_slicetype");
	set_name(0x4ac320,"[]runtime.dbgVar", 0x800);
	create_struct(0x4ac320,-1,"Go_slicetype");
	set_name(0x4acb20,"[]time.abbr", 0x800);
	create_struct(0x4acb20,-1,"Go_slicetype");
	set_name(0x4ad320,"chan poll.ioSrvReq", 0x800);
	create_struct(0x4ad320,-1,"Go_chantype");
	set_name(0x4b4b40,"*syscall.RawSockaddrAny", 0x800);
	create_struct(0x4b4b40,-1,"Go_ptrtype");
	set_name(0x4a9b40,"*runtime.bucketType", 0x800);
	create_struct(0x4a9b40,-1,"Go_ptrtype");
	set_name(0x4a8b40,"*error", 0x800);
	create_struct(0x4a8b40,-1,"Go_ptrtype");
	set_name(0x4a9340,"*map.bucket[int]string", 0x800);
	create_struct(0x4a9340,-1,"Go_ptrtype");
	set_name(0x4aa340,"*runtime.mSpanState", 0x800);
	create_struct(0x4aa340,-1,"Go_ptrtype");
	set_name(0x4ae340,"[100]int8", 0x800);
	create_struct(0x4ae340,-1,"Go_arraytype");
	set_name(0x4aab40,"*runtime.stackpoolItem", 0x800);
	create_struct(0x4aab40,-1,"Go_ptrtype");
	set_name(0x4ab340,"*syscall.Sockaddr", 0x800);
	create_struct(0x4ab340,-1,"Go_ptrtype");
	set_name(0x4afb40,"[21]unicode.Range16", 0x800);
	create_struct(0x4afb40,-1,"Go_arraytype");
	set_name(0x4b1340,"[4]uintptr", 0x800);
	create_struct(0x4b1340,-1,"Go_arraytype");
	set_name(0x4b8b00,"struct { base uintptr; end uintptr }", 0x800);
	create_struct(0x4b8b00,-1,"Go_structType");
	set_name(0x4b5b60,"*main.custom", 0x800);
	create_struct(0x4b5b60,-1,"Go_ptrtype");
	set_name(0x4b9360,"*runtime.gList", 0x800);
	create_struct(0x4b9360,-1,"Go_ptrtype");
	set_name(0x4b6360,"*runtime.muintptr", 0x800);
	create_struct(0x4b6360,-1,"Go_ptrtype");
	set_name(0x4af360,"[16]utf8.acceptRange", 0x800);
	create_struct(0x4af360,-1,"Go_arraytype");
	set_name(0x4b0b60,"[35]runtime.mSpanList", 0x800);
	create_struct(0x4b0b60,-1,"Go_arraytype");
	set_name(0x4b2360,"[71]unicode.Range32", 0x800);
	create_struct(0x4b2360,-1,"Go_arraytype");
	set_name(0x4abb60,"[]*runtime.mspan", 0x800);
	create_struct(0x4abb60,-1,"Go_slicetype");
	set_name(0x4ac360,"[]runtime.divMagic", 0x800);
	create_struct(0x4ac360,-1,"Go_slicetype");
	set_name(0x4acb60,"[]uint", 0x800);
	create_struct(0x4acb60,-1,"Go_slicetype");
	set_name(0x4b3b60,"func(*runtime.g, unsafe.Pointer) bool", 0x800);
	create_struct(0x4b3b60,-1,"Go__type");
	set_name(0x4b2540,"[8192]runtime.traceStackPtr", 0x800);
	create_struct(0x4b2540,-1,"Go_arraytype");
	set_name(0x4a9b80,"*runtime.callbacks", 0x800);
	create_struct(0x4a9b80,-1,"Go_ptrtype");
	set_name(0x4b9b80,"*syscall.LazyDLL", 0x800);
	create_struct(0x4b9b80,-1,"Go_ptrtype");
	set_name(0x4aa380,"*runtime.mapextra", 0x800);
	create_struct(0x4aa380,-1,"Go_ptrtype");
	set_name(0x4aab80,"*runtime.stdFunction", 0x800);
	create_struct(0x4aab80,-1,"Go_ptrtype");
	set_name(0x4b7380,"*runtime.addrRange", 0x800);
	create_struct(0x4b7380,-1,"Go_ptrtype");
	set_name(0x4ab380,"*syscall.WSABuf", 0x800);
	create_struct(0x4ab380,-1,"Go_ptrtype");
	set_name(0x4a9380,"*map.bucket[interface {}]*sync.entry", 0x800);
	create_struct(0x4a9380,-1,"Go_ptrtype");
	set_name(0x4a8b80,"*float32", 0x800);
	create_struct(0x4a8b80,-1,"Go_ptrtype");
	set_name(0x4aeb80,"[131072]uint8", 0x800);
	create_struct(0x4aeb80,-1,"Go_arraytype");
	set_name(0x4b0380,"[29]unicode.Range16", 0x800);
	create_struct(0x4b0380,-1,"Go_arraytype");
	set_name(0x4b3200,"func(unsafe.Pointer, unsafe.Pointer)", 0x800);
	create_struct(0x4b3200,-1,"Go__type");
	set_name(0x4bd760,"struct { size uint32; nmalloc uint64; nfree uint64 }", 0x800);
	create_struct(0x4bd760,-1,"Go_structType");
	set_name(0x4ae3a0,"[100]uint8", 0x800);
	create_struct(0x4ae3a0,-1,"Go_arraytype");
	set_name(0x4caba0,"*reflect.funcTypeFixed64", 0x800);
	create_struct(0x4caba0,-1,"Go_ptrtype");
	set_name(0x4afba0,"[22]unicode.Range16", 0x800);
	create_struct(0x4afba0,-1,"Go_arraytype");
	set_name(0x4b13a0,"[4]unicode.Range16", 0x800);
	create_struct(0x4b13a0,-1,"Go_arraytype");
	set_name(0x4b2ba0,"[9]unicode.Range32", 0x800);
	create_struct(0x4b2ba0,-1,"Go_arraytype");
	set_name(0x4abba0,"[]*runtime.p", 0x800);
	create_struct(0x4abba0,-1,"Go_slicetype");
	set_name(0x4ac3a0,"[]runtime.evacDst", 0x800);
	create_struct(0x4ac3a0,-1,"Go_slicetype");
	set_name(0x4acba0,"[]uint16", 0x800);
	create_struct(0x4acba0,-1,"Go_slicetype");
	set_name(0x4b4ba0,"func(int, int, int) runtime.addrRange", 0x800);
	create_struct(0x4b4ba0,-1,"Go__type");
	set_name(0x4b3ec0,"func(unsafe.Pointer, unsafe.Pointer) bool", 0x800);
	create_struct(0x4b3ec0,-1,"Go__type");
	set_name(0x4b1700,"[55]unicode.Range32", 0x800);
	create_struct(0x4b1700,-1,"Go_arraytype");
	set_name(0x4aabc0,"*runtime.stkframe", 0x800);
	create_struct(0x4aabc0,-1,"Go_ptrtype");
	set_name(0x4ab3c0,"*syscall.WSAData", 0x800);
	create_struct(0x4ab3c0,-1,"Go_ptrtype");
	set_name(0x4a9bc0,"*runtime.cgoCallers", 0x800);
	create_struct(0x4a9bc0,-1,"Go_ptrtype");
	set_name(0x4a8bc0,"*float64", 0x800);
	create_struct(0x4a8bc0,-1,"Go_ptrtype");
	set_name(0x4a93c0,"*map.bucket[runtime._typePair]struct {}", 0x800);
	create_struct(0x4a93c0,-1,"Go_ptrtype");
	set_name(0x4aa3c0,"*runtime.mlink", 0x800);
	create_struct(0x4aa3c0,-1,"Go_ptrtype");
	set_name(0x4af3c0,"[173]unicode.Range32", 0x800);
	create_struct(0x4af3c0,-1,"Go_arraytype");
	set_name(0x4b0bc0,"[36]unicode.Range16", 0x800);
	create_struct(0x4b0bc0,-1,"Go_arraytype");
	set_name(0x4b23c0,"[7]unicode.Range16", 0x800);
	create_struct(0x4b23c0,-1,"Go_arraytype");
	set_name(0x4b3bc0,"func([]uint8) (int, error)", 0x800);
	create_struct(0x4b3bc0,-1,"Go__type");
	set_name(0x4acde0,"func()", 0x800);
	create_struct(0x4acde0,-1,"Go__type");
	set_name(0x4b5be0,"*os.file", 0x800);
	create_struct(0x4b5be0,-1,"Go_ptrtype");
	set_name(0x4b63e0,"*runtime.p", 0x800);
	create_struct(0x4b63e0,-1,"Go_ptrtype");
	set_name(0x4aebe0,"[131]string", 0x800);
	create_struct(0x4aebe0,-1,"Go_arraytype");
	set_name(0x4afc00,"[22]unicode.Range32", 0x800);
	create_struct(0x4afc00,-1,"Go_arraytype");
	set_name(0x4b03e0,"[2]**runtime.stackWorkBuf", 0x800);
	create_struct(0x4b03e0,-1,"Go_arraytype");
	set_name(0x4b1be0,"[63]unicode.Range16", 0x800);
	create_struct(0x4b1be0,-1,"Go_arraytype");
	set_name(0x4abbe0,"[]*runtime.sudog", 0x800);
	create_struct(0x4abbe0,-1,"Go_slicetype");
	set_name(0x4ac3e0,"[]runtime.finalizer", 0x800);
	create_struct(0x4ac3e0,-1,"Go_slicetype");
	set_name(0x4acbe0,"[]uint32", 0x800);
	create_struct(0x4acbe0,-1,"Go_slicetype");
	set_name(0x4b53e0,"func(*runtime.hchan, unsafe.Pointer, bool) (bool, bool)", 0x800);
	create_struct(0x4b53e0,-1,"Go__type");
	set_name(0x4a9400,"*map.bucket[runtime.typeOff]*runtime._type", 0x800);
	create_struct(0x4a9400,-1,"Go_ptrtype");
	set_name(0x4bc400,"*poll.fdMutex", 0x800);
	create_struct(0x4bc400,-1,"Go_ptrtype");
	set_name(0x4a8c00,"*fmt.Formatter", 0x800);
	create_struct(0x4a8c00,-1,"Go_ptrtype");
	set_name(0x4b9400,"*runtime.gcSweepBuf", 0x800);
	create_struct(0x4b9400,-1,"Go_ptrtype");
	set_name(0x4a9c00,"*runtime.cgoSymbolizerArg", 0x800);
	create_struct(0x4a9c00,-1,"Go_ptrtype");
	set_name(0x4aa400,"*runtime.moduledata", 0x800);
	create_struct(0x4aa400,-1,"Go_ptrtype");
	set_name(0x4ae400,"[101]runtime.finalizer", 0x800);
	create_struct(0x4ae400,-1,"Go_arraytype");
	set_name(0x4aac00,"*runtime.stringInterfacePtr", 0x800);
	create_struct(0x4aac00,-1,"Go_ptrtype");
	set_name(0x4b7400,"*runtime.bmap", 0x800);
	create_struct(0x4b7400,-1,"Go_ptrtype");
	set_name(0x4ab400,"*syscall.Win32finddata", 0x800);
	create_struct(0x4ab400,-1,"Go_ptrtype");
	set_name(0x4b3080,"func(reflectlite.Type) bool", 0x800);
	create_struct(0x4b3080,-1,"Go__type");
	set_name(0x4ad5e0,"func() interface {}", 0x800);
	create_struct(0x4ad5e0,-1,"Go__type");
	set_name(0x4b9c20,"*syscall.LazyProc", 0x800);
	create_struct(0x4b9c20,-1,"Go_ptrtype");
	set_name(0x4af420,"[178]unicode.Range16", 0x800);
	create_struct(0x4af420,-1,"Go_arraytype");
	set_name(0x4b0c20,"[36]unicode.Range32", 0x800);
	create_struct(0x4b0c20,-1,"Go_arraytype");
	set_name(0x4b2420,"[7]unicode.Range32", 0x800);
	create_struct(0x4b2420,-1,"Go_arraytype");
	set_name(0x4abc20,"[]*runtime.timer", 0x800);
	create_struct(0x4abc20,-1,"Go_slicetype");
	set_name(0x4ac420,"[]runtime.functab", 0x800);
	create_struct(0x4ac420,-1,"Go_slicetype");
	set_name(0x4acc20,"[]uint64", 0x800);
	create_struct(0x4acc20,-1,"Go_slicetype");
	set_name(0x4b3c20,"func(func(string) bool) (reflect.StructField, bool)", 0x800);
	create_struct(0x4b3c20,-1,"Go__type");
	set_name(0x4c0400,"struct { lock runtime.mutex; stack runtime.gList; noStack runtime.gList; n int32 }", 0x800);
	create_struct(0x4c0400,-1,"Go_structType");
	set_name(0x4b3d40,"func(string) (reflect.Method, bool)", 0x800);
	create_struct(0x4b3d40,-1,"Go__type");
	set_name(0x4b1580,"[512]uintptr", 0x800);
	create_struct(0x4b1580,-1,"Go_arraytype");
	set_name(0x4a9c40,"*runtime.cgoTracebackArg", 0x800);
	create_struct(0x4a9c40,-1,"Go_ptrtype");
	set_name(0x4a8c40,"*fmt.GoStringer", 0x800);
	create_struct(0x4a8c40,-1,"Go_ptrtype");
	set_name(0x4a9440,"*map.bucket[string]*unicode.RangeTable", 0x800);
	create_struct(0x4a9440,-1,"Go_ptrtype");
	set_name(0x4aa440,"*runtime.modulehash", 0x800);
	create_struct(0x4aa440,-1,"Go_ptrtype");
	set_name(0x4aac40,"*runtime.stringStruct", 0x800);
	create_struct(0x4aac40,-1,"Go_ptrtype");
	set_name(0x4ab440,"*time.abbr", 0x800);
	create_struct(0x4ab440,-1,"Go_ptrtype");
	set_name(0x4aec40,"[132]uint16", 0x800);
	create_struct(0x4aec40,-1,"Go_arraytype");
	set_name(0x4b0440,"[2][8]runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4b0440,-1,"Go_arraytype");
	set_name(0x4b1c40,"[64]*[1048576]*runtime.heapArena", 0x800);
	create_struct(0x4b1c40,-1,"Go_arraytype");
	set_name(0x4b5440,"func(*runtime.hchan, unsafe.Pointer, bool, uintptr) bool", 0x800);
	create_struct(0x4b5440,-1,"Go__type");
	set_name(0x4b5c60,"*reflect.StructTag", 0x800);
	create_struct(0x4b5c60,-1,"Go_ptrtype");
	set_name(0x4b6460,"*runtime.plainError", 0x800);
	create_struct(0x4b6460,-1,"Go_ptrtype");
	set_name(0x4ae460,"[1024]uint8", 0x800);
	create_struct(0x4ae460,-1,"Go_arraytype");
	set_name(0x4afc60,"[23]unicode.Range16", 0x800);
	create_struct(0x4afc60,-1,"Go_arraytype");
	set_name(0x4b1460,"[512]*runtime.itab", 0x800);
	create_struct(0x4b1460,-1,"Go_arraytype");
	set_name(0x4abc60,"[]*runtime.wincallbackcontext", 0x800);
	create_struct(0x4abc60,-1,"Go_slicetype");
	set_name(0x4ac460,"[]runtime.gcBits", 0x800);
	create_struct(0x4ac460,-1,"Go_slicetype");
	set_name(0x4acc60,"[]uint8", 0x800);
	create_struct(0x4acc60,-1,"Go_slicetype");
	set_name(0x4b2c60,"func() (int, bool)", 0x800);
	create_struct(0x4b2c60,-1,"Go__type");
	set_name(0x4ad460,"func() *reflectlite.rtype", 0x800);
	create_struct(0x4ad460,-1,"Go__type");
	set_name(0x4ac2e0,"[]runtime.arenaIdx", 0x800);
	create_struct(0x4ac2e0,-1,"Go_slicetype");
	set_name(0x4b2f00,"func(int) reflect.StructField", 0x800);
	create_struct(0x4b2f00,-1,"Go__type");
	set_name(0x4b7480,"*runtime.bucket", 0x800);
	create_struct(0x4b7480,-1,"Go_ptrtype");
	set_name(0x4ab480,"*uint", 0x800);
	create_struct(0x4ab480,-1,"Go_ptrtype");
	set_name(0x4a9480,"*map.bucket[string]bool", 0x800);
	create_struct(0x4a9480,-1,"Go_ptrtype");
	set_name(0x4a8c80,"*fmt.State", 0x800);
	create_struct(0x4a8c80,-1,"Go_ptrtype");
	set_name(0x4a9c80,"*runtime.cgothreadstart", 0x800);
	create_struct(0x4a9c80,-1,"Go_ptrtype");
	set_name(0x4aa480,"*runtime.mstats", 0x800);
	create_struct(0x4aa480,-1,"Go_ptrtype");
	set_name(0x4aac80,"*runtime.stringer", 0x800);
	create_struct(0x4aac80,-1,"Go_ptrtype");
	set_name(0x4af480,"[179999]*runtime.bucket", 0x800);
	create_struct(0x4af480,-1,"Go_arraytype");
	set_name(0x4b0c80,"[37]unicode.Range16", 0x800);
	create_struct(0x4b0c80,-1,"Go_arraytype");
	set_name(0x4b2480,"[8192]*[8192]runtime.pallocData", 0x800);
	create_struct(0x4b2480,-1,"Go_arraytype");
	set_name(0x4c0280,"struct { lock runtime.mutex; g *runtime.g; parked bool; timer *runtime.timer }", 0x800);
	create_struct(0x4c0280,-1,"Go_structType");
	set_name(0x4bc4a0,"*runtime.Func", 0x800);
	create_struct(0x4bc4a0,-1,"Go_ptrtype");
	set_name(0x4b94a0,"*runtime.mcache", 0x800);
	create_struct(0x4b94a0,-1,"Go_ptrtype");
	set_name(0x4aeca0,"[134]*runtime.mspan", 0x800);
	create_struct(0x4aeca0,-1,"Go_arraytype");
	set_name(0x4b04a0,"[2]int8", 0x800);
	create_struct(0x4b04a0,-1,"Go_arraytype");
	set_name(0x4b1400,"[4]unicode.Range32", 0x800);
	create_struct(0x4b1400,-1,"Go_arraytype");
	set_name(0x4b1ca0,"[64]*reflect.rtype", 0x800);
	create_struct(0x4b1ca0,-1,"Go_arraytype");
	set_name(0x4abca0,"[]*sync.Pool", 0x800);
	create_struct(0x4abca0,-1,"Go_slicetype");
	set_name(0x4ac4a0,"[]runtime.gcSweepBuf", 0x800);
	create_struct(0x4ac4a0,-1,"Go_slicetype");
	set_name(0x4acca0,"[]uintptr", 0x800);
	create_struct(0x4acca0,-1,"Go_slicetype");
	set_name(0x4ad4a0,"func() *reflectlite.uncommonType", 0x800);
	create_struct(0x4ad4a0,-1,"Go__type");
	set_name(0x4acae0,"[]syscall.WSABuf", 0x800);
	create_struct(0x4acae0,-1,"Go_slicetype");
	set_name(0x4a9cc0,"*runtime.dbgVar", 0x800);
	create_struct(0x4a9cc0,-1,"Go_ptrtype");
	set_name(0x4a8cc0,"*fmt.Stringer", 0x800);
	create_struct(0x4a8cc0,-1,"Go_ptrtype");
	set_name(0x4a94c0,"*map.bucket[string]int64", 0x800);
	create_struct(0x4a94c0,-1,"Go_ptrtype");
	set_name(0x4c04c0,"*reflect.flag", 0x800);
	create_struct(0x4c04c0,-1,"Go_ptrtype");
	set_name(0x4aa4c0,"*runtime.mutex", 0x800);
	create_struct(0x4aa4c0,-1,"Go_ptrtype");
	set_name(0x4ae4c0,"[1048576]*runtime.heapArena", 0x800);
	create_struct(0x4ae4c0,-1,"Go_arraytype");
	set_name(0x4aacc0,"*runtime.sudog", 0x800);
	create_struct(0x4aacc0,-1,"Go_ptrtype");
	set_name(0x4ab4c0,"*uint16", 0x800);
	create_struct(0x4ab4c0,-1,"Go_ptrtype");
	set_name(0x4afcc0,"[249]uint8", 0x800);
	create_struct(0x4afcc0,-1,"Go_arraytype");
	set_name(0x4b14c0,"[512]*runtime.mspan", 0x800);
	create_struct(0x4b14c0,-1,"Go_arraytype");
	set_name(0x4b20c0,"[67]uintptr", 0x800);
	create_struct(0x4b20c0,-1,"Go_arraytype");
	set_name(0x4b8c00,"struct { runtime.gList; n int32 }", 0x800);
	create_struct(0x4b8c00,-1,"Go_structType");
	set_name(0x4b44e0,"*errors.errorString", 0x800);
	create_struct(0x4b44e0,-1,"Go_ptrtype");
	set_name(0x4c94e0,"*reflect.rtype", 0x800);
	create_struct(0x4c94e0,-1,"Go_ptrtype");
	set_name(0x4b5ce0,"*reflect.structField", 0x800);
	create_struct(0x4b5ce0,-1,"Go_ptrtype");
	set_name(0x4b64e0,"*runtime.pollCache", 0x800);
	create_struct(0x4b64e0,-1,"Go_ptrtype");
	set_name(0x4af4e0,"[17]unicode.Range16", 0x800);
	create_struct(0x4af4e0,-1,"Go_arraytype");
	set_name(0x4b0ce0,"[37]unicode.Range32", 0x800);
	create_struct(0x4b0ce0,-1,"Go_arraytype");
	set_name(0x4b24e0,"[8192]runtime.pallocData", 0x800);
	create_struct(0x4b24e0,-1,"Go_arraytype");
	set_name(0x4abce0,"[]*sync.entry", 0x800);
	create_struct(0x4abce0,-1,"Go_slicetype");
	set_name(0x4ac4e0,"[]runtime.guintptr", 0x800);
	create_struct(0x4ac4e0,-1,"Go_slicetype");
	set_name(0x4acce0,"[]unicode.Range16", 0x800);
	create_struct(0x4acce0,-1,"Go_slicetype");
	set_name(0x4b2d80,"func([]int) reflect.StructField", 0x800);
	create_struct(0x4b2d80,-1,"Go__type");
	set_name(0x4b8e80,"struct { lock runtime.mutex; q runtime.gQueue }", 0x800);
	create_struct(0x4b8e80,-1,"Go_structType");
	set_name(0x4ad2e0,"chan int", 0x800);
	create_struct(0x4ad2e0,-1,"Go_chantype");
	set_name(0x4aa500,"*runtime.nameOff", 0x800);
	create_struct(0x4aa500,-1,"Go_ptrtype");
	set_name(0x4aad00,"*runtime.sweepdata", 0x800);
	create_struct(0x4aad00,-1,"Go_ptrtype");
	set_name(0x4b7500,"*runtime.fixalloc", 0x800);
	create_struct(0x4b7500,-1,"Go_ptrtype");
	set_name(0x4ab500,"*uint32", 0x800);
	create_struct(0x4ab500,-1,"Go_ptrtype");
	set_name(0x4a9500,"*map.bucket[string]time.abbr", 0x800);
	create_struct(0x4a9500,-1,"Go_ptrtype");
	set_name(0x4cd500,"*reflect.Value", 0x800);
	create_struct(0x4cd500,-1,"Go_ptrtype");
	set_name(0x4a8d00,"*fmt.fmtFlags", 0x800);
	create_struct(0x4a8d00,-1,"Go_ptrtype");
	set_name(0x4a9d00,"*runtime.divMagic", 0x800);
	create_struct(0x4a9d00,-1,"Go_ptrtype");
	set_name(0x4aed00,"[134]struct { mcentral runtime.mcentral; pad [8]uint8 }", 0x800);
	create_struct(0x4aed00,-1,"Go_arraytype");
	set_name(0x4b0500,"[2]interface {}", 0x800);
	create_struct(0x4b0500,-1,"Go_arraytype");
	set_name(0x4b5080,"map[string]time.abbr", 0x800);
	create_struct(0x4b5080,-1,"Go_maptype");
	set_name(0x4b1280,"[4]string", 0x800);
	create_struct(0x4b1280,-1,"Go_arraytype");
	set_name(0x4ae520,"[105]unicode.Range16", 0x800);
	create_struct(0x4ae520,-1,"Go_arraytype");
	set_name(0x4afd20,"[24]unicode.Range16", 0x800);
	create_struct(0x4afd20,-1,"Go_arraytype");
	set_name(0x4b1520,"[512]uint8", 0x800);
	create_struct(0x4b1520,-1,"Go_arraytype");
	set_name(0x4abd20,"[]*unicode.RangeTable", 0x800);
	create_struct(0x4abd20,-1,"Go_slicetype");
	set_name(0x4ac520,"[]runtime.imethod", 0x800);
	create_struct(0x4ac520,-1,"Go_slicetype");
	set_name(0x4acd20,"[]unicode.Range32", 0x800);
	create_struct(0x4acd20,-1,"Go_slicetype");
	set_name(0x4ad520,"func() *reflect.uncommonType", 0x800);
	create_struct(0x4ad520,-1,"Go__type");
	set_name(0x4b2d20,"func(*os.file) error", 0x800);
	create_struct(0x4b2d20,-1,"Go__type");
	set_name(0x4b4d20,"map[*reflect.structType]int", 0x800);
	create_struct(0x4b4d20,-1,"Go_maptype");
	set_name(0x4bc540,"*runtime.gcControllerState", 0x800);
	create_struct(0x4bc540,-1,"Go_ptrtype");
	set_name(0x4b9540,"*runtime.pageCache", 0x800);
	create_struct(0x4b9540,-1,"Go_ptrtype");
	set_name(0x4a9d40,"*runtime.dlogPerM", 0x800);
	create_struct(0x4a9d40,-1,"Go_ptrtype");
	set_name(0x4a8d40,"*int", 0x800);
	create_struct(0x4a8d40,-1,"Go_ptrtype");
	set_name(0x4a9540,"*map.bucket[string]uint64", 0x800);
	create_struct(0x4a9540,-1,"Go_ptrtype");
	set_name(0x4b4540,"*reflect.ChanDir", 0x800);
	create_struct(0x4b4540,-1,"Go_ptrtype");
	set_name(0x4c9d40,"*reflect.funcType", 0x800);
	create_struct(0x4c9d40,-1,"Go_ptrtype");
	set_name(0x4aa540,"*runtime.net_op", 0x800);
	create_struct(0x4aa540,-1,"Go_ptrtype");
	set_name(0x4aad40,"*runtime.sysmontick", 0x800);
	create_struct(0x4aad40,-1,"Go_ptrtype");
	set_name(0x4ab540,"*uint64", 0x800);
	create_struct(0x4ab540,-1,"Go_ptrtype");
	set_name(0x4b5d60,"*reflect.uncommonType", 0x800);
	create_struct(0x4b5d60,-1,"Go_ptrtype");
	set_name(0x4b6560,"*runtime.puintptr", 0x800);
	create_struct(0x4b6560,-1,"Go_ptrtype");
	set_name(0x4aed60,"[137]string", 0x800);
	create_struct(0x4aed60,-1,"Go_arraytype");
	set_name(0x4b0560,"[2]runtime.Frame", 0x800);
	create_struct(0x4b0560,-1,"Go_arraytype");
	set_name(0x4b1d60,"[64]uint8", 0x800);
	create_struct(0x4b1d60,-1,"Go_arraytype");
	set_name(0x4abd60,"[][32]*runtime._defer", 0x800);
	create_struct(0x4abd60,-1,"Go_slicetype");
	set_name(0x4ac560,"[]runtime.mSpanList", 0x800);
	create_struct(0x4ac560,-1,"Go_slicetype");
	set_name(0x4acd60,"[]utf8.acceptRange", 0x800);
	create_struct(0x4acd60,-1,"Go_slicetype");
	set_name(0x4ad560,"func() bool", 0x800);
	create_struct(0x4ad560,-1,"Go__type");
	set_name(0x4b8d00,"struct { len int; buf [128]*runtime.mspan }", 0x800);
	create_struct(0x4b8d00,-1,"Go_structType");
	set_name(0x4b4f00,"map[runtime.typeOff]*runtime._type", 0x800);
	create_struct(0x4b4f00,-1,"Go_maptype");
	set_name(0x4a9d80,"*runtime.eface", 0x800);
	create_struct(0x4a9d80,-1,"Go_ptrtype");
	set_name(0x4aa580,"*runtime.notInHeapSlice", 0x800);
	create_struct(0x4aa580,-1,"Go_ptrtype");
	set_name(0x4ae580,"[105]unicode.Range32", 0x800);
	create_struct(0x4ae580,-1,"Go_arraytype");
	set_name(0x4aad80,"*runtime.systeminfo", 0x800);
	create_struct(0x4aad80,-1,"Go_ptrtype");
	set_name(0x4b7580,"*runtime.guintptr", 0x800);
	create_struct(0x4b7580,-1,"Go_ptrtype");
	set_name(0x4ab580,"*uint8", 0x800);
	create_struct(0x4ab580,-1,"Go_ptrtype");
	set_name(0x4a9580,"*map.bucket[uint32][]*runtime._type", 0x800);
	create_struct(0x4a9580,-1,"Go_ptrtype");
	set_name(0x4a8d80,"*int16", 0x800);
	create_struct(0x4a8d80,-1,"Go_ptrtype");
	set_name(0x4c0580,"*reflect.name", 0x800);
	create_struct(0x4c0580,-1,"Go_ptrtype");
	set_name(0x4afd80,"[24]unicode.Range32", 0x800);
	create_struct(0x4afd80,-1,"Go_arraytype");
	set_name(0x4b1100,"[442]uint16", 0x800);
	create_struct(0x4b1100,-1,"Go_arraytype");
	set_name(0x4b45a0,"*reflect.Kind", 0x800);
	create_struct(0x4b45a0,-1,"Go_ptrtype");
	set_name(0x4af5a0,"[18]runtime.dbgVar", 0x800);
	create_struct(0x4af5a0,-1,"Go_arraytype");
	set_name(0x4b0da0,"[3]uint32", 0x800);
	create_struct(0x4b0da0,-1,"Go_arraytype");
	set_name(0x4b25a0,"[81]unicode.Range16", 0x800);
	create_struct(0x4b25a0,-1,"Go_arraytype");
	set_name(0x4abda0,"[][8]runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4abda0,-1,"Go_slicetype");
	set_name(0x4ac5a0,"[]runtime.modulehash", 0x800);
	create_struct(0x4ac5a0,-1,"Go_slicetype");
	set_name(0x4acda0,"[]unsafe.Pointer", 0x800);
	create_struct(0x4acda0,-1,"Go_slicetype");
	set_name(0x4ad5a0,"func() int", 0x800);
	create_struct(0x4ad5a0,-1,"Go__type");
	set_name(0x4b3da0,"func(string) (reflect.StructField, bool)", 0x800);
	create_struct(0x4b3da0,-1,"Go__type");
	set_name(0x4aadc0,"*runtime.textsect", 0x800);
	create_struct(0x4aadc0,-1,"Go_ptrtype");
	set_name(0x4ab5c0,"*uintptr", 0x800);
	create_struct(0x4ab5c0,-1,"Go_ptrtype");
	set_name(0x4a9dc0,"*runtime.evacDst", 0x800);
	create_struct(0x4a9dc0,-1,"Go_ptrtype");
	set_name(0x4a8dc0,"*int32", 0x800);
	create_struct(0x4a8dc0,-1,"Go_ptrtype");
	set_name(0x4a95c0,"*map.bucket[unsafe.Pointer]int32", 0x800);
	create_struct(0x4a95c0,-1,"Go_ptrtype");
	set_name(0x4aa5c0,"*runtime.note", 0x800);
	create_struct(0x4aa5c0,-1,"Go_ptrtype");
	set_name(0x4aedc0,"[137]time.abbr", 0x800);
	create_struct(0x4aedc0,-1,"Go_arraytype");
	set_name(0x4b05c0,"[2]runtime.evacDst", 0x800);
	create_struct(0x4b05c0,-1,"Go_arraytype");
	set_name(0x4b1dc0,"[65520]runtime.gcBits", 0x800);
	create_struct(0x4b1dc0,-1,"Go_arraytype");
	set_name(0x4c1dc0,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }", 0x800);
	create_struct(0x4c1dc0,-1,"Go_structType");
	set_name(0x4b2a80,"[97]unicode.Range16", 0x800);
	create_struct(0x4b2a80,-1,"Go_arraytype");
	set_name(0x4b8b80,"struct { cycle uint32; flushed bool }", 0x800);
	create_struct(0x4b8b80,-1,"Go_structType");
	set_name(0x4b95e0,"*runtime.pallocSum", 0x800);
	create_struct(0x4b95e0,-1,"Go_ptrtype");
	set_name(0x4b65e0,"*runtime.randomOrder", 0x800);
	create_struct(0x4b65e0,-1,"Go_ptrtype");
	set_name(0x4ae5e0,"[106]unicode.Range16", 0x800);
	create_struct(0x4ae5e0,-1,"Go_arraytype");
	set_name(0x4ca5e0,"*reflect.funcTypeFixed32", 0x800);
	create_struct(0x4ca5e0,-1,"Go_ptrtype");
	set_name(0x4b5de0,"*runtime.TypeAssertionError", 0x800);
	create_struct(0x4b5de0,-1,"Go_ptrtype");
	set_name(0x4bc5e0,"*runtime.maptype", 0x800);
	create_struct(0x4bc5e0,-1,"Go_ptrtype");
	set_name(0x4afde0,"[251]struct { root runtime.semaRoot; pad [40]uint8 }", 0x800);
	create_struct(0x4afde0,-1,"Go_arraytype");
	set_name(0x4b15e0,"[51]unicode.Range32", 0x800);
	create_struct(0x4b15e0,-1,"Go_arraytype");
	set_name(0x4abde0,"[][]*runtime._defer", 0x800);
	create_struct(0x4abde0,-1,"Go_slicetype");
	set_name(0x4ac5e0,"[]runtime.overlappedEntry", 0x800);
	create_struct(0x4ac5e0,-1,"Go_slicetype");
	set_name(0x4b4d80,"map[int32]unsafe.Pointer", 0x800);
	create_struct(0x4b4d80,-1,"Go_maptype");
	set_name(0x4a9600,"*map.hdr[interface {}]*sync.entry", 0x800);
	create_struct(0x4a9600,-1,"Go_ptrtype");
	set_name(0x4b4600,"*reflect.ValueError", 0x800);
	create_struct(0x4b4600,-1,"Go_ptrtype");
	set_name(0x4a8e00,"*int64", 0x800);
	create_struct(0x4a8e00,-1,"Go_ptrtype");
	set_name(0x4a9e00,"*runtime.finalizer", 0x800);
	create_struct(0x4a9e00,-1,"Go_ptrtype");
	set_name(0x4aa600,"*runtime.overlapped", 0x800);
	create_struct(0x4aa600,-1,"Go_ptrtype");
	set_name(0x4aae00,"*runtime.tflag", 0x800);
	create_struct(0x4aae00,-1,"Go_ptrtype");
	set_name(0x4b7600,"*runtime.lfstack", 0x800);
	create_struct(0x4b7600,-1,"Go_ptrtype");
	set_name(0x4ab600,"*unicode.Range16", 0x800);
	create_struct(0x4ab600,-1,"Go_ptrtype");
	set_name(0x4c7e00,"*reflectlite.rtype", 0x800);
	create_struct(0x4c7e00,-1,"Go_ptrtype");
	set_name(0x4af600,"[19]unicode.Range16", 0x800);
	create_struct(0x4af600,-1,"Go_arraytype");
	set_name(0x4aee20,"[13]uint16", 0x800);
	create_struct(0x4aee20,-1,"Go_arraytype");
	set_name(0x4b0620,"[2]runtime.gcSweepBuf", 0x800);
	create_struct(0x4b0620,-1,"Go_arraytype");
	set_name(0x4b1e20,"[66]unicode.Range16", 0x800);
	create_struct(0x4b1e20,-1,"Go_arraytype");
	set_name(0x4abe20,"[][]*runtime._type", 0x800);
	create_struct(0x4abe20,-1,"Go_slicetype");
	set_name(0x4ac620,"[]runtime.pallocData", 0x800);
	create_struct(0x4ac620,-1,"Go_slicetype");
	set_name(0x4ad620,"func() reflectlite.Kind", 0x800);
	create_struct(0x4ad620,-1,"Go__type");
	set_name(0x4bd620,"struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }", 0x800);
	create_struct(0x4bd620,-1,"Go_structType");
	set_name(0x4a9e40,"*runtime.finblock", 0x800);
	create_struct(0x4a9e40,-1,"Go_ptrtype");
	set_name(0x4a8e40,"*int8", 0x800);
	create_struct(0x4a8e40,-1,"Go_ptrtype");
	set_name(0x4c3e40,"*poll.pollDesc", 0x800);
	create_struct(0x4c3e40,-1,"Go_ptrtype");
	set_name(0x4a9640,"*os.dirInfo", 0x800);
	create_struct(0x4a9640,-1,"Go_ptrtype");
	set_name(0x4aa640,"*runtime.overlappedEntry", 0x800);
	create_struct(0x4aa640,-1,"Go_ptrtype");
	set_name(0x4ae640,"[107]unicode.Range16", 0x800);
	create_struct(0x4ae640,-1,"Go_arraytype");
	set_name(0x4aae40,"*runtime.timer", 0x800);
	create_struct(0x4aae40,-1,"Go_ptrtype");
	set_name(0x4c3640,"*runtime.gcWork", 0x800);
	create_struct(0x4c3640,-1,"Go_ptrtype");
	set_name(0x4ab640,"*unicode.Range32", 0x800);
	create_struct(0x4ab640,-1,"Go_ptrtype");
	set_name(0x4c0640,"*runtime._type", 0x800);
	create_struct(0x4c0640,-1,"Go_ptrtype");
	set_name(0x4b2900,"[90]uint16", 0x800);
	create_struct(0x4b2900,-1,"Go_arraytype");
	set_name(0x4b8a00,"struct { b bool; x interface {} }", 0x800);
	create_struct(0x4b8a00,-1,"Go_structType");
	set_name(0x4cc340,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }", 0x800);
	create_struct(0x4cc340,-1,"Go_structType");
	set_name(0x4b4660,"*reflect.bitVector", 0x800);
	create_struct(0x4b4660,-1,"Go_ptrtype");
	set_name(0x4b5e60,"*runtime.arenaIdx", 0x800);
	create_struct(0x4b5e60,-1,"Go_ptrtype");
	set_name(0x4b6660,"*runtime.spanClass", 0x800);
	create_struct(0x4b6660,-1,"Go_ptrtype");
	set_name(0x4af660,"[1][]int32", 0x800);
	create_struct(0x4af660,-1,"Go_arraytype");
	set_name(0x4b0e60,"[3]uint8", 0x800);
	create_struct(0x4b0e60,-1,"Go_arraytype");
	set_name(0x4b2660,"[87]strconv.extFloat", 0x800);
	create_struct(0x4b2660,-1,"Go_arraytype");
	set_name(0x4abe60,"[][]int32", 0x800);
	create_struct(0x4abe60,-1,"Go_slicetype");
	set_name(0x4ac660,"[]runtime.pallocSum", 0x800);
	create_struct(0x4ac660,-1,"Go_slicetype");
	set_name(0x4ad660,"func() reflectlite.Type", 0x800);
	create_struct(0x4ad660,-1,"Go__type");
	set_name(0x4b4c00,"func(int, runtime.addrRange) (int, int)", 0x800);
	create_struct(0x4b4c00,-1,"Go__type");
	set_name(0x4b0e00,"[3]uint64", 0x800);
	create_struct(0x4b0e00,-1,"Go_arraytype");
	set_name(0x4c1f80,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }", 0x800);
	create_struct(0x4c1f80,-1,"Go_structType");
	set_name(0x4b7680,"*runtime.waitq", 0x800);
	create_struct(0x4b7680,-1,"Go_ptrtype");
	set_name(0x4ab680,"*unicode.RangeTable", 0x800);
	create_struct(0x4ab680,-1,"Go_ptrtype");
	set_name(0x4a9680,"*reflect.Method", 0x800);
	create_struct(0x4a9680,-1,"Go_ptrtype");
	set_name(0x4a8e80,"*interface {}", 0x800);
	create_struct(0x4a8e80,-1,"Go_ptrtype");
	set_name(0x4cae80,"*reflect.funcTypeFixed8", 0x800);
	create_struct(0x4cae80,-1,"Go_ptrtype");
	set_name(0x4bc680,"*runtime.markBits", 0x800);
	create_struct(0x4bc680,-1,"Go_ptrtype");
	set_name(0x4b9680,"*runtime.rwmutex", 0x800);
	create_struct(0x4b9680,-1,"Go_ptrtype");
	set_name(0x4a9e80,"*runtime.forcegcstate", 0x800);
	create_struct(0x4a9e80,-1,"Go_ptrtype");
	set_name(0x4aa680,"*runtime.parkInfo", 0x800);
	create_struct(0x4aa680,-1,"Go_ptrtype");
	set_name(0x4aae80,"*runtime.typeOff", 0x800);
	create_struct(0x4aae80,-1,"Go_ptrtype");
	set_name(0x4ae6a0,"[10]string", 0x800);
	create_struct(0x4ae6a0,-1,"Go_arraytype");
	set_name(0x4c4ea0,"*runtime.mspan", 0x800);
	create_struct(0x4c4ea0,-1,"Go_ptrtype");
	set_name(0x4afea0,"[253]uintptr", 0x800);
	create_struct(0x4afea0,-1,"Go_arraytype");
	set_name(0x4b16a0,"[53]unicode.Range16", 0x800);
	create_struct(0x4b16a0,-1,"Go_arraytype");
	set_name(0x4abea0,"[][]runtime.pallocSum", 0x800);
	create_struct(0x4abea0,-1,"Go_slicetype");
	set_name(0x4ac6a0,"[]runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4ac6a0,-1,"Go_slicetype");
	set_name(0x4ad6a0,"func() reflect.ChanDir", 0x800);
	create_struct(0x4ad6a0,-1,"Go__type");
	set_name(0x4b2ea0,"func(int) reflect.Method", 0x800);
	create_struct(0x4b2ea0,-1,"Go__type");
	set_name(0x4b4ea0,"map[runtime._typePair]struct {}", 0x800);
	create_struct(0x4b4ea0,-1,"Go_maptype");
	set_name(0x4c1ea0,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }", 0x800);
	create_struct(0x4c1ea0,-1,"Go_structType");
	set_name(0x4b2780,"[8]string", 0x800);
	create_struct(0x4b2780,-1,"Go_arraytype");
	set_name(0x4affc0,"[256]uint64", 0x800);
	create_struct(0x4affc0,-1,"Go_arraytype");
	set_name(0x4c16c0,"*runtime.name", 0x800);
	create_struct(0x4c16c0,-1,"Go_ptrtype");
	set_name(0x4a9ec0,"*runtime.funcID", 0x800);
	create_struct(0x4a9ec0,-1,"Go_ptrtype");
	set_name(0x4a86c0,"**runtime._defer", 0x800);
	create_struct(0x4a86c0,-1,"Go_ptrtype");
	set_name(0x4a8ec0,"*cpu.CacheLinePad", 0x800);
	create_struct(0x4a8ec0,-1,"Go_ptrtype");
	set_name(0x4a96c0,"*reflect.StructField", 0x800);
	create_struct(0x4a96c0,-1,"Go_ptrtype");
	set_name(0x4aa6c0,"*runtime.pcvalueCache", 0x800);
	create_struct(0x4aa6c0,-1,"Go_ptrtype");
	set_name(0x4aaec0,"*runtime.uint16InterfacePtr", 0x800);
	create_struct(0x4aaec0,-1,"Go_ptrtype");
	set_name(0x4ab6c0,"*utf8.acceptRange", 0x800);
	create_struct(0x4ab6c0,-1,"Go_ptrtype");
	set_name(0x4b46c0,"*runtime.Frames", 0x800);
	create_struct(0x4b46c0,-1,"Go_ptrtype");
	set_name(0x4af6c0,"[1]int", 0x800);
	create_struct(0x4af6c0,-1,"Go_arraytype");
	set_name(0x4bd800,"struct { user bool; runnable runtime.gQueue; n int32 }", 0x800);
	create_struct(0x4bd800,-1,"Go_structType");
	set_name(0x4b2de0,"func(fmt.State, int32)", 0x800);
	create_struct(0x4b2de0,-1,"Go__type");
	set_name(0x4c83c0,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }", 0x800);
	create_struct(0x4c83c0,-1,"Go_structType");
	set_name(0x4b5ee0,"*runtime.boundsError", 0x800);
	create_struct(0x4b5ee0,-1,"Go_ptrtype");
	set_name(0x4b66e0,"*runtime.traceAlloc", 0x800);
	create_struct(0x4b66e0,-1,"Go_ptrtype");
	set_name(0x4aeee0,"[13]unicode.Range32", 0x800);
	create_struct(0x4aeee0,-1,"Go_arraytype");
	set_name(0x4b06e0,"[2]string", 0x800);
	create_struct(0x4b06e0,-1,"Go_arraytype");
	set_name(0x4b1ee0,"[67]runtime.divMagic", 0x800);
	create_struct(0x4b1ee0,-1,"Go_arraytype");
	set_name(0x4abee0,"[]bool", 0x800);
	create_struct(0x4abee0,-1,"Go_slicetype");
	set_name(0x4ac6e0,"[]runtime.ptabEntry", 0x800);
	create_struct(0x4ac6e0,-1,"Go_slicetype");
	set_name(0x4ad6e0,"func() reflect.Kind", 0x800);
	create_struct(0x4ad6e0,-1,"Go__type");
	set_name(0x4aa700,"*runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4aa700,-1,"Go_ptrtype");
	set_name(0x4ae700,"[10]unicode.Range16", 0x800);
	create_struct(0x4ae700,-1,"Go_arraytype");
	set_name(0x4aaf00,"*runtime.uint32InterfacePtr", 0x800);
	create_struct(0x4aaf00,-1,"Go_ptrtype");
	set_name(0x4b7700,"*sync.poolChain", 0x800);
	create_struct(0x4b7700,-1,"Go_ptrtype");
	set_name(0x4ab700,"*unsafe.Pointer", 0x800);
	create_struct(0x4ab700,-1,"Go_ptrtype");
	set_name(0x4a8700,"**runtime.funcval", 0x800);
	create_struct(0x4a8700,-1,"Go_ptrtype");
	set_name(0x4a8f00,"*cpu.arm", 0x800);
	create_struct(0x4a8f00,-1,"Go_ptrtype");
	set_name(0x4a9700,"*reflect.Type", 0x800);
	create_struct(0x4a9700,-1,"Go_ptrtype");
	set_name(0x4c0700,"*runtime.hmap", 0x800);
	create_struct(0x4c0700,-1,"Go_ptrtype");
	set_name(0x4a9f00,"*runtime.funcinl", 0x800);
	create_struct(0x4a9f00,-1,"Go_ptrtype");
	set_name(0x4ad4e0,"func() *reflect.rtype", 0x800);
	create_struct(0x4ad4e0,-1,"Go__type");
	set_name(0x4b1940,"[5]uint", 0x800);
	create_struct(0x4b1940,-1,"Go_arraytype");
	set_name(0x4b9080,"struct { sync.Mutex; m sync.Map }", 0x800);
	create_struct(0x4b9080,-1,"Go_structType");
	set_name(0x4b4720,"*runtime.bitvector", 0x800);
	create_struct(0x4b4720,-1,"Go_ptrtype");
	set_name(0x4bc720,"*runtime.mcentral", 0x800);
	create_struct(0x4bc720,-1,"Go_ptrtype");
	set_name(0x4b9720,"*runtime.semaRoot", 0x800);
	create_struct(0x4b9720,-1,"Go_ptrtype");
	set_name(0x4af720,"[1]interface {}", 0x800);
	create_struct(0x4af720,-1,"Go_arraytype");
	set_name(0x4b0f20,"[3]unicode.Range32", 0x800);
	create_struct(0x4b0f20,-1,"Go_arraytype");
	set_name(0x4b2720,"[8]runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4b2720,-1,"Go_arraytype");
	set_name(0x4abf20,"[]float64", 0x800);
	create_struct(0x4abf20,-1,"Go_slicetype");
	set_name(0x4ac720,"[]runtime.stackObject", 0x800);
	create_struct(0x4ac720,-1,"Go_slicetype");
	set_name(0x4ad720,"func() reflect.Type", 0x800);
	create_struct(0x4ad720,-1,"Go__type");
	set_name(0x4b2600,"[81]unicode.Range32", 0x800);
	create_struct(0x4b2600,-1,"Go_arraytype");
	set_name(0x4afe40,"[252]uintptr", 0x800);
	create_struct(0x4afe40,-1,"Go_arraytype");
	set_name(0x4c3f40,"*runtime.pallocBits", 0x800);
	create_struct(0x4c3f40,-1,"Go_ptrtype");
	set_name(0x4a9f40,"*runtime.functab", 0x800);
	create_struct(0x4a9f40,-1,"Go_ptrtype");
	set_name(0x4a8f40,"*cpu.arm64", 0x800);
	create_struct(0x4a8f40,-1,"Go_ptrtype");
	set_name(0x4a8740,"**runtime.mcache", 0x800);
	create_struct(0x4a8740,-1,"Go_ptrtype");
	set_name(0x4a9740,"*reflect.fieldScan", 0x800);
	create_struct(0x4a9740,-1,"Go_ptrtype");
	set_name(0x4aa740,"*runtime.persistentAlloc", 0x800);
	create_struct(0x4aa740,-1,"Go_ptrtype");
	set_name(0x4aaf40,"*runtime.uint64InterfacePtr", 0x800);
	create_struct(0x4aaf40,-1,"Go_ptrtype");
	set_name(0x4aef40,"[145]unicode.Range16", 0x800);
	create_struct(0x4aef40,-1,"Go_arraytype");
	set_name(0x4b0740,"[2]struct { item runtime.stackpoolItem; _ [40]uint8 }", 0x800);
	create_struct(0x4b0740,-1,"Go_arraytype");
	set_name(0x4b1f40,"[67]struct { size uint32; nmalloc uint64; nfree uint64 }", 0x800);
	create_struct(0x4b1f40,-1,"Go_arraytype");
	set_name(0x4c4900,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }", 0x800);
	create_struct(0x4c4900,-1,"Go_structType");
	set_name(0x4b6760,"*runtime.traceAllocBlockPtr", 0x800);
	create_struct(0x4b6760,-1,"Go_ptrtype");
	set_name(0x4ae760,"[111]unicode.Range16", 0x800);
	create_struct(0x4ae760,-1,"Go_arraytype");
	set_name(0x4b5f60,"*runtime.chunkIdx", 0x800);
	create_struct(0x4b5f60,-1,"Go_ptrtype");
	set_name(0x4aff60,"[256]uint", 0x800);
	create_struct(0x4aff60,-1,"Go_arraytype");
	set_name(0x4b1760,"[5]*runtime._defer", 0x800);
	create_struct(0x4b1760,-1,"Go_arraytype");
	set_name(0x4abf60,"[]int", 0x800);
	create_struct(0x4abf60,-1,"Go_slicetype");
	set_name(0x4ac760,"[]runtime.stackObjectRecord", 0x800);
	create_struct(0x4ac760,-1,"Go_slicetype");
	set_name(0x4ad760,"func() string", 0x800);
	create_struct(0x4ad760,-1,"Go__type");
	set_name(0x4b2f60,"func(int) reflect.Type", 0x800);
	create_struct(0x4b2f60,-1,"Go__type");
	set_name(0x4b4f60,"map[string]*unicode.RangeTable", 0x800);
	create_struct(0x4b4f60,-1,"Go_maptype");
	set_name(0x4b8f00,"struct { mcentral runtime.mcentral; pad [8]uint8 }", 0x800);
	create_struct(0x4b8f00,-1,"Go_structType");
	set_name(0x4b17c0,"[5][32]*runtime._defer", 0x800);
	create_struct(0x4b17c0,-1,"Go_arraytype");
	set_name(0x4a9f80,"*runtime.funcval", 0x800);
	create_struct(0x4a9f80,-1,"Go_ptrtype");
	set_name(0x4aa780,"*runtime.pollDesc", 0x800);
	create_struct(0x4aa780,-1,"Go_ptrtype");
	set_name(0x4aaf80,"*runtime.workbufhdr", 0x800);
	create_struct(0x4aaf80,-1,"Go_ptrtype");
	set_name(0x4b7780,"*syscall.DLL", 0x800);
	create_struct(0x4b7780,-1,"Go_ptrtype");
	set_name(0x4a8780,"**runtime.mspan", 0x800);
	create_struct(0x4a8780,-1,"Go_ptrtype");
	set_name(0x4a8f80,"*cpu.option", 0x800);
	create_struct(0x4a8f80,-1,"Go_ptrtype");
	set_name(0x4a9780,"*reflect.layoutKey", 0x800);
	create_struct(0x4a9780,-1,"Go_ptrtype");
	set_name(0x4b4780,"*runtime.gcBitsArena", 0x800);
	create_struct(0x4b4780,-1,"Go_ptrtype");
	set_name(0x4af780,"[1]reflect.fieldScan", 0x800);
	create_struct(0x4af780,-1,"Go_arraytype");
	set_name(0x4b0f80,"[40]uint8", 0x800);
	create_struct(0x4b0f80,-1,"Go_arraytype");
	set_name(0x4c97a0,"*reflect.structType", 0x800);
	create_struct(0x4c97a0,-1,"Go_ptrtype");
	set_name(0x4c17a0,"*strconv.extFloat", 0x800);
	create_struct(0x4c17a0,-1,"Go_ptrtype");
	set_name(0x4aefa0,"[14]int8", 0x800);
	create_struct(0x4aefa0,-1,"Go_arraytype");
	set_name(0x4b07a0,"[2]uint32", 0x800);
	create_struct(0x4b07a0,-1,"Go_arraytype");
	set_name(0x4b1fa0,"[67]uint16", 0x800);
	create_struct(0x4b1fa0,-1,"Go_arraytype");
	set_name(0x4abfa0,"[]int32", 0x800);
	create_struct(0x4abfa0,-1,"Go_slicetype");
	set_name(0x4ac7a0,"[]runtime.stackfreelist", 0x800);
	create_struct(0x4ac7a0,-1,"Go_slicetype");
	set_name(0x4ad7a0,"func() uintptr", 0x800);
	create_struct(0x4ad7a0,-1,"Go__type");
	set_name(0x4aafc0,"*sys.Uintreg", 0x800);
	create_struct(0x4aafc0,-1,"Go_ptrtype");
	set_name(0x4ae7c0,"[113]unicode.Range16", 0x800);
	create_struct(0x4ae7c0,-1,"Go_arraytype");
	set_name(0x4bc7c0,"*runtime.stackScanState", 0x800);
	create_struct(0x4bc7c0,-1,"Go_ptrtype");
	set_name(0x4b97c0,"*runtime.traceStackTable", 0x800);
	create_struct(0x4b97c0,-1,"Go_ptrtype");
	set_name(0x4a9fc0,"*runtime.g", 0x800);
	create_struct(0x4a9fc0,-1,"Go_ptrtype");
	set_name(0x4a8fc0,"*cpu.x86", 0x800);
	create_struct(0x4a8fc0,-1,"Go_ptrtype");
	set_name(0x4a87c0,"**runtime.notInHeap", 0x800);
	create_struct(0x4a87c0,-1,"Go_ptrtype");
	set_name(0x4a97c0,"*reflect.layoutType", 0x800);
	create_struct(0x4a97c0,-1,"Go_ptrtype");
	set_name(0x4c07c0,"*sync.Map", 0x800);
	create_struct(0x4c07c0,-1,"Go_ptrtype");
	set_name(0x4aa7c0,"*runtime.ptabEntry", 0x800);
	create_struct(0x4aa7c0,-1,"Go_ptrtype");
	set_name(0x4b3140,"func(string) bool", 0x800);
	create_struct(0x4b3140,-1,"Go__type");
	set_name(0x4b4de0,"map[int]string", 0x800);
	create_struct(0x4b4de0,-1,"Go_maptype");
	set_name(0x4b67e0,"*runtime.traceBufPtr", 0x800);
	create_struct(0x4b67e0,-1,"Go_ptrtype");
	set_name(0x4b5fe0,"*runtime.errorString", 0x800);
	create_struct(0x4b5fe0,-1,"Go_ptrtype");
	set_name(0x4b47e0,"*runtime.gclinkptr", 0x800);
	create_struct(0x4b47e0,-1,"Go_ptrtype");
	set_name(0x4af7e0,"[1]string", 0x800);
	create_struct(0x4af7e0,-1,"Go_arraytype");
	set_name(0x4b0fe0,"[40]unicode.Range16", 0x800);
	create_struct(0x4b0fe0,-1,"Go_arraytype");
	set_name(0x4b27e0,"[8]uint8", 0x800);
	create_struct(0x4b27e0,-1,"Go_arraytype");
	set_name(0x4abfe0,"[]int64", 0x800);
	create_struct(0x4abfe0,-1,"Go_slicetype");
	set_name(0x4ac7e0,"[]runtime.textsect", 0x800);
	create_struct(0x4ac7e0,-1,"Go_slicetype");
	set_name(0x4ad7e0,"func(*runtime.p)", 0x800);
	create_struct(0x4ad7e0,-1,"Go__type");
	set_name(0x4b8d80,"struct { lock runtime.mutex; free [35]runtime.mSpanList }", 0x800);
	create_struct(0x4b8d80,-1,"Go_structType");
	set_name(0x4b3e00,"func(string, *poll.FD, error)", 0x800);
	create_struct(0x4b3e00,-1,"Go__type");
	set_name(0x4b1640,"[521]uint8", 0x800);
	create_struct(0x4b1640,-1,"Go_arraytype");
	set_name(0x4aee80,"[13]unicode.Range16", 0x800);
	create_struct(0x4aee80,-1,"Go_arraytype");
	set_name(0x4b5800,"runtime.sigset", 0x800);
	create_struct(0x4b5800,-1,"Go_structType");
	set_name(0x4b7800,"errors.errorString", 0x800);
	create_struct(0x4b7800,-1,"Go_structType");
	set_name(0x4b8000,"fmt.State", 0x800);
	create_struct(0x4b8000,-1,"Go_interfacetype");
	set_name(0x4ba800,"runtime.dbgVar", 0x800);
	create_struct(0x4ba800,-1,"Go_structType");
	set_name(0x4c1000,"runtime.overlapped", 0x800);
	create_struct(0x4c1000,-1,"Go_structType");
	set_name(0x4bf800,"map.bucket[runtime._typePair]struct {}", 0x800);
	create_struct(0x4bf800,-1,"Go_structType");
	set_name(0x4cb800,"runtime.moduledata", 0x800);
	create_struct(0x4cb800,-1,"Go_structType");
	set_name(0x4be000,"runtime.arenaHint", 0x800);
	create_struct(0x4be000,-1,"Go_structType");
	set_name(0x4c3020,"runtime.specialfinalizer", 0x800);
	create_struct(0x4c3020,-1,"Go_structType");
	set_name(0x4ad820,"int", 0x800);
	create_struct(0x4ad820,-1,"Go__type");
	set_name(0x4bb020,"runtime.randomOrder", 0x800);
	create_struct(0x4bb020,-1,"Go_structType");
	set_name(0x4ae020,"uint", 0x800);
	create_struct(0x4ae020,-1,"Go__type");
	set_name(0x4be840,"runtime.notInHeapSlice", 0x800);
	create_struct(0x4be840,-1,"Go_structType");
	set_name(0x4c2840,"runtime.finalizer", 0x800);
	create_struct(0x4c2840,-1,"Go_structType");
	set_name(0x4c3840,"runtime.markBits", 0x800);
	create_struct(0x4c3840,-1,"Go_structType");
	set_name(0x4bb840,"runtime.workbufhdr", 0x800);
	create_struct(0x4bb840,-1,"Go_structType");
	set_name(0x4cd040,"runtime.g", 0x800);
	create_struct(0x4cd040,-1,"Go_structType");
	set_name(0x4b4040,"runtime.gclinkptr", 0x800);
	create_struct(0x4b4040,-1,"Go__type");
	set_name(0x4ae060,"uint16", 0x800);
	create_struct(0x4ae060,-1,"Go__type");
	set_name(0x4c2060,"main.custom", 0x800);
	create_struct(0x4c2060,-1,"Go_structType");
	set_name(0x4bc060,"syscall.RawSockaddrAny", 0x800);
	create_struct(0x4bc060,-1,"Go_structType");
	set_name(0x4ad860,"int16", 0x800);
	create_struct(0x4ad860,-1,"Go__type");
	set_name(0x4b5860,"runtime.spanClass", 0x800);
	create_struct(0x4b5860,-1,"Go__type");
	set_name(0x4bf080,"syscall.LazyDLL", 0x800);
	create_struct(0x4bf080,-1,"Go_structType");
	set_name(0x4ba080,"reflect.funcTypeFixed128", 0x800);
	create_struct(0x4ba080,-1,"Go_structType");
	set_name(0x4b7880,"cpu.CacheLinePad", 0x800);
	create_struct(0x4b7880,-1,"Go_structType");
	set_name(0x4ba8a0,"runtime.eface", 0x800);
	create_struct(0x4ba8a0,-1,"Go_structType");
	set_name(0x4c58a0,"runtime.maptype", 0x800);
	create_struct(0x4c58a0,-1,"Go_structType");
	set_name(0x4ad8a0,"int32", 0x800);
	create_struct(0x4ad8a0,-1,"Go__type");
	set_name(0x4ae0a0,"uint32", 0x800);
	create_struct(0x4ae0a0,-1,"Go__type");
	set_name(0x4b40a0,"runtime.guintptr", 0x800);
	create_struct(0x4b40a0,-1,"Go__type");
	set_name(0x4bb0c0,"runtime.stack", 0x800);
	create_struct(0x4bb0c0,-1,"Go_structType");
	set_name(0x4b58c0,"sync.noCopy", 0x800);
	create_struct(0x4b58c0,-1,"Go_structType");
	set_name(0x4c10c0,"runtime.overlappedEntry", 0x800);
	create_struct(0x4c10c0,-1,"Go_structType");
	set_name(0x4be0c0,"runtime.callbacks", 0x800);
	create_struct(0x4be0c0,-1,"Go_structType");
	set_name(0x4c60c0,"syscall.Win32finddata", 0x800);
	create_struct(0x4c60c0,-1,"Go_structType");
	set_name(0x4bf8c0,"map.bucket[runtime.typeOff]*runtime._type", 0x800);
	create_struct(0x4bf8c0,-1,"Go_structType");
	set_name(0x4bb8e0,"strconv.leftCheat", 0x800);
	create_struct(0x4bb8e0,-1,"Go_structType");
	set_name(0x4ae0e0,"uint64", 0x800);
	create_struct(0x4ae0e0,-1,"Go__type");
	set_name(0x4ad8e0,"int64", 0x800);
	create_struct(0x4ad8e0,-1,"Go__type");
	set_name(0x4be900,"runtime.pageCache", 0x800);
	create_struct(0x4be900,-1,"Go_structType");
	set_name(0x4b7900,"poll.ioSrv", 0x800);
	create_struct(0x4b7900,-1,"Go_structType");
	set_name(0x4c3100,"runtime.stackObject", 0x800);
	create_struct(0x4c3100,-1,"Go_structType");
	set_name(0x4b4100,"runtime.muintptr", 0x800);
	create_struct(0x4b4100,-1,"Go__type");
	set_name(0x4bc100,"syscall.WSABuf", 0x800);
	create_struct(0x4bc100,-1,"Go_structType");
	set_name(0x4c0100,"reflect.flag", 0x800);
	create_struct(0x4c0100,-1,"Go__type");
	set_name(0x4b9100,"syscall.Errno", 0x800);
	create_struct(0x4b9100,-1,"Go__type");
	set_name(0x4c5120,"map.hdr[interface {}]*sync.entry", 0x800);
	create_struct(0x4c5120,-1,"Go_structType");
	set_name(0x4ba120,"reflect.funcTypeFixed16", 0x800);
	create_struct(0x4ba120,-1,"Go_structType");
	set_name(0x4ae120,"uint8", 0x800);
	create_struct(0x4ae120,-1,"Go__type");
	set_name(0x4ad920,"int8", 0x800);
	create_struct(0x4ad920,-1,"Go__type");
	set_name(0x4b3920,"runtime.sliceInterfacePtr", 0x800);
	create_struct(0x4b3920,-1,"Go_slicetype");
	set_name(0x4c2920,"runtime.finblock", 0x800);
	create_struct(0x4c2920,-1,"Go_structType");
	set_name(0x4c0940,"reflectlite.Type", 0x800);
	create_struct(0x4c0940,-1,"Go_interfacetype");
	set_name(0x4c3940,"windows.WSAMsg", 0x800);
	create_struct(0x4c3940,-1,"Go_structType");
	set_name(0x4c6940,"runtime._func", 0x800);
	create_struct(0x4c6940,-1,"Go_structType");
	set_name(0x4ba940,"runtime.functab", 0x800);
	create_struct(0x4ba940,-1,"Go_structType");
	set_name(0x4bf140,"syscall.Proc", 0x800);
	create_struct(0x4bf140,-1,"Go_structType");
	set_name(0x4c4140,"runtime.name", 0x800);
	create_struct(0x4c4140,-1,"Go_structType");
	set_name(0x4b4160,"runtime.puintptr", 0x800);
	create_struct(0x4b4160,-1,"Go__type");
	set_name(0x4ad960,"poll.fileKind", 0x800);
	create_struct(0x4ad960,-1,"Go__type");
	set_name(0x4ae160,"uintptr", 0x800);
	create_struct(0x4ae160,-1,"Go__type");
	set_name(0x4bb160,"runtime.stackObjectBuf", 0x800);
	create_struct(0x4bb160,-1,"Go_structType");
	set_name(0x4c1180,"runtime.sysmontick", 0x800);
	create_struct(0x4c1180,-1,"Go_structType");
	set_name(0x4be180,"runtime.cgothreadstart", 0x800);
	create_struct(0x4be180,-1,"Go_structType");
	set_name(0x4bb980,"sync.Mutex", 0x800);
	create_struct(0x4bb980,-1,"Go_structType");
	set_name(0x4bf980,"map.bucket[string]*unicode.RangeTable", 0x800);
	create_struct(0x4bf980,-1,"Go_structType");
	set_name(0x4b8980,"runtime.pallocSum", 0x800);
	create_struct(0x4b8980,-1,"Go__type");
	set_name(0x4b7980,"poll.pollDesc", 0x800);
	create_struct(0x4b7980,-1,"Go_structType");
	set_name(0x4bc1a0,"time.abbr", 0x800);
	create_struct(0x4bc1a0,-1,"Go_structType");
	set_name(0x4ad9a0,"reflectlite.Kind", 0x800);
	create_struct(0x4ad9a0,-1,"Go__type");
	set_name(0x4ae1a0,"unsafe.Pointer", 0x800);
	create_struct(0x4ae1a0,-1,"Go__type");
	set_name(0x4c01c0,"runtime.funcInfo", 0x800);
	create_struct(0x4c01c0,-1,"Go_structType");
	set_name(0x4ba1c0,"reflect.funcTypeFixed32", 0x800);
	create_struct(0x4ba1c0,-1,"Go_structType");
	set_name(0x4be9c0,"runtime.pcvalueCacheEnt", 0x800);
	create_struct(0x4be9c0,-1,"Go_structType");
	set_name(0x4b41c0,"runtime.traceAllocBlockPtr", 0x800);
	create_struct(0x4b41c0,-1,"Go__type");
	set_name(0x4c31e0,"syscall.Overlapped", 0x800);
	create_struct(0x4c31e0,-1,"Go_structType");
	set_name(0x4ad9e0,"reflectlite.nameOff", 0x800);
	create_struct(0x4ad9e0,-1,"Go__type");
	set_name(0x4ba9e0,"runtime.gQueue", 0x800);
	create_struct(0x4ba9e0,-1,"Go_structType");
	set_name(0x4bf200,"unicode.Range16", 0x800);
	create_struct(0x4bf200,-1,"Go_structType");
	set_name(0x4cda00,"reflect.Value", 0x800);
	create_struct(0x4cda00,-1,"Go_structType");
	set_name(0x4b5200,"runtime.cgoCallers", 0x800);
	create_struct(0x4b5200,-1,"Go_arraytype");
	set_name(0x4bb200,"runtime.stackObjectBufHdr", 0x800);
	create_struct(0x4bb200,-1,"Go_structType");
	set_name(0x4b7a00,"runtime.Func", 0x800);
	create_struct(0x4b7a00,-1,"Go_structType");
	set_name(0x4c0a00,"cpu.arm", 0x800);
	create_struct(0x4c0a00,-1,"Go_structType");
	set_name(0x4c2a00,"runtime.funcinl", 0x800);
	create_struct(0x4c2a00,-1,"Go_structType");
	set_name(0x4c2220,"fmt.fmt", 0x800);
	create_struct(0x4c2220,-1,"Go_structType");
	set_name(0x4ad220,"bool", 0x800);
	create_struct(0x4ad220,-1,"Go__type");
	set_name(0x4ada20,"reflectlite.tflag", 0x800);
	create_struct(0x4ada20,-1,"Go__type");
	set_name(0x4b4220,"runtime.traceBufPtr", 0x800);
	create_struct(0x4b4220,-1,"Go__type");
	set_name(0x4bba20,"sync.Once", 0x800);
	create_struct(0x4bba20,-1,"Go_structType");
	set_name(0x4c1240,"runtime.traceStackTable", 0x800);
	create_struct(0x4c1240,-1,"Go_structType");
	set_name(0x4c7240,"runtime._defer", 0x800);
	create_struct(0x4c7240,-1,"Go_structType");
	set_name(0x4c7a40,"poll.operation", 0x800);
	create_struct(0x4c7a40,-1,"Go_structType");
	set_name(0x4bc240,"utf8.acceptRange", 0x800);
	create_struct(0x4bc240,-1,"Go_structType");
	set_name(0x4c3a40,"runtime.bucket", 0x800);
	create_struct(0x4c3a40,-1,"Go_structType");
	set_name(0x4bfa40,"map.bucket[string]bool", 0x800);
	create_struct(0x4bfa40,-1,"Go_structType");
	set_name(0x4be240,"runtime.forcegcstate", 0x800);
	create_struct(0x4be240,-1,"Go_structType");
	set_name(0x4c4240,"reflect.StructField", 0x800);
	create_struct(0x4c4240,-1,"Go_structType");
	set_name(0x4ba260,"reflect.funcTypeFixed4", 0x800);
	create_struct(0x4ba260,-1,"Go_structType");
	set_name(0x4b5260,"runtime.pageBits", 0x800);
	create_struct(0x4b5260,-1,"Go_arraytype");
	set_name(0x4ada60,"reflectlite.typeOff", 0x800);
	create_struct(0x4ada60,-1,"Go__type");
	set_name(0x4c9a60,"cpu.arm64", 0x800);
	create_struct(0x4c9a60,-1,"Go_structType");
	set_name(0x4b7a80,"runtime.bmap", 0x800);
	create_struct(0x4b7a80,-1,"Go_structType");
	set_name(0x4bea80,"runtime.semaRoot", 0x800);
	create_struct(0x4bea80,-1,"Go_structType");
	set_name(0x4b4280,"runtime.traceStackPtr", 0x800);
	create_struct(0x4b4280,-1,"Go__type");
	set_name(0x4baa80,"runtime.imethod", 0x800);
	create_struct(0x4baa80,-1,"Go_structType");
	set_name(0x4adaa0,"reflect.nameOff", 0x800);
	create_struct(0x4adaa0,-1,"Go__type");
	set_name(0x4bb2a0,"runtime.stackObjectRecord", 0x800);
	create_struct(0x4bb2a0,-1,"Go_structType");
	set_name(0x4bdac0,"poll.fdMutex", 0x800);
	create_struct(0x4bdac0,-1,"Go_structType");
	set_name(0x4bf2c0,"unicode.Range32", 0x800);
	create_struct(0x4bf2c0,-1,"Go_structType");
	set_name(0x4bbac0,"sync.eface", 0x800);
	create_struct(0x4bbac0,-1,"Go_structType");
	set_name(0x4c0ac0,"os.dirInfo", 0x800);
	create_struct(0x4c0ac0,-1,"Go_structType");
	set_name(0x4c6ac0,"runtime._type", 0x800);
	create_struct(0x4c6ac0,-1,"Go_structType");
	set_name(0x4b52c0,"runtime.pallocBits", 0x800);
	create_struct(0x4b52c0,-1,"Go_arraytype");
	set_name(0x4b42e0,"runtime.waitReason", 0x800);
	create_struct(0x4b42e0,-1,"Go__type");
	set_name(0x4adae0,"reflect.tflag", 0x800);
	create_struct(0x4adae0,-1,"Go__type");
	set_name(0x4c2ae0,"runtime.gcSweepBuf", 0x800);
	create_struct(0x4c2ae0,-1,"Go_structType");
	set_name(0x4ba300,"reflect.funcTypeFixed64", 0x800);
	create_struct(0x4ba300,-1,"Go_structType");
	set_name(0x4bfb00,"map.bucket[string]int64", 0x800);
	create_struct(0x4bfb00,-1,"Go_structType");
	set_name(0x4c1300,"runtime.wbBuf", 0x800);
	create_struct(0x4c1300,-1,"Go_structType");
	set_name(0x4c2300,"cpu.option", 0x800);
	create_struct(0x4c2300,-1,"Go_structType");
	set_name(0x4b7b00,"runtime.funcval", 0x800);
	create_struct(0x4b7b00,-1,"Go_structType");
	set_name(0x4be300,"runtime.gcBitsArena", 0x800);
	create_struct(0x4be300,-1,"Go_structType");
	set_name(0x4adb20,"reflect.typeOff", 0x800);
	create_struct(0x4adb20,-1,"Go__type");
	set_name(0x4bab20,"runtime.lfnode", 0x800);
	create_struct(0x4bab20,-1,"Go_structType");
	set_name(0x4c3b40,"runtime.libcall", 0x800);
	create_struct(0x4c3b40,-1,"Go_structType");
	set_name(0x4beb40,"runtime.special", 0x800);
	create_struct(0x4beb40,-1,"Go_structType");
	set_name(0x4c5b40,"fmt.pp", 0x800);
	create_struct(0x4c5b40,-1,"Go_structType");
	set_name(0x4c4b40,"runtime._panic", 0x800);
	create_struct(0x4c4b40,-1,"Go_structType");
	set_name(0x4bb340,"runtime.stackWorkBuf", 0x800);
	create_struct(0x4bb340,-1,"Go_structType");
	set_name(0x4c4360,"runtime.Frame", 0x800);
	create_struct(0x4c4360,-1,"Go_structType");
	set_name(0x4ad360,"complex128", 0x800);
	create_struct(0x4ad360,-1,"Go__type");
	set_name(0x4adb60,"runtime.boundsErrorCode", 0x800);
	create_struct(0x4adb60,-1,"Go__type");
	set_name(0x4bbb60,"sync.poolChain", 0x800);
	create_struct(0x4bbb60,-1,"Go_structType");
	set_name(0x4bdb80,"os.PathError", 0x800);
	create_struct(0x4bdb80,-1,"Go_structType");
	set_name(0x4b7b80,"runtime.gList", 0x800);
	create_struct(0x4b7b80,-1,"Go_structType");
	set_name(0x4c0b80,"os.file", 0x800);
	create_struct(0x4c0b80,-1,"Go_structType");
	set_name(0x4bf380,"unicode.RangeTable", 0x800);
	create_struct(0x4bf380,-1,"Go_structType");
	set_name(0x4c6380,"reflect.Type", 0x800);
	create_struct(0x4c6380,-1,"Go_interfacetype");
	set_name(0x4ccba0,"runtime.p", 0x800);
	create_struct(0x4ccba0,-1,"Go_structType");
	set_name(0x4ad3a0,"complex64", 0x800);
	create_struct(0x4ad3a0,-1,"Go__type");
	set_name(0x4adba0,"runtime.bucketType", 0x800);
	create_struct(0x4adba0,-1,"Go__type");
	set_name(0x4ba3a0,"reflect.funcTypeFixed8", 0x800);
	create_struct(0x4ba3a0,-1,"Go_structType");
	set_name(0x4b6bc0,"error", 0x800);
	create_struct(0x4b6bc0,-1,"Go_interfacetype");
	set_name(0x4c73c0,"runtime.gcControllerState", 0x800);
	create_struct(0x4c73c0,-1,"Go_structType");
	set_name(0x4bfbc0,"map.bucket[string]time.abbr", 0x800);
	create_struct(0x4bfbc0,-1,"Go_structType");
	set_name(0x4c2bc0,"runtime.heapArena", 0x800);
	create_struct(0x4c2bc0,-1,"Go_structType");
	set_name(0x4cbbc0,"runtime.schedt", 0x800);
	create_struct(0x4cbbc0,-1,"Go_structType");
	set_name(0x4c13c0,"runtime.wincallbackcontext", 0x800);
	create_struct(0x4c13c0,-1,"Go_structType");
	set_name(0x4be3c0,"runtime.initTask", 0x800);
	create_struct(0x4be3c0,-1,"Go_structType");
	set_name(0x4babc0,"runtime.mSpanList", 0x800);
	create_struct(0x4babc0,-1,"Go_structType");
	set_name(0x4ad3e0,"float32", 0x800);
	create_struct(0x4ad3e0,-1,"Go__type");
	set_name(0x4c23e0,"reflectlite.uncommonType", 0x800);
	create_struct(0x4c23e0,-1,"Go_structType");
	set_name(0x4bb3e0,"runtime.stackWorkBufHdr", 0x800);
	create_struct(0x4bb3e0,-1,"Go_structType");
	set_name(0x4adbe0,"runtime.funcID", 0x800);
	create_struct(0x4adbe0,-1,"Go__type");
	set_name(0x4bec00,"runtime.structfield", 0x800);
	create_struct(0x4bec00,-1,"Go_structType");
	set_name(0x4b2c00,"fmt.buffer", 0x800);
	create_struct(0x4b2c00,-1,"Go_slicetype");
	set_name(0x4bbc00,"sync.poolDequeue", 0x800);
	create_struct(0x4bbc00,-1,"Go_structType");
	set_name(0x4b7c00,"runtime.mSpanStateBox", 0x800);
	create_struct(0x4b7c00,-1,"Go_structType");
	set_name(0x4adc20,"runtime.gcBits", 0x800);
	create_struct(0x4adc20,-1,"Go__type");
	set_name(0x4c7c20,"runtime.hiter", 0x800);
	create_struct(0x4c7c20,-1,"Go_structType");
	set_name(0x4ad420,"float64", 0x800);
	create_struct(0x4ad420,-1,"Go__type");
	set_name(0x4b6c40,"fmt.Formatter", 0x800);
	create_struct(0x4b6c40,-1,"Go_interfacetype");
	set_name(0x4c6c40,"runtime.hchan", 0x800);
	create_struct(0x4c6c40,-1,"Go_structType");
	set_name(0x4bf440,"map.bucket[*reflect.structType]bool", 0x800);
	create_struct(0x4bf440,-1,"Go_structType");
	set_name(0x4c3c40,"runtime.sweepdata", 0x800);
	create_struct(0x4c3c40,-1,"Go_structType");
	set_name(0x4c0c40,"runtime.TypeAssertionError", 0x800);
	create_struct(0x4c0c40,-1,"Go_structType");
	set_name(0x4bdc40,"reflect.funcType", 0x800);
	create_struct(0x4bdc40,-1,"Go_structType");
	set_name(0x4ba440,"reflect.layoutKey", 0x800);
	create_struct(0x4ba440,-1,"Go_structType");
	set_name(0x4adc60,"runtime.gcMarkWorkerMode", 0x800);
	create_struct(0x4adc60,-1,"Go__type");
	set_name(0x4bac60,"runtime.pallocData", 0x800);
	create_struct(0x4bac60,-1,"Go_structType");
	set_name(0x4c4c60,"runtime.gcWork", 0x800);
	create_struct(0x4c4c60,-1,"Go_structType");
	set_name(0x4b7c80,"runtime.mlink", 0x800);
	create_struct(0x4b7c80,-1,"Go_structType");
	set_name(0x4bfc80,"map.bucket[string]uint64", 0x800);
	create_struct(0x4bfc80,-1,"Go_structType");
	set_name(0x4c1480,"strconv.decimalSlice", 0x800);
	create_struct(0x4c1480,-1,"Go_structType");
	set_name(0x4bb480,"runtime.stackfreelist", 0x800);
	create_struct(0x4bb480,-1,"Go_structType");
	set_name(0x4c4480,"runtime.cgoSymbolizerArg", 0x800);
	create_struct(0x4c4480,-1,"Go_structType");
	set_name(0x4be480,"runtime.interfacetype", 0x800);
	create_struct(0x4be480,-1,"Go_structType");
	set_name(0x4adca0,"runtime.gcMode", 0x800);
	create_struct(0x4adca0,-1,"Go__type");
	set_name(0x4c2ca0,"runtime.itab", 0x800);
	create_struct(0x4c2ca0,-1,"Go_structType");
	set_name(0x4bbca0,"sync.poolLocal", 0x800);
	create_struct(0x4bbca0,-1,"Go_structType");
	set_name(0x4b54a0,"poll.TimeoutError", 0x800);
	create_struct(0x4b54a0,-1,"Go_structType");
	set_name(0x4c5ca0,"runtime.stackScanState", 0x800);
	create_struct(0x4c5ca0,-1,"Go_structType");
	set_name(0x4b9cc0,"fmtsort.SortedMap", 0x800);
	create_struct(0x4b9cc0,-1,"Go_structType");
	set_name(0x4b6cc0,"fmt.GoStringer", 0x800);
	create_struct(0x4b6cc0,-1,"Go_interfacetype");
	set_name(0x4becc0,"runtime.textsect", 0x800);
	create_struct(0x4becc0,-1,"Go_structType");
	set_name(0x4c24c0,"reflect.Method", 0x800);
	create_struct(0x4c24c0,-1,"Go_structType");
	set_name(0x4c8cc0,"runtime.mspan", 0x800);
	create_struct(0x4c8cc0,-1,"Go_structType");
	set_name(0x4c54e0,"fmt.fmtFlags", 0x800);
	create_struct(0x4c54e0,-1,"Go_structType");
	set_name(0x4adce0,"runtime.lfstack", 0x800);
	create_struct(0x4adce0,-1,"Go__type");
	set_name(0x4ba4e0,"reflect.ptrType", 0x800);
	create_struct(0x4ba4e0,-1,"Go_structType");
	set_name(0x4bf500,"map.bucket[*reflect.structType]int", 0x800);
	create_struct(0x4bf500,-1,"Go_structType");
	set_name(0x4b7d00,"runtime.mutex", 0x800);
	create_struct(0x4b7d00,-1,"Go_structType");
	set_name(0x4bdd00,"reflect.structField", 0x800);
	create_struct(0x4bdd00,-1,"Go_structType");
	set_name(0x4c0d00,"runtime.addrRange", 0x800);
	create_struct(0x4c0d00,-1,"Go_structType");
	set_name(0x4b5500,"reflect.StructTag", 0x800);
	create_struct(0x4b5500,-1,"Go__type");
	set_name(0x4bad00,"runtime.parkInfo", 0x800);
	create_struct(0x4bad00,-1,"Go_structType");
	set_name(0x4add20,"runtime.mSpanState", 0x800);
	create_struct(0x4add20,-1,"Go__type");
	set_name(0x4bb520,"runtime.stackpoolItem", 0x800);
	create_struct(0x4bb520,-1,"Go_structType");
	set_name(0x4bbd40,"sync.poolLocalInternal", 0x800);
	create_struct(0x4bbd40,-1,"Go_structType");
	set_name(0x4bfd40,"map.bucket[uint32][]*runtime._type", 0x800);
	create_struct(0x4bfd40,-1,"Go_structType");
	set_name(0x4c3d40,"sync.Pool", 0x800);
	create_struct(0x4c3d40,-1,"Go_structType");
	set_name(0x4be540,"runtime.itabTableType", 0x800);
	create_struct(0x4be540,-1,"Go_structType");
	set_name(0x4b6d40,"fmt.Stringer", 0x800);
	create_struct(0x4b6d40,-1,"Go_interfacetype");
	set_name(0x4c7540,"runtime.sudog", 0x800);
	create_struct(0x4c7540,-1,"Go_structType");
	set_name(0x4c1540,"sync.Map", 0x800);
	create_struct(0x4c1540,-1,"Go_structType");
	set_name(0x4b9d60,"poll.ioSrvReq", 0x800);
	create_struct(0x4b9d60,-1,"Go_structType");
	set_name(0x4b5560,"runtime.arenaIdx", 0x800);
	create_struct(0x4b5560,-1,"Go__type");
	set_name(0x4add60,"runtime.nameOff", 0x800);
	create_struct(0x4add60,-1,"Go__type");
	set_name(0x4c3560,"runtime.boundsError", 0x800);
	create_struct(0x4c3560,-1,"Go_structType");
	set_name(0x4c2d80,"runtime.mOS", 0x800);
	create_struct(0x4c2d80,-1,"Go_structType");
	set_name(0x4b7d80,"runtime.note", 0x800);
	create_struct(0x4b7d80,-1,"Go_structType");
	set_name(0x4ba580,"reflect.stringHeader", 0x800);
	create_struct(0x4ba580,-1,"Go_structType");
	set_name(0x4bed80,"strconv.extFloat", 0x800);
	create_struct(0x4bed80,-1,"Go_structType");
	set_name(0x4bd580,"os.File", 0x800);
	create_struct(0x4bd580,-1,"Go_structType");
	set_name(0x4c4d80,"runtime.timer", 0x800);
	create_struct(0x4c4d80,-1,"Go_structType");
	set_name(0x4adda0,"runtime.stdFunction", 0x800);
	create_struct(0x4adda0,-1,"Go__type");
	set_name(0x4bada0,"runtime.persistentAlloc", 0x800);
	create_struct(0x4bada0,-1,"Go_structType");
	set_name(0x4c45a0,"runtime.gobuf", 0x800);
	create_struct(0x4c45a0,-1,"Go_structType");
	set_name(0x4c25a0,"reflect.layoutType", 0x800);
	create_struct(0x4c25a0,-1,"Go_structType");
	set_name(0x4c6dc0,"runtime.mcache", 0x800);
	create_struct(0x4c6dc0,-1,"Go_structType");
	set_name(0x4bf5c0,"map.bucket[int32]unsafe.Pointer", 0x800);
	create_struct(0x4bf5c0,-1,"Go_structType");
	set_name(0x4bb5c0,"runtime.stringStruct", 0x800);
	create_struct(0x4bb5c0,-1,"Go_structType");
	set_name(0x4c0dc0,"runtime.cgoTracebackArg", 0x800);
	create_struct(0x4c0dc0,-1,"Go_structType");
	set_name(0x4b6dc0,"io.Writer", 0x800);
	create_struct(0x4b6dc0,-1,"Go_interfacetype");
	set_name(0x4b55c0,"runtime.chunkIdx", 0x800);
	create_struct(0x4b55c0,-1,"Go__type");
	set_name(0x4bddc0,"reflect.structType", 0x800);
	create_struct(0x4bddc0,-1,"Go_structType");
	set_name(0x4c85c0,"cpu.x86", 0x800);
	create_struct(0x4c85c0,-1,"Go_structType");
	set_name(0x4adde0,"runtime.stringInterfacePtr", 0x800);
	create_struct(0x4adde0,-1,"Go__type");
	set_name(0x4bbde0,"sync.readOnly", 0x800);
	create_struct(0x4bbde0,-1,"Go_structType");
	set_name(0x4c1600,"syscall.LazyProc", 0x800);
	create_struct(0x4c1600,-1,"Go_structType");
	set_name(0x4b9e00,"reflect.MapIter", 0x800);
	create_struct(0x4b9e00,-1,"Go_structType");
	set_name(0x4c5e00,"runtime.stkframe", 0x800);
	create_struct(0x4c5e00,-1,"Go_structType");
	set_name(0x4be600,"runtime.linearAlloc", 0x800);
	create_struct(0x4be600,-1,"Go_structType");
	set_name(0x4bfe00,"map.bucket[unsafe.Pointer]int32", 0x800);
	create_struct(0x4bfe00,-1,"Go_structType");
	set_name(0x4b7e00,"runtime.pcvalueCache", 0x800);
	create_struct(0x4b7e00,-1,"Go_structType");
	set_name(0x4ba620,"runtime._typePair", 0x800);
	create_struct(0x4ba620,-1,"Go_structType");
	set_name(0x4c5620,"runtime.fixalloc", 0x800);
	create_struct(0x4c5620,-1,"Go_structType");
	set_name(0x4b5620,"runtime.dlogPerM", 0x800);
	create_struct(0x4b5620,-1,"Go_structType");
	set_name(0x4ade20,"runtime.tflag", 0x800);
	create_struct(0x4ade20,-1,"Go__type");
	set_name(0x4bee40,"strconv.floatInfo", 0x800);
	create_struct(0x4bee40,-1,"Go_structType");
	set_name(0x4b6e40,"main.Updater", 0x800);
	create_struct(0x4b6e40,-1,"Go_interfacetype");
	set_name(0x4c6640,"reflectlite.rtype", 0x800);
	create_struct(0x4c6640,-1,"Go_structType");
	set_name(0x4bae40,"runtime.pollCache", 0x800);
	create_struct(0x4bae40,-1,"Go_structType");
	set_name(0x4ade60,"runtime.typeOff", 0x800);
	create_struct(0x4ade60,-1,"Go__type");
	set_name(0x4bb660,"runtime.traceAlloc", 0x800);
	create_struct(0x4bb660,-1,"Go_structType");
	set_name(0x4c2e60,"runtime.mcentral", 0x800);
	create_struct(0x4c2e60,-1,"Go_structType");
	set_name(0x4bf680,"map.bucket[int]string", 0x800);
	create_struct(0x4bf680,-1,"Go_structType");
	set_name(0x4c2680,"reflect.methodValue", 0x800);
	create_struct(0x4c2680,-1,"Go_structType");
	set_name(0x4b7e80,"sort.Interface", 0x800);
	create_struct(0x4b7e80,-1,"Go_interfacetype");
	set_name(0x4c0e80,"runtime.divMagic", 0x800);
	create_struct(0x4c0e80,-1,"Go_structType");
	set_name(0x4bde80,"runtime.Frames", 0x800);
	create_struct(0x4bde80,-1,"Go_structType");
	set_name(0x4bbe80,"syscall.DLL", 0x800);
	create_struct(0x4bbe80,-1,"Go_structType");
	set_name(0x4b5680,"runtime.errorString", 0x800);
	create_struct(0x4b5680,-1,"Go__type");
	set_name(0x4b9ea0,"reflect.ValueError", 0x800);
	create_struct(0x4b9ea0,-1,"Go_structType");
	set_name(0x4adea0,"runtime.uint16InterfacePtr", 0x800);
	create_struct(0x4adea0,-1,"Go__type");
	set_name(0x4ba6c0,"runtime.addrRanges", 0x800);
	create_struct(0x4ba6c0,-1,"Go_structType");
	set_name(0x4be6c0,"runtime.mapextra", 0x800);
	create_struct(0x4be6c0,-1,"Go_structType");
	set_name(0x4b6ec0,"runtime.stringer", 0x800);
	create_struct(0x4b6ec0,-1,"Go_interfacetype");
	set_name(0x4c46c0,"runtime.rwmutex", 0x800);
	create_struct(0x4c46c0,-1,"Go_structType");
	set_name(0x4c76c0,"runtime.pollDesc", 0x800);
	create_struct(0x4c76c0,-1,"Go_structType");
	set_name(0x4b56e0,"runtime.gsignalStack", 0x800);
	create_struct(0x4b56e0,-1,"Go_structType");
	set_name(0x4baee0,"runtime.ptabEntry", 0x800);
	create_struct(0x4baee0,-1,"Go_structType");
	set_name(0x4adee0,"runtime.uint32InterfacePtr", 0x800);
	create_struct(0x4adee0,-1,"Go__type");
	set_name(0x4b7f00,"sync.entry", 0x800);
	create_struct(0x4b7f00,-1,"Go_structType");
	set_name(0x4bef00,"sync.poolChainElt", 0x800);
	create_struct(0x4bef00,-1,"Go_structType");
	set_name(0x4bb700,"runtime.waitq", 0x800);
	create_struct(0x4bb700,-1,"Go_structType");
	set_name(0x4b3f20,"interface {}", 0x800);
	create_struct(0x4b3f20,-1,"Go_interfacetype");
	set_name(0x4bbf20,"syscall.Filetime", 0x800);
	create_struct(0x4bbf20,-1,"Go_structType");
	set_name(0x4adf20,"runtime.uint64InterfacePtr", 0x800);
	create_struct(0x4adf20,-1,"Go__type");
	set_name(0x4c0f40,"runtime.evacDst", 0x800);
	create_struct(0x4c0f40,-1,"Go_structType");
	set_name(0x4c3740,"reflect.name", 0x800);
	create_struct(0x4c3740,-1,"Go_structType");
	set_name(0x4bdf40,"runtime.ancestorInfo", 0x800);
	create_struct(0x4bdf40,-1,"Go_structType");
	set_name(0x4b5740,"runtime.notInHeap", 0x800);
	create_struct(0x4b5740,-1,"Go_structType");
	set_name(0x4c6f40,"runtime.pageAlloc", 0x800);
	create_struct(0x4c6f40,-1,"Go_structType");
	set_name(0x4b6f40,"syscall.Sockaddr", 0x800);
	create_struct(0x4b6f40,-1,"Go_interfacetype");
	set_name(0x4c2f40,"runtime.net_op", 0x800);
	create_struct(0x4c2f40,-1,"Go_structType");
	set_name(0x4bf740,"map.bucket[interface {}]*sync.entry", 0x800);
	create_struct(0x4bf740,-1,"Go_structType");
	set_name(0x4b9f40,"reflect.bitVector", 0x800);
	create_struct(0x4b9f40,-1,"Go_structType");
	set_name(0x4c2760,"reflect.uncommonType", 0x800);
	create_struct(0x4c2760,-1,"Go_structType");
	set_name(0x4cc760,"runtime.mstats", 0x800);
	create_struct(0x4cc760,-1,"Go_structType");
	set_name(0x4cdf60,"runtime.m", 0x800);
	create_struct(0x4cdf60,-1,"Go_structType");
	set_name(0x4c5f60,"runtime.systeminfo", 0x800);
	create_struct(0x4c5f60,-1,"Go_structType");
	set_name(0x4c5760,"runtime.hmap", 0x800);
	create_struct(0x4c5760,-1,"Go_structType");
	set_name(0x4ba760,"runtime.bitvector", 0x800);
	create_struct(0x4ba760,-1,"Go_structType");
	set_name(0x4adf60,"sys.Uintreg", 0x800);
	create_struct(0x4adf60,-1,"Go__type");
	set_name(0x4be780,"runtime.modulehash", 0x800);
	create_struct(0x4be780,-1,"Go_structType");
	set_name(0x4cbf80,"runtime.mheap", 0x800);
	create_struct(0x4cbf80,-1,"Go_structType");
	set_name(0x4b7f80,"atomic.Value", 0x800);
	create_struct(0x4b7f80,-1,"Go_structType");
	set_name(0x4b3f80,"reflect.ChanDir", 0x800);
	create_struct(0x4b3f80,-1,"Go__type");
	set_name(0x4baf80,"runtime.ptrtype", 0x800);
	create_struct(0x4baf80,-1,"Go_structType");
	set_name(0x4b57a0,"runtime.plainError", 0x800);
	create_struct(0x4b57a0,-1,"Go__type");
	set_name(0x4adfa0,"string", 0x800);
	create_struct(0x4adfa0,-1,"Go__type");
	set_name(0x4bb7a0,"runtime.workbuf", 0x800);
	create_struct(0x4bb7a0,-1,"Go_structType");
	set_name(0x4befc0,"syscall.DLLError", 0x800);
	create_struct(0x4befc0,-1,"Go_structType");
	set_name(0x4bbfc0,"syscall.RawSockaddr", 0x800);
	create_struct(0x4bbfc0,-1,"Go_structType");
	set_name(0x4c67c0,"reflect.rtype", 0x800);
	create_struct(0x4c67c0,-1,"Go_structType");
	set_name(0x4adfe0,"syscall.Handle", 0x800);
	create_struct(0x4adfe0,-1,"Go__type");
	set_name(0x4c47e0,"syscall.WSAData", 0x800);
	create_struct(0x4c47e0,-1,"Go_structType");
	set_name(0x4b3fe0,"reflect.Kind", 0x800);
	create_struct(0x4b3fe0,-1,"Go__type");
	set_name(0x4c7fe0,"poll.FD", 0x800);
	create_struct(0x4c7fe0,-1,"Go_structType");
	set_name(0x4b9fe0,"reflect.fieldScan", 0x800);
	create_struct(0x4b9fe0,-1,"Go_structType");
	set_name(0x4b3620,"[8]runtime._typePair", 0x800);
	create_struct(0x4b3620,-1,"Go_arraytype");
	set_name(0x4b3440,"[8]bool", 0x800);
	create_struct(0x4b3440,-1,"Go_arraytype");
	set_name(0x4b35c0,"[8]interface {}", 0x800);
	create_struct(0x4b35c0,-1,"Go_arraytype");
	set_name(0x4b3680,"[8]runtime.typeOff", 0x800);
	create_struct(0x4b3680,-1,"Go_arraytype");
	set_name(0x4b3500,"[8]int32", 0x800);
	create_struct(0x4b3500,-1,"Go_arraytype");
	set_name(0x4b32c0,"[8]*runtime._type", 0x800);
	create_struct(0x4b32c0,-1,"Go_arraytype");
	set_name(0x4b34a0,"[8]int", 0x800);
	create_struct(0x4b34a0,-1,"Go_arraytype");
	set_name(0x4b36e0,"[8]string", 0x800);
	create_struct(0x4b36e0,-1,"Go_arraytype");
	set_name(0x4b3320,"[8]*sync.entry", 0x800);
	create_struct(0x4b3320,-1,"Go_arraytype");
	set_name(0x4b3740,"[8]struct {}", 0x800);
	create_struct(0x4b3740,-1,"Go_arraytype");
	set_name(0x4b3560,"[8]int64", 0x800);
	create_struct(0x4b3560,-1,"Go_arraytype");
	set_name(0x4b3260,"[8]*reflect.structType", 0x800);
	create_struct(0x4b3260,-1,"Go_arraytype");
	set_name(0x4b3380,"[8]*unicode.RangeTable", 0x800);
	create_struct(0x4b3380,-1,"Go_arraytype");
	set_name(0x4b38c0,"[8]unsafe.Pointer", 0x800);
	create_struct(0x4b38c0,-1,"Go_arraytype");
	set_name(0x4b3800,"[8]uint32", 0x800);
	create_struct(0x4b3800,-1,"Go_arraytype");
	set_name(0x4b3860,"[8]uint64", 0x800);
	create_struct(0x4b3860,-1,"Go_arraytype");
	set_name(0x4b33e0,"[8][]*runtime._type", 0x800);
	create_struct(0x4b33e0,-1,"Go_arraytype");
	set_name(0x4b37a0,"[8]time.abbr", 0x800);
	create_struct(0x4b37a0,-1,"Go_arraytype");
	set_name(0x4b9050,"struct { root runtime.semaRoot; pad [40]uint8 }.root", 0x800);
	create_struct(0x4b9050,-1,"Go_structField");
	set_name(0x4b9068,"struct { root runtime.semaRoot; pad [40]uint8 }.pad", 0x800);
	create_struct(0x4b9068,-1,"Go_structField");
	set_name(0x4c0390,"struct { lock runtime.mutex; next int32; m map[int32]unsafe.Pointer; minv map[unsafe.Pointer]int32 }.lock", 0x800);
	create_struct(0x4c0390,-1,"Go_structField");
	set_name(0x4c03a8,"struct { lock runtime.mutex; next int32; m map[int32]unsafe.Pointer; minv map[unsafe.Pointer]int32 }.next", 0x800);
	create_struct(0x4c03a8,-1,"Go_structField");
	set_name(0x4c03c0,"struct { lock runtime.mutex; next int32; m map[int32]unsafe.Pointer; minv map[unsafe.Pointer]int32 }.m", 0x800);
	create_struct(0x4c03c0,-1,"Go_structField");
	set_name(0x4c03d8,"struct { lock runtime.mutex; next int32; m map[int32]unsafe.Pointer; minv map[unsafe.Pointer]int32 }.minv", 0x800);
	create_struct(0x4c03d8,-1,"Go_structField");
	set_name(0x4bd710,"struct { lpFileName *uint16; hFile uintptr; flags uint32 }.lpFileName", 0x800);
	create_struct(0x4bd710,-1,"Go_structField");
	set_name(0x4bd728,"struct { lpFileName *uint16; hFile uintptr; flags uint32 }.hFile", 0x800);
	create_struct(0x4bd728,-1,"Go_structField");
	set_name(0x4bd740,"struct { lpFileName *uint16; hFile uintptr; flags uint32 }.flags", 0x800);
	create_struct(0x4bd740,-1,"Go_structField");
	set_name(0x4b8ad0,"struct { base uintptr; bound uintptr }.base", 0x800);
	create_struct(0x4b8ad0,-1,"Go_structField");
	set_name(0x4b8ae8,"struct { base uintptr; bound uintptr }.bound", 0x800);
	create_struct(0x4b8ae8,-1,"Go_structField");
	set_name(0x4c8fb0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.lock", 0x800);
	create_struct(0x4c8fb0,-1,"Go_structField");
	set_name(0x4c8fc8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.lockOwner", 0x800);
	create_struct(0x4c8fc8,-1,"Go_structField");
	set_name(0x4c8fe0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.enabled", 0x800);
	create_struct(0x4c8fe0,-1,"Go_structField");
	set_name(0x4c8ff8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.shutdown", 0x800);
	create_struct(0x4c8ff8,-1,"Go_structField");
	set_name(0x4c9010,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.headerWritten", 0x800);
	create_struct(0x4c9010,-1,"Go_structField");
	set_name(0x4c9028,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.footerWritten", 0x800);
	create_struct(0x4c9028,-1,"Go_structField");
	set_name(0x4c9040,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.shutdownSema", 0x800);
	create_struct(0x4c9040,-1,"Go_structField");
	set_name(0x4c9058,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.seqStart", 0x800);
	create_struct(0x4c9058,-1,"Go_structField");
	set_name(0x4c9070,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.ticksStart", 0x800);
	create_struct(0x4c9070,-1,"Go_structField");
	set_name(0x4c9088,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.ticksEnd", 0x800);
	create_struct(0x4c9088,-1,"Go_structField");
	set_name(0x4c90a0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.timeStart", 0x800);
	create_struct(0x4c90a0,-1,"Go_structField");
	set_name(0x4c90b8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.timeEnd", 0x800);
	create_struct(0x4c90b8,-1,"Go_structField");
	set_name(0x4c90d0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.seqGC", 0x800);
	create_struct(0x4c90d0,-1,"Go_structField");
	set_name(0x4c90e8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.reading", 0x800);
	create_struct(0x4c90e8,-1,"Go_structField");
	set_name(0x4c9100,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.empty", 0x800);
	create_struct(0x4c9100,-1,"Go_structField");
	set_name(0x4c9118,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.fullHead", 0x800);
	create_struct(0x4c9118,-1,"Go_structField");
	set_name(0x4c9130,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.fullTail", 0x800);
	create_struct(0x4c9130,-1,"Go_structField");
	set_name(0x4c9148,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.reader", 0x800);
	create_struct(0x4c9148,-1,"Go_structField");
	set_name(0x4c9160,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.stackTab", 0x800);
	create_struct(0x4c9160,-1,"Go_structField");
	set_name(0x4c9178,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.stringsLock", 0x800);
	create_struct(0x4c9178,-1,"Go_structField");
	set_name(0x4c9190,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.strings", 0x800);
	create_struct(0x4c9190,-1,"Go_structField");
	set_name(0x4c91a8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.stringSeq", 0x800);
	create_struct(0x4c91a8,-1,"Go_structField");
	set_name(0x4c91c0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.markWorkerLabels", 0x800);
	create_struct(0x4c91c0,-1,"Go_structField");
	set_name(0x4c91d8,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.bufLock", 0x800);
	create_struct(0x4c91d8,-1,"Go_structField");
	set_name(0x4c91f0,"struct { lock runtime.mutex; lockOwner *runtime.g; enabled bool; shutdown bool; headerWritten bool; footerWritten bool; shutdownSema uint32; seqStart uint64; ticksStart int64; ticksEnd int64; timeStart int64; timeEnd int64; seqGC uint64; reading runtime.traceBufPtr; empty runtime.traceBufPtr; fullHead runtime.traceBufPtr; fullTail runtime.traceBufPtr; reader runtime.guintptr; stackTab runtime.traceStackTable; stringsLock runtime.mutex; strings map[string]uint64; stringSeq uint64; markWorkerLabels [3]uint64; bufLock runtime.mutex; buf runtime.traceBufPtr }.buf", 0x800);
	create_struct(0x4c91f0,-1,"Go_structField");
	set_name(0x4b8fd0,"struct { runtime.mutex; runtime.persistentAlloc }.mutex", 0x800);
	create_struct(0x4b8fd0,-1,"Go_structField");
	set_name(0x4b8fe8,"struct { runtime.mutex; runtime.persistentAlloc }.persistentAlloc", 0x800);
	create_struct(0x4b8fe8,-1,"Go_structField");
	set_name(0x4b8e50,"struct { lock runtime.mutex; list runtime.gList }.lock", 0x800);
	create_struct(0x4b8e50,-1,"Go_structField");
	set_name(0x4b8e68,"struct { lock runtime.mutex; list runtime.gList }.list", 0x800);
	create_struct(0x4b8e68,-1,"Go_structField");
	set_name(0x4b8cd0,"struct { item runtime.stackpoolItem; _ [40]uint8 }.item", 0x800);
	create_struct(0x4b8cd0,-1,"Go_structField");
	set_name(0x4b8ce8,"struct { item runtime.stackpoolItem; _ [40]uint8 }._", 0x800);
	create_struct(0x4b8ce8,-1,"Go_structField");
	set_name(0x4b8b50,"struct { base uintptr; end uintptr }.base", 0x800);
	create_struct(0x4b8b50,-1,"Go_structField");
	set_name(0x4b8b68,"struct { base uintptr; end uintptr }.end", 0x800);
	create_struct(0x4b8b68,-1,"Go_structField");
	set_name(0x4bd7b0,"struct { size uint32; nmalloc uint64; nfree uint64 }.size", 0x800);
	create_struct(0x4bd7b0,-1,"Go_structField");
	set_name(0x4bd7c8,"struct { size uint32; nmalloc uint64; nfree uint64 }.nmalloc", 0x800);
	create_struct(0x4bd7c8,-1,"Go_structField");
	set_name(0x4bd7e0,"struct { size uint32; nmalloc uint64; nfree uint64 }.nfree", 0x800);
	create_struct(0x4bd7e0,-1,"Go_structField");
	set_name(0x4c0450,"struct { lock runtime.mutex; stack runtime.gList; noStack runtime.gList; n int32 }.lock", 0x800);
	create_struct(0x4c0450,-1,"Go_structField");
	set_name(0x4c0468,"struct { lock runtime.mutex; stack runtime.gList; noStack runtime.gList; n int32 }.stack", 0x800);
	create_struct(0x4c0468,-1,"Go_structField");
	set_name(0x4c0480,"struct { lock runtime.mutex; stack runtime.gList; noStack runtime.gList; n int32 }.noStack", 0x800);
	create_struct(0x4c0480,-1,"Go_structField");
	set_name(0x4c0498,"struct { lock runtime.mutex; stack runtime.gList; noStack runtime.gList; n int32 }.n", 0x800);
	create_struct(0x4c0498,-1,"Go_structField");
	set_name(0x4c02d0,"struct { lock runtime.mutex; g *runtime.g; parked bool; timer *runtime.timer }.lock", 0x800);
	create_struct(0x4c02d0,-1,"Go_structField");
	set_name(0x4c02e8,"struct { lock runtime.mutex; g *runtime.g; parked bool; timer *runtime.timer }.g", 0x800);
	create_struct(0x4c02e8,-1,"Go_structField");
	set_name(0x4c0300,"struct { lock runtime.mutex; g *runtime.g; parked bool; timer *runtime.timer }.parked", 0x800);
	create_struct(0x4c0300,-1,"Go_structField");
	set_name(0x4c0318,"struct { lock runtime.mutex; g *runtime.g; parked bool; timer *runtime.timer }.timer", 0x800);
	create_struct(0x4c0318,-1,"Go_structField");
	set_name(0x4b8c50,"struct { runtime.gList; n int32 }.gList", 0x800);
	create_struct(0x4b8c50,-1,"Go_structField");
	set_name(0x4b8c68,"struct { runtime.gList; n int32 }.n", 0x800);
	create_struct(0x4b8c68,-1,"Go_structField");
	set_name(0x4b8ed0,"struct { lock runtime.mutex; q runtime.gQueue }.lock", 0x800);
	create_struct(0x4b8ed0,-1,"Go_structField");
	set_name(0x4b8ee8,"struct { lock runtime.mutex; q runtime.gQueue }.q", 0x800);
	create_struct(0x4b8ee8,-1,"Go_structField");
	set_name(0x4b8d50,"struct { len int; buf [128]*runtime.mspan }.len", 0x800);
	create_struct(0x4b8d50,-1,"Go_structField");
	set_name(0x4b8d68,"struct { len int; buf [128]*runtime.mspan }.buf", 0x800);
	create_struct(0x4b8d68,-1,"Go_structField");
	set_name(0x4c1e10,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }.enabled", 0x800);
	create_struct(0x4c1e10,-1,"Go_structField");
	set_name(0x4c1e28,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }.pad", 0x800);
	create_struct(0x4c1e28,-1,"Go_structField");
	set_name(0x4c1e40,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }.needed", 0x800);
	create_struct(0x4c1e40,-1,"Go_structField");
	set_name(0x4c1e58,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }.cgo", 0x800);
	create_struct(0x4c1e58,-1,"Go_structField");
	set_name(0x4c1e70,"struct { enabled bool; pad [3]uint8; needed bool; cgo bool; alignme uint64 }.alignme", 0x800);
	create_struct(0x4c1e70,-1,"Go_structField");
	set_name(0x4b8bd0,"struct { cycle uint32; flushed bool }.cycle", 0x800);
	create_struct(0x4b8bd0,-1,"Go_structField");
	set_name(0x4b8be8,"struct { cycle uint32; flushed bool }.flushed", 0x800);
	create_struct(0x4b8be8,-1,"Go_structField");
	set_name(0x4bd670,"struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }.lock", 0x800);
	create_struct(0x4bd670,-1,"Go_structField");
	set_name(0x4bd688,"struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }.free", 0x800);
	create_struct(0x4bd688,-1,"Go_structField");
	set_name(0x4bd6a0,"struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }.busy", 0x800);
	create_struct(0x4bd6a0,-1,"Go_structField");
	set_name(0x4b8a50,"struct { b bool; x interface {} }.b", 0x800);
	create_struct(0x4b8a50,-1,"Go_structField");
	set_name(0x4b8a68,"struct { b bool; x interface {} }.x", 0x800);
	create_struct(0x4b8a68,-1,"Go_structField");
	set_name(0x4cc390,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.full", 0x800);
	create_struct(0x4cc390,-1,"Go_structField");
	set_name(0x4cc3a8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.empty", 0x800);
	create_struct(0x4cc3a8,-1,"Go_structField");
	set_name(0x4cc3c0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.pad0", 0x800);
	create_struct(0x4cc3c0,-1,"Go_structField");
	set_name(0x4cc3d8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.wbufSpans", 0x800);
	create_struct(0x4cc3d8,-1,"Go_structField");
	set_name(0x4cc3f0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }._", 0x800);
	create_struct(0x4cc3f0,-1,"Go_structField");
	set_name(0x4cc408,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.bytesMarked", 0x800);
	create_struct(0x4cc408,-1,"Go_structField");
	set_name(0x4cc420,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.markrootNext", 0x800);
	create_struct(0x4cc420,-1,"Go_structField");
	set_name(0x4cc438,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.markrootJobs", 0x800);
	create_struct(0x4cc438,-1,"Go_structField");
	set_name(0x4cc450,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nproc", 0x800);
	create_struct(0x4cc450,-1,"Go_structField");
	set_name(0x4cc468,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.tstart", 0x800);
	create_struct(0x4cc468,-1,"Go_structField");
	set_name(0x4cc480,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nwait", 0x800);
	create_struct(0x4cc480,-1,"Go_structField");
	set_name(0x4cc498,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.ndone", 0x800);
	create_struct(0x4cc498,-1,"Go_structField");
	set_name(0x4cc4b0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nFlushCacheRoots", 0x800);
	create_struct(0x4cc4b0,-1,"Go_structField");
	set_name(0x4cc4c8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nDataRoots", 0x800);
	create_struct(0x4cc4c8,-1,"Go_structField");
	set_name(0x4cc4e0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nBSSRoots", 0x800);
	create_struct(0x4cc4e0,-1,"Go_structField");
	set_name(0x4cc4f8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nSpanRoots", 0x800);
	create_struct(0x4cc4f8,-1,"Go_structField");
	set_name(0x4cc510,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.nStackRoots", 0x800);
	create_struct(0x4cc510,-1,"Go_structField");
	set_name(0x4cc528,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.startSema", 0x800);
	create_struct(0x4cc528,-1,"Go_structField");
	set_name(0x4cc540,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.markDoneSema", 0x800);
	create_struct(0x4cc540,-1,"Go_structField");
	set_name(0x4cc558,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.bgMarkReady", 0x800);
	create_struct(0x4cc558,-1,"Go_structField");
	set_name(0x4cc570,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.bgMarkDone", 0x800);
	create_struct(0x4cc570,-1,"Go_structField");
	set_name(0x4cc588,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.mode", 0x800);
	create_struct(0x4cc588,-1,"Go_structField");
	set_name(0x4cc5a0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.userForced", 0x800);
	create_struct(0x4cc5a0,-1,"Go_structField");
	set_name(0x4cc5b8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.totaltime", 0x800);
	create_struct(0x4cc5b8,-1,"Go_structField");
	set_name(0x4cc5d0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.initialHeapLive", 0x800);
	create_struct(0x4cc5d0,-1,"Go_structField");
	set_name(0x4cc5e8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.assistQueue", 0x800);
	create_struct(0x4cc5e8,-1,"Go_structField");
	set_name(0x4cc600,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.sweepWaiters", 0x800);
	create_struct(0x4cc600,-1,"Go_structField");
	set_name(0x4cc618,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.cycles", 0x800);
	create_struct(0x4cc618,-1,"Go_structField");
	set_name(0x4cc630,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.stwprocs", 0x800);
	create_struct(0x4cc630,-1,"Go_structField");
	set_name(0x4cc648,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.maxprocs", 0x800);
	create_struct(0x4cc648,-1,"Go_structField");
	set_name(0x4cc660,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.tSweepTerm", 0x800);
	create_struct(0x4cc660,-1,"Go_structField");
	set_name(0x4cc678,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.tMark", 0x800);
	create_struct(0x4cc678,-1,"Go_structField");
	set_name(0x4cc690,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.tMarkTerm", 0x800);
	create_struct(0x4cc690,-1,"Go_structField");
	set_name(0x4cc6a8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.tEnd", 0x800);
	create_struct(0x4cc6a8,-1,"Go_structField");
	set_name(0x4cc6c0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.pauseNS", 0x800);
	create_struct(0x4cc6c0,-1,"Go_structField");
	set_name(0x4cc6d8,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.pauseStart", 0x800);
	create_struct(0x4cc6d8,-1,"Go_structField");
	set_name(0x4cc6f0,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.heap0", 0x800);
	create_struct(0x4cc6f0,-1,"Go_structField");
	set_name(0x4cc708,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.heap1", 0x800);
	create_struct(0x4cc708,-1,"Go_structField");
	set_name(0x4cc720,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.heap2", 0x800);
	create_struct(0x4cc720,-1,"Go_structField");
	set_name(0x4cc738,"struct { full runtime.lfstack; empty runtime.lfstack; pad0 cpu.CacheLinePad; wbufSpans struct { lock runtime.mutex; free runtime.mSpanList; busy runtime.mSpanList }; _ uint32; bytesMarked uint64; markrootNext uint32; markrootJobs uint32; nproc uint32; tstart int64; nwait uint32; ndone uint32; nFlushCacheRoots int; nDataRoots int; nBSSRoots int; nSpanRoots int; nStackRoots int; startSema uint32; markDoneSema uint32; bgMarkReady runtime.note; bgMarkDone uint32; mode runtime.gcMode; userForced bool; totaltime int64; initialHeapLive uint64; assistQueue struct { lock runtime.mutex; q runtime.gQueue }; sweepWaiters struct { lock runtime.mutex; list runtime.gList }; cycles uint32; stwprocs int32; maxprocs int32; tSweepTerm int64; tMark int64; tMarkTerm int64; tEnd int64; pauseNS int64; pauseStart int64; heap0 uint64; heap1 uint64; heap2 uint64; heapGoal uint64 }.heapGoal", 0x800);
	create_struct(0x4cc738,-1,"Go_structField");
	set_name(0x4c1fd0,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }.lock", 0x800);
	create_struct(0x4c1fd0,-1,"Go_structField");
	set_name(0x4c1fe8,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }.newm", 0x800);
	create_struct(0x4c1fe8,-1,"Go_structField");
	set_name(0x4c2000,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }.waiting", 0x800);
	create_struct(0x4c2000,-1,"Go_structField");
	set_name(0x4c2018,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }.wake", 0x800);
	create_struct(0x4c2018,-1,"Go_structField");
	set_name(0x4c2030,"struct { lock runtime.mutex; newm runtime.muintptr; waiting bool; wake runtime.note; haveTemplateThread uint32 }.haveTemplateThread", 0x800);
	create_struct(0x4c2030,-1,"Go_structField");
	set_name(0x4c1ef0,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }.lock", 0x800);
	create_struct(0x4c1ef0,-1,"Go_structField");
	set_name(0x4c1f08,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }.free", 0x800);
	create_struct(0x4c1f08,-1,"Go_structField");
	set_name(0x4c1f20,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }.next", 0x800);
	create_struct(0x4c1f20,-1,"Go_structField");
	set_name(0x4c1f38,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }.current", 0x800);
	create_struct(0x4c1f38,-1,"Go_structField");
	set_name(0x4c1f50,"struct { lock runtime.mutex; free *runtime.gcBitsArena; next *runtime.gcBitsArena; current *runtime.gcBitsArena; previous *runtime.gcBitsArena }.previous", 0x800);
	create_struct(0x4c1f50,-1,"Go_structField");
	set_name(0x4bd850,"struct { user bool; runnable runtime.gQueue; n int32 }.user", 0x800);
	create_struct(0x4bd850,-1,"Go_structField");
	set_name(0x4bd868,"struct { user bool; runnable runtime.gQueue; n int32 }.runnable", 0x800);
	create_struct(0x4bd868,-1,"Go_structField");
	set_name(0x4bd880,"struct { user bool; runnable runtime.gQueue; n int32 }.n", 0x800);
	create_struct(0x4bd880,-1,"Go_structField");
	set_name(0x4c8410,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.allocfreetrace", 0x800);
	create_struct(0x4c8410,-1,"Go_structField");
	set_name(0x4c8428,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.cgocheck", 0x800);
	create_struct(0x4c8428,-1,"Go_structField");
	set_name(0x4c8440,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.clobberfree", 0x800);
	create_struct(0x4c8440,-1,"Go_structField");
	set_name(0x4c8458,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.efence", 0x800);
	create_struct(0x4c8458,-1,"Go_structField");
	set_name(0x4c8470,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.gccheckmark", 0x800);
	create_struct(0x4c8470,-1,"Go_structField");
	set_name(0x4c8488,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.gcpacertrace", 0x800);
	create_struct(0x4c8488,-1,"Go_structField");
	set_name(0x4c84a0,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.gcshrinkstackoff", 0x800);
	create_struct(0x4c84a0,-1,"Go_structField");
	set_name(0x4c84b8,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.gcstoptheworld", 0x800);
	create_struct(0x4c84b8,-1,"Go_structField");
	set_name(0x4c84d0,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.gctrace", 0x800);
	create_struct(0x4c84d0,-1,"Go_structField");
	set_name(0x4c84e8,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.invalidptr", 0x800);
	create_struct(0x4c84e8,-1,"Go_structField");
	set_name(0x4c8500,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.madvdontneed", 0x800);
	create_struct(0x4c8500,-1,"Go_structField");
	set_name(0x4c8518,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.sbrk", 0x800);
	create_struct(0x4c8518,-1,"Go_structField");
	set_name(0x4c8530,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.scavenge", 0x800);
	create_struct(0x4c8530,-1,"Go_structField");
	set_name(0x4c8548,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.scavtrace", 0x800);
	create_struct(0x4c8548,-1,"Go_structField");
	set_name(0x4c8560,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.scheddetail", 0x800);
	create_struct(0x4c8560,-1,"Go_structField");
	set_name(0x4c8578,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.schedtrace", 0x800);
	create_struct(0x4c8578,-1,"Go_structField");
	set_name(0x4c8590,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.tracebackancestors", 0x800);
	create_struct(0x4c8590,-1,"Go_structField");
	set_name(0x4c85a8,"struct { allocfreetrace int32; cgocheck int32; clobberfree int32; efence int32; gccheckmark int32; gcpacertrace int32; gcshrinkstackoff int32; gcstoptheworld int32; gctrace int32; invalidptr int32; madvdontneed int32; sbrk int32; scavenge int32; scavtrace int32; scheddetail int32; schedtrace int32; tracebackancestors int32; asyncpreemptoff int32 }.asyncpreemptoff", 0x800);
	create_struct(0x4c85a8,-1,"Go_structField");
	set_name(0x4b90d0,"struct { sync.Mutex; m sync.Map }.Mutex", 0x800);
	create_struct(0x4b90d0,-1,"Go_structField");
	set_name(0x4b90e8,"struct { sync.Mutex; m sync.Map }.m", 0x800);
	create_struct(0x4b90e8,-1,"Go_structField");
	set_name(0x4c4950,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.note", 0x800);
	create_struct(0x4c4950,-1,"Go_structField");
	set_name(0x4c4968,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.mask", 0x800);
	create_struct(0x4c4968,-1,"Go_structField");
	set_name(0x4c4980,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.wanted", 0x800);
	create_struct(0x4c4980,-1,"Go_structField");
	set_name(0x4c4998,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.ignored", 0x800);
	create_struct(0x4c4998,-1,"Go_structField");
	set_name(0x4c49b0,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.recv", 0x800);
	create_struct(0x4c49b0,-1,"Go_structField");
	set_name(0x4c49c8,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.state", 0x800);
	create_struct(0x4c49c8,-1,"Go_structField");
	set_name(0x4c49e0,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.delivering", 0x800);
	create_struct(0x4c49e0,-1,"Go_structField");
	set_name(0x4c49f8,"struct { note runtime.note; mask [3]uint32; wanted [3]uint32; ignored [3]uint32; recv [3]uint32; state uint32; delivering uint32; inuse bool }.inuse", 0x800);
	create_struct(0x4c49f8,-1,"Go_structField");
	set_name(0x4b8f50,"struct { mcentral runtime.mcentral; pad [8]uint8 }.mcentral", 0x800);
	create_struct(0x4b8f50,-1,"Go_structField");
	set_name(0x4b8f68,"struct { mcentral runtime.mcentral; pad [8]uint8 }.pad", 0x800);
	create_struct(0x4b8f68,-1,"Go_structField");
	set_name(0x4b8dd0,"struct { lock runtime.mutex; free [35]runtime.mSpanList }.lock", 0x800);
	create_struct(0x4b8dd0,-1,"Go_structField");
	set_name(0x4b8de8,"struct { lock runtime.mutex; free [35]runtime.mSpanList }.free", 0x800);
	create_struct(0x4b8de8,-1,"Go_structField");
	set_name(0x4b7860,"errors.errorString.s", 0x800);
	create_struct(0x4b7860,-1,"Go_structField");
	set_name(0x4ba860,"runtime.dbgVar.name", 0x800);
	create_struct(0x4ba860,-1,"Go_structField");
	set_name(0x4ba878,"runtime.dbgVar.value", 0x800);
	create_struct(0x4ba878,-1,"Go_structField");
	set_name(0x4c1060,"runtime.overlapped.internal", 0x800);
	create_struct(0x4c1060,-1,"Go_structField");
	set_name(0x4c1078,"runtime.overlapped.internalhigh", 0x800);
	create_struct(0x4c1078,-1,"Go_structField");
	set_name(0x4c1090,"runtime.overlapped.anon0", 0x800);
	create_struct(0x4c1090,-1,"Go_structField");
	set_name(0x4c10a8,"runtime.overlapped.hevent", 0x800);
	create_struct(0x4c10a8,-1,"Go_structField");
	set_name(0x4bf850,"map.bucket[runtime._typePair]struct {}.topbits", 0x800);
	create_struct(0x4bf850,-1,"Go_structField");
	set_name(0x4bf868,"map.bucket[runtime._typePair]struct {}.keys", 0x800);
	create_struct(0x4bf868,-1,"Go_structField");
	set_name(0x4bf880,"map.bucket[runtime._typePair]struct {}.elems", 0x800);
	create_struct(0x4bf880,-1,"Go_structField");
	set_name(0x4bf898,"map.bucket[runtime._typePair]struct {}.overflow", 0x800);
	create_struct(0x4bf898,-1,"Go_structField");
	set_name(0x4cb860,"runtime.moduledata.pclntable", 0x800);
	create_struct(0x4cb860,-1,"Go_structField");
	set_name(0x4cb878,"runtime.moduledata.ftab", 0x800);
	create_struct(0x4cb878,-1,"Go_structField");
	set_name(0x4cb890,"runtime.moduledata.filetab", 0x800);
	create_struct(0x4cb890,-1,"Go_structField");
	set_name(0x4cb8a8,"runtime.moduledata.findfunctab", 0x800);
	create_struct(0x4cb8a8,-1,"Go_structField");
	set_name(0x4cb8c0,"runtime.moduledata.minpc", 0x800);
	create_struct(0x4cb8c0,-1,"Go_structField");
	set_name(0x4cb8d8,"runtime.moduledata.maxpc", 0x800);
	create_struct(0x4cb8d8,-1,"Go_structField");
	set_name(0x4cb8f0,"runtime.moduledata.text", 0x800);
	create_struct(0x4cb8f0,-1,"Go_structField");
	set_name(0x4cb908,"runtime.moduledata.etext", 0x800);
	create_struct(0x4cb908,-1,"Go_structField");
	set_name(0x4cb920,"runtime.moduledata.noptrdata", 0x800);
	create_struct(0x4cb920,-1,"Go_structField");
	set_name(0x4cb938,"runtime.moduledata.enoptrdata", 0x800);
	create_struct(0x4cb938,-1,"Go_structField");
	set_name(0x4cb950,"runtime.moduledata.data", 0x800);
	create_struct(0x4cb950,-1,"Go_structField");
	set_name(0x4cb968,"runtime.moduledata.edata", 0x800);
	create_struct(0x4cb968,-1,"Go_structField");
	set_name(0x4cb980,"runtime.moduledata.bss", 0x800);
	create_struct(0x4cb980,-1,"Go_structField");
	set_name(0x4cb998,"runtime.moduledata.ebss", 0x800);
	create_struct(0x4cb998,-1,"Go_structField");
	set_name(0x4cb9b0,"runtime.moduledata.noptrbss", 0x800);
	create_struct(0x4cb9b0,-1,"Go_structField");
	set_name(0x4cb9c8,"runtime.moduledata.enoptrbss", 0x800);
	create_struct(0x4cb9c8,-1,"Go_structField");
	set_name(0x4cb9e0,"runtime.moduledata.end", 0x800);
	create_struct(0x4cb9e0,-1,"Go_structField");
	set_name(0x4cb9f8,"runtime.moduledata.gcdata", 0x800);
	create_struct(0x4cb9f8,-1,"Go_structField");
	set_name(0x4cba10,"runtime.moduledata.gcbss", 0x800);
	create_struct(0x4cba10,-1,"Go_structField");
	set_name(0x4cba28,"runtime.moduledata.types", 0x800);
	create_struct(0x4cba28,-1,"Go_structField");
	set_name(0x4cba40,"runtime.moduledata.etypes", 0x800);
	create_struct(0x4cba40,-1,"Go_structField");
	set_name(0x4cba58,"runtime.moduledata.textsectmap", 0x800);
	create_struct(0x4cba58,-1,"Go_structField");
	set_name(0x4cba70,"runtime.moduledata.typelinks", 0x800);
	create_struct(0x4cba70,-1,"Go_structField");
	set_name(0x4cba88,"runtime.moduledata.itablinks", 0x800);
	create_struct(0x4cba88,-1,"Go_structField");
	set_name(0x4cbaa0,"runtime.moduledata.ptab", 0x800);
	create_struct(0x4cbaa0,-1,"Go_structField");
	set_name(0x4cbab8,"runtime.moduledata.pluginpath", 0x800);
	create_struct(0x4cbab8,-1,"Go_structField");
	set_name(0x4cbad0,"runtime.moduledata.pkghashes", 0x800);
	create_struct(0x4cbad0,-1,"Go_structField");
	set_name(0x4cbae8,"runtime.moduledata.modulename", 0x800);
	create_struct(0x4cbae8,-1,"Go_structField");
	set_name(0x4cbb00,"runtime.moduledata.modulehashes", 0x800);
	create_struct(0x4cbb00,-1,"Go_structField");
	set_name(0x4cbb18,"runtime.moduledata.hasmain", 0x800);
	create_struct(0x4cbb18,-1,"Go_structField");
	set_name(0x4cbb30,"runtime.moduledata.gcdatamask", 0x800);
	create_struct(0x4cbb30,-1,"Go_structField");
	set_name(0x4cbb48,"runtime.moduledata.gcbssmask", 0x800);
	create_struct(0x4cbb48,-1,"Go_structField");
	set_name(0x4cbb60,"runtime.moduledata.typemap", 0x800);
	create_struct(0x4cbb60,-1,"Go_structField");
	set_name(0x4cbb78,"runtime.moduledata.bad", 0x800);
	create_struct(0x4cbb78,-1,"Go_structField");
	set_name(0x4cbb90,"runtime.moduledata.next", 0x800);
	create_struct(0x4cbb90,-1,"Go_structField");
	set_name(0x4be060,"runtime.arenaHint.addr", 0x800);
	create_struct(0x4be060,-1,"Go_structField");
	set_name(0x4be078,"runtime.arenaHint.down", 0x800);
	create_struct(0x4be078,-1,"Go_structField");
	set_name(0x4be090,"runtime.arenaHint.next", 0x800);
	create_struct(0x4be090,-1,"Go_structField");
	set_name(0x4c3080,"runtime.specialfinalizer.special", 0x800);
	create_struct(0x4c3080,-1,"Go_structField");
	set_name(0x4c3098,"runtime.specialfinalizer.fn", 0x800);
	create_struct(0x4c3098,-1,"Go_structField");
	set_name(0x4c30b0,"runtime.specialfinalizer.nret", 0x800);
	create_struct(0x4c30b0,-1,"Go_structField");
	set_name(0x4c30c8,"runtime.specialfinalizer.fint", 0x800);
	create_struct(0x4c30c8,-1,"Go_structField");
	set_name(0x4c30e0,"runtime.specialfinalizer.ot", 0x800);
	create_struct(0x4c30e0,-1,"Go_structField");
	set_name(0x4bb080,"runtime.randomOrder.count", 0x800);
	create_struct(0x4bb080,-1,"Go_structField");
	set_name(0x4bb098,"runtime.randomOrder.coprimes", 0x800);
	create_struct(0x4bb098,-1,"Go_structField");
	set_name(0x4be8a0,"runtime.notInHeapSlice.array", 0x800);
	create_struct(0x4be8a0,-1,"Go_structField");
	set_name(0x4be8b8,"runtime.notInHeapSlice.len", 0x800);
	create_struct(0x4be8b8,-1,"Go_structField");
	set_name(0x4be8d0,"runtime.notInHeapSlice.cap", 0x800);
	create_struct(0x4be8d0,-1,"Go_structField");
	set_name(0x4c28a0,"runtime.finalizer.fn", 0x800);
	create_struct(0x4c28a0,-1,"Go_structField");
	set_name(0x4c28b8,"runtime.finalizer.arg", 0x800);
	create_struct(0x4c28b8,-1,"Go_structField");
	set_name(0x4c28d0,"runtime.finalizer.nret", 0x800);
	create_struct(0x4c28d0,-1,"Go_structField");
	set_name(0x4c28e8,"runtime.finalizer.fint", 0x800);
	create_struct(0x4c28e8,-1,"Go_structField");
	set_name(0x4c2900,"runtime.finalizer.ot", 0x800);
	create_struct(0x4c2900,-1,"Go_structField");
	set_name(0x4c38a0,"runtime.markBits.bytep", 0x800);
	create_struct(0x4c38a0,-1,"Go_structField");
	set_name(0x4c38b8,"runtime.markBits.mask", 0x800);
	create_struct(0x4c38b8,-1,"Go_structField");
	set_name(0x4c38d0,"runtime.markBits.index", 0x800);
	create_struct(0x4c38d0,-1,"Go_structField");
	set_name(0x4bb8a0,"runtime.workbufhdr.node", 0x800);
	create_struct(0x4bb8a0,-1,"Go_structField");
	set_name(0x4bb8b8,"runtime.workbufhdr.nobj", 0x800);
	create_struct(0x4bb8b8,-1,"Go_structField");
	set_name(0x4cd0a0,"runtime.g.stack", 0x800);
	create_struct(0x4cd0a0,-1,"Go_structField");
	set_name(0x4cd0b8,"runtime.g.stackguard0", 0x800);
	create_struct(0x4cd0b8,-1,"Go_structField");
	set_name(0x4cd0d0,"runtime.g.stackguard1", 0x800);
	create_struct(0x4cd0d0,-1,"Go_structField");
	set_name(0x4cd0e8,"runtime.g._panic", 0x800);
	create_struct(0x4cd0e8,-1,"Go_structField");
	set_name(0x4cd100,"runtime.g._defer", 0x800);
	create_struct(0x4cd100,-1,"Go_structField");
	set_name(0x4cd118,"runtime.g.m", 0x800);
	create_struct(0x4cd118,-1,"Go_structField");
	set_name(0x4cd130,"runtime.g.sched", 0x800);
	create_struct(0x4cd130,-1,"Go_structField");
	set_name(0x4cd148,"runtime.g.syscallsp", 0x800);
	create_struct(0x4cd148,-1,"Go_structField");
	set_name(0x4cd160,"runtime.g.syscallpc", 0x800);
	create_struct(0x4cd160,-1,"Go_structField");
	set_name(0x4cd178,"runtime.g.stktopsp", 0x800);
	create_struct(0x4cd178,-1,"Go_structField");
	set_name(0x4cd190,"runtime.g.param", 0x800);
	create_struct(0x4cd190,-1,"Go_structField");
	set_name(0x4cd1a8,"runtime.g.atomicstatus", 0x800);
	create_struct(0x4cd1a8,-1,"Go_structField");
	set_name(0x4cd1c0,"runtime.g.stackLock", 0x800);
	create_struct(0x4cd1c0,-1,"Go_structField");
	set_name(0x4cd1d8,"runtime.g.goid", 0x800);
	create_struct(0x4cd1d8,-1,"Go_structField");
	set_name(0x4cd1f0,"runtime.g.schedlink", 0x800);
	create_struct(0x4cd1f0,-1,"Go_structField");
	set_name(0x4cd208,"runtime.g.waitsince", 0x800);
	create_struct(0x4cd208,-1,"Go_structField");
	set_name(0x4cd220,"runtime.g.waitreason", 0x800);
	create_struct(0x4cd220,-1,"Go_structField");
	set_name(0x4cd238,"runtime.g.preempt", 0x800);
	create_struct(0x4cd238,-1,"Go_structField");
	set_name(0x4cd250,"runtime.g.preemptStop", 0x800);
	create_struct(0x4cd250,-1,"Go_structField");
	set_name(0x4cd268,"runtime.g.preemptShrink", 0x800);
	create_struct(0x4cd268,-1,"Go_structField");
	set_name(0x4cd280,"runtime.g.asyncSafePoint", 0x800);
	create_struct(0x4cd280,-1,"Go_structField");
	set_name(0x4cd298,"runtime.g.paniconfault", 0x800);
	create_struct(0x4cd298,-1,"Go_structField");
	set_name(0x4cd2b0,"runtime.g.gcscandone", 0x800);
	create_struct(0x4cd2b0,-1,"Go_structField");
	set_name(0x4cd2c8,"runtime.g.throwsplit", 0x800);
	create_struct(0x4cd2c8,-1,"Go_structField");
	set_name(0x4cd2e0,"runtime.g.activeStackChans", 0x800);
	create_struct(0x4cd2e0,-1,"Go_structField");
	set_name(0x4cd2f8,"runtime.g.raceignore", 0x800);
	create_struct(0x4cd2f8,-1,"Go_structField");
	set_name(0x4cd310,"runtime.g.sysblocktraced", 0x800);
	create_struct(0x4cd310,-1,"Go_structField");
	set_name(0x4cd328,"runtime.g.sysexitticks", 0x800);
	create_struct(0x4cd328,-1,"Go_structField");
	set_name(0x4cd340,"runtime.g.traceseq", 0x800);
	create_struct(0x4cd340,-1,"Go_structField");
	set_name(0x4cd358,"runtime.g.tracelastp", 0x800);
	create_struct(0x4cd358,-1,"Go_structField");
	set_name(0x4cd370,"runtime.g.lockedm", 0x800);
	create_struct(0x4cd370,-1,"Go_structField");
	set_name(0x4cd388,"runtime.g.sig", 0x800);
	create_struct(0x4cd388,-1,"Go_structField");
	set_name(0x4cd3a0,"runtime.g.writebuf", 0x800);
	create_struct(0x4cd3a0,-1,"Go_structField");
	set_name(0x4cd3b8,"runtime.g.sigcode0", 0x800);
	create_struct(0x4cd3b8,-1,"Go_structField");
	set_name(0x4cd3d0,"runtime.g.sigcode1", 0x800);
	create_struct(0x4cd3d0,-1,"Go_structField");
	set_name(0x4cd3e8,"runtime.g.sigpc", 0x800);
	create_struct(0x4cd3e8,-1,"Go_structField");
	set_name(0x4cd400,"runtime.g.gopc", 0x800);
	create_struct(0x4cd400,-1,"Go_structField");
	set_name(0x4cd418,"runtime.g.ancestors", 0x800);
	create_struct(0x4cd418,-1,"Go_structField");
	set_name(0x4cd430,"runtime.g.startpc", 0x800);
	create_struct(0x4cd430,-1,"Go_structField");
	set_name(0x4cd448,"runtime.g.racectx", 0x800);
	create_struct(0x4cd448,-1,"Go_structField");
	set_name(0x4cd460,"runtime.g.waiting", 0x800);
	create_struct(0x4cd460,-1,"Go_structField");
	set_name(0x4cd478,"runtime.g.cgoCtxt", 0x800);
	create_struct(0x4cd478,-1,"Go_structField");
	set_name(0x4cd490,"runtime.g.labels", 0x800);
	create_struct(0x4cd490,-1,"Go_structField");
	set_name(0x4cd4a8,"runtime.g.timer", 0x800);
	create_struct(0x4cd4a8,-1,"Go_structField");
	set_name(0x4cd4c0,"runtime.g.selectDone", 0x800);
	create_struct(0x4cd4c0,-1,"Go_structField");
	set_name(0x4cd4d8,"runtime.g.gcAssistBytes", 0x800);
	create_struct(0x4cd4d8,-1,"Go_structField");
	set_name(0x4c20c0,"main.custom.name", 0x800);
	create_struct(0x4c20c0,-1,"Go_structField");
	set_name(0x4c20d8,"main.custom.qty", 0x800);
	create_struct(0x4c20d8,-1,"Go_structField");
	set_name(0x4c20f0,"main.custom.legit", 0x800);
	create_struct(0x4c20f0,-1,"Go_structField");
	set_name(0x4c2108,"main.custom.toys", 0x800);
	create_struct(0x4c2108,-1,"Go_structField");
	set_name(0x4bc0c0,"syscall.RawSockaddrAny.Addr", 0x800);
	create_struct(0x4bc0c0,-1,"Go_structField");
	set_name(0x4bc0d8,"syscall.RawSockaddrAny.Pad", 0x800);
	create_struct(0x4bc0d8,-1,"Go_structField");
	set_name(0x4bf0e0,"syscall.LazyDLL.mu", 0x800);
	create_struct(0x4bf0e0,-1,"Go_structField");
	set_name(0x4bf0f8,"syscall.LazyDLL.dll", 0x800);
	create_struct(0x4bf0f8,-1,"Go_structField");
	set_name(0x4bf110,"syscall.LazyDLL.Name", 0x800);
	create_struct(0x4bf110,-1,"Go_structField");
	set_name(0x4ba0e0,"reflect.funcTypeFixed128.funcType", 0x800);
	create_struct(0x4ba0e0,-1,"Go_structField");
	set_name(0x4ba0f8,"reflect.funcTypeFixed128.args", 0x800);
	create_struct(0x4ba0f8,-1,"Go_structField");
	set_name(0x4b78e0,"cpu.CacheLinePad._", 0x800);
	create_struct(0x4b78e0,-1,"Go_structField");
	set_name(0x4ba900,"runtime.eface._type", 0x800);
	create_struct(0x4ba900,-1,"Go_structField");
	set_name(0x4ba918,"runtime.eface.data", 0x800);
	create_struct(0x4ba918,-1,"Go_structField");
	set_name(0x4c5900,"runtime.maptype.typ", 0x800);
	create_struct(0x4c5900,-1,"Go_structField");
	set_name(0x4c5918,"runtime.maptype.key", 0x800);
	create_struct(0x4c5918,-1,"Go_structField");
	set_name(0x4c5930,"runtime.maptype.elem", 0x800);
	create_struct(0x4c5930,-1,"Go_structField");
	set_name(0x4c5948,"runtime.maptype.bucket", 0x800);
	create_struct(0x4c5948,-1,"Go_structField");
	set_name(0x4c5960,"runtime.maptype.hasher", 0x800);
	create_struct(0x4c5960,-1,"Go_structField");
	set_name(0x4c5978,"runtime.maptype.keysize", 0x800);
	create_struct(0x4c5978,-1,"Go_structField");
	set_name(0x4c5990,"runtime.maptype.elemsize", 0x800);
	create_struct(0x4c5990,-1,"Go_structField");
	set_name(0x4c59a8,"runtime.maptype.bucketsize", 0x800);
	create_struct(0x4c59a8,-1,"Go_structField");
	set_name(0x4c59c0,"runtime.maptype.flags", 0x800);
	create_struct(0x4c59c0,-1,"Go_structField");
	set_name(0x4bb120,"runtime.stack.lo", 0x800);
	create_struct(0x4bb120,-1,"Go_structField");
	set_name(0x4bb138,"runtime.stack.hi", 0x800);
	create_struct(0x4bb138,-1,"Go_structField");
	set_name(0x4c1120,"runtime.overlappedEntry.key", 0x800);
	create_struct(0x4c1120,-1,"Go_structField");
	set_name(0x4c1138,"runtime.overlappedEntry.op", 0x800);
	create_struct(0x4c1138,-1,"Go_structField");
	set_name(0x4c1150,"runtime.overlappedEntry.internal", 0x800);
	create_struct(0x4c1150,-1,"Go_structField");
	set_name(0x4c1168,"runtime.overlappedEntry.qty", 0x800);
	create_struct(0x4c1168,-1,"Go_structField");
	set_name(0x4be120,"runtime.callbacks.lock", 0x800);
	create_struct(0x4be120,-1,"Go_structField");
	set_name(0x4be138,"runtime.callbacks.ctxt", 0x800);
	create_struct(0x4be138,-1,"Go_structField");
	set_name(0x4be150,"runtime.callbacks.n", 0x800);
	create_struct(0x4be150,-1,"Go_structField");
	set_name(0x4c6120,"syscall.Win32finddata.FileAttributes", 0x800);
	create_struct(0x4c6120,-1,"Go_structField");
	set_name(0x4c6138,"syscall.Win32finddata.CreationTime", 0x800);
	create_struct(0x4c6138,-1,"Go_structField");
	set_name(0x4c6150,"syscall.Win32finddata.LastAccessTime", 0x800);
	create_struct(0x4c6150,-1,"Go_structField");
	set_name(0x4c6168,"syscall.Win32finddata.LastWriteTime", 0x800);
	create_struct(0x4c6168,-1,"Go_structField");
	set_name(0x4c6180,"syscall.Win32finddata.FileSizeHigh", 0x800);
	create_struct(0x4c6180,-1,"Go_structField");
	set_name(0x4c6198,"syscall.Win32finddata.FileSizeLow", 0x800);
	create_struct(0x4c6198,-1,"Go_structField");
	set_name(0x4c61b0,"syscall.Win32finddata.Reserved0", 0x800);
	create_struct(0x4c61b0,-1,"Go_structField");
	set_name(0x4c61c8,"syscall.Win32finddata.Reserved1", 0x800);
	create_struct(0x4c61c8,-1,"Go_structField");
	set_name(0x4c61e0,"syscall.Win32finddata.FileName", 0x800);
	create_struct(0x4c61e0,-1,"Go_structField");
	set_name(0x4c61f8,"syscall.Win32finddata.AlternateFileName", 0x800);
	create_struct(0x4c61f8,-1,"Go_structField");
	set_name(0x4bf910,"map.bucket[runtime.typeOff]*runtime._type.topbits", 0x800);
	create_struct(0x4bf910,-1,"Go_structField");
	set_name(0x4bf928,"map.bucket[runtime.typeOff]*runtime._type.keys", 0x800);
	create_struct(0x4bf928,-1,"Go_structField");
	set_name(0x4bf940,"map.bucket[runtime.typeOff]*runtime._type.elems", 0x800);
	create_struct(0x4bf940,-1,"Go_structField");
	set_name(0x4bf958,"map.bucket[runtime.typeOff]*runtime._type.overflow", 0x800);
	create_struct(0x4bf958,-1,"Go_structField");
	set_name(0x4bb940,"strconv.leftCheat.delta", 0x800);
	create_struct(0x4bb940,-1,"Go_structField");
	set_name(0x4bb958,"strconv.leftCheat.cutoff", 0x800);
	create_struct(0x4bb958,-1,"Go_structField");
	set_name(0x4be960,"runtime.pageCache.base", 0x800);
	create_struct(0x4be960,-1,"Go_structField");
	set_name(0x4be978,"runtime.pageCache.cache", 0x800);
	create_struct(0x4be978,-1,"Go_structField");
	set_name(0x4be990,"runtime.pageCache.scav", 0x800);
	create_struct(0x4be990,-1,"Go_structField");
	set_name(0x4b7960,"poll.ioSrv.req", 0x800);
	create_struct(0x4b7960,-1,"Go_structField");
	set_name(0x4c3160,"runtime.stackObject.off", 0x800);
	create_struct(0x4c3160,-1,"Go_structField");
	set_name(0x4c3178,"runtime.stackObject.size", 0x800);
	create_struct(0x4c3178,-1,"Go_structField");
	set_name(0x4c3190,"runtime.stackObject.typ", 0x800);
	create_struct(0x4c3190,-1,"Go_structField");
	set_name(0x4c31a8,"runtime.stackObject.left", 0x800);
	create_struct(0x4c31a8,-1,"Go_structField");
	set_name(0x4c31c0,"runtime.stackObject.right", 0x800);
	create_struct(0x4c31c0,-1,"Go_structField");
	set_name(0x4bc160,"syscall.WSABuf.Len", 0x800);
	create_struct(0x4bc160,-1,"Go_structField");
	set_name(0x4bc178,"syscall.WSABuf.Buf", 0x800);
	create_struct(0x4bc178,-1,"Go_structField");
	set_name(0x4c5170,"map.hdr[interface {}]*sync.entry.count", 0x800);
	create_struct(0x4c5170,-1,"Go_structField");
	set_name(0x4c5188,"map.hdr[interface {}]*sync.entry.flags", 0x800);
	create_struct(0x4c5188,-1,"Go_structField");
	set_name(0x4c51a0,"map.hdr[interface {}]*sync.entry.B", 0x800);
	create_struct(0x4c51a0,-1,"Go_structField");
	set_name(0x4c51b8,"map.hdr[interface {}]*sync.entry.noverflow", 0x800);
	create_struct(0x4c51b8,-1,"Go_structField");
	set_name(0x4c51d0,"map.hdr[interface {}]*sync.entry.hash0", 0x800);
	create_struct(0x4c51d0,-1,"Go_structField");
	set_name(0x4c51e8,"map.hdr[interface {}]*sync.entry.buckets", 0x800);
	create_struct(0x4c51e8,-1,"Go_structField");
	set_name(0x4c5200,"map.hdr[interface {}]*sync.entry.oldbuckets", 0x800);
	create_struct(0x4c5200,-1,"Go_structField");
	set_name(0x4c5218,"map.hdr[interface {}]*sync.entry.nevacuate", 0x800);
	create_struct(0x4c5218,-1,"Go_structField");
	set_name(0x4c5230,"map.hdr[interface {}]*sync.entry.extra", 0x800);
	create_struct(0x4c5230,-1,"Go_structField");
	set_name(0x4ba180,"reflect.funcTypeFixed16.funcType", 0x800);
	create_struct(0x4ba180,-1,"Go_structField");
	set_name(0x4ba198,"reflect.funcTypeFixed16.args", 0x800);
	create_struct(0x4ba198,-1,"Go_structField");
	set_name(0x4c2980,"runtime.finblock.alllink", 0x800);
	create_struct(0x4c2980,-1,"Go_structField");
	set_name(0x4c2998,"runtime.finblock.next", 0x800);
	create_struct(0x4c2998,-1,"Go_structField");
	set_name(0x4c29b0,"runtime.finblock.cnt", 0x800);
	create_struct(0x4c29b0,-1,"Go_structField");
	set_name(0x4c29c8,"runtime.finblock._", 0x800);
	create_struct(0x4c29c8,-1,"Go_structField");
	set_name(0x4c29e0,"runtime.finblock.fin", 0x800);
	create_struct(0x4c29e0,-1,"Go_structField");
	set_name(0x4c39a0,"windows.WSAMsg.Name", 0x800);
	create_struct(0x4c39a0,-1,"Go_structField");
	set_name(0x4c39b8,"windows.WSAMsg.Namelen", 0x800);
	create_struct(0x4c39b8,-1,"Go_structField");
	set_name(0x4c39d0,"windows.WSAMsg.Buffers", 0x800);
	create_struct(0x4c39d0,-1,"Go_structField");
	set_name(0x4c39e8,"windows.WSAMsg.BufferCount", 0x800);
	create_struct(0x4c39e8,-1,"Go_structField");
	set_name(0x4c3a00,"windows.WSAMsg.Control", 0x800);
	create_struct(0x4c3a00,-1,"Go_structField");
	set_name(0x4c3a18,"windows.WSAMsg.Flags", 0x800);
	create_struct(0x4c3a18,-1,"Go_structField");
	set_name(0x4c69a0,"runtime._func.entry", 0x800);
	create_struct(0x4c69a0,-1,"Go_structField");
	set_name(0x4c69b8,"runtime._func.nameoff", 0x800);
	create_struct(0x4c69b8,-1,"Go_structField");
	set_name(0x4c69d0,"runtime._func.args", 0x800);
	create_struct(0x4c69d0,-1,"Go_structField");
	set_name(0x4c69e8,"runtime._func.deferreturn", 0x800);
	create_struct(0x4c69e8,-1,"Go_structField");
	set_name(0x4c6a00,"runtime._func.pcsp", 0x800);
	create_struct(0x4c6a00,-1,"Go_structField");
	set_name(0x4c6a18,"runtime._func.pcfile", 0x800);
	create_struct(0x4c6a18,-1,"Go_structField");
	set_name(0x4c6a30,"runtime._func.pcln", 0x800);
	create_struct(0x4c6a30,-1,"Go_structField");
	set_name(0x4c6a48,"runtime._func.npcdata", 0x800);
	create_struct(0x4c6a48,-1,"Go_structField");
	set_name(0x4c6a60,"runtime._func.funcID", 0x800);
	create_struct(0x4c6a60,-1,"Go_structField");
	set_name(0x4c6a78,"runtime._func._", 0x800);
	create_struct(0x4c6a78,-1,"Go_structField");
	set_name(0x4c6a90,"runtime._func.nfuncdata", 0x800);
	create_struct(0x4c6a90,-1,"Go_structField");
	set_name(0x4ba9a0,"runtime.functab.entry", 0x800);
	create_struct(0x4ba9a0,-1,"Go_structField");
	set_name(0x4ba9b8,"runtime.functab.funcoff", 0x800);
	create_struct(0x4ba9b8,-1,"Go_structField");
	set_name(0x4bf1a0,"syscall.Proc.Dll", 0x800);
	create_struct(0x4bf1a0,-1,"Go_structField");
	set_name(0x4bf1b8,"syscall.Proc.Name", 0x800);
	create_struct(0x4bf1b8,-1,"Go_structField");
	set_name(0x4bf1d0,"syscall.Proc.addr", 0x800);
	create_struct(0x4bf1d0,-1,"Go_structField");
	set_name(0x4c41a0,"runtime.name.bytes", 0x800);
	create_struct(0x4c41a0,-1,"Go_structField");
	set_name(0x4bb1c0,"runtime.stackObjectBuf.stackObjectBufHdr", 0x800);
	create_struct(0x4bb1c0,-1,"Go_structField");
	set_name(0x4bb1d8,"runtime.stackObjectBuf.obj", 0x800);
	create_struct(0x4bb1d8,-1,"Go_structField");
	set_name(0x4c11e0,"runtime.sysmontick.schedtick", 0x800);
	create_struct(0x4c11e0,-1,"Go_structField");
	set_name(0x4c11f8,"runtime.sysmontick.schedwhen", 0x800);
	create_struct(0x4c11f8,-1,"Go_structField");
	set_name(0x4c1210,"runtime.sysmontick.syscalltick", 0x800);
	create_struct(0x4c1210,-1,"Go_structField");
	set_name(0x4c1228,"runtime.sysmontick.syscallwhen", 0x800);
	create_struct(0x4c1228,-1,"Go_structField");
	set_name(0x4be1e0,"runtime.cgothreadstart.g", 0x800);
	create_struct(0x4be1e0,-1,"Go_structField");
	set_name(0x4be1f8,"runtime.cgothreadstart.tls", 0x800);
	create_struct(0x4be1f8,-1,"Go_structField");
	set_name(0x4be210,"runtime.cgothreadstart.fn", 0x800);
	create_struct(0x4be210,-1,"Go_structField");
	set_name(0x4bb9e0,"sync.Mutex.state", 0x800);
	create_struct(0x4bb9e0,-1,"Go_structField");
	set_name(0x4bb9f8,"sync.Mutex.sema", 0x800);
	create_struct(0x4bb9f8,-1,"Go_structField");
	set_name(0x4bf9d0,"map.bucket[string]*unicode.RangeTable.topbits", 0x800);
	create_struct(0x4bf9d0,-1,"Go_structField");
	set_name(0x4bf9e8,"map.bucket[string]*unicode.RangeTable.keys", 0x800);
	create_struct(0x4bf9e8,-1,"Go_structField");
	set_name(0x4bfa00,"map.bucket[string]*unicode.RangeTable.elems", 0x800);
	create_struct(0x4bfa00,-1,"Go_structField");
	set_name(0x4bfa18,"map.bucket[string]*unicode.RangeTable.overflow", 0x800);
	create_struct(0x4bfa18,-1,"Go_structField");
	set_name(0x4b79e0,"poll.pollDesc.runtimeCtx", 0x800);
	create_struct(0x4b79e0,-1,"Go_structField");
	set_name(0x4bc200,"time.abbr.std", 0x800);
	create_struct(0x4bc200,-1,"Go_structField");
	set_name(0x4bc218,"time.abbr.dst", 0x800);
	create_struct(0x4bc218,-1,"Go_structField");
	set_name(0x4c0220,"runtime.funcInfo._func", 0x800);
	create_struct(0x4c0220,-1,"Go_structField");
	set_name(0x4c0238,"runtime.funcInfo.datap", 0x800);
	create_struct(0x4c0238,-1,"Go_structField");
	set_name(0x4ba220,"reflect.funcTypeFixed32.funcType", 0x800);
	create_struct(0x4ba220,-1,"Go_structField");
	set_name(0x4ba238,"reflect.funcTypeFixed32.args", 0x800);
	create_struct(0x4ba238,-1,"Go_structField");
	set_name(0x4bea20,"runtime.pcvalueCacheEnt.targetpc", 0x800);
	create_struct(0x4bea20,-1,"Go_structField");
	set_name(0x4bea38,"runtime.pcvalueCacheEnt.off", 0x800);
	create_struct(0x4bea38,-1,"Go_structField");
	set_name(0x4bea50,"runtime.pcvalueCacheEnt.val", 0x800);
	create_struct(0x4bea50,-1,"Go_structField");
	set_name(0x4c3240,"syscall.Overlapped.Internal", 0x800);
	create_struct(0x4c3240,-1,"Go_structField");
	set_name(0x4c3258,"syscall.Overlapped.InternalHigh", 0x800);
	create_struct(0x4c3258,-1,"Go_structField");
	set_name(0x4c3270,"syscall.Overlapped.Offset", 0x800);
	create_struct(0x4c3270,-1,"Go_structField");
	set_name(0x4c3288,"syscall.Overlapped.OffsetHigh", 0x800);
	create_struct(0x4c3288,-1,"Go_structField");
	set_name(0x4c32a0,"syscall.Overlapped.HEvent", 0x800);
	create_struct(0x4c32a0,-1,"Go_structField");
	set_name(0x4baa40,"runtime.gQueue.head", 0x800);
	create_struct(0x4baa40,-1,"Go_structField");
	set_name(0x4baa58,"runtime.gQueue.tail", 0x800);
	create_struct(0x4baa58,-1,"Go_structField");
	set_name(0x4bf260,"unicode.Range16.Lo", 0x800);
	create_struct(0x4bf260,-1,"Go_structField");
	set_name(0x4bf278,"unicode.Range16.Hi", 0x800);
	create_struct(0x4bf278,-1,"Go_structField");
	set_name(0x4bf290,"unicode.Range16.Stride", 0x800);
	create_struct(0x4bf290,-1,"Go_structField");
	set_name(0x4cda60,"reflect.Value.typ", 0x800);
	create_struct(0x4cda60,-1,"Go_structField");
	set_name(0x4cda78,"reflect.Value.ptr", 0x800);
	create_struct(0x4cda78,-1,"Go_structField");
	set_name(0x4cda90,"reflect.Value.flag", 0x800);
	create_struct(0x4cda90,-1,"Go_structField");
	set_name(0x4bb260,"runtime.stackObjectBufHdr.workbufhdr", 0x800);
	create_struct(0x4bb260,-1,"Go_structField");
	set_name(0x4bb278,"runtime.stackObjectBufHdr.next", 0x800);
	create_struct(0x4bb278,-1,"Go_structField");
	set_name(0x4b7a60,"runtime.Func.opaque", 0x800);
	create_struct(0x4b7a60,-1,"Go_structField");
	set_name(0x4c0a60,"cpu.arm._", 0x800);
	create_struct(0x4c0a60,-1,"Go_structField");
	set_name(0x4c0a78,"cpu.arm.HasVFPv4", 0x800);
	create_struct(0x4c0a78,-1,"Go_structField");
	set_name(0x4c0a90,"cpu.arm.HasIDIVA", 0x800);
	create_struct(0x4c0a90,-1,"Go_structField");
	set_name(0x4c0aa8,"cpu.arm._", 0x800);
	create_struct(0x4c0aa8,-1,"Go_structField");
	set_name(0x4c2a60,"runtime.funcinl.zero", 0x800);
	create_struct(0x4c2a60,-1,"Go_structField");
	set_name(0x4c2a78,"runtime.funcinl.entry", 0x800);
	create_struct(0x4c2a78,-1,"Go_structField");
	set_name(0x4c2a90,"runtime.funcinl.name", 0x800);
	create_struct(0x4c2a90,-1,"Go_structField");
	set_name(0x4c2aa8,"runtime.funcinl.file", 0x800);
	create_struct(0x4c2aa8,-1,"Go_structField");
	set_name(0x4c2ac0,"runtime.funcinl.line", 0x800);
	create_struct(0x4c2ac0,-1,"Go_structField");
	set_name(0x4c2280,"fmt.fmt.buf", 0x800);
	create_struct(0x4c2280,-1,"Go_structField");
	set_name(0x4c2298,"fmt.fmt.fmtFlags", 0x800);
	create_struct(0x4c2298,-1,"Go_structField");
	set_name(0x4c22b0,"fmt.fmt.wid", 0x800);
	create_struct(0x4c22b0,-1,"Go_structField");
	set_name(0x4c22c8,"fmt.fmt.prec", 0x800);
	create_struct(0x4c22c8,-1,"Go_structField");
	set_name(0x4c22e0,"fmt.fmt.intbuf", 0x800);
	create_struct(0x4c22e0,-1,"Go_structField");
	set_name(0x4bba80,"sync.Once.done", 0x800);
	create_struct(0x4bba80,-1,"Go_structField");
	set_name(0x4bba98,"sync.Once.m", 0x800);
	create_struct(0x4bba98,-1,"Go_structField");
	set_name(0x4c12a0,"runtime.traceStackTable.lock", 0x800);
	create_struct(0x4c12a0,-1,"Go_structField");
	set_name(0x4c12b8,"runtime.traceStackTable.seq", 0x800);
	create_struct(0x4c12b8,-1,"Go_structField");
	set_name(0x4c12d0,"runtime.traceStackTable.mem", 0x800);
	create_struct(0x4c12d0,-1,"Go_structField");
	set_name(0x4c12e8,"runtime.traceStackTable.tab", 0x800);
	create_struct(0x4c12e8,-1,"Go_structField");
	set_name(0x4c72a0,"runtime._defer.siz", 0x800);
	create_struct(0x4c72a0,-1,"Go_structField");
	set_name(0x4c72b8,"runtime._defer.started", 0x800);
	create_struct(0x4c72b8,-1,"Go_structField");
	set_name(0x4c72d0,"runtime._defer.heap", 0x800);
	create_struct(0x4c72d0,-1,"Go_structField");
	set_name(0x4c72e8,"runtime._defer.openDefer", 0x800);
	create_struct(0x4c72e8,-1,"Go_structField");
	set_name(0x4c7300,"runtime._defer.sp", 0x800);
	create_struct(0x4c7300,-1,"Go_structField");
	set_name(0x4c7318,"runtime._defer.pc", 0x800);
	create_struct(0x4c7318,-1,"Go_structField");
	set_name(0x4c7330,"runtime._defer.fn", 0x800);
	create_struct(0x4c7330,-1,"Go_structField");
	set_name(0x4c7348,"runtime._defer._panic", 0x800);
	create_struct(0x4c7348,-1,"Go_structField");
	set_name(0x4c7360,"runtime._defer.link", 0x800);
	create_struct(0x4c7360,-1,"Go_structField");
	set_name(0x4c7378,"runtime._defer.fd", 0x800);
	create_struct(0x4c7378,-1,"Go_structField");
	set_name(0x4c7390,"runtime._defer.varp", 0x800);
	create_struct(0x4c7390,-1,"Go_structField");
	set_name(0x4c73a8,"runtime._defer.framepc", 0x800);
	create_struct(0x4c73a8,-1,"Go_structField");
	set_name(0x4c7aa0,"poll.operation.o", 0x800);
	create_struct(0x4c7aa0,-1,"Go_structField");
	set_name(0x4c7ab8,"poll.operation.runtimeCtx", 0x800);
	create_struct(0x4c7ab8,-1,"Go_structField");
	set_name(0x4c7ad0,"poll.operation.mode", 0x800);
	create_struct(0x4c7ad0,-1,"Go_structField");
	set_name(0x4c7ae8,"poll.operation.errno", 0x800);
	create_struct(0x4c7ae8,-1,"Go_structField");
	set_name(0x4c7b00,"poll.operation.qty", 0x800);
	create_struct(0x4c7b00,-1,"Go_structField");
	set_name(0x4c7b18,"poll.operation.fd", 0x800);
	create_struct(0x4c7b18,-1,"Go_structField");
	set_name(0x4c7b30,"poll.operation.errc", 0x800);
	create_struct(0x4c7b30,-1,"Go_structField");
	set_name(0x4c7b48,"poll.operation.buf", 0x800);
	create_struct(0x4c7b48,-1,"Go_structField");
	set_name(0x4c7b60,"poll.operation.msg", 0x800);
	create_struct(0x4c7b60,-1,"Go_structField");
	set_name(0x4c7b78,"poll.operation.sa", 0x800);
	create_struct(0x4c7b78,-1,"Go_structField");
	set_name(0x4c7b90,"poll.operation.rsa", 0x800);
	create_struct(0x4c7b90,-1,"Go_structField");
	set_name(0x4c7ba8,"poll.operation.rsan", 0x800);
	create_struct(0x4c7ba8,-1,"Go_structField");
	set_name(0x4c7bc0,"poll.operation.handle", 0x800);
	create_struct(0x4c7bc0,-1,"Go_structField");
	set_name(0x4c7bd8,"poll.operation.flags", 0x800);
	create_struct(0x4c7bd8,-1,"Go_structField");
	set_name(0x4c7bf0,"poll.operation.bufs", 0x800);
	create_struct(0x4c7bf0,-1,"Go_structField");
	set_name(0x4bc2a0,"utf8.acceptRange.lo", 0x800);
	create_struct(0x4bc2a0,-1,"Go_structField");
	set_name(0x4bc2b8,"utf8.acceptRange.hi", 0x800);
	create_struct(0x4bc2b8,-1,"Go_structField");
	set_name(0x4c3aa0,"runtime.bucket.next", 0x800);
	create_struct(0x4c3aa0,-1,"Go_structField");
	set_name(0x4c3ab8,"runtime.bucket.allnext", 0x800);
	create_struct(0x4c3ab8,-1,"Go_structField");
	set_name(0x4c3ad0,"runtime.bucket.typ", 0x800);
	create_struct(0x4c3ad0,-1,"Go_structField");
	set_name(0x4c3ae8,"runtime.bucket.hash", 0x800);
	create_struct(0x4c3ae8,-1,"Go_structField");
	set_name(0x4c3b00,"runtime.bucket.size", 0x800);
	create_struct(0x4c3b00,-1,"Go_structField");
	set_name(0x4c3b18,"runtime.bucket.nstk", 0x800);
	create_struct(0x4c3b18,-1,"Go_structField");
	set_name(0x4bfa90,"map.bucket[string]bool.topbits", 0x800);
	create_struct(0x4bfa90,-1,"Go_structField");
	set_name(0x4bfaa8,"map.bucket[string]bool.keys", 0x800);
	create_struct(0x4bfaa8,-1,"Go_structField");
	set_name(0x4bfac0,"map.bucket[string]bool.elems", 0x800);
	create_struct(0x4bfac0,-1,"Go_structField");
	set_name(0x4bfad8,"map.bucket[string]bool.overflow", 0x800);
	create_struct(0x4bfad8,-1,"Go_structField");
	set_name(0x4be2a0,"runtime.forcegcstate.lock", 0x800);
	create_struct(0x4be2a0,-1,"Go_structField");
	set_name(0x4be2b8,"runtime.forcegcstate.g", 0x800);
	create_struct(0x4be2b8,-1,"Go_structField");
	set_name(0x4be2d0,"runtime.forcegcstate.idle", 0x800);
	create_struct(0x4be2d0,-1,"Go_structField");
	set_name(0x4c42a0,"reflect.StructField.Name", 0x800);
	create_struct(0x4c42a0,-1,"Go_structField");
	set_name(0x4c42b8,"reflect.StructField.PkgPath", 0x800);
	create_struct(0x4c42b8,-1,"Go_structField");
	set_name(0x4c42d0,"reflect.StructField.Type", 0x800);
	create_struct(0x4c42d0,-1,"Go_structField");
	set_name(0x4c42e8,"reflect.StructField.Tag", 0x800);
	create_struct(0x4c42e8,-1,"Go_structField");
	set_name(0x4c4300,"reflect.StructField.Offset", 0x800);
	create_struct(0x4c4300,-1,"Go_structField");
	set_name(0x4c4318,"reflect.StructField.Index", 0x800);
	create_struct(0x4c4318,-1,"Go_structField");
	set_name(0x4c4330,"reflect.StructField.Anonymous", 0x800);
	create_struct(0x4c4330,-1,"Go_structField");
	set_name(0x4ba2c0,"reflect.funcTypeFixed4.funcType", 0x800);
	create_struct(0x4ba2c0,-1,"Go_structField");
	set_name(0x4ba2d8,"reflect.funcTypeFixed4.args", 0x800);
	create_struct(0x4ba2d8,-1,"Go_structField");
	set_name(0x4c9ac0,"cpu.arm64._", 0x800);
	create_struct(0x4c9ac0,-1,"Go_structField");
	set_name(0x4c9ad8,"cpu.arm64.HasFP", 0x800);
	create_struct(0x4c9ad8,-1,"Go_structField");
	set_name(0x4c9af0,"cpu.arm64.HasASIMD", 0x800);
	create_struct(0x4c9af0,-1,"Go_structField");
	set_name(0x4c9b08,"cpu.arm64.HasEVTSTRM", 0x800);
	create_struct(0x4c9b08,-1,"Go_structField");
	set_name(0x4c9b20,"cpu.arm64.HasAES", 0x800);
	create_struct(0x4c9b20,-1,"Go_structField");
	set_name(0x4c9b38,"cpu.arm64.HasPMULL", 0x800);
	create_struct(0x4c9b38,-1,"Go_structField");
	set_name(0x4c9b50,"cpu.arm64.HasSHA1", 0x800);
	create_struct(0x4c9b50,-1,"Go_structField");
	set_name(0x4c9b68,"cpu.arm64.HasSHA2", 0x800);
	create_struct(0x4c9b68,-1,"Go_structField");
	set_name(0x4c9b80,"cpu.arm64.HasCRC32", 0x800);
	create_struct(0x4c9b80,-1,"Go_structField");
	set_name(0x4c9b98,"cpu.arm64.HasATOMICS", 0x800);
	create_struct(0x4c9b98,-1,"Go_structField");
	set_name(0x4c9bb0,"cpu.arm64.HasFPHP", 0x800);
	create_struct(0x4c9bb0,-1,"Go_structField");
	set_name(0x4c9bc8,"cpu.arm64.HasASIMDHP", 0x800);
	create_struct(0x4c9bc8,-1,"Go_structField");
	set_name(0x4c9be0,"cpu.arm64.HasCPUID", 0x800);
	create_struct(0x4c9be0,-1,"Go_structField");
	set_name(0x4c9bf8,"cpu.arm64.HasASIMDRDM", 0x800);
	create_struct(0x4c9bf8,-1,"Go_structField");
	set_name(0x4c9c10,"cpu.arm64.HasJSCVT", 0x800);
	create_struct(0x4c9c10,-1,"Go_structField");
	set_name(0x4c9c28,"cpu.arm64.HasFCMA", 0x800);
	create_struct(0x4c9c28,-1,"Go_structField");
	set_name(0x4c9c40,"cpu.arm64.HasLRCPC", 0x800);
	create_struct(0x4c9c40,-1,"Go_structField");
	set_name(0x4c9c58,"cpu.arm64.HasDCPOP", 0x800);
	create_struct(0x4c9c58,-1,"Go_structField");
	set_name(0x4c9c70,"cpu.arm64.HasSHA3", 0x800);
	create_struct(0x4c9c70,-1,"Go_structField");
	set_name(0x4c9c88,"cpu.arm64.HasSM3", 0x800);
	create_struct(0x4c9c88,-1,"Go_structField");
	set_name(0x4c9ca0,"cpu.arm64.HasSM4", 0x800);
	create_struct(0x4c9ca0,-1,"Go_structField");
	set_name(0x4c9cb8,"cpu.arm64.HasASIMDDP", 0x800);
	create_struct(0x4c9cb8,-1,"Go_structField");
	set_name(0x4c9cd0,"cpu.arm64.HasSHA512", 0x800);
	create_struct(0x4c9cd0,-1,"Go_structField");
	set_name(0x4c9ce8,"cpu.arm64.HasSVE", 0x800);
	create_struct(0x4c9ce8,-1,"Go_structField");
	set_name(0x4c9d00,"cpu.arm64.HasASIMDFHM", 0x800);
	create_struct(0x4c9d00,-1,"Go_structField");
	set_name(0x4c9d18,"cpu.arm64._", 0x800);
	create_struct(0x4c9d18,-1,"Go_structField");
	set_name(0x4b7ae0,"runtime.bmap.tophash", 0x800);
	create_struct(0x4b7ae0,-1,"Go_structField");
	set_name(0x4beae0,"runtime.semaRoot.lock", 0x800);
	create_struct(0x4beae0,-1,"Go_structField");
	set_name(0x4beaf8,"runtime.semaRoot.treap", 0x800);
	create_struct(0x4beaf8,-1,"Go_structField");
	set_name(0x4beb10,"runtime.semaRoot.nwait", 0x800);
	create_struct(0x4beb10,-1,"Go_structField");
	set_name(0x4baae0,"runtime.imethod.name", 0x800);
	create_struct(0x4baae0,-1,"Go_structField");
	set_name(0x4baaf8,"runtime.imethod.ityp", 0x800);
	create_struct(0x4baaf8,-1,"Go_structField");
	set_name(0x4bb300,"runtime.stackObjectRecord.off", 0x800);
	create_struct(0x4bb300,-1,"Go_structField");
	set_name(0x4bb318,"runtime.stackObjectRecord.typ", 0x800);
	create_struct(0x4bb318,-1,"Go_structField");
	set_name(0x4bdb20,"poll.fdMutex.state", 0x800);
	create_struct(0x4bdb20,-1,"Go_structField");
	set_name(0x4bdb38,"poll.fdMutex.rsema", 0x800);
	create_struct(0x4bdb38,-1,"Go_structField");
	set_name(0x4bdb50,"poll.fdMutex.wsema", 0x800);
	create_struct(0x4bdb50,-1,"Go_structField");
	set_name(0x4bf320,"unicode.Range32.Lo", 0x800);
	create_struct(0x4bf320,-1,"Go_structField");
	set_name(0x4bf338,"unicode.Range32.Hi", 0x800);
	create_struct(0x4bf338,-1,"Go_structField");
	set_name(0x4bf350,"unicode.Range32.Stride", 0x800);
	create_struct(0x4bf350,-1,"Go_structField");
	set_name(0x4bbb20,"sync.eface.typ", 0x800);
	create_struct(0x4bbb20,-1,"Go_structField");
	set_name(0x4bbb38,"sync.eface.val", 0x800);
	create_struct(0x4bbb38,-1,"Go_structField");
	set_name(0x4c0b20,"os.dirInfo.data", 0x800);
	create_struct(0x4c0b20,-1,"Go_structField");
	set_name(0x4c0b38,"os.dirInfo.needdata", 0x800);
	create_struct(0x4c0b38,-1,"Go_structField");
	set_name(0x4c0b50,"os.dirInfo.path", 0x800);
	create_struct(0x4c0b50,-1,"Go_structField");
	set_name(0x4c0b68,"os.dirInfo.isempty", 0x800);
	create_struct(0x4c0b68,-1,"Go_structField");
	set_name(0x4c6b20,"runtime._type.size", 0x800);
	create_struct(0x4c6b20,-1,"Go_structField");
	set_name(0x4c6b38,"runtime._type.ptrdata", 0x800);
	create_struct(0x4c6b38,-1,"Go_structField");
	set_name(0x4c6b50,"runtime._type.hash", 0x800);
	create_struct(0x4c6b50,-1,"Go_structField");
	set_name(0x4c6b68,"runtime._type.tflag", 0x800);
	create_struct(0x4c6b68,-1,"Go_structField");
	set_name(0x4c6b80,"runtime._type.align", 0x800);
	create_struct(0x4c6b80,-1,"Go_structField");
	set_name(0x4c6b98,"runtime._type.fieldAlign", 0x800);
	create_struct(0x4c6b98,-1,"Go_structField");
	set_name(0x4c6bb0,"runtime._type.kind", 0x800);
	create_struct(0x4c6bb0,-1,"Go_structField");
	set_name(0x4c6bc8,"runtime._type.equal", 0x800);
	create_struct(0x4c6bc8,-1,"Go_structField");
	set_name(0x4c6be0,"runtime._type.gcdata", 0x800);
	create_struct(0x4c6be0,-1,"Go_structField");
	set_name(0x4c6bf8,"runtime._type.str", 0x800);
	create_struct(0x4c6bf8,-1,"Go_structField");
	set_name(0x4c6c10,"runtime._type.ptrToThis", 0x800);
	create_struct(0x4c6c10,-1,"Go_structField");
	set_name(0x4c2b40,"runtime.gcSweepBuf.spineLock", 0x800);
	create_struct(0x4c2b40,-1,"Go_structField");
	set_name(0x4c2b58,"runtime.gcSweepBuf.spine", 0x800);
	create_struct(0x4c2b58,-1,"Go_structField");
	set_name(0x4c2b70,"runtime.gcSweepBuf.spineLen", 0x800);
	create_struct(0x4c2b70,-1,"Go_structField");
	set_name(0x4c2b88,"runtime.gcSweepBuf.spineCap", 0x800);
	create_struct(0x4c2b88,-1,"Go_structField");
	set_name(0x4c2ba0,"runtime.gcSweepBuf.index", 0x800);
	create_struct(0x4c2ba0,-1,"Go_structField");
	set_name(0x4ba360,"reflect.funcTypeFixed64.funcType", 0x800);
	create_struct(0x4ba360,-1,"Go_structField");
	set_name(0x4ba378,"reflect.funcTypeFixed64.args", 0x800);
	create_struct(0x4ba378,-1,"Go_structField");
	set_name(0x4bfb50,"map.bucket[string]int64.topbits", 0x800);
	create_struct(0x4bfb50,-1,"Go_structField");
	set_name(0x4bfb68,"map.bucket[string]int64.keys", 0x800);
	create_struct(0x4bfb68,-1,"Go_structField");
	set_name(0x4bfb80,"map.bucket[string]int64.elems", 0x800);
	create_struct(0x4bfb80,-1,"Go_structField");
	set_name(0x4bfb98,"map.bucket[string]int64.overflow", 0x800);
	create_struct(0x4bfb98,-1,"Go_structField");
	set_name(0x4c1360,"runtime.wbBuf.next", 0x800);
	create_struct(0x4c1360,-1,"Go_structField");
	set_name(0x4c1378,"runtime.wbBuf.end", 0x800);
	create_struct(0x4c1378,-1,"Go_structField");
	set_name(0x4c1390,"runtime.wbBuf.buf", 0x800);
	create_struct(0x4c1390,-1,"Go_structField");
	set_name(0x4c13a8,"runtime.wbBuf.debugGen", 0x800);
	create_struct(0x4c13a8,-1,"Go_structField");
	set_name(0x4c2360,"cpu.option.Name", 0x800);
	create_struct(0x4c2360,-1,"Go_structField");
	set_name(0x4c2378,"cpu.option.Feature", 0x800);
	create_struct(0x4c2378,-1,"Go_structField");
	set_name(0x4c2390,"cpu.option.Specified", 0x800);
	create_struct(0x4c2390,-1,"Go_structField");
	set_name(0x4c23a8,"cpu.option.Enable", 0x800);
	create_struct(0x4c23a8,-1,"Go_structField");
	set_name(0x4c23c0,"cpu.option.Required", 0x800);
	create_struct(0x4c23c0,-1,"Go_structField");
	set_name(0x4b7b60,"runtime.funcval.fn", 0x800);
	create_struct(0x4b7b60,-1,"Go_structField");
	set_name(0x4be360,"runtime.gcBitsArena.free", 0x800);
	create_struct(0x4be360,-1,"Go_structField");
	set_name(0x4be378,"runtime.gcBitsArena.next", 0x800);
	create_struct(0x4be378,-1,"Go_structField");
	set_name(0x4be390,"runtime.gcBitsArena.bits", 0x800);
	create_struct(0x4be390,-1,"Go_structField");
	set_name(0x4bab80,"runtime.lfnode.next", 0x800);
	create_struct(0x4bab80,-1,"Go_structField");
	set_name(0x4bab98,"runtime.lfnode.pushcnt", 0x800);
	create_struct(0x4bab98,-1,"Go_structField");
	set_name(0x4c3ba0,"runtime.libcall.fn", 0x800);
	create_struct(0x4c3ba0,-1,"Go_structField");
	set_name(0x4c3bb8,"runtime.libcall.n", 0x800);
	create_struct(0x4c3bb8,-1,"Go_structField");
	set_name(0x4c3bd0,"runtime.libcall.args", 0x800);
	create_struct(0x4c3bd0,-1,"Go_structField");
	set_name(0x4c3be8,"runtime.libcall.r1", 0x800);
	create_struct(0x4c3be8,-1,"Go_structField");
	set_name(0x4c3c00,"runtime.libcall.r2", 0x800);
	create_struct(0x4c3c00,-1,"Go_structField");
	set_name(0x4c3c18,"runtime.libcall.err", 0x800);
	create_struct(0x4c3c18,-1,"Go_structField");
	set_name(0x4beba0,"runtime.special.next", 0x800);
	create_struct(0x4beba0,-1,"Go_structField");
	set_name(0x4bebb8,"runtime.special.offset", 0x800);
	create_struct(0x4bebb8,-1,"Go_structField");
	set_name(0x4bebd0,"runtime.special.kind", 0x800);
	create_struct(0x4bebd0,-1,"Go_structField");
	set_name(0x4c5ba0,"fmt.pp.buf", 0x800);
	create_struct(0x4c5ba0,-1,"Go_structField");
	set_name(0x4c5bb8,"fmt.pp.arg", 0x800);
	create_struct(0x4c5bb8,-1,"Go_structField");
	set_name(0x4c5bd0,"fmt.pp.value", 0x800);
	create_struct(0x4c5bd0,-1,"Go_structField");
	set_name(0x4c5be8,"fmt.pp.fmt", 0x800);
	create_struct(0x4c5be8,-1,"Go_structField");
	set_name(0x4c5c00,"fmt.pp.reordered", 0x800);
	create_struct(0x4c5c00,-1,"Go_structField");
	set_name(0x4c5c18,"fmt.pp.goodArgNum", 0x800);
	create_struct(0x4c5c18,-1,"Go_structField");
	set_name(0x4c5c30,"fmt.pp.panicking", 0x800);
	create_struct(0x4c5c30,-1,"Go_structField");
	set_name(0x4c5c48,"fmt.pp.erroring", 0x800);
	create_struct(0x4c5c48,-1,"Go_structField");
	set_name(0x4c5c60,"fmt.pp.wrapErrs", 0x800);
	create_struct(0x4c5c60,-1,"Go_structField");
	set_name(0x4c5c78,"fmt.pp.wrappedErr", 0x800);
	create_struct(0x4c5c78,-1,"Go_structField");
	set_name(0x4c4ba0,"runtime._panic.argp", 0x800);
	create_struct(0x4c4ba0,-1,"Go_structField");
	set_name(0x4c4bb8,"runtime._panic.arg", 0x800);
	create_struct(0x4c4bb8,-1,"Go_structField");
	set_name(0x4c4bd0,"runtime._panic.link", 0x800);
	create_struct(0x4c4bd0,-1,"Go_structField");
	set_name(0x4c4be8,"runtime._panic.pc", 0x800);
	create_struct(0x4c4be8,-1,"Go_structField");
	set_name(0x4c4c00,"runtime._panic.sp", 0x800);
	create_struct(0x4c4c00,-1,"Go_structField");
	set_name(0x4c4c18,"runtime._panic.recovered", 0x800);
	create_struct(0x4c4c18,-1,"Go_structField");
	set_name(0x4c4c30,"runtime._panic.aborted", 0x800);
	create_struct(0x4c4c30,-1,"Go_structField");
	set_name(0x4c4c48,"runtime._panic.goexit", 0x800);
	create_struct(0x4c4c48,-1,"Go_structField");
	set_name(0x4bb3a0,"runtime.stackWorkBuf.stackWorkBufHdr", 0x800);
	create_struct(0x4bb3a0,-1,"Go_structField");
	set_name(0x4bb3b8,"runtime.stackWorkBuf.obj", 0x800);
	create_struct(0x4bb3b8,-1,"Go_structField");
	set_name(0x4c43c0,"runtime.Frame.PC", 0x800);
	create_struct(0x4c43c0,-1,"Go_structField");
	set_name(0x4c43d8,"runtime.Frame.Func", 0x800);
	create_struct(0x4c43d8,-1,"Go_structField");
	set_name(0x4c43f0,"runtime.Frame.Function", 0x800);
	create_struct(0x4c43f0,-1,"Go_structField");
	set_name(0x4c4408,"runtime.Frame.File", 0x800);
	create_struct(0x4c4408,-1,"Go_structField");
	set_name(0x4c4420,"runtime.Frame.Line", 0x800);
	create_struct(0x4c4420,-1,"Go_structField");
	set_name(0x4c4438,"runtime.Frame.Entry", 0x800);
	create_struct(0x4c4438,-1,"Go_structField");
	set_name(0x4c4450,"runtime.Frame.funcInfo", 0x800);
	create_struct(0x4c4450,-1,"Go_structField");
	set_name(0x4bbbc0,"sync.poolChain.head", 0x800);
	create_struct(0x4bbbc0,-1,"Go_structField");
	set_name(0x4bbbd8,"sync.poolChain.tail", 0x800);
	create_struct(0x4bbbd8,-1,"Go_structField");
	set_name(0x4bdbe0,"os.PathError.Op", 0x800);
	create_struct(0x4bdbe0,-1,"Go_structField");
	set_name(0x4bdbf8,"os.PathError.Path", 0x800);
	create_struct(0x4bdbf8,-1,"Go_structField");
	set_name(0x4bdc10,"os.PathError.Err", 0x800);
	create_struct(0x4bdc10,-1,"Go_structField");
	set_name(0x4b7be0,"runtime.gList.head", 0x800);
	create_struct(0x4b7be0,-1,"Go_structField");
	set_name(0x4c0be0,"os.file.pfd", 0x800);
	create_struct(0x4c0be0,-1,"Go_structField");
	set_name(0x4c0bf8,"os.file.name", 0x800);
	create_struct(0x4c0bf8,-1,"Go_structField");
	set_name(0x4c0c10,"os.file.dirinfo", 0x800);
	create_struct(0x4c0c10,-1,"Go_structField");
	set_name(0x4c0c28,"os.file.appendMode", 0x800);
	create_struct(0x4c0c28,-1,"Go_structField");
	set_name(0x4bf3e0,"unicode.RangeTable.R16", 0x800);
	create_struct(0x4bf3e0,-1,"Go_structField");
	set_name(0x4bf3f8,"unicode.RangeTable.R32", 0x800);
	create_struct(0x4bf3f8,-1,"Go_structField");
	set_name(0x4bf410,"unicode.RangeTable.LatinOffset", 0x800);
	create_struct(0x4bf410,-1,"Go_structField");
	set_name(0x4ccc00,"runtime.p.id", 0x800);
	create_struct(0x4ccc00,-1,"Go_structField");
	set_name(0x4ccc18,"runtime.p.status", 0x800);
	create_struct(0x4ccc18,-1,"Go_structField");
	set_name(0x4ccc30,"runtime.p.link", 0x800);
	create_struct(0x4ccc30,-1,"Go_structField");
	set_name(0x4ccc48,"runtime.p.schedtick", 0x800);
	create_struct(0x4ccc48,-1,"Go_structField");
	set_name(0x4ccc60,"runtime.p.syscalltick", 0x800);
	create_struct(0x4ccc60,-1,"Go_structField");
	set_name(0x4ccc78,"runtime.p.sysmontick", 0x800);
	create_struct(0x4ccc78,-1,"Go_structField");
	set_name(0x4ccc90,"runtime.p.m", 0x800);
	create_struct(0x4ccc90,-1,"Go_structField");
	set_name(0x4ccca8,"runtime.p.mcache", 0x800);
	create_struct(0x4ccca8,-1,"Go_structField");
	set_name(0x4cccc0,"runtime.p.pcache", 0x800);
	create_struct(0x4cccc0,-1,"Go_structField");
	set_name(0x4cccd8,"runtime.p.raceprocctx", 0x800);
	create_struct(0x4cccd8,-1,"Go_structField");
	set_name(0x4cccf0,"runtime.p.deferpool", 0x800);
	create_struct(0x4cccf0,-1,"Go_structField");
	set_name(0x4ccd08,"runtime.p.deferpoolbuf", 0x800);
	create_struct(0x4ccd08,-1,"Go_structField");
	set_name(0x4ccd20,"runtime.p.goidcache", 0x800);
	create_struct(0x4ccd20,-1,"Go_structField");
	set_name(0x4ccd38,"runtime.p.goidcacheend", 0x800);
	create_struct(0x4ccd38,-1,"Go_structField");
	set_name(0x4ccd50,"runtime.p.runqhead", 0x800);
	create_struct(0x4ccd50,-1,"Go_structField");
	set_name(0x4ccd68,"runtime.p.runqtail", 0x800);
	create_struct(0x4ccd68,-1,"Go_structField");
	set_name(0x4ccd80,"runtime.p.runq", 0x800);
	create_struct(0x4ccd80,-1,"Go_structField");
	set_name(0x4ccd98,"runtime.p.runnext", 0x800);
	create_struct(0x4ccd98,-1,"Go_structField");
	set_name(0x4ccdb0,"runtime.p.gFree", 0x800);
	create_struct(0x4ccdb0,-1,"Go_structField");
	set_name(0x4ccdc8,"runtime.p.sudogcache", 0x800);
	create_struct(0x4ccdc8,-1,"Go_structField");
	set_name(0x4ccde0,"runtime.p.sudogbuf", 0x800);
	create_struct(0x4ccde0,-1,"Go_structField");
	set_name(0x4ccdf8,"runtime.p.mspancache", 0x800);
	create_struct(0x4ccdf8,-1,"Go_structField");
	set_name(0x4cce10,"runtime.p.tracebuf", 0x800);
	create_struct(0x4cce10,-1,"Go_structField");
	set_name(0x4cce28,"runtime.p.traceSweep", 0x800);
	create_struct(0x4cce28,-1,"Go_structField");
	set_name(0x4cce40,"runtime.p.traceSwept", 0x800);
	create_struct(0x4cce40,-1,"Go_structField");
	set_name(0x4cce58,"runtime.p.traceReclaimed", 0x800);
	create_struct(0x4cce58,-1,"Go_structField");
	set_name(0x4cce70,"runtime.p.palloc", 0x800);
	create_struct(0x4cce70,-1,"Go_structField");
	set_name(0x4cce88,"runtime.p._", 0x800);
	create_struct(0x4cce88,-1,"Go_structField");
	set_name(0x4ccea0,"runtime.p.timer0When", 0x800);
	create_struct(0x4ccea0,-1,"Go_structField");
	set_name(0x4cceb8,"runtime.p.gcAssistTime", 0x800);
	create_struct(0x4cceb8,-1,"Go_structField");
	set_name(0x4cced0,"runtime.p.gcFractionalMarkTime", 0x800);
	create_struct(0x4cced0,-1,"Go_structField");
	set_name(0x4ccee8,"runtime.p.gcBgMarkWorker", 0x800);
	create_struct(0x4ccee8,-1,"Go_structField");
	set_name(0x4ccf00,"runtime.p.gcMarkWorkerMode", 0x800);
	create_struct(0x4ccf00,-1,"Go_structField");
	set_name(0x4ccf18,"runtime.p.gcMarkWorkerStartTime", 0x800);
	create_struct(0x4ccf18,-1,"Go_structField");
	set_name(0x4ccf30,"runtime.p.gcw", 0x800);
	create_struct(0x4ccf30,-1,"Go_structField");
	set_name(0x4ccf48,"runtime.p.wbBuf", 0x800);
	create_struct(0x4ccf48,-1,"Go_structField");
	set_name(0x4ccf60,"runtime.p.runSafePointFn", 0x800);
	create_struct(0x4ccf60,-1,"Go_structField");
	set_name(0x4ccf78,"runtime.p.timersLock", 0x800);
	create_struct(0x4ccf78,-1,"Go_structField");
	set_name(0x4ccf90,"runtime.p.timers", 0x800);
	create_struct(0x4ccf90,-1,"Go_structField");
	set_name(0x4ccfa8,"runtime.p.numTimers", 0x800);
	create_struct(0x4ccfa8,-1,"Go_structField");
	set_name(0x4ccfc0,"runtime.p.adjustTimers", 0x800);
	create_struct(0x4ccfc0,-1,"Go_structField");
	set_name(0x4ccfd8,"runtime.p.deletedTimers", 0x800);
	create_struct(0x4ccfd8,-1,"Go_structField");
	set_name(0x4ccff0,"runtime.p.timerRaceCtx", 0x800);
	create_struct(0x4ccff0,-1,"Go_structField");
	set_name(0x4cd008,"runtime.p.preempt", 0x800);
	create_struct(0x4cd008,-1,"Go_structField");
	set_name(0x4cd020,"runtime.p.pad", 0x800);
	create_struct(0x4cd020,-1,"Go_structField");
	set_name(0x4ba400,"reflect.funcTypeFixed8.funcType", 0x800);
	create_struct(0x4ba400,-1,"Go_structField");
	set_name(0x4ba418,"reflect.funcTypeFixed8.args", 0x800);
	create_struct(0x4ba418,-1,"Go_structField");
	set_name(0x4c7420,"runtime.gcControllerState.scanWork", 0x800);
	create_struct(0x4c7420,-1,"Go_structField");
	set_name(0x4c7438,"runtime.gcControllerState.bgScanCredit", 0x800);
	create_struct(0x4c7438,-1,"Go_structField");
	set_name(0x4c7450,"runtime.gcControllerState.assistTime", 0x800);
	create_struct(0x4c7450,-1,"Go_structField");
	set_name(0x4c7468,"runtime.gcControllerState.dedicatedMarkTime", 0x800);
	create_struct(0x4c7468,-1,"Go_structField");
	set_name(0x4c7480,"runtime.gcControllerState.fractionalMarkTime", 0x800);
	create_struct(0x4c7480,-1,"Go_structField");
	set_name(0x4c7498,"runtime.gcControllerState.idleMarkTime", 0x800);
	create_struct(0x4c7498,-1,"Go_structField");
	set_name(0x4c74b0,"runtime.gcControllerState.markStartTime", 0x800);
	create_struct(0x4c74b0,-1,"Go_structField");
	set_name(0x4c74c8,"runtime.gcControllerState.dedicatedMarkWorkersNeeded", 0x800);
	create_struct(0x4c74c8,-1,"Go_structField");
	set_name(0x4c74e0,"runtime.gcControllerState.assistWorkPerByte", 0x800);
	create_struct(0x4c74e0,-1,"Go_structField");
	set_name(0x4c74f8,"runtime.gcControllerState.assistBytesPerWork", 0x800);
	create_struct(0x4c74f8,-1,"Go_structField");
	set_name(0x4c7510,"runtime.gcControllerState.fractionalUtilizationGoal", 0x800);
	create_struct(0x4c7510,-1,"Go_structField");
	set_name(0x4c7528,"runtime.gcControllerState._", 0x800);
	create_struct(0x4c7528,-1,"Go_structField");
	set_name(0x4bfc10,"map.bucket[string]time.abbr.topbits", 0x800);
	create_struct(0x4bfc10,-1,"Go_structField");
	set_name(0x4bfc28,"map.bucket[string]time.abbr.keys", 0x800);
	create_struct(0x4bfc28,-1,"Go_structField");
	set_name(0x4bfc40,"map.bucket[string]time.abbr.elems", 0x800);
	create_struct(0x4bfc40,-1,"Go_structField");
	set_name(0x4bfc58,"map.bucket[string]time.abbr.overflow", 0x800);
	create_struct(0x4bfc58,-1,"Go_structField");
	set_name(0x4c2c20,"runtime.heapArena.bitmap", 0x800);
	create_struct(0x4c2c20,-1,"Go_structField");
	set_name(0x4c2c38,"runtime.heapArena.spans", 0x800);
	create_struct(0x4c2c38,-1,"Go_structField");
	set_name(0x4c2c50,"runtime.heapArena.pageInUse", 0x800);
	create_struct(0x4c2c50,-1,"Go_structField");
	set_name(0x4c2c68,"runtime.heapArena.pageMarks", 0x800);
	create_struct(0x4c2c68,-1,"Go_structField");
	set_name(0x4c2c80,"runtime.heapArena.zeroedBase", 0x800);
	create_struct(0x4c2c80,-1,"Go_structField");
	set_name(0x4cbc20,"runtime.schedt.goidgen", 0x800);
	create_struct(0x4cbc20,-1,"Go_structField");
	set_name(0x4cbc38,"runtime.schedt.lastpoll", 0x800);
	create_struct(0x4cbc38,-1,"Go_structField");
	set_name(0x4cbc50,"runtime.schedt.pollUntil", 0x800);
	create_struct(0x4cbc50,-1,"Go_structField");
	set_name(0x4cbc68,"runtime.schedt.lock", 0x800);
	create_struct(0x4cbc68,-1,"Go_structField");
	set_name(0x4cbc80,"runtime.schedt.midle", 0x800);
	create_struct(0x4cbc80,-1,"Go_structField");
	set_name(0x4cbc98,"runtime.schedt.nmidle", 0x800);
	create_struct(0x4cbc98,-1,"Go_structField");
	set_name(0x4cbcb0,"runtime.schedt.nmidlelocked", 0x800);
	create_struct(0x4cbcb0,-1,"Go_structField");
	set_name(0x4cbcc8,"runtime.schedt.mnext", 0x800);
	create_struct(0x4cbcc8,-1,"Go_structField");
	set_name(0x4cbce0,"runtime.schedt.maxmcount", 0x800);
	create_struct(0x4cbce0,-1,"Go_structField");
	set_name(0x4cbcf8,"runtime.schedt.nmsys", 0x800);
	create_struct(0x4cbcf8,-1,"Go_structField");
	set_name(0x4cbd10,"runtime.schedt.nmfreed", 0x800);
	create_struct(0x4cbd10,-1,"Go_structField");
	set_name(0x4cbd28,"runtime.schedt.ngsys", 0x800);
	create_struct(0x4cbd28,-1,"Go_structField");
	set_name(0x4cbd40,"runtime.schedt.pidle", 0x800);
	create_struct(0x4cbd40,-1,"Go_structField");
	set_name(0x4cbd58,"runtime.schedt.npidle", 0x800);
	create_struct(0x4cbd58,-1,"Go_structField");
	set_name(0x4cbd70,"runtime.schedt.nmspinning", 0x800);
	create_struct(0x4cbd70,-1,"Go_structField");
	set_name(0x4cbd88,"runtime.schedt.runq", 0x800);
	create_struct(0x4cbd88,-1,"Go_structField");
	set_name(0x4cbda0,"runtime.schedt.runqsize", 0x800);
	create_struct(0x4cbda0,-1,"Go_structField");
	set_name(0x4cbdb8,"runtime.schedt.disable", 0x800);
	create_struct(0x4cbdb8,-1,"Go_structField");
	set_name(0x4cbdd0,"runtime.schedt.gFree", 0x800);
	create_struct(0x4cbdd0,-1,"Go_structField");
	set_name(0x4cbde8,"runtime.schedt.sudoglock", 0x800);
	create_struct(0x4cbde8,-1,"Go_structField");
	set_name(0x4cbe00,"runtime.schedt.sudogcache", 0x800);
	create_struct(0x4cbe00,-1,"Go_structField");
	set_name(0x4cbe18,"runtime.schedt.deferlock", 0x800);
	create_struct(0x4cbe18,-1,"Go_structField");
	set_name(0x4cbe30,"runtime.schedt.deferpool", 0x800);
	create_struct(0x4cbe30,-1,"Go_structField");
	set_name(0x4cbe48,"runtime.schedt.freem", 0x800);
	create_struct(0x4cbe48,-1,"Go_structField");
	set_name(0x4cbe60,"runtime.schedt.gcwaiting", 0x800);
	create_struct(0x4cbe60,-1,"Go_structField");
	set_name(0x4cbe78,"runtime.schedt.stopwait", 0x800);
	create_struct(0x4cbe78,-1,"Go_structField");
	set_name(0x4cbe90,"runtime.schedt.stopnote", 0x800);
	create_struct(0x4cbe90,-1,"Go_structField");
	set_name(0x4cbea8,"runtime.schedt.sysmonwait", 0x800);
	create_struct(0x4cbea8,-1,"Go_structField");
	set_name(0x4cbec0,"runtime.schedt.sysmonnote", 0x800);
	create_struct(0x4cbec0,-1,"Go_structField");
	set_name(0x4cbed8,"runtime.schedt.safePointFn", 0x800);
	create_struct(0x4cbed8,-1,"Go_structField");
	set_name(0x4cbef0,"runtime.schedt.safePointWait", 0x800);
	create_struct(0x4cbef0,-1,"Go_structField");
	set_name(0x4cbf08,"runtime.schedt.safePointNote", 0x800);
	create_struct(0x4cbf08,-1,"Go_structField");
	set_name(0x4cbf20,"runtime.schedt.profilehz", 0x800);
	create_struct(0x4cbf20,-1,"Go_structField");
	set_name(0x4cbf38,"runtime.schedt.procresizetime", 0x800);
	create_struct(0x4cbf38,-1,"Go_structField");
	set_name(0x4cbf50,"runtime.schedt.totaltime", 0x800);
	create_struct(0x4cbf50,-1,"Go_structField");
	set_name(0x4c1420,"runtime.wincallbackcontext.gobody", 0x800);
	create_struct(0x4c1420,-1,"Go_structField");
	set_name(0x4c1438,"runtime.wincallbackcontext.argsize", 0x800);
	create_struct(0x4c1438,-1,"Go_structField");
	set_name(0x4c1450,"runtime.wincallbackcontext.restorestack", 0x800);
	create_struct(0x4c1450,-1,"Go_structField");
	set_name(0x4c1468,"runtime.wincallbackcontext.cleanstack", 0x800);
	create_struct(0x4c1468,-1,"Go_structField");
	set_name(0x4be420,"runtime.initTask.state", 0x800);
	create_struct(0x4be420,-1,"Go_structField");
	set_name(0x4be438,"runtime.initTask.ndeps", 0x800);
	create_struct(0x4be438,-1,"Go_structField");
	set_name(0x4be450,"runtime.initTask.nfns", 0x800);
	create_struct(0x4be450,-1,"Go_structField");
	set_name(0x4bac20,"runtime.mSpanList.first", 0x800);
	create_struct(0x4bac20,-1,"Go_structField");
	set_name(0x4bac38,"runtime.mSpanList.last", 0x800);
	create_struct(0x4bac38,-1,"Go_structField");
	set_name(0x4c2440,"reflectlite.uncommonType.pkgPath", 0x800);
	create_struct(0x4c2440,-1,"Go_structField");
	set_name(0x4c2458,"reflectlite.uncommonType.mcount", 0x800);
	create_struct(0x4c2458,-1,"Go_structField");
	set_name(0x4c2470,"reflectlite.uncommonType.xcount", 0x800);
	create_struct(0x4c2470,-1,"Go_structField");
	set_name(0x4c2488,"reflectlite.uncommonType.moff", 0x800);
	create_struct(0x4c2488,-1,"Go_structField");
	set_name(0x4c24a0,"reflectlite.uncommonType._", 0x800);
	create_struct(0x4c24a0,-1,"Go_structField");
	set_name(0x4bb440,"runtime.stackWorkBufHdr.workbufhdr", 0x800);
	create_struct(0x4bb440,-1,"Go_structField");
	set_name(0x4bb458,"runtime.stackWorkBufHdr.next", 0x800);
	create_struct(0x4bb458,-1,"Go_structField");
	set_name(0x4bec60,"runtime.structfield.name", 0x800);
	create_struct(0x4bec60,-1,"Go_structField");
	set_name(0x4bec78,"runtime.structfield.typ", 0x800);
	create_struct(0x4bec78,-1,"Go_structField");
	set_name(0x4bec90,"runtime.structfield.offsetAnon", 0x800);
	create_struct(0x4bec90,-1,"Go_structField");
	set_name(0x4bbc60,"sync.poolDequeue.headTail", 0x800);
	create_struct(0x4bbc60,-1,"Go_structField");
	set_name(0x4bbc78,"sync.poolDequeue.vals", 0x800);
	create_struct(0x4bbc78,-1,"Go_structField");
	set_name(0x4b7c60,"runtime.mSpanStateBox.s", 0x800);
	create_struct(0x4b7c60,-1,"Go_structField");
	set_name(0x4c7c80,"runtime.hiter.key", 0x800);
	create_struct(0x4c7c80,-1,"Go_structField");
	set_name(0x4c7c98,"runtime.hiter.elem", 0x800);
	create_struct(0x4c7c98,-1,"Go_structField");
	set_name(0x4c7cb0,"runtime.hiter.t", 0x800);
	create_struct(0x4c7cb0,-1,"Go_structField");
	set_name(0x4c7cc8,"runtime.hiter.h", 0x800);
	create_struct(0x4c7cc8,-1,"Go_structField");
	set_name(0x4c7ce0,"runtime.hiter.buckets", 0x800);
	create_struct(0x4c7ce0,-1,"Go_structField");
	set_name(0x4c7cf8,"runtime.hiter.bptr", 0x800);
	create_struct(0x4c7cf8,-1,"Go_structField");
	set_name(0x4c7d10,"runtime.hiter.overflow", 0x800);
	create_struct(0x4c7d10,-1,"Go_structField");
	set_name(0x4c7d28,"runtime.hiter.oldoverflow", 0x800);
	create_struct(0x4c7d28,-1,"Go_structField");
	set_name(0x4c7d40,"runtime.hiter.startBucket", 0x800);
	create_struct(0x4c7d40,-1,"Go_structField");
	set_name(0x4c7d58,"runtime.hiter.offset", 0x800);
	create_struct(0x4c7d58,-1,"Go_structField");
	set_name(0x4c7d70,"runtime.hiter.wrapped", 0x800);
	create_struct(0x4c7d70,-1,"Go_structField");
	set_name(0x4c7d88,"runtime.hiter.B", 0x800);
	create_struct(0x4c7d88,-1,"Go_structField");
	set_name(0x4c7da0,"runtime.hiter.i", 0x800);
	create_struct(0x4c7da0,-1,"Go_structField");
	set_name(0x4c7db8,"runtime.hiter.bucket", 0x800);
	create_struct(0x4c7db8,-1,"Go_structField");
	set_name(0x4c7dd0,"runtime.hiter.checkBucket", 0x800);
	create_struct(0x4c7dd0,-1,"Go_structField");
	set_name(0x4c6ca0,"runtime.hchan.qcount", 0x800);
	create_struct(0x4c6ca0,-1,"Go_structField");
	set_name(0x4c6cb8,"runtime.hchan.dataqsiz", 0x800);
	create_struct(0x4c6cb8,-1,"Go_structField");
	set_name(0x4c6cd0,"runtime.hchan.buf", 0x800);
	create_struct(0x4c6cd0,-1,"Go_structField");
	set_name(0x4c6ce8,"runtime.hchan.elemsize", 0x800);
	create_struct(0x4c6ce8,-1,"Go_structField");
	set_name(0x4c6d00,"runtime.hchan.closed", 0x800);
	create_struct(0x4c6d00,-1,"Go_structField");
	set_name(0x4c6d18,"runtime.hchan.elemtype", 0x800);
	create_struct(0x4c6d18,-1,"Go_structField");
	set_name(0x4c6d30,"runtime.hchan.sendx", 0x800);
	create_struct(0x4c6d30,-1,"Go_structField");
	set_name(0x4c6d48,"runtime.hchan.recvx", 0x800);
	create_struct(0x4c6d48,-1,"Go_structField");
	set_name(0x4c6d60,"runtime.hchan.recvq", 0x800);
	create_struct(0x4c6d60,-1,"Go_structField");
	set_name(0x4c6d78,"runtime.hchan.sendq", 0x800);
	create_struct(0x4c6d78,-1,"Go_structField");
	set_name(0x4c6d90,"runtime.hchan.lock", 0x800);
	create_struct(0x4c6d90,-1,"Go_structField");
	set_name(0x4bf490,"map.bucket[*reflect.structType]bool.topbits", 0x800);
	create_struct(0x4bf490,-1,"Go_structField");
	set_name(0x4bf4a8,"map.bucket[*reflect.structType]bool.keys", 0x800);
	create_struct(0x4bf4a8,-1,"Go_structField");
	set_name(0x4bf4c0,"map.bucket[*reflect.structType]bool.elems", 0x800);
	create_struct(0x4bf4c0,-1,"Go_structField");
	set_name(0x4bf4d8,"map.bucket[*reflect.structType]bool.overflow", 0x800);
	create_struct(0x4bf4d8,-1,"Go_structField");
	set_name(0x4c3ca0,"runtime.sweepdata.lock", 0x800);
	create_struct(0x4c3ca0,-1,"Go_structField");
	set_name(0x4c3cb8,"runtime.sweepdata.g", 0x800);
	create_struct(0x4c3cb8,-1,"Go_structField");
	set_name(0x4c3cd0,"runtime.sweepdata.parked", 0x800);
	create_struct(0x4c3cd0,-1,"Go_structField");
	set_name(0x4c3ce8,"runtime.sweepdata.started", 0x800);
	create_struct(0x4c3ce8,-1,"Go_structField");
	set_name(0x4c3d00,"runtime.sweepdata.nbgsweep", 0x800);
	create_struct(0x4c3d00,-1,"Go_structField");
	set_name(0x4c3d18,"runtime.sweepdata.npausesweep", 0x800);
	create_struct(0x4c3d18,-1,"Go_structField");
	set_name(0x4c0ca0,"runtime.TypeAssertionError._interface", 0x800);
	create_struct(0x4c0ca0,-1,"Go_structField");
	set_name(0x4c0cb8,"runtime.TypeAssertionError.concrete", 0x800);
	create_struct(0x4c0cb8,-1,"Go_structField");
	set_name(0x4c0cd0,"runtime.TypeAssertionError.asserted", 0x800);
	create_struct(0x4c0cd0,-1,"Go_structField");
	set_name(0x4c0ce8,"runtime.TypeAssertionError.missingMethod", 0x800);
	create_struct(0x4c0ce8,-1,"Go_structField");
	set_name(0x4bdca0,"reflect.funcType.rtype", 0x800);
	create_struct(0x4bdca0,-1,"Go_structField");
	set_name(0x4bdcb8,"reflect.funcType.inCount", 0x800);
	create_struct(0x4bdcb8,-1,"Go_structField");
	set_name(0x4bdcd0,"reflect.funcType.outCount", 0x800);
	create_struct(0x4bdcd0,-1,"Go_structField");
	set_name(0x4ba4a0,"reflect.layoutKey.ftyp", 0x800);
	create_struct(0x4ba4a0,-1,"Go_structField");
	set_name(0x4ba4b8,"reflect.layoutKey.rcvr", 0x800);
	create_struct(0x4ba4b8,-1,"Go_structField");
	set_name(0x4bacc0,"runtime.pallocData.pallocBits", 0x800);
	create_struct(0x4bacc0,-1,"Go_structField");
	set_name(0x4bacd8,"runtime.pallocData.scavenged", 0x800);
	create_struct(0x4bacd8,-1,"Go_structField");
	set_name(0x4c4cc0,"runtime.gcWork.wbuf1", 0x800);
	create_struct(0x4c4cc0,-1,"Go_structField");
	set_name(0x4c4cd8,"runtime.gcWork.wbuf2", 0x800);
	create_struct(0x4c4cd8,-1,"Go_structField");
	set_name(0x4c4cf0,"runtime.gcWork.bytesMarked", 0x800);
	create_struct(0x4c4cf0,-1,"Go_structField");
	set_name(0x4c4d08,"runtime.gcWork.scanWork", 0x800);
	create_struct(0x4c4d08,-1,"Go_structField");
	set_name(0x4c4d20,"runtime.gcWork.flushedWork", 0x800);
	create_struct(0x4c4d20,-1,"Go_structField");
	set_name(0x4c4d38,"runtime.gcWork.pauseGen", 0x800);
	create_struct(0x4c4d38,-1,"Go_structField");
	set_name(0x4c4d50,"runtime.gcWork.putGen", 0x800);
	create_struct(0x4c4d50,-1,"Go_structField");
	set_name(0x4c4d68,"runtime.gcWork.pauseStack", 0x800);
	create_struct(0x4c4d68,-1,"Go_structField");
	set_name(0x4b7ce0,"runtime.mlink.next", 0x800);
	create_struct(0x4b7ce0,-1,"Go_structField");
	set_name(0x4bfcd0,"map.bucket[string]uint64.topbits", 0x800);
	create_struct(0x4bfcd0,-1,"Go_structField");
	set_name(0x4bfce8,"map.bucket[string]uint64.keys", 0x800);
	create_struct(0x4bfce8,-1,"Go_structField");
	set_name(0x4bfd00,"map.bucket[string]uint64.elems", 0x800);
	create_struct(0x4bfd00,-1,"Go_structField");
	set_name(0x4bfd18,"map.bucket[string]uint64.overflow", 0x800);
	create_struct(0x4bfd18,-1,"Go_structField");
	set_name(0x4c14e0,"strconv.decimalSlice.d", 0x800);
	create_struct(0x4c14e0,-1,"Go_structField");
	set_name(0x4c14f8,"strconv.decimalSlice.nd", 0x800);
	create_struct(0x4c14f8,-1,"Go_structField");
	set_name(0x4c1510,"strconv.decimalSlice.dp", 0x800);
	create_struct(0x4c1510,-1,"Go_structField");
	set_name(0x4c1528,"strconv.decimalSlice.neg", 0x800);
	create_struct(0x4c1528,-1,"Go_structField");
	set_name(0x4bb4e0,"runtime.stackfreelist.list", 0x800);
	create_struct(0x4bb4e0,-1,"Go_structField");
	set_name(0x4bb4f8,"runtime.stackfreelist.size", 0x800);
	create_struct(0x4bb4f8,-1,"Go_structField");
	set_name(0x4c44e0,"runtime.cgoSymbolizerArg.pc", 0x800);
	create_struct(0x4c44e0,-1,"Go_structField");
	set_name(0x4c44f8,"runtime.cgoSymbolizerArg.file", 0x800);
	create_struct(0x4c44f8,-1,"Go_structField");
	set_name(0x4c4510,"runtime.cgoSymbolizerArg.lineno", 0x800);
	create_struct(0x4c4510,-1,"Go_structField");
	set_name(0x4c4528,"runtime.cgoSymbolizerArg.funcName", 0x800);
	create_struct(0x4c4528,-1,"Go_structField");
	set_name(0x4c4540,"runtime.cgoSymbolizerArg.entry", 0x800);
	create_struct(0x4c4540,-1,"Go_structField");
	set_name(0x4c4558,"runtime.cgoSymbolizerArg.more", 0x800);
	create_struct(0x4c4558,-1,"Go_structField");
	set_name(0x4c4570,"runtime.cgoSymbolizerArg.data", 0x800);
	create_struct(0x4c4570,-1,"Go_structField");
	set_name(0x4be4e0,"runtime.interfacetype.typ", 0x800);
	create_struct(0x4be4e0,-1,"Go_structField");
	set_name(0x4be4f8,"runtime.interfacetype.pkgpath", 0x800);
	create_struct(0x4be4f8,-1,"Go_structField");
	set_name(0x4be510,"runtime.interfacetype.mhdr", 0x800);
	create_struct(0x4be510,-1,"Go_structField");
	set_name(0x4c2d00,"runtime.itab.inter", 0x800);
	create_struct(0x4c2d00,-1,"Go_structField");
	set_name(0x4c2d18,"runtime.itab._type", 0x800);
	create_struct(0x4c2d18,-1,"Go_structField");
	set_name(0x4c2d30,"runtime.itab.hash", 0x800);
	create_struct(0x4c2d30,-1,"Go_structField");
	set_name(0x4c2d48,"runtime.itab._", 0x800);
	create_struct(0x4c2d48,-1,"Go_structField");
	set_name(0x4c2d60,"runtime.itab.fun", 0x800);
	create_struct(0x4c2d60,-1,"Go_structField");
	set_name(0x4bbd00,"sync.poolLocal.poolLocalInternal", 0x800);
	create_struct(0x4bbd00,-1,"Go_structField");
	set_name(0x4bbd18,"sync.poolLocal.pad", 0x800);
	create_struct(0x4bbd18,-1,"Go_structField");
	set_name(0x4c5d00,"runtime.stackScanState.cache", 0x800);
	create_struct(0x4c5d00,-1,"Go_structField");
	set_name(0x4c5d18,"runtime.stackScanState.stack", 0x800);
	create_struct(0x4c5d18,-1,"Go_structField");
	set_name(0x4c5d30,"runtime.stackScanState.conservative", 0x800);
	create_struct(0x4c5d30,-1,"Go_structField");
	set_name(0x4c5d48,"runtime.stackScanState.buf", 0x800);
	create_struct(0x4c5d48,-1,"Go_structField");
	set_name(0x4c5d60,"runtime.stackScanState.freeBuf", 0x800);
	create_struct(0x4c5d60,-1,"Go_structField");
	set_name(0x4c5d78,"runtime.stackScanState.cbuf", 0x800);
	create_struct(0x4c5d78,-1,"Go_structField");
	set_name(0x4c5d90,"runtime.stackScanState.head", 0x800);
	create_struct(0x4c5d90,-1,"Go_structField");
	set_name(0x4c5da8,"runtime.stackScanState.tail", 0x800);
	create_struct(0x4c5da8,-1,"Go_structField");
	set_name(0x4c5dc0,"runtime.stackScanState.nobjs", 0x800);
	create_struct(0x4c5dc0,-1,"Go_structField");
	set_name(0x4c5dd8,"runtime.stackScanState.root", 0x800);
	create_struct(0x4c5dd8,-1,"Go_structField");
	set_name(0x4b9d20,"fmtsort.SortedMap.Key", 0x800);
	create_struct(0x4b9d20,-1,"Go_structField");
	set_name(0x4b9d38,"fmtsort.SortedMap.Value", 0x800);
	create_struct(0x4b9d38,-1,"Go_structField");
	set_name(0x4bed20,"runtime.textsect.vaddr", 0x800);
	create_struct(0x4bed20,-1,"Go_structField");
	set_name(0x4bed38,"runtime.textsect.length", 0x800);
	create_struct(0x4bed38,-1,"Go_structField");
	set_name(0x4bed50,"runtime.textsect.baseaddr", 0x800);
	create_struct(0x4bed50,-1,"Go_structField");
	set_name(0x4c2520,"reflect.Method.Name", 0x800);
	create_struct(0x4c2520,-1,"Go_structField");
	set_name(0x4c2538,"reflect.Method.PkgPath", 0x800);
	create_struct(0x4c2538,-1,"Go_structField");
	set_name(0x4c2550,"reflect.Method.Type", 0x800);
	create_struct(0x4c2550,-1,"Go_structField");
	set_name(0x4c2568,"reflect.Method.Func", 0x800);
	create_struct(0x4c2568,-1,"Go_structField");
	set_name(0x4c2580,"reflect.Method.Index", 0x800);
	create_struct(0x4c2580,-1,"Go_structField");
	set_name(0x4c8d20,"runtime.mspan.next", 0x800);
	create_struct(0x4c8d20,-1,"Go_structField");
	set_name(0x4c8d38,"runtime.mspan.prev", 0x800);
	create_struct(0x4c8d38,-1,"Go_structField");
	set_name(0x4c8d50,"runtime.mspan.list", 0x800);
	create_struct(0x4c8d50,-1,"Go_structField");
	set_name(0x4c8d68,"runtime.mspan.startAddr", 0x800);
	create_struct(0x4c8d68,-1,"Go_structField");
	set_name(0x4c8d80,"runtime.mspan.npages", 0x800);
	create_struct(0x4c8d80,-1,"Go_structField");
	set_name(0x4c8d98,"runtime.mspan.manualFreeList", 0x800);
	create_struct(0x4c8d98,-1,"Go_structField");
	set_name(0x4c8db0,"runtime.mspan.freeindex", 0x800);
	create_struct(0x4c8db0,-1,"Go_structField");
	set_name(0x4c8dc8,"runtime.mspan.nelems", 0x800);
	create_struct(0x4c8dc8,-1,"Go_structField");
	set_name(0x4c8de0,"runtime.mspan.allocCache", 0x800);
	create_struct(0x4c8de0,-1,"Go_structField");
	set_name(0x4c8df8,"runtime.mspan.allocBits", 0x800);
	create_struct(0x4c8df8,-1,"Go_structField");
	set_name(0x4c8e10,"runtime.mspan.gcmarkBits", 0x800);
	create_struct(0x4c8e10,-1,"Go_structField");
	set_name(0x4c8e28,"runtime.mspan.sweepgen", 0x800);
	create_struct(0x4c8e28,-1,"Go_structField");
	set_name(0x4c8e40,"runtime.mspan.divMul", 0x800);
	create_struct(0x4c8e40,-1,"Go_structField");
	set_name(0x4c8e58,"runtime.mspan.baseMask", 0x800);
	create_struct(0x4c8e58,-1,"Go_structField");
	set_name(0x4c8e70,"runtime.mspan.allocCount", 0x800);
	create_struct(0x4c8e70,-1,"Go_structField");
	set_name(0x4c8e88,"runtime.mspan.spanclass", 0x800);
	create_struct(0x4c8e88,-1,"Go_structField");
	set_name(0x4c8ea0,"runtime.mspan.state", 0x800);
	create_struct(0x4c8ea0,-1,"Go_structField");
	set_name(0x4c8eb8,"runtime.mspan.needzero", 0x800);
	create_struct(0x4c8eb8,-1,"Go_structField");
	set_name(0x4c8ed0,"runtime.mspan.divShift", 0x800);
	create_struct(0x4c8ed0,-1,"Go_structField");
	set_name(0x4c8ee8,"runtime.mspan.divShift2", 0x800);
	create_struct(0x4c8ee8,-1,"Go_structField");
	set_name(0x4c8f00,"runtime.mspan.elemsize", 0x800);
	create_struct(0x4c8f00,-1,"Go_structField");
	set_name(0x4c8f18,"runtime.mspan.limit", 0x800);
	create_struct(0x4c8f18,-1,"Go_structField");
	set_name(0x4c8f30,"runtime.mspan.speciallock", 0x800);
	create_struct(0x4c8f30,-1,"Go_structField");
	set_name(0x4c8f48,"runtime.mspan.specials", 0x800);
	create_struct(0x4c8f48,-1,"Go_structField");
	set_name(0x4c5540,"fmt.fmtFlags.widPresent", 0x800);
	create_struct(0x4c5540,-1,"Go_structField");
	set_name(0x4c5558,"fmt.fmtFlags.precPresent", 0x800);
	create_struct(0x4c5558,-1,"Go_structField");
	set_name(0x4c5570,"fmt.fmtFlags.minus", 0x800);
	create_struct(0x4c5570,-1,"Go_structField");
	set_name(0x4c5588,"fmt.fmtFlags.plus", 0x800);
	create_struct(0x4c5588,-1,"Go_structField");
	set_name(0x4c55a0,"fmt.fmtFlags.sharp", 0x800);
	create_struct(0x4c55a0,-1,"Go_structField");
	set_name(0x4c55b8,"fmt.fmtFlags.space", 0x800);
	create_struct(0x4c55b8,-1,"Go_structField");
	set_name(0x4c55d0,"fmt.fmtFlags.zero", 0x800);
	create_struct(0x4c55d0,-1,"Go_structField");
	set_name(0x4c55e8,"fmt.fmtFlags.plusV", 0x800);
	create_struct(0x4c55e8,-1,"Go_structField");
	set_name(0x4c5600,"fmt.fmtFlags.sharpV", 0x800);
	create_struct(0x4c5600,-1,"Go_structField");
	set_name(0x4ba540,"reflect.ptrType.rtype", 0x800);
	create_struct(0x4ba540,-1,"Go_structField");
	set_name(0x4ba558,"reflect.ptrType.elem", 0x800);
	create_struct(0x4ba558,-1,"Go_structField");
	set_name(0x4bf550,"map.bucket[*reflect.structType]int.topbits", 0x800);
	create_struct(0x4bf550,-1,"Go_structField");
	set_name(0x4bf568,"map.bucket[*reflect.structType]int.keys", 0x800);
	create_struct(0x4bf568,-1,"Go_structField");
	set_name(0x4bf580,"map.bucket[*reflect.structType]int.elems", 0x800);
	create_struct(0x4bf580,-1,"Go_structField");
	set_name(0x4bf598,"map.bucket[*reflect.structType]int.overflow", 0x800);
	create_struct(0x4bf598,-1,"Go_structField");
	set_name(0x4b7d60,"runtime.mutex.key", 0x800);
	create_struct(0x4b7d60,-1,"Go_structField");
	set_name(0x4bdd60,"reflect.structField.name", 0x800);
	create_struct(0x4bdd60,-1,"Go_structField");
	set_name(0x4bdd78,"reflect.structField.typ", 0x800);
	create_struct(0x4bdd78,-1,"Go_structField");
	set_name(0x4bdd90,"reflect.structField.offsetEmbed", 0x800);
	create_struct(0x4bdd90,-1,"Go_structField");
	set_name(0x4c0d60,"runtime.addrRange.base", 0x800);
	create_struct(0x4c0d60,-1,"Go_structField");
	set_name(0x4c0d78,"runtime.addrRange.limit", 0x800);
	create_struct(0x4c0d78,-1,"Go_structField");
	set_name(0x4bad60,"runtime.parkInfo.m", 0x800);
	create_struct(0x4bad60,-1,"Go_structField");
	set_name(0x4bad78,"runtime.parkInfo.attach", 0x800);
	create_struct(0x4bad78,-1,"Go_structField");
	set_name(0x4bb580,"runtime.stackpoolItem.mu", 0x800);
	create_struct(0x4bb580,-1,"Go_structField");
	set_name(0x4bb598,"runtime.stackpoolItem.span", 0x800);
	create_struct(0x4bb598,-1,"Go_structField");
	set_name(0x4bbda0,"sync.poolLocalInternal.private", 0x800);
	create_struct(0x4bbda0,-1,"Go_structField");
	set_name(0x4bbdb8,"sync.poolLocalInternal.shared", 0x800);
	create_struct(0x4bbdb8,-1,"Go_structField");
	set_name(0x4bfd90,"map.bucket[uint32][]*runtime._type.topbits", 0x800);
	create_struct(0x4bfd90,-1,"Go_structField");
	set_name(0x4bfda8,"map.bucket[uint32][]*runtime._type.keys", 0x800);
	create_struct(0x4bfda8,-1,"Go_structField");
	set_name(0x4bfdc0,"map.bucket[uint32][]*runtime._type.elems", 0x800);
	create_struct(0x4bfdc0,-1,"Go_structField");
	set_name(0x4bfdd8,"map.bucket[uint32][]*runtime._type.overflow", 0x800);
	create_struct(0x4bfdd8,-1,"Go_structField");
	set_name(0x4c3da0,"sync.Pool.noCopy", 0x800);
	create_struct(0x4c3da0,-1,"Go_structField");
	set_name(0x4c3db8,"sync.Pool.local", 0x800);
	create_struct(0x4c3db8,-1,"Go_structField");
	set_name(0x4c3dd0,"sync.Pool.localSize", 0x800);
	create_struct(0x4c3dd0,-1,"Go_structField");
	set_name(0x4c3de8,"sync.Pool.victim", 0x800);
	create_struct(0x4c3de8,-1,"Go_structField");
	set_name(0x4c3e00,"sync.Pool.victimSize", 0x800);
	create_struct(0x4c3e00,-1,"Go_structField");
	set_name(0x4c3e18,"sync.Pool.New", 0x800);
	create_struct(0x4c3e18,-1,"Go_structField");
	set_name(0x4be5a0,"runtime.itabTableType.size", 0x800);
	create_struct(0x4be5a0,-1,"Go_structField");
	set_name(0x4be5b8,"runtime.itabTableType.count", 0x800);
	create_struct(0x4be5b8,-1,"Go_structField");
	set_name(0x4be5d0,"runtime.itabTableType.entries", 0x800);
	create_struct(0x4be5d0,-1,"Go_structField");
	set_name(0x4c75a0,"runtime.sudog.g", 0x800);
	create_struct(0x4c75a0,-1,"Go_structField");
	set_name(0x4c75b8,"runtime.sudog.isSelect", 0x800);
	create_struct(0x4c75b8,-1,"Go_structField");
	set_name(0x4c75d0,"runtime.sudog.next", 0x800);
	create_struct(0x4c75d0,-1,"Go_structField");
	set_name(0x4c75e8,"runtime.sudog.prev", 0x800);
	create_struct(0x4c75e8,-1,"Go_structField");
	set_name(0x4c7600,"runtime.sudog.elem", 0x800);
	create_struct(0x4c7600,-1,"Go_structField");
	set_name(0x4c7618,"runtime.sudog.acquiretime", 0x800);
	create_struct(0x4c7618,-1,"Go_structField");
	set_name(0x4c7630,"runtime.sudog.releasetime", 0x800);
	create_struct(0x4c7630,-1,"Go_structField");
	set_name(0x4c7648,"runtime.sudog.ticket", 0x800);
	create_struct(0x4c7648,-1,"Go_structField");
	set_name(0x4c7660,"runtime.sudog.parent", 0x800);
	create_struct(0x4c7660,-1,"Go_structField");
	set_name(0x4c7678,"runtime.sudog.waitlink", 0x800);
	create_struct(0x4c7678,-1,"Go_structField");
	set_name(0x4c7690,"runtime.sudog.waittail", 0x800);
	create_struct(0x4c7690,-1,"Go_structField");
	set_name(0x4c76a8,"runtime.sudog.c", 0x800);
	create_struct(0x4c76a8,-1,"Go_structField");
	set_name(0x4c15a0,"sync.Map.mu", 0x800);
	create_struct(0x4c15a0,-1,"Go_structField");
	set_name(0x4c15b8,"sync.Map.read", 0x800);
	create_struct(0x4c15b8,-1,"Go_structField");
	set_name(0x4c15d0,"sync.Map.dirty", 0x800);
	create_struct(0x4c15d0,-1,"Go_structField");
	set_name(0x4c15e8,"sync.Map.misses", 0x800);
	create_struct(0x4c15e8,-1,"Go_structField");
	set_name(0x4b9dc0,"poll.ioSrvReq.o", 0x800);
	create_struct(0x4b9dc0,-1,"Go_structField");
	set_name(0x4b9dd8,"poll.ioSrvReq.submit", 0x800);
	create_struct(0x4b9dd8,-1,"Go_structField");
	set_name(0x4c35c0,"runtime.boundsError.x", 0x800);
	create_struct(0x4c35c0,-1,"Go_structField");
	set_name(0x4c35d8,"runtime.boundsError.y", 0x800);
	create_struct(0x4c35d8,-1,"Go_structField");
	set_name(0x4c35f0,"runtime.boundsError.signed", 0x800);
	create_struct(0x4c35f0,-1,"Go_structField");
	set_name(0x4c3608,"runtime.boundsError.code", 0x800);
	create_struct(0x4c3608,-1,"Go_structField");
	set_name(0x4c2de0,"runtime.mOS.threadLock", 0x800);
	create_struct(0x4c2de0,-1,"Go_structField");
	set_name(0x4c2df8,"runtime.mOS.thread", 0x800);
	create_struct(0x4c2df8,-1,"Go_structField");
	set_name(0x4c2e10,"runtime.mOS.waitsema", 0x800);
	create_struct(0x4c2e10,-1,"Go_structField");
	set_name(0x4c2e28,"runtime.mOS.resumesema", 0x800);
	create_struct(0x4c2e28,-1,"Go_structField");
	set_name(0x4c2e40,"runtime.mOS.preemptExtLock", 0x800);
	create_struct(0x4c2e40,-1,"Go_structField");
	set_name(0x4b7de0,"runtime.note.key", 0x800);
	create_struct(0x4b7de0,-1,"Go_structField");
	set_name(0x4ba5e0,"reflect.stringHeader.Data", 0x800);
	create_struct(0x4ba5e0,-1,"Go_structField");
	set_name(0x4ba5f8,"reflect.stringHeader.Len", 0x800);
	create_struct(0x4ba5f8,-1,"Go_structField");
	set_name(0x4bede0,"strconv.extFloat.mant", 0x800);
	create_struct(0x4bede0,-1,"Go_structField");
	set_name(0x4bedf8,"strconv.extFloat.exp", 0x800);
	create_struct(0x4bedf8,-1,"Go_structField");
	set_name(0x4bee10,"strconv.extFloat.neg", 0x800);
	create_struct(0x4bee10,-1,"Go_structField");
	set_name(0x4bd5e0,"os.File.file", 0x800);
	create_struct(0x4bd5e0,-1,"Go_structField");
	set_name(0x4c4de0,"runtime.timer.pp", 0x800);
	create_struct(0x4c4de0,-1,"Go_structField");
	set_name(0x4c4df8,"runtime.timer.when", 0x800);
	create_struct(0x4c4df8,-1,"Go_structField");
	set_name(0x4c4e10,"runtime.timer.period", 0x800);
	create_struct(0x4c4e10,-1,"Go_structField");
	set_name(0x4c4e28,"runtime.timer.f", 0x800);
	create_struct(0x4c4e28,-1,"Go_structField");
	set_name(0x4c4e40,"runtime.timer.arg", 0x800);
	create_struct(0x4c4e40,-1,"Go_structField");
	set_name(0x4c4e58,"runtime.timer.seq", 0x800);
	create_struct(0x4c4e58,-1,"Go_structField");
	set_name(0x4c4e70,"runtime.timer.nextwhen", 0x800);
	create_struct(0x4c4e70,-1,"Go_structField");
	set_name(0x4c4e88,"runtime.timer.status", 0x800);
	create_struct(0x4c4e88,-1,"Go_structField");
	set_name(0x4bae00,"runtime.persistentAlloc.base", 0x800);
	create_struct(0x4bae00,-1,"Go_structField");
	set_name(0x4bae18,"runtime.persistentAlloc.off", 0x800);
	create_struct(0x4bae18,-1,"Go_structField");
	set_name(0x4c4600,"runtime.gobuf.sp", 0x800);
	create_struct(0x4c4600,-1,"Go_structField");
	set_name(0x4c4618,"runtime.gobuf.pc", 0x800);
	create_struct(0x4c4618,-1,"Go_structField");
	set_name(0x4c4630,"runtime.gobuf.g", 0x800);
	create_struct(0x4c4630,-1,"Go_structField");
	set_name(0x4c4648,"runtime.gobuf.ctxt", 0x800);
	create_struct(0x4c4648,-1,"Go_structField");
	set_name(0x4c4660,"runtime.gobuf.ret", 0x800);
	create_struct(0x4c4660,-1,"Go_structField");
	set_name(0x4c4678,"runtime.gobuf.lr", 0x800);
	create_struct(0x4c4678,-1,"Go_structField");
	set_name(0x4c4690,"runtime.gobuf.bp", 0x800);
	create_struct(0x4c4690,-1,"Go_structField");
	set_name(0x4c2600,"reflect.layoutType.t", 0x800);
	create_struct(0x4c2600,-1,"Go_structField");
	set_name(0x4c2618,"reflect.layoutType.argSize", 0x800);
	create_struct(0x4c2618,-1,"Go_structField");
	set_name(0x4c2630,"reflect.layoutType.retOffset", 0x800);
	create_struct(0x4c2630,-1,"Go_structField");
	set_name(0x4c2648,"reflect.layoutType.stack", 0x800);
	create_struct(0x4c2648,-1,"Go_structField");
	set_name(0x4c2660,"reflect.layoutType.framePool", 0x800);
	create_struct(0x4c2660,-1,"Go_structField");
	set_name(0x4c6e20,"runtime.mcache.next_sample", 0x800);
	create_struct(0x4c6e20,-1,"Go_structField");
	set_name(0x4c6e38,"runtime.mcache.local_scan", 0x800);
	create_struct(0x4c6e38,-1,"Go_structField");
	set_name(0x4c6e50,"runtime.mcache.tiny", 0x800);
	create_struct(0x4c6e50,-1,"Go_structField");
	set_name(0x4c6e68,"runtime.mcache.tinyoffset", 0x800);
	create_struct(0x4c6e68,-1,"Go_structField");
	set_name(0x4c6e80,"runtime.mcache.local_tinyallocs", 0x800);
	create_struct(0x4c6e80,-1,"Go_structField");
	set_name(0x4c6e98,"runtime.mcache.alloc", 0x800);
	create_struct(0x4c6e98,-1,"Go_structField");
	set_name(0x4c6eb0,"runtime.mcache.stackcache", 0x800);
	create_struct(0x4c6eb0,-1,"Go_structField");
	set_name(0x4c6ec8,"runtime.mcache.local_largefree", 0x800);
	create_struct(0x4c6ec8,-1,"Go_structField");
	set_name(0x4c6ee0,"runtime.mcache.local_nlargefree", 0x800);
	create_struct(0x4c6ee0,-1,"Go_structField");
	set_name(0x4c6ef8,"runtime.mcache.local_nsmallfree", 0x800);
	create_struct(0x4c6ef8,-1,"Go_structField");
	set_name(0x4c6f10,"runtime.mcache.flushGen", 0x800);
	create_struct(0x4c6f10,-1,"Go_structField");
	set_name(0x4bf610,"map.bucket[int32]unsafe.Pointer.topbits", 0x800);
	create_struct(0x4bf610,-1,"Go_structField");
	set_name(0x4bf628,"map.bucket[int32]unsafe.Pointer.keys", 0x800);
	create_struct(0x4bf628,-1,"Go_structField");
	set_name(0x4bf640,"map.bucket[int32]unsafe.Pointer.elems", 0x800);
	create_struct(0x4bf640,-1,"Go_structField");
	set_name(0x4bf658,"map.bucket[int32]unsafe.Pointer.overflow", 0x800);
	create_struct(0x4bf658,-1,"Go_structField");
	set_name(0x4bb620,"runtime.stringStruct.str", 0x800);
	create_struct(0x4bb620,-1,"Go_structField");
	set_name(0x4bb638,"runtime.stringStruct.len", 0x800);
	create_struct(0x4bb638,-1,"Go_structField");
	set_name(0x4c0e20,"runtime.cgoTracebackArg.context", 0x800);
	create_struct(0x4c0e20,-1,"Go_structField");
	set_name(0x4c0e38,"runtime.cgoTracebackArg.sigContext", 0x800);
	create_struct(0x4c0e38,-1,"Go_structField");
	set_name(0x4c0e50,"runtime.cgoTracebackArg.buf", 0x800);
	create_struct(0x4c0e50,-1,"Go_structField");
	set_name(0x4c0e68,"runtime.cgoTracebackArg.max", 0x800);
	create_struct(0x4c0e68,-1,"Go_structField");
	set_name(0x4bde20,"reflect.structType.rtype", 0x800);
	create_struct(0x4bde20,-1,"Go_structField");
	set_name(0x4bde38,"reflect.structType.pkgPath", 0x800);
	create_struct(0x4bde38,-1,"Go_structField");
	set_name(0x4bde50,"reflect.structType.fields", 0x800);
	create_struct(0x4bde50,-1,"Go_structField");
	set_name(0x4c8620,"cpu.x86._", 0x800);
	create_struct(0x4c8620,-1,"Go_structField");
	set_name(0x4c8638,"cpu.x86.HasAES", 0x800);
	create_struct(0x4c8638,-1,"Go_structField");
	set_name(0x4c8650,"cpu.x86.HasADX", 0x800);
	create_struct(0x4c8650,-1,"Go_structField");
	set_name(0x4c8668,"cpu.x86.HasAVX", 0x800);
	create_struct(0x4c8668,-1,"Go_structField");
	set_name(0x4c8680,"cpu.x86.HasAVX2", 0x800);
	create_struct(0x4c8680,-1,"Go_structField");
	set_name(0x4c8698,"cpu.x86.HasBMI1", 0x800);
	create_struct(0x4c8698,-1,"Go_structField");
	set_name(0x4c86b0,"cpu.x86.HasBMI2", 0x800);
	create_struct(0x4c86b0,-1,"Go_structField");
	set_name(0x4c86c8,"cpu.x86.HasERMS", 0x800);
	create_struct(0x4c86c8,-1,"Go_structField");
	set_name(0x4c86e0,"cpu.x86.HasFMA", 0x800);
	create_struct(0x4c86e0,-1,"Go_structField");
	set_name(0x4c86f8,"cpu.x86.HasOSXSAVE", 0x800);
	create_struct(0x4c86f8,-1,"Go_structField");
	set_name(0x4c8710,"cpu.x86.HasPCLMULQDQ", 0x800);
	create_struct(0x4c8710,-1,"Go_structField");
	set_name(0x4c8728,"cpu.x86.HasPOPCNT", 0x800);
	create_struct(0x4c8728,-1,"Go_structField");
	set_name(0x4c8740,"cpu.x86.HasSSE2", 0x800);
	create_struct(0x4c8740,-1,"Go_structField");
	set_name(0x4c8758,"cpu.x86.HasSSE3", 0x800);
	create_struct(0x4c8758,-1,"Go_structField");
	set_name(0x4c8770,"cpu.x86.HasSSSE3", 0x800);
	create_struct(0x4c8770,-1,"Go_structField");
	set_name(0x4c8788,"cpu.x86.HasSSE41", 0x800);
	create_struct(0x4c8788,-1,"Go_structField");
	set_name(0x4c87a0,"cpu.x86.HasSSE42", 0x800);
	create_struct(0x4c87a0,-1,"Go_structField");
	set_name(0x4c87b8,"cpu.x86._", 0x800);
	create_struct(0x4c87b8,-1,"Go_structField");
	set_name(0x4bbe40,"sync.readOnly.m", 0x800);
	create_struct(0x4bbe40,-1,"Go_structField");
	set_name(0x4bbe58,"sync.readOnly.amended", 0x800);
	create_struct(0x4bbe58,-1,"Go_structField");
	set_name(0x4c1660,"syscall.LazyProc.mu", 0x800);
	create_struct(0x4c1660,-1,"Go_structField");
	set_name(0x4c1678,"syscall.LazyProc.Name", 0x800);
	create_struct(0x4c1678,-1,"Go_structField");
	set_name(0x4c1690,"syscall.LazyProc.l", 0x800);
	create_struct(0x4c1690,-1,"Go_structField");
	set_name(0x4c16a8,"syscall.LazyProc.proc", 0x800);
	create_struct(0x4c16a8,-1,"Go_structField");
	set_name(0x4b9e60,"reflect.MapIter.m", 0x800);
	create_struct(0x4b9e60,-1,"Go_structField");
	set_name(0x4b9e78,"reflect.MapIter.it", 0x800);
	create_struct(0x4b9e78,-1,"Go_structField");
	set_name(0x4c5e60,"runtime.stkframe.fn", 0x800);
	create_struct(0x4c5e60,-1,"Go_structField");
	set_name(0x4c5e78,"runtime.stkframe.pc", 0x800);
	create_struct(0x4c5e78,-1,"Go_structField");
	set_name(0x4c5e90,"runtime.stkframe.continpc", 0x800);
	create_struct(0x4c5e90,-1,"Go_structField");
	set_name(0x4c5ea8,"runtime.stkframe.lr", 0x800);
	create_struct(0x4c5ea8,-1,"Go_structField");
	set_name(0x4c5ec0,"runtime.stkframe.sp", 0x800);
	create_struct(0x4c5ec0,-1,"Go_structField");
	set_name(0x4c5ed8,"runtime.stkframe.fp", 0x800);
	create_struct(0x4c5ed8,-1,"Go_structField");
	set_name(0x4c5ef0,"runtime.stkframe.varp", 0x800);
	create_struct(0x4c5ef0,-1,"Go_structField");
	set_name(0x4c5f08,"runtime.stkframe.argp", 0x800);
	create_struct(0x4c5f08,-1,"Go_structField");
	set_name(0x4c5f20,"runtime.stkframe.arglen", 0x800);
	create_struct(0x4c5f20,-1,"Go_structField");
	set_name(0x4c5f38,"runtime.stkframe.argmap", 0x800);
	create_struct(0x4c5f38,-1,"Go_structField");
	set_name(0x4be660,"runtime.linearAlloc.next", 0x800);
	create_struct(0x4be660,-1,"Go_structField");
	set_name(0x4be678,"runtime.linearAlloc.mapped", 0x800);
	create_struct(0x4be678,-1,"Go_structField");
	set_name(0x4be690,"runtime.linearAlloc.end", 0x800);
	create_struct(0x4be690,-1,"Go_structField");
	set_name(0x4bfe50,"map.bucket[unsafe.Pointer]int32.topbits", 0x800);
	create_struct(0x4bfe50,-1,"Go_structField");
	set_name(0x4bfe68,"map.bucket[unsafe.Pointer]int32.keys", 0x800);
	create_struct(0x4bfe68,-1,"Go_structField");
	set_name(0x4bfe80,"map.bucket[unsafe.Pointer]int32.elems", 0x800);
	create_struct(0x4bfe80,-1,"Go_structField");
	set_name(0x4bfe98,"map.bucket[unsafe.Pointer]int32.overflow", 0x800);
	create_struct(0x4bfe98,-1,"Go_structField");
	set_name(0x4b7e60,"runtime.pcvalueCache.entries", 0x800);
	create_struct(0x4b7e60,-1,"Go_structField");
	set_name(0x4ba680,"runtime._typePair.t1", 0x800);
	create_struct(0x4ba680,-1,"Go_structField");
	set_name(0x4ba698,"runtime._typePair.t2", 0x800);
	create_struct(0x4ba698,-1,"Go_structField");
	set_name(0x4c5680,"runtime.fixalloc.size", 0x800);
	create_struct(0x4c5680,-1,"Go_structField");
	set_name(0x4c5698,"runtime.fixalloc.first", 0x800);
	create_struct(0x4c5698,-1,"Go_structField");
	set_name(0x4c56b0,"runtime.fixalloc.arg", 0x800);
	create_struct(0x4c56b0,-1,"Go_structField");
	set_name(0x4c56c8,"runtime.fixalloc.list", 0x800);
	create_struct(0x4c56c8,-1,"Go_structField");
	set_name(0x4c56e0,"runtime.fixalloc.chunk", 0x800);
	create_struct(0x4c56e0,-1,"Go_structField");
	set_name(0x4c56f8,"runtime.fixalloc.nchunk", 0x800);
	create_struct(0x4c56f8,-1,"Go_structField");
	set_name(0x4c5710,"runtime.fixalloc.inuse", 0x800);
	create_struct(0x4c5710,-1,"Go_structField");
	set_name(0x4c5728,"runtime.fixalloc.stat", 0x800);
	create_struct(0x4c5728,-1,"Go_structField");
	set_name(0x4c5740,"runtime.fixalloc.zero", 0x800);
	create_struct(0x4c5740,-1,"Go_structField");
	set_name(0x4beea0,"strconv.floatInfo.mantbits", 0x800);
	create_struct(0x4beea0,-1,"Go_structField");
	set_name(0x4beeb8,"strconv.floatInfo.expbits", 0x800);
	create_struct(0x4beeb8,-1,"Go_structField");
	set_name(0x4beed0,"strconv.floatInfo.bias", 0x800);
	create_struct(0x4beed0,-1,"Go_structField");
	set_name(0x4c66a0,"reflectlite.rtype.size", 0x800);
	create_struct(0x4c66a0,-1,"Go_structField");
	set_name(0x4c66b8,"reflectlite.rtype.ptrdata", 0x800);
	create_struct(0x4c66b8,-1,"Go_structField");
	set_name(0x4c66d0,"reflectlite.rtype.hash", 0x800);
	create_struct(0x4c66d0,-1,"Go_structField");
	set_name(0x4c66e8,"reflectlite.rtype.tflag", 0x800);
	create_struct(0x4c66e8,-1,"Go_structField");
	set_name(0x4c6700,"reflectlite.rtype.align", 0x800);
	create_struct(0x4c6700,-1,"Go_structField");
	set_name(0x4c6718,"reflectlite.rtype.fieldAlign", 0x800);
	create_struct(0x4c6718,-1,"Go_structField");
	set_name(0x4c6730,"reflectlite.rtype.kind", 0x800);
	create_struct(0x4c6730,-1,"Go_structField");
	set_name(0x4c6748,"reflectlite.rtype.equal", 0x800);
	create_struct(0x4c6748,-1,"Go_structField");
	set_name(0x4c6760,"reflectlite.rtype.gcdata", 0x800);
	create_struct(0x4c6760,-1,"Go_structField");
	set_name(0x4c6778,"reflectlite.rtype.str", 0x800);
	create_struct(0x4c6778,-1,"Go_structField");
	set_name(0x4c6790,"reflectlite.rtype.ptrToThis", 0x800);
	create_struct(0x4c6790,-1,"Go_structField");
	set_name(0x4baea0,"runtime.pollCache.lock", 0x800);
	create_struct(0x4baea0,-1,"Go_structField");
	set_name(0x4baeb8,"runtime.pollCache.first", 0x800);
	create_struct(0x4baeb8,-1,"Go_structField");
	set_name(0x4bb6c0,"runtime.traceAlloc.head", 0x800);
	create_struct(0x4bb6c0,-1,"Go_structField");
	set_name(0x4bb6d8,"runtime.traceAlloc.off", 0x800);
	create_struct(0x4bb6d8,-1,"Go_structField");
	set_name(0x4c2ec0,"runtime.mcentral.lock", 0x800);
	create_struct(0x4c2ec0,-1,"Go_structField");
	set_name(0x4c2ed8,"runtime.mcentral.spanclass", 0x800);
	create_struct(0x4c2ed8,-1,"Go_structField");
	set_name(0x4c2ef0,"runtime.mcentral.nonempty", 0x800);
	create_struct(0x4c2ef0,-1,"Go_structField");
	set_name(0x4c2f08,"runtime.mcentral.empty", 0x800);
	create_struct(0x4c2f08,-1,"Go_structField");
	set_name(0x4c2f20,"runtime.mcentral.nmalloc", 0x800);
	create_struct(0x4c2f20,-1,"Go_structField");
	set_name(0x4bf6d0,"map.bucket[int]string.topbits", 0x800);
	create_struct(0x4bf6d0,-1,"Go_structField");
	set_name(0x4bf6e8,"map.bucket[int]string.keys", 0x800);
	create_struct(0x4bf6e8,-1,"Go_structField");
	set_name(0x4bf700,"map.bucket[int]string.elems", 0x800);
	create_struct(0x4bf700,-1,"Go_structField");
	set_name(0x4bf718,"map.bucket[int]string.overflow", 0x800);
	create_struct(0x4bf718,-1,"Go_structField");
	set_name(0x4c26e0,"reflect.methodValue.fn", 0x800);
	create_struct(0x4c26e0,-1,"Go_structField");
	set_name(0x4c26f8,"reflect.methodValue.stack", 0x800);
	create_struct(0x4c26f8,-1,"Go_structField");
	set_name(0x4c2710,"reflect.methodValue.argLen", 0x800);
	create_struct(0x4c2710,-1,"Go_structField");
	set_name(0x4c2728,"reflect.methodValue.method", 0x800);
	create_struct(0x4c2728,-1,"Go_structField");
	set_name(0x4c2740,"reflect.methodValue.rcvr", 0x800);
	create_struct(0x4c2740,-1,"Go_structField");
	set_name(0x4c0ee0,"runtime.divMagic.shift", 0x800);
	create_struct(0x4c0ee0,-1,"Go_structField");
	set_name(0x4c0ef8,"runtime.divMagic.shift2", 0x800);
	create_struct(0x4c0ef8,-1,"Go_structField");
	set_name(0x4c0f10,"runtime.divMagic.mul", 0x800);
	create_struct(0x4c0f10,-1,"Go_structField");
	set_name(0x4c0f28,"runtime.divMagic.baseMask", 0x800);
	create_struct(0x4c0f28,-1,"Go_structField");
	set_name(0x4bdee0,"runtime.Frames.callers", 0x800);
	create_struct(0x4bdee0,-1,"Go_structField");
	set_name(0x4bdef8,"runtime.Frames.frames", 0x800);
	create_struct(0x4bdef8,-1,"Go_structField");
	set_name(0x4bdf10,"runtime.Frames.frameStore", 0x800);
	create_struct(0x4bdf10,-1,"Go_structField");
	set_name(0x4bbee0,"syscall.DLL.Name", 0x800);
	create_struct(0x4bbee0,-1,"Go_structField");
	set_name(0x4bbef8,"syscall.DLL.Handle", 0x800);
	create_struct(0x4bbef8,-1,"Go_structField");
	set_name(0x4b9f00,"reflect.ValueError.Method", 0x800);
	create_struct(0x4b9f00,-1,"Go_structField");
	set_name(0x4b9f18,"reflect.ValueError.Kind", 0x800);
	create_struct(0x4b9f18,-1,"Go_structField");
	set_name(0x4ba720,"runtime.addrRanges.ranges", 0x800);
	create_struct(0x4ba720,-1,"Go_structField");
	set_name(0x4ba738,"runtime.addrRanges.sysStat", 0x800);
	create_struct(0x4ba738,-1,"Go_structField");
	set_name(0x4be720,"runtime.mapextra.overflow", 0x800);
	create_struct(0x4be720,-1,"Go_structField");
	set_name(0x4be738,"runtime.mapextra.oldoverflow", 0x800);
	create_struct(0x4be738,-1,"Go_structField");
	set_name(0x4be750,"runtime.mapextra.nextOverflow", 0x800);
	create_struct(0x4be750,-1,"Go_structField");
	set_name(0x4c4720,"runtime.rwmutex.rLock", 0x800);
	create_struct(0x4c4720,-1,"Go_structField");
	set_name(0x4c4738,"runtime.rwmutex.readers", 0x800);
	create_struct(0x4c4738,-1,"Go_structField");
	set_name(0x4c4750,"runtime.rwmutex.readerPass", 0x800);
	create_struct(0x4c4750,-1,"Go_structField");
	set_name(0x4c4768,"runtime.rwmutex.wLock", 0x800);
	create_struct(0x4c4768,-1,"Go_structField");
	set_name(0x4c4780,"runtime.rwmutex.writer", 0x800);
	create_struct(0x4c4780,-1,"Go_structField");
	set_name(0x4c4798,"runtime.rwmutex.readerCount", 0x800);
	create_struct(0x4c4798,-1,"Go_structField");
	set_name(0x4c47b0,"runtime.rwmutex.readerWait", 0x800);
	create_struct(0x4c47b0,-1,"Go_structField");
	set_name(0x4c7720,"runtime.pollDesc.link", 0x800);
	create_struct(0x4c7720,-1,"Go_structField");
	set_name(0x4c7738,"runtime.pollDesc.lock", 0x800);
	create_struct(0x4c7738,-1,"Go_structField");
	set_name(0x4c7750,"runtime.pollDesc.fd", 0x800);
	create_struct(0x4c7750,-1,"Go_structField");
	set_name(0x4c7768,"runtime.pollDesc.closing", 0x800);
	create_struct(0x4c7768,-1,"Go_structField");
	set_name(0x4c7780,"runtime.pollDesc.everr", 0x800);
	create_struct(0x4c7780,-1,"Go_structField");
	set_name(0x4c7798,"runtime.pollDesc.user", 0x800);
	create_struct(0x4c7798,-1,"Go_structField");
	set_name(0x4c77b0,"runtime.pollDesc.rseq", 0x800);
	create_struct(0x4c77b0,-1,"Go_structField");
	set_name(0x4c77c8,"runtime.pollDesc.rg", 0x800);
	create_struct(0x4c77c8,-1,"Go_structField");
	set_name(0x4c77e0,"runtime.pollDesc.rt", 0x800);
	create_struct(0x4c77e0,-1,"Go_structField");
	set_name(0x4c77f8,"runtime.pollDesc.rd", 0x800);
	create_struct(0x4c77f8,-1,"Go_structField");
	set_name(0x4c7810,"runtime.pollDesc.wseq", 0x800);
	create_struct(0x4c7810,-1,"Go_structField");
	set_name(0x4c7828,"runtime.pollDesc.wg", 0x800);
	create_struct(0x4c7828,-1,"Go_structField");
	set_name(0x4c7840,"runtime.pollDesc.wt", 0x800);
	create_struct(0x4c7840,-1,"Go_structField");
	set_name(0x4c7858,"runtime.pollDesc.wd", 0x800);
	create_struct(0x4c7858,-1,"Go_structField");
	set_name(0x4baf40,"runtime.ptabEntry.name", 0x800);
	create_struct(0x4baf40,-1,"Go_structField");
	set_name(0x4baf58,"runtime.ptabEntry.typ", 0x800);
	create_struct(0x4baf58,-1,"Go_structField");
	set_name(0x4b7f60,"sync.entry.p", 0x800);
	create_struct(0x4b7f60,-1,"Go_structField");
	set_name(0x4bef60,"sync.poolChainElt.poolDequeue", 0x800);
	create_struct(0x4bef60,-1,"Go_structField");
	set_name(0x4bef78,"sync.poolChainElt.next", 0x800);
	create_struct(0x4bef78,-1,"Go_structField");
	set_name(0x4bef90,"sync.poolChainElt.prev", 0x800);
	create_struct(0x4bef90,-1,"Go_structField");
	set_name(0x4bb760,"runtime.waitq.first", 0x800);
	create_struct(0x4bb760,-1,"Go_structField");
	set_name(0x4bb778,"runtime.waitq.last", 0x800);
	create_struct(0x4bb778,-1,"Go_structField");
	set_name(0x4bbf80,"syscall.Filetime.LowDateTime", 0x800);
	create_struct(0x4bbf80,-1,"Go_structField");
	set_name(0x4bbf98,"syscall.Filetime.HighDateTime", 0x800);
	create_struct(0x4bbf98,-1,"Go_structField");
	set_name(0x4c0fa0,"runtime.evacDst.b", 0x800);
	create_struct(0x4c0fa0,-1,"Go_structField");
	set_name(0x4c0fb8,"runtime.evacDst.i", 0x800);
	create_struct(0x4c0fb8,-1,"Go_structField");
	set_name(0x4c0fd0,"runtime.evacDst.k", 0x800);
	create_struct(0x4c0fd0,-1,"Go_structField");
	set_name(0x4c0fe8,"runtime.evacDst.e", 0x800);
	create_struct(0x4c0fe8,-1,"Go_structField");
	set_name(0x4c37a0,"reflect.name.bytes", 0x800);
	create_struct(0x4c37a0,-1,"Go_structField");
	set_name(0x4bdfa0,"runtime.ancestorInfo.pcs", 0x800);
	create_struct(0x4bdfa0,-1,"Go_structField");
	set_name(0x4bdfb8,"runtime.ancestorInfo.goid", 0x800);
	create_struct(0x4bdfb8,-1,"Go_structField");
	set_name(0x4bdfd0,"runtime.ancestorInfo.gopc", 0x800);
	create_struct(0x4bdfd0,-1,"Go_structField");
	set_name(0x4c6fa0,"runtime.pageAlloc.summary", 0x800);
	create_struct(0x4c6fa0,-1,"Go_structField");
	set_name(0x4c6fb8,"runtime.pageAlloc.chunks", 0x800);
	create_struct(0x4c6fb8,-1,"Go_structField");
	set_name(0x4c6fd0,"runtime.pageAlloc.searchAddr", 0x800);
	create_struct(0x4c6fd0,-1,"Go_structField");
	set_name(0x4c6fe8,"runtime.pageAlloc.scavAddr", 0x800);
	create_struct(0x4c6fe8,-1,"Go_structField");
	set_name(0x4c7000,"runtime.pageAlloc.scavReleased", 0x800);
	create_struct(0x4c7000,-1,"Go_structField");
	set_name(0x4c7018,"runtime.pageAlloc.start", 0x800);
	create_struct(0x4c7018,-1,"Go_structField");
	set_name(0x4c7030,"runtime.pageAlloc.end", 0x800);
	create_struct(0x4c7030,-1,"Go_structField");
	set_name(0x4c7048,"runtime.pageAlloc.inUse", 0x800);
	create_struct(0x4c7048,-1,"Go_structField");
	set_name(0x4c7060,"runtime.pageAlloc.mheapLock", 0x800);
	create_struct(0x4c7060,-1,"Go_structField");
	set_name(0x4c7078,"runtime.pageAlloc.sysStat", 0x800);
	create_struct(0x4c7078,-1,"Go_structField");
	set_name(0x4c7090,"runtime.pageAlloc.test", 0x800);
	create_struct(0x4c7090,-1,"Go_structField");
	set_name(0x4c2fa0,"runtime.net_op.o", 0x800);
	create_struct(0x4c2fa0,-1,"Go_structField");
	set_name(0x4c2fb8,"runtime.net_op.pd", 0x800);
	create_struct(0x4c2fb8,-1,"Go_structField");
	set_name(0x4c2fd0,"runtime.net_op.mode", 0x800);
	create_struct(0x4c2fd0,-1,"Go_structField");
	set_name(0x4c2fe8,"runtime.net_op.errno", 0x800);
	create_struct(0x4c2fe8,-1,"Go_structField");
	set_name(0x4c3000,"runtime.net_op.qty", 0x800);
	create_struct(0x4c3000,-1,"Go_structField");
	set_name(0x4bf790,"map.bucket[interface {}]*sync.entry.topbits", 0x800);
	create_struct(0x4bf790,-1,"Go_structField");
	set_name(0x4bf7a8,"map.bucket[interface {}]*sync.entry.keys", 0x800);
	create_struct(0x4bf7a8,-1,"Go_structField");
	set_name(0x4bf7c0,"map.bucket[interface {}]*sync.entry.elems", 0x800);
	create_struct(0x4bf7c0,-1,"Go_structField");
	set_name(0x4bf7d8,"map.bucket[interface {}]*sync.entry.overflow", 0x800);
	create_struct(0x4bf7d8,-1,"Go_structField");
	set_name(0x4b9fa0,"reflect.bitVector.n", 0x800);
	create_struct(0x4b9fa0,-1,"Go_structField");
	set_name(0x4b9fb8,"reflect.bitVector.data", 0x800);
	create_struct(0x4b9fb8,-1,"Go_structField");
	set_name(0x4c27c0,"reflect.uncommonType.pkgPath", 0x800);
	create_struct(0x4c27c0,-1,"Go_structField");
	set_name(0x4c27d8,"reflect.uncommonType.mcount", 0x800);
	create_struct(0x4c27d8,-1,"Go_structField");
	set_name(0x4c27f0,"reflect.uncommonType.xcount", 0x800);
	create_struct(0x4c27f0,-1,"Go_structField");
	set_name(0x4c2808,"reflect.uncommonType.moff", 0x800);
	create_struct(0x4c2808,-1,"Go_structField");
	set_name(0x4c2820,"reflect.uncommonType._", 0x800);
	create_struct(0x4c2820,-1,"Go_structField");
	set_name(0x4cc7c0,"runtime.mstats.alloc", 0x800);
	create_struct(0x4cc7c0,-1,"Go_structField");
	set_name(0x4cc7d8,"runtime.mstats.total_alloc", 0x800);
	create_struct(0x4cc7d8,-1,"Go_structField");
	set_name(0x4cc7f0,"runtime.mstats.sys", 0x800);
	create_struct(0x4cc7f0,-1,"Go_structField");
	set_name(0x4cc808,"runtime.mstats.nlookup", 0x800);
	create_struct(0x4cc808,-1,"Go_structField");
	set_name(0x4cc820,"runtime.mstats.nmalloc", 0x800);
	create_struct(0x4cc820,-1,"Go_structField");
	set_name(0x4cc838,"runtime.mstats.nfree", 0x800);
	create_struct(0x4cc838,-1,"Go_structField");
	set_name(0x4cc850,"runtime.mstats.heap_alloc", 0x800);
	create_struct(0x4cc850,-1,"Go_structField");
	set_name(0x4cc868,"runtime.mstats.heap_sys", 0x800);
	create_struct(0x4cc868,-1,"Go_structField");
	set_name(0x4cc880,"runtime.mstats.heap_idle", 0x800);
	create_struct(0x4cc880,-1,"Go_structField");
	set_name(0x4cc898,"runtime.mstats.heap_inuse", 0x800);
	create_struct(0x4cc898,-1,"Go_structField");
	set_name(0x4cc8b0,"runtime.mstats.heap_released", 0x800);
	create_struct(0x4cc8b0,-1,"Go_structField");
	set_name(0x4cc8c8,"runtime.mstats.heap_objects", 0x800);
	create_struct(0x4cc8c8,-1,"Go_structField");
	set_name(0x4cc8e0,"runtime.mstats.stacks_inuse", 0x800);
	create_struct(0x4cc8e0,-1,"Go_structField");
	set_name(0x4cc8f8,"runtime.mstats.stacks_sys", 0x800);
	create_struct(0x4cc8f8,-1,"Go_structField");
	set_name(0x4cc910,"runtime.mstats.mspan_inuse", 0x800);
	create_struct(0x4cc910,-1,"Go_structField");
	set_name(0x4cc928,"runtime.mstats.mspan_sys", 0x800);
	create_struct(0x4cc928,-1,"Go_structField");
	set_name(0x4cc940,"runtime.mstats.mcache_inuse", 0x800);
	create_struct(0x4cc940,-1,"Go_structField");
	set_name(0x4cc958,"runtime.mstats.mcache_sys", 0x800);
	create_struct(0x4cc958,-1,"Go_structField");
	set_name(0x4cc970,"runtime.mstats.buckhash_sys", 0x800);
	create_struct(0x4cc970,-1,"Go_structField");
	set_name(0x4cc988,"runtime.mstats.gc_sys", 0x800);
	create_struct(0x4cc988,-1,"Go_structField");
	set_name(0x4cc9a0,"runtime.mstats.other_sys", 0x800);
	create_struct(0x4cc9a0,-1,"Go_structField");
	set_name(0x4cc9b8,"runtime.mstats.next_gc", 0x800);
	create_struct(0x4cc9b8,-1,"Go_structField");
	set_name(0x4cc9d0,"runtime.mstats.last_gc_unix", 0x800);
	create_struct(0x4cc9d0,-1,"Go_structField");
	set_name(0x4cc9e8,"runtime.mstats.pause_total_ns", 0x800);
	create_struct(0x4cc9e8,-1,"Go_structField");
	set_name(0x4cca00,"runtime.mstats.pause_ns", 0x800);
	create_struct(0x4cca00,-1,"Go_structField");
	set_name(0x4cca18,"runtime.mstats.pause_end", 0x800);
	create_struct(0x4cca18,-1,"Go_structField");
	set_name(0x4cca30,"runtime.mstats.numgc", 0x800);
	create_struct(0x4cca30,-1,"Go_structField");
	set_name(0x4cca48,"runtime.mstats.numforcedgc", 0x800);
	create_struct(0x4cca48,-1,"Go_structField");
	set_name(0x4cca60,"runtime.mstats.gc_cpu_fraction", 0x800);
	create_struct(0x4cca60,-1,"Go_structField");
	set_name(0x4cca78,"runtime.mstats.enablegc", 0x800);
	create_struct(0x4cca78,-1,"Go_structField");
	set_name(0x4cca90,"runtime.mstats.debuggc", 0x800);
	create_struct(0x4cca90,-1,"Go_structField");
	set_name(0x4ccaa8,"runtime.mstats.by_size", 0x800);
	create_struct(0x4ccaa8,-1,"Go_structField");
	set_name(0x4ccac0,"runtime.mstats.last_gc_nanotime", 0x800);
	create_struct(0x4ccac0,-1,"Go_structField");
	set_name(0x4ccad8,"runtime.mstats.tinyallocs", 0x800);
	create_struct(0x4ccad8,-1,"Go_structField");
	set_name(0x4ccaf0,"runtime.mstats.last_next_gc", 0x800);
	create_struct(0x4ccaf0,-1,"Go_structField");
	set_name(0x4ccb08,"runtime.mstats.last_heap_inuse", 0x800);
	create_struct(0x4ccb08,-1,"Go_structField");
	set_name(0x4ccb20,"runtime.mstats.triggerRatio", 0x800);
	create_struct(0x4ccb20,-1,"Go_structField");
	set_name(0x4ccb38,"runtime.mstats.gc_trigger", 0x800);
	create_struct(0x4ccb38,-1,"Go_structField");
	set_name(0x4ccb50,"runtime.mstats.heap_live", 0x800);
	create_struct(0x4ccb50,-1,"Go_structField");
	set_name(0x4ccb68,"runtime.mstats.heap_scan", 0x800);
	create_struct(0x4ccb68,-1,"Go_structField");
	set_name(0x4ccb80,"runtime.mstats.heap_marked", 0x800);
	create_struct(0x4ccb80,-1,"Go_structField");
	set_name(0x4cdfc0,"runtime.m.g0", 0x800);
	create_struct(0x4cdfc0,-1,"Go_structField");
	set_name(0x4cdfd8,"runtime.m.morebuf", 0x800);
	create_struct(0x4cdfd8,-1,"Go_structField");
	set_name(0x4cdff0,"runtime.m.divmod", 0x800);
	create_struct(0x4cdff0,-1,"Go_structField");
	set_name(0x4ce008,"runtime.m.procid", 0x800);
	create_struct(0x4ce008,-1,"Go_structField");
	set_name(0x4ce020,"runtime.m.gsignal", 0x800);
	create_struct(0x4ce020,-1,"Go_structField");
	set_name(0x4ce038,"runtime.m.goSigStack", 0x800);
	create_struct(0x4ce038,-1,"Go_structField");
	set_name(0x4ce050,"runtime.m.sigmask", 0x800);
	create_struct(0x4ce050,-1,"Go_structField");
	set_name(0x4ce068,"runtime.m.tls", 0x800);
	create_struct(0x4ce068,-1,"Go_structField");
	set_name(0x4ce080,"runtime.m.mstartfn", 0x800);
	create_struct(0x4ce080,-1,"Go_structField");
	set_name(0x4ce098,"runtime.m.curg", 0x800);
	create_struct(0x4ce098,-1,"Go_structField");
	set_name(0x4ce0b0,"runtime.m.caughtsig", 0x800);
	create_struct(0x4ce0b0,-1,"Go_structField");
	set_name(0x4ce0c8,"runtime.m.p", 0x800);
	create_struct(0x4ce0c8,-1,"Go_structField");
	set_name(0x4ce0e0,"runtime.m.nextp", 0x800);
	create_struct(0x4ce0e0,-1,"Go_structField");
	set_name(0x4ce0f8,"runtime.m.oldp", 0x800);
	create_struct(0x4ce0f8,-1,"Go_structField");
	set_name(0x4ce110,"runtime.m.id", 0x800);
	create_struct(0x4ce110,-1,"Go_structField");
	set_name(0x4ce128,"runtime.m.mallocing", 0x800);
	create_struct(0x4ce128,-1,"Go_structField");
	set_name(0x4ce140,"runtime.m.throwing", 0x800);
	create_struct(0x4ce140,-1,"Go_structField");
	set_name(0x4ce158,"runtime.m.preemptoff", 0x800);
	create_struct(0x4ce158,-1,"Go_structField");
	set_name(0x4ce170,"runtime.m.locks", 0x800);
	create_struct(0x4ce170,-1,"Go_structField");
	set_name(0x4ce188,"runtime.m.dying", 0x800);
	create_struct(0x4ce188,-1,"Go_structField");
	set_name(0x4ce1a0,"runtime.m.profilehz", 0x800);
	create_struct(0x4ce1a0,-1,"Go_structField");
	set_name(0x4ce1b8,"runtime.m.spinning", 0x800);
	create_struct(0x4ce1b8,-1,"Go_structField");
	set_name(0x4ce1d0,"runtime.m.blocked", 0x800);
	create_struct(0x4ce1d0,-1,"Go_structField");
	set_name(0x4ce1e8,"runtime.m.newSigstack", 0x800);
	create_struct(0x4ce1e8,-1,"Go_structField");
	set_name(0x4ce200,"runtime.m.printlock", 0x800);
	create_struct(0x4ce200,-1,"Go_structField");
	set_name(0x4ce218,"runtime.m.incgo", 0x800);
	create_struct(0x4ce218,-1,"Go_structField");
	set_name(0x4ce230,"runtime.m.freeWait", 0x800);
	create_struct(0x4ce230,-1,"Go_structField");
	set_name(0x4ce248,"runtime.m.fastrand", 0x800);
	create_struct(0x4ce248,-1,"Go_structField");
	set_name(0x4ce260,"runtime.m.needextram", 0x800);
	create_struct(0x4ce260,-1,"Go_structField");
	set_name(0x4ce278,"runtime.m.traceback", 0x800);
	create_struct(0x4ce278,-1,"Go_structField");
	set_name(0x4ce290,"runtime.m.ncgocall", 0x800);
	create_struct(0x4ce290,-1,"Go_structField");
	set_name(0x4ce2a8,"runtime.m.ncgo", 0x800);
	create_struct(0x4ce2a8,-1,"Go_structField");
	set_name(0x4ce2c0,"runtime.m.cgoCallersUse", 0x800);
	create_struct(0x4ce2c0,-1,"Go_structField");
	set_name(0x4ce2d8,"runtime.m.cgoCallers", 0x800);
	create_struct(0x4ce2d8,-1,"Go_structField");
	set_name(0x4ce2f0,"runtime.m.park", 0x800);
	create_struct(0x4ce2f0,-1,"Go_structField");
	set_name(0x4ce308,"runtime.m.alllink", 0x800);
	create_struct(0x4ce308,-1,"Go_structField");
	set_name(0x4ce320,"runtime.m.schedlink", 0x800);
	create_struct(0x4ce320,-1,"Go_structField");
	set_name(0x4ce338,"runtime.m.mcache", 0x800);
	create_struct(0x4ce338,-1,"Go_structField");
	set_name(0x4ce350,"runtime.m.lockedg", 0x800);
	create_struct(0x4ce350,-1,"Go_structField");
	set_name(0x4ce368,"runtime.m.createstack", 0x800);
	create_struct(0x4ce368,-1,"Go_structField");
	set_name(0x4ce380,"runtime.m.lockedExt", 0x800);
	create_struct(0x4ce380,-1,"Go_structField");
	set_name(0x4ce398,"runtime.m.lockedInt", 0x800);
	create_struct(0x4ce398,-1,"Go_structField");
	set_name(0x4ce3b0,"runtime.m.nextwaitm", 0x800);
	create_struct(0x4ce3b0,-1,"Go_structField");
	set_name(0x4ce3c8,"runtime.m.waitunlockf", 0x800);
	create_struct(0x4ce3c8,-1,"Go_structField");
	set_name(0x4ce3e0,"runtime.m.waitlock", 0x800);
	create_struct(0x4ce3e0,-1,"Go_structField");
	set_name(0x4ce3f8,"runtime.m.waittraceev", 0x800);
	create_struct(0x4ce3f8,-1,"Go_structField");
	set_name(0x4ce410,"runtime.m.waittraceskip", 0x800);
	create_struct(0x4ce410,-1,"Go_structField");
	set_name(0x4ce428,"runtime.m.startingtrace", 0x800);
	create_struct(0x4ce428,-1,"Go_structField");
	set_name(0x4ce440,"runtime.m.syscalltick", 0x800);
	create_struct(0x4ce440,-1,"Go_structField");
	set_name(0x4ce458,"runtime.m.freelink", 0x800);
	create_struct(0x4ce458,-1,"Go_structField");
	set_name(0x4ce470,"runtime.m.libcall", 0x800);
	create_struct(0x4ce470,-1,"Go_structField");
	set_name(0x4ce488,"runtime.m.libcallpc", 0x800);
	create_struct(0x4ce488,-1,"Go_structField");
	set_name(0x4ce4a0,"runtime.m.libcallsp", 0x800);
	create_struct(0x4ce4a0,-1,"Go_structField");
	set_name(0x4ce4b8,"runtime.m.libcallg", 0x800);
	create_struct(0x4ce4b8,-1,"Go_structField");
	set_name(0x4ce4d0,"runtime.m.syscall", 0x800);
	create_struct(0x4ce4d0,-1,"Go_structField");
	set_name(0x4ce4e8,"runtime.m.vdsoSP", 0x800);
	create_struct(0x4ce4e8,-1,"Go_structField");
	set_name(0x4ce500,"runtime.m.vdsoPC", 0x800);
	create_struct(0x4ce500,-1,"Go_structField");
	set_name(0x4ce518,"runtime.m.preemptGen", 0x800);
	create_struct(0x4ce518,-1,"Go_structField");
	set_name(0x4ce530,"runtime.m.dlogPerM", 0x800);
	create_struct(0x4ce530,-1,"Go_structField");
	set_name(0x4ce548,"runtime.m.mOS", 0x800);
	create_struct(0x4ce548,-1,"Go_structField");
	set_name(0x4c5fc0,"runtime.systeminfo.anon0", 0x800);
	create_struct(0x4c5fc0,-1,"Go_structField");
	set_name(0x4c5fd8,"runtime.systeminfo.dwpagesize", 0x800);
	create_struct(0x4c5fd8,-1,"Go_structField");
	set_name(0x4c5ff0,"runtime.systeminfo.lpminimumapplicationaddress", 0x800);
	create_struct(0x4c5ff0,-1,"Go_structField");
	set_name(0x4c6008,"runtime.systeminfo.lpmaximumapplicationaddress", 0x800);
	create_struct(0x4c6008,-1,"Go_structField");
	set_name(0x4c6020,"runtime.systeminfo.dwactiveprocessormask", 0x800);
	create_struct(0x4c6020,-1,"Go_structField");
	set_name(0x4c6038,"runtime.systeminfo.dwnumberofprocessors", 0x800);
	create_struct(0x4c6038,-1,"Go_structField");
	set_name(0x4c6050,"runtime.systeminfo.dwprocessortype", 0x800);
	create_struct(0x4c6050,-1,"Go_structField");
	set_name(0x4c6068,"runtime.systeminfo.dwallocationgranularity", 0x800);
	create_struct(0x4c6068,-1,"Go_structField");
	set_name(0x4c6080,"runtime.systeminfo.wprocessorlevel", 0x800);
	create_struct(0x4c6080,-1,"Go_structField");
	set_name(0x4c6098,"runtime.systeminfo.wprocessorrevision", 0x800);
	create_struct(0x4c6098,-1,"Go_structField");
	set_name(0x4c57c0,"runtime.hmap.count", 0x800);
	create_struct(0x4c57c0,-1,"Go_structField");
	set_name(0x4c57d8,"runtime.hmap.flags", 0x800);
	create_struct(0x4c57d8,-1,"Go_structField");
	set_name(0x4c57f0,"runtime.hmap.B", 0x800);
	create_struct(0x4c57f0,-1,"Go_structField");
	set_name(0x4c5808,"runtime.hmap.noverflow", 0x800);
	create_struct(0x4c5808,-1,"Go_structField");
	set_name(0x4c5820,"runtime.hmap.hash0", 0x800);
	create_struct(0x4c5820,-1,"Go_structField");
	set_name(0x4c5838,"runtime.hmap.buckets", 0x800);
	create_struct(0x4c5838,-1,"Go_structField");
	set_name(0x4c5850,"runtime.hmap.oldbuckets", 0x800);
	create_struct(0x4c5850,-1,"Go_structField");
	set_name(0x4c5868,"runtime.hmap.nevacuate", 0x800);
	create_struct(0x4c5868,-1,"Go_structField");
	set_name(0x4c5880,"runtime.hmap.extra", 0x800);
	create_struct(0x4c5880,-1,"Go_structField");
	set_name(0x4ba7c0,"runtime.bitvector.n", 0x800);
	create_struct(0x4ba7c0,-1,"Go_structField");
	set_name(0x4ba7d8,"runtime.bitvector.bytedata", 0x800);
	create_struct(0x4ba7d8,-1,"Go_structField");
	set_name(0x4be7e0,"runtime.modulehash.modulename", 0x800);
	create_struct(0x4be7e0,-1,"Go_structField");
	set_name(0x4be7f8,"runtime.modulehash.linktimehash", 0x800);
	create_struct(0x4be7f8,-1,"Go_structField");
	set_name(0x4be810,"runtime.modulehash.runtimehash", 0x800);
	create_struct(0x4be810,-1,"Go_structField");
	set_name(0x4cbfe0,"runtime.mheap.lock", 0x800);
	create_struct(0x4cbfe0,-1,"Go_structField");
	set_name(0x4cbff8,"runtime.mheap.pages", 0x800);
	create_struct(0x4cbff8,-1,"Go_structField");
	set_name(0x4cc010,"runtime.mheap.sweepgen", 0x800);
	create_struct(0x4cc010,-1,"Go_structField");
	set_name(0x4cc028,"runtime.mheap.sweepdone", 0x800);
	create_struct(0x4cc028,-1,"Go_structField");
	set_name(0x4cc040,"runtime.mheap.sweepers", 0x800);
	create_struct(0x4cc040,-1,"Go_structField");
	set_name(0x4cc058,"runtime.mheap.allspans", 0x800);
	create_struct(0x4cc058,-1,"Go_structField");
	set_name(0x4cc070,"runtime.mheap.sweepSpans", 0x800);
	create_struct(0x4cc070,-1,"Go_structField");
	set_name(0x4cc088,"runtime.mheap.pagesInUse", 0x800);
	create_struct(0x4cc088,-1,"Go_structField");
	set_name(0x4cc0a0,"runtime.mheap.pagesSwept", 0x800);
	create_struct(0x4cc0a0,-1,"Go_structField");
	set_name(0x4cc0b8,"runtime.mheap.pagesSweptBasis", 0x800);
	create_struct(0x4cc0b8,-1,"Go_structField");
	set_name(0x4cc0d0,"runtime.mheap.sweepHeapLiveBasis", 0x800);
	create_struct(0x4cc0d0,-1,"Go_structField");
	set_name(0x4cc0e8,"runtime.mheap.sweepPagesPerByte", 0x800);
	create_struct(0x4cc0e8,-1,"Go_structField");
	set_name(0x4cc100,"runtime.mheap.scavengeGoal", 0x800);
	create_struct(0x4cc100,-1,"Go_structField");
	set_name(0x4cc118,"runtime.mheap.reclaimIndex", 0x800);
	create_struct(0x4cc118,-1,"Go_structField");
	set_name(0x4cc130,"runtime.mheap.reclaimCredit", 0x800);
	create_struct(0x4cc130,-1,"Go_structField");
	set_name(0x4cc148,"runtime.mheap.largealloc", 0x800);
	create_struct(0x4cc148,-1,"Go_structField");
	set_name(0x4cc160,"runtime.mheap.nlargealloc", 0x800);
	create_struct(0x4cc160,-1,"Go_structField");
	set_name(0x4cc178,"runtime.mheap.largefree", 0x800);
	create_struct(0x4cc178,-1,"Go_structField");
	set_name(0x4cc190,"runtime.mheap.nlargefree", 0x800);
	create_struct(0x4cc190,-1,"Go_structField");
	set_name(0x4cc1a8,"runtime.mheap.nsmallfree", 0x800);
	create_struct(0x4cc1a8,-1,"Go_structField");
	set_name(0x4cc1c0,"runtime.mheap.arenas", 0x800);
	create_struct(0x4cc1c0,-1,"Go_structField");
	set_name(0x4cc1d8,"runtime.mheap.heapArenaAlloc", 0x800);
	create_struct(0x4cc1d8,-1,"Go_structField");
	set_name(0x4cc1f0,"runtime.mheap.arenaHints", 0x800);
	create_struct(0x4cc1f0,-1,"Go_structField");
	set_name(0x4cc208,"runtime.mheap.arena", 0x800);
	create_struct(0x4cc208,-1,"Go_structField");
	set_name(0x4cc220,"runtime.mheap.allArenas", 0x800);
	create_struct(0x4cc220,-1,"Go_structField");
	set_name(0x4cc238,"runtime.mheap.sweepArenas", 0x800);
	create_struct(0x4cc238,-1,"Go_structField");
	set_name(0x4cc250,"runtime.mheap.curArena", 0x800);
	create_struct(0x4cc250,-1,"Go_structField");
	set_name(0x4cc268,"runtime.mheap._", 0x800);
	create_struct(0x4cc268,-1,"Go_structField");
	set_name(0x4cc280,"runtime.mheap.central", 0x800);
	create_struct(0x4cc280,-1,"Go_structField");
	set_name(0x4cc298,"runtime.mheap.spanalloc", 0x800);
	create_struct(0x4cc298,-1,"Go_structField");
	set_name(0x4cc2b0,"runtime.mheap.cachealloc", 0x800);
	create_struct(0x4cc2b0,-1,"Go_structField");
	set_name(0x4cc2c8,"runtime.mheap.specialfinalizeralloc", 0x800);
	create_struct(0x4cc2c8,-1,"Go_structField");
	set_name(0x4cc2e0,"runtime.mheap.specialprofilealloc", 0x800);
	create_struct(0x4cc2e0,-1,"Go_structField");
	set_name(0x4cc2f8,"runtime.mheap.speciallock", 0x800);
	create_struct(0x4cc2f8,-1,"Go_structField");
	set_name(0x4cc310,"runtime.mheap.arenaHintAlloc", 0x800);
	create_struct(0x4cc310,-1,"Go_structField");
	set_name(0x4cc328,"runtime.mheap.unused", 0x800);
	create_struct(0x4cc328,-1,"Go_structField");
	set_name(0x4b7fe0,"atomic.Value.v", 0x800);
	create_struct(0x4b7fe0,-1,"Go_structField");
	set_name(0x4bafe0,"runtime.ptrtype.typ", 0x800);
	create_struct(0x4bafe0,-1,"Go_structField");
	set_name(0x4baff8,"runtime.ptrtype.elem", 0x800);
	create_struct(0x4baff8,-1,"Go_structField");
	set_name(0x4bb800,"runtime.workbuf.workbufhdr", 0x800);
	create_struct(0x4bb800,-1,"Go_structField");
	set_name(0x4bb818,"runtime.workbuf.obj", 0x800);
	create_struct(0x4bb818,-1,"Go_structField");
	set_name(0x4bf020,"syscall.DLLError.Err", 0x800);
	create_struct(0x4bf020,-1,"Go_structField");
	set_name(0x4bf038,"syscall.DLLError.ObjName", 0x800);
	create_struct(0x4bf038,-1,"Go_structField");
	set_name(0x4bf050,"syscall.DLLError.Msg", 0x800);
	create_struct(0x4bf050,-1,"Go_structField");
	set_name(0x4bc020,"syscall.RawSockaddr.Family", 0x800);
	create_struct(0x4bc020,-1,"Go_structField");
	set_name(0x4bc038,"syscall.RawSockaddr.Data", 0x800);
	create_struct(0x4bc038,-1,"Go_structField");
	set_name(0x4c6820,"reflect.rtype.size", 0x800);
	create_struct(0x4c6820,-1,"Go_structField");
	set_name(0x4c6838,"reflect.rtype.ptrdata", 0x800);
	create_struct(0x4c6838,-1,"Go_structField");
	set_name(0x4c6850,"reflect.rtype.hash", 0x800);
	create_struct(0x4c6850,-1,"Go_structField");
	set_name(0x4c6868,"reflect.rtype.tflag", 0x800);
	create_struct(0x4c6868,-1,"Go_structField");
	set_name(0x4c6880,"reflect.rtype.align", 0x800);
	create_struct(0x4c6880,-1,"Go_structField");
	set_name(0x4c6898,"reflect.rtype.fieldAlign", 0x800);
	create_struct(0x4c6898,-1,"Go_structField");
	set_name(0x4c68b0,"reflect.rtype.kind", 0x800);
	create_struct(0x4c68b0,-1,"Go_structField");
	set_name(0x4c68c8,"reflect.rtype.equal", 0x800);
	create_struct(0x4c68c8,-1,"Go_structField");
	set_name(0x4c68e0,"reflect.rtype.gcdata", 0x800);
	create_struct(0x4c68e0,-1,"Go_structField");
	set_name(0x4c68f8,"reflect.rtype.str", 0x800);
	create_struct(0x4c68f8,-1,"Go_structField");
	set_name(0x4c6910,"reflect.rtype.ptrToThis", 0x800);
	create_struct(0x4c6910,-1,"Go_structField");
	set_name(0x4c4840,"syscall.WSAData.Version", 0x800);
	create_struct(0x4c4840,-1,"Go_structField");
	set_name(0x4c4858,"syscall.WSAData.HighVersion", 0x800);
	create_struct(0x4c4858,-1,"Go_structField");
	set_name(0x4c4870,"syscall.WSAData.MaxSockets", 0x800);
	create_struct(0x4c4870,-1,"Go_structField");
	set_name(0x4c4888,"syscall.WSAData.MaxUdpDg", 0x800);
	create_struct(0x4c4888,-1,"Go_structField");
	set_name(0x4c48a0,"syscall.WSAData.VendorInfo", 0x800);
	create_struct(0x4c48a0,-1,"Go_structField");
	set_name(0x4c48b8,"syscall.WSAData.Description", 0x800);
	create_struct(0x4c48b8,-1,"Go_structField");
	set_name(0x4c48d0,"syscall.WSAData.SystemStatus", 0x800);
	create_struct(0x4c48d0,-1,"Go_structField");
	set_name(0x4c8040,"poll.FD.fdmu", 0x800);
	create_struct(0x4c8040,-1,"Go_structField");
	set_name(0x4c8058,"poll.FD.Sysfd", 0x800);
	create_struct(0x4c8058,-1,"Go_structField");
	set_name(0x4c8070,"poll.FD.rop", 0x800);
	create_struct(0x4c8070,-1,"Go_structField");
	set_name(0x4c8088,"poll.FD.wop", 0x800);
	create_struct(0x4c8088,-1,"Go_structField");
	set_name(0x4c80a0,"poll.FD.pd", 0x800);
	create_struct(0x4c80a0,-1,"Go_structField");
	set_name(0x4c80b8,"poll.FD.l", 0x800);
	create_struct(0x4c80b8,-1,"Go_structField");
	set_name(0x4c80d0,"poll.FD.lastbits", 0x800);
	create_struct(0x4c80d0,-1,"Go_structField");
	set_name(0x4c80e8,"poll.FD.readuint16", 0x800);
	create_struct(0x4c80e8,-1,"Go_structField");
	set_name(0x4c8100,"poll.FD.readbyte", 0x800);
	create_struct(0x4c8100,-1,"Go_structField");
	set_name(0x4c8118,"poll.FD.readbyteOffset", 0x800);
	create_struct(0x4c8118,-1,"Go_structField");
	set_name(0x4c8130,"poll.FD.csema", 0x800);
	create_struct(0x4c8130,-1,"Go_structField");
	set_name(0x4c8148,"poll.FD.skipSyncNotif", 0x800);
	create_struct(0x4c8148,-1,"Go_structField");
	set_name(0x4c8160,"poll.FD.IsStream", 0x800);
	create_struct(0x4c8160,-1,"Go_structField");
	set_name(0x4c8178,"poll.FD.ZeroReadIsEOF", 0x800);
	create_struct(0x4c8178,-1,"Go_structField");
	set_name(0x4c8190,"poll.FD.isFile", 0x800);
	create_struct(0x4c8190,-1,"Go_structField");
	set_name(0x4c81a8,"poll.FD.kind", 0x800);
	create_struct(0x4c81a8,-1,"Go_structField");
	set_name(0x4ba040,"reflect.fieldScan.typ", 0x800);
	create_struct(0x4ba040,-1,"Go_structField");
	set_name(0x4ba058,"reflect.fieldScan.index", 0x800);
	create_struct(0x4ba058,-1,"Go_structField");
	set_name(0x4ca058,"*reflect.funcTypeFixed128.uncommonType", 0x800);
	create_struct(0x4ca058,-1,"Go_uncommonType");
	set_name(0x4b4878,"*runtime.itab.uncommonType", 0x800);
	create_struct(0x4b4878,-1,"Go_uncommonType");
	set_name(0x4bc898,"*sync.Pool.uncommonType", 0x800);
	create_struct(0x4bc898,-1,"Go_uncommonType");
	set_name(0x4b6098,"*runtime.funcInfo.uncommonType", 0x800);
	create_struct(0x4b6098,-1,"Go_uncommonType");
	set_name(0x4b9898,"*runtime.wbBuf.uncommonType", 0x800);
	create_struct(0x4b9898,-1,"Go_uncommonType");
	set_name(0x4b6898,"*runtime.wincallbackcontext.uncommonType", 0x800);
	create_struct(0x4b6898,-1,"Go_uncommonType");
	set_name(0x4c08b8,"*sync.entry.uncommonType", 0x800);
	create_struct(0x4c08b8,-1,"Go_uncommonType");
	set_name(0x4b48d8,"*runtime.notInHeap.uncommonType", 0x800);
	create_struct(0x4b48d8,-1,"Go_uncommonType");
	set_name(0x4c70f8,"*fmt.fmt.uncommonType", 0x800);
	create_struct(0x4c70f8,-1,"Go_uncommonType");
	set_name(0x4ca8f8,"*reflect.funcTypeFixed4.uncommonType", 0x800);
	create_struct(0x4ca8f8,-1,"Go_uncommonType");
	set_name(0x4b6118,"*runtime.gcBits.uncommonType", 0x800);
	create_struct(0x4b6118,-1,"Go_uncommonType");
	set_name(0x4b6918,"*runtime.workbuf.uncommonType", 0x800);
	create_struct(0x4b6918,-1,"Go_uncommonType");
	set_name(0x4b4938,"*runtime.stackObject.uncommonType", 0x800);
	create_struct(0x4b4938,-1,"Go_uncommonType");
	set_name(0x4bc938,"*sync.poolChainElt.uncommonType", 0x800);
	create_struct(0x4bc938,-1,"Go_uncommonType");
	set_name(0x4b9938,"*struct { runtime.gList; n int32 }.uncommonType", 0x800);
	create_struct(0x4b9938,-1,"Go_uncommonType");
	set_name(0x4bd978,"*runtime.gQueue.uncommonType", 0x800);
	create_struct(0x4bd978,-1,"Go_uncommonType");
	set_name(0x4c2178,"*runtime.pageBits.uncommonType", 0x800);
	create_struct(0x4c2178,-1,"Go_uncommonType");
	set_name(0x4b6998,"*sync.Once.uncommonType", 0x800);
	create_struct(0x4b6998,-1,"Go_uncommonType");
	set_name(0x4b4998,"*runtime.structfield.uncommonType", 0x800);
	create_struct(0x4b4998,-1,"Go_uncommonType");
	set_name(0x4cb198,"*poll.FD.uncommonType", 0x800);
	create_struct(0x4cb198,-1,"Go_uncommonType");
	set_name(0x4b6198,"*runtime.hchan.uncommonType", 0x800);
	create_struct(0x4b6198,-1,"Go_uncommonType");
	set_name(0x4b91b8,"*fmt.buffer.uncommonType", 0x800);
	create_struct(0x4b91b8,-1,"Go_uncommonType");
	set_name(0x4b71b8,"*fmtsort.SortedMap.uncommonType", 0x800);
	create_struct(0x4b71b8,-1,"Go_uncommonType");
	set_name(0x4b99d8,"*struct { sync.Mutex; m sync.Map }.uncommonType", 0x800);
	create_struct(0x4b99d8,-1,"Go_uncommonType");
	set_name(0x4bc9d8,"*sync.poolDequeue.uncommonType", 0x800);
	create_struct(0x4bc9d8,-1,"Go_uncommonType");
	set_name(0x4b49f8,"*runtime.traceStackPtr.uncommonType", 0x800);
	create_struct(0x4b49f8,-1,"Go_uncommonType");
	set_name(0x4c81f8,"*fmt.pp.uncommonType", 0x800);
	create_struct(0x4c81f8,-1,"Go_uncommonType");
	set_name(0x4b6a18,"*sync.noCopy.uncommonType", 0x800);
	create_struct(0x4b6a18,-1,"Go_uncommonType");
	set_name(0x4b6218,"*runtime.itabTableType.uncommonType", 0x800);
	create_struct(0x4b6218,-1,"Go_uncommonType");
	set_name(0x4c5a18,"*runtime.pageAlloc.uncommonType", 0x800);
	create_struct(0x4c5a18,-1,"Go_uncommonType");
	set_name(0x4b7238,"*poll.TimeoutError.uncommonType", 0x800);
	create_struct(0x4b7238,-1,"Go_uncommonType");
	set_name(0x4bda38,"*runtime.mSpanList.uncommonType", 0x800);
	create_struct(0x4bda38,-1,"Go_uncommonType");
	set_name(0x4c8a58,"*os.File.uncommonType", 0x800);
	create_struct(0x4c8a58,-1,"Go_uncommonType");
	set_name(0x4b9258,"*poll.operation.uncommonType", 0x800);
	create_struct(0x4b9258,-1,"Go_uncommonType");
	set_name(0x4c9258,"*reflect.ptrType.uncommonType", 0x800);
	create_struct(0x4c9258,-1,"Go_uncommonType");
	set_name(0x4c6258,"*runtime.mheap.uncommonType", 0x800);
	create_struct(0x4c6258,-1,"Go_uncommonType");
	set_name(0x4c4a58,"*runtime.pallocData.uncommonType", 0x800);
	create_struct(0x4c4a58,-1,"Go_uncommonType");
	set_name(0x4b4a58,"*runtime.waitReason.uncommonType", 0x800);
	create_struct(0x4b4a58,-1,"Go_uncommonType");
	set_name(0x4b9a78,"*sync.Mutex.uncommonType", 0x800);
	create_struct(0x4b9a78,-1,"Go_uncommonType");
	set_name(0x4b5a98,"*poll.ioSrv.uncommonType", 0x800);
	create_struct(0x4b5a98,-1,"Go_uncommonType");
	set_name(0x4b6a98,"*atomic.Value.uncommonType", 0x800);
	create_struct(0x4b6a98,-1,"Go_uncommonType");
	set_name(0x4b6298,"*runtime.linearAlloc.uncommonType", 0x800);
	create_struct(0x4b6298,-1,"Go_uncommonType");
	set_name(0x4b72b8,"*os.PathError.uncommonType", 0x800);
	create_struct(0x4b72b8,-1,"Go_uncommonType");
	set_name(0x4b4ab8,"*syscall.DLLError.uncommonType", 0x800);
	create_struct(0x4b4ab8,-1,"Go_uncommonType");
	set_name(0x4b92f8,"*runtime.addrRanges.uncommonType", 0x800);
	create_struct(0x4b92f8,-1,"Go_uncommonType");
	set_name(0x4b4b18,"*syscall.Filetime.uncommonType", 0x800);
	create_struct(0x4b4b18,-1,"Go_uncommonType");
	set_name(0x4b5b18,"*reflectlite.uncommonType.uncommonType", 0x800);
	create_struct(0x4b5b18,-1,"Go_uncommonType");
	set_name(0x4b6318,"*runtime.mSpanStateBox.uncommonType", 0x800);
	create_struct(0x4b6318,-1,"Go_uncommonType");
	set_name(0x4b9b18,"*syscall.Errno.uncommonType", 0x800);
	create_struct(0x4b9b18,-1,"Go_uncommonType");
	set_name(0x4b6b18,"*syscall.Proc.uncommonType", 0x800);
	create_struct(0x4b6b18,-1,"Go_uncommonType");
	set_name(0x4ca338,"*reflect.funcTypeFixed16.uncommonType", 0x800);
	create_struct(0x4ca338,-1,"Go_uncommonType");
	set_name(0x4b7338,"*reflect.MapIter.uncommonType", 0x800);
	create_struct(0x4b7338,-1,"Go_uncommonType");
	set_name(0x4b4b78,"*syscall.RawSockaddrAny.uncommonType", 0x800);
	create_struct(0x4b4b78,-1,"Go_uncommonType");
	set_name(0x4b5b98,"*main.custom.uncommonType", 0x800);
	create_struct(0x4b5b98,-1,"Go_uncommonType");
	set_name(0x4b9398,"*runtime.gList.uncommonType", 0x800);
	create_struct(0x4b9398,-1,"Go_uncommonType");
	set_name(0x4b6398,"*runtime.muintptr.uncommonType", 0x800);
	create_struct(0x4b6398,-1,"Go_uncommonType");
	set_name(0x4b9bb8,"*syscall.LazyDLL.uncommonType", 0x800);
	create_struct(0x4b9bb8,-1,"Go_uncommonType");
	set_name(0x4b73b8,"*runtime.addrRange.uncommonType", 0x800);
	create_struct(0x4b73b8,-1,"Go_uncommonType");
	set_name(0x4cabd8,"*reflect.funcTypeFixed64.uncommonType", 0x800);
	create_struct(0x4cabd8,-1,"Go_uncommonType");
	set_name(0x4b5c18,"*os.file.uncommonType", 0x800);
	create_struct(0x4b5c18,-1,"Go_uncommonType");
	set_name(0x4b6418,"*runtime.p.uncommonType", 0x800);
	create_struct(0x4b6418,-1,"Go_uncommonType");
	set_name(0x4bc438,"*poll.fdMutex.uncommonType", 0x800);
	create_struct(0x4bc438,-1,"Go_uncommonType");
	set_name(0x4b9438,"*runtime.gcSweepBuf.uncommonType", 0x800);
	create_struct(0x4b9438,-1,"Go_uncommonType");
	set_name(0x4b7438,"*runtime.bmap.uncommonType", 0x800);
	create_struct(0x4b7438,-1,"Go_uncommonType");
	set_name(0x4b9c58,"*syscall.LazyProc.uncommonType", 0x800);
	create_struct(0x4b9c58,-1,"Go_uncommonType");
	set_name(0x4b5c98,"*reflect.StructTag.uncommonType", 0x800);
	create_struct(0x4b5c98,-1,"Go_uncommonType");
	set_name(0x4b6498,"*runtime.plainError.uncommonType", 0x800);
	create_struct(0x4b6498,-1,"Go_uncommonType");
	set_name(0x4b74b8,"*runtime.bucket.uncommonType", 0x800);
	create_struct(0x4b74b8,-1,"Go_uncommonType");
	set_name(0x4bc4d8,"*runtime.Func.uncommonType", 0x800);
	create_struct(0x4bc4d8,-1,"Go_uncommonType");
	set_name(0x4b94d8,"*runtime.mcache.uncommonType", 0x800);
	create_struct(0x4b94d8,-1,"Go_uncommonType");
	set_name(0x4c04f8,"*reflect.flag.uncommonType", 0x800);
	create_struct(0x4c04f8,-1,"Go_uncommonType");
	set_name(0x4b4518,"*errors.errorString.uncommonType", 0x800);
	create_struct(0x4b4518,-1,"Go_uncommonType");
	set_name(0x4c9518,"*reflect.rtype.uncommonType", 0x800);
	create_struct(0x4c9518,-1,"Go_uncommonType");
	set_name(0x4b5d18,"*reflect.structField.uncommonType", 0x800);
	create_struct(0x4b5d18,-1,"Go_uncommonType");
	set_name(0x4b6518,"*runtime.pollCache.uncommonType", 0x800);
	create_struct(0x4b6518,-1,"Go_uncommonType");
	set_name(0x4b7538,"*runtime.fixalloc.uncommonType", 0x800);
	create_struct(0x4b7538,-1,"Go_uncommonType");
	set_name(0x4cd538,"*reflect.Value.uncommonType", 0x800);
	create_struct(0x4cd538,-1,"Go_uncommonType");
	set_name(0x4bc578,"*runtime.gcControllerState.uncommonType", 0x800);
	create_struct(0x4bc578,-1,"Go_uncommonType");
	set_name(0x4b9578,"*runtime.pageCache.uncommonType", 0x800);
	create_struct(0x4b9578,-1,"Go_uncommonType");
	set_name(0x4b4578,"*reflect.ChanDir.uncommonType", 0x800);
	create_struct(0x4b4578,-1,"Go_uncommonType");
	set_name(0x4c9d78,"*reflect.funcType.uncommonType", 0x800);
	create_struct(0x4c9d78,-1,"Go_uncommonType");
	set_name(0x4b5d98,"*reflect.uncommonType.uncommonType", 0x800);
	create_struct(0x4b5d98,-1,"Go_uncommonType");
	set_name(0x4b6598,"*runtime.puintptr.uncommonType", 0x800);
	create_struct(0x4b6598,-1,"Go_uncommonType");
	set_name(0x4b75b8,"*runtime.guintptr.uncommonType", 0x800);
	create_struct(0x4b75b8,-1,"Go_uncommonType");
	set_name(0x4c05b8,"*reflect.name.uncommonType", 0x800);
	create_struct(0x4c05b8,-1,"Go_uncommonType");
	set_name(0x4b45d8,"*reflect.Kind.uncommonType", 0x800);
	create_struct(0x4b45d8,-1,"Go_uncommonType");
	set_name(0x4b9618,"*runtime.pallocSum.uncommonType", 0x800);
	create_struct(0x4b9618,-1,"Go_uncommonType");
	set_name(0x4b6618,"*runtime.randomOrder.uncommonType", 0x800);
	create_struct(0x4b6618,-1,"Go_uncommonType");
	set_name(0x4ca618,"*reflect.funcTypeFixed32.uncommonType", 0x800);
	create_struct(0x4ca618,-1,"Go_uncommonType");
	set_name(0x4b5e18,"*runtime.TypeAssertionError.uncommonType", 0x800);
	create_struct(0x4b5e18,-1,"Go_uncommonType");
	set_name(0x4bc618,"*runtime.maptype.uncommonType", 0x800);
	create_struct(0x4bc618,-1,"Go_uncommonType");
	set_name(0x4b4638,"*reflect.ValueError.uncommonType", 0x800);
	create_struct(0x4b4638,-1,"Go_uncommonType");
	set_name(0x4b7638,"*runtime.lfstack.uncommonType", 0x800);
	create_struct(0x4b7638,-1,"Go_uncommonType");
	set_name(0x4c7e38,"*reflectlite.rtype.uncommonType", 0x800);
	create_struct(0x4c7e38,-1,"Go_uncommonType");
	set_name(0x4c3e78,"*poll.pollDesc.uncommonType", 0x800);
	create_struct(0x4c3e78,-1,"Go_uncommonType");
	set_name(0x4c3678,"*runtime.gcWork.uncommonType", 0x800);
	create_struct(0x4c3678,-1,"Go_uncommonType");
	set_name(0x4c0678,"*runtime._type.uncommonType", 0x800);
	create_struct(0x4c0678,-1,"Go_uncommonType");
	set_name(0x4b4698,"*reflect.bitVector.uncommonType", 0x800);
	create_struct(0x4b4698,-1,"Go_uncommonType");
	set_name(0x4b5e98,"*runtime.arenaIdx.uncommonType", 0x800);
	create_struct(0x4b5e98,-1,"Go_uncommonType");
	set_name(0x4b6698,"*runtime.spanClass.uncommonType", 0x800);
	create_struct(0x4b6698,-1,"Go_uncommonType");
	set_name(0x4b76b8,"*runtime.waitq.uncommonType", 0x800);
	create_struct(0x4b76b8,-1,"Go_uncommonType");
	set_name(0x4caeb8,"*reflect.funcTypeFixed8.uncommonType", 0x800);
	create_struct(0x4caeb8,-1,"Go_uncommonType");
	set_name(0x4bc6b8,"*runtime.markBits.uncommonType", 0x800);
	create_struct(0x4bc6b8,-1,"Go_uncommonType");
	set_name(0x4b96b8,"*runtime.rwmutex.uncommonType", 0x800);
	create_struct(0x4b96b8,-1,"Go_uncommonType");
	set_name(0x4c4ed8,"*runtime.mspan.uncommonType", 0x800);
	create_struct(0x4c4ed8,-1,"Go_uncommonType");
	set_name(0x4c16f8,"*runtime.name.uncommonType", 0x800);
	create_struct(0x4c16f8,-1,"Go_uncommonType");
	set_name(0x4b46f8,"*runtime.Frames.uncommonType", 0x800);
	create_struct(0x4b46f8,-1,"Go_uncommonType");
	set_name(0x4b5f18,"*runtime.boundsError.uncommonType", 0x800);
	create_struct(0x4b5f18,-1,"Go_uncommonType");
	set_name(0x4b6718,"*runtime.traceAlloc.uncommonType", 0x800);
	create_struct(0x4b6718,-1,"Go_uncommonType");
	set_name(0x4b7738,"*sync.poolChain.uncommonType", 0x800);
	create_struct(0x4b7738,-1,"Go_uncommonType");
	set_name(0x4c0738,"*runtime.hmap.uncommonType", 0x800);
	create_struct(0x4c0738,-1,"Go_uncommonType");
	set_name(0x4b4758,"*runtime.bitvector.uncommonType", 0x800);
	create_struct(0x4b4758,-1,"Go_uncommonType");
	set_name(0x4bc758,"*runtime.mcentral.uncommonType", 0x800);
	create_struct(0x4bc758,-1,"Go_uncommonType");
	set_name(0x4b9758,"*runtime.semaRoot.uncommonType", 0x800);
	create_struct(0x4b9758,-1,"Go_uncommonType");
	set_name(0x4c3f78,"*runtime.pallocBits.uncommonType", 0x800);
	create_struct(0x4c3f78,-1,"Go_uncommonType");
	set_name(0x4b6798,"*runtime.traceAllocBlockPtr.uncommonType", 0x800);
	create_struct(0x4b6798,-1,"Go_uncommonType");
	set_name(0x4b5f98,"*runtime.chunkIdx.uncommonType", 0x800);
	create_struct(0x4b5f98,-1,"Go_uncommonType");
	set_name(0x4b77b8,"*syscall.DLL.uncommonType", 0x800);
	create_struct(0x4b77b8,-1,"Go_uncommonType");
	set_name(0x4b47b8,"*runtime.gcBitsArena.uncommonType", 0x800);
	create_struct(0x4b47b8,-1,"Go_uncommonType");
	set_name(0x4c97d8,"*reflect.structType.uncommonType", 0x800);
	create_struct(0x4c97d8,-1,"Go_uncommonType");
	set_name(0x4c17d8,"*strconv.extFloat.uncommonType", 0x800);
	create_struct(0x4c17d8,-1,"Go_uncommonType");
	set_name(0x4bc7f8,"*runtime.stackScanState.uncommonType", 0x800);
	create_struct(0x4bc7f8,-1,"Go_uncommonType");
	set_name(0x4b97f8,"*runtime.traceStackTable.uncommonType", 0x800);
	create_struct(0x4b97f8,-1,"Go_uncommonType");
	set_name(0x4c07f8,"*sync.Map.uncommonType", 0x800);
	create_struct(0x4c07f8,-1,"Go_uncommonType");
	set_name(0x4b6818,"*runtime.traceBufPtr.uncommonType", 0x800);
	create_struct(0x4b6818,-1,"Go_uncommonType");
	set_name(0x4b6018,"*runtime.errorString.uncommonType", 0x800);
	create_struct(0x4b6018,-1,"Go_uncommonType");
	set_name(0x4b4818,"*runtime.gclinkptr.uncommonType", 0x800);
	create_struct(0x4b4818,-1,"Go_uncommonType");
	set_name(0x4b5850,"runtime.sigset.uncommonType", 0x800);
	create_struct(0x4b5850,-1,"Go_uncommonType");
	set_name(0x4b7850,"errors.errorString.uncommonType", 0x800);
	create_struct(0x4b7850,-1,"Go_uncommonType");
	set_name(0x4b8050,"fmt.State.uncommonType", 0x800);
	create_struct(0x4b8050,-1,"Go_uncommonType");
	set_name(0x4ba850,"runtime.dbgVar.uncommonType", 0x800);
	create_struct(0x4ba850,-1,"Go_uncommonType");
	set_name(0x4c1050,"runtime.overlapped.uncommonType", 0x800);
	create_struct(0x4c1050,-1,"Go_uncommonType");
	set_name(0x4cb850,"runtime.moduledata.uncommonType", 0x800);
	create_struct(0x4cb850,-1,"Go_uncommonType");
	set_name(0x4be050,"runtime.arenaHint.uncommonType", 0x800);
	create_struct(0x4be050,-1,"Go_uncommonType");
	set_name(0x4c3070,"runtime.specialfinalizer.uncommonType", 0x800);
	create_struct(0x4c3070,-1,"Go_uncommonType");
	set_name(0x4ad850,"int.uncommonType", 0x800);
	create_struct(0x4ad850,-1,"Go_uncommonType");
	set_name(0x4bb070,"runtime.randomOrder.uncommonType", 0x800);
	create_struct(0x4bb070,-1,"Go_uncommonType");
	set_name(0x4ae050,"uint.uncommonType", 0x800);
	create_struct(0x4ae050,-1,"Go_uncommonType");
	set_name(0x4be890,"runtime.notInHeapSlice.uncommonType", 0x800);
	create_struct(0x4be890,-1,"Go_uncommonType");
	set_name(0x4c2890,"runtime.finalizer.uncommonType", 0x800);
	create_struct(0x4c2890,-1,"Go_uncommonType");
	set_name(0x4c3890,"runtime.markBits.uncommonType", 0x800);
	create_struct(0x4c3890,-1,"Go_uncommonType");
	set_name(0x4bb890,"runtime.workbufhdr.uncommonType", 0x800);
	create_struct(0x4bb890,-1,"Go_uncommonType");
	set_name(0x4cd090,"runtime.g.uncommonType", 0x800);
	create_struct(0x4cd090,-1,"Go_uncommonType");
	set_name(0x4b4070,"runtime.gclinkptr.uncommonType", 0x800);
	create_struct(0x4b4070,-1,"Go_uncommonType");
	set_name(0x4ae090,"uint16.uncommonType", 0x800);
	create_struct(0x4ae090,-1,"Go_uncommonType");
	set_name(0x4c20b0,"main.custom.uncommonType", 0x800);
	create_struct(0x4c20b0,-1,"Go_uncommonType");
	set_name(0x4bc0b0,"syscall.RawSockaddrAny.uncommonType", 0x800);
	create_struct(0x4bc0b0,-1,"Go_uncommonType");
	set_name(0x4ad890,"int16.uncommonType", 0x800);
	create_struct(0x4ad890,-1,"Go_uncommonType");
	set_name(0x4b5890,"runtime.spanClass.uncommonType", 0x800);
	create_struct(0x4b5890,-1,"Go_uncommonType");
	set_name(0x4bf0d0,"syscall.LazyDLL.uncommonType", 0x800);
	create_struct(0x4bf0d0,-1,"Go_uncommonType");
	set_name(0x4ba0d0,"reflect.funcTypeFixed128.uncommonType", 0x800);
	create_struct(0x4ba0d0,-1,"Go_uncommonType");
	set_name(0x4b78d0,"cpu.CacheLinePad.uncommonType", 0x800);
	create_struct(0x4b78d0,-1,"Go_uncommonType");
	set_name(0x4ba8f0,"runtime.eface.uncommonType", 0x800);
	create_struct(0x4ba8f0,-1,"Go_uncommonType");
	set_name(0x4c58f0,"runtime.maptype.uncommonType", 0x800);
	create_struct(0x4c58f0,-1,"Go_uncommonType");
	set_name(0x4ad8d0,"int32.uncommonType", 0x800);
	create_struct(0x4ad8d0,-1,"Go_uncommonType");
	set_name(0x4ae0d0,"uint32.uncommonType", 0x800);
	create_struct(0x4ae0d0,-1,"Go_uncommonType");
	set_name(0x4b40d0,"runtime.guintptr.uncommonType", 0x800);
	create_struct(0x4b40d0,-1,"Go_uncommonType");
	set_name(0x4bb110,"runtime.stack.uncommonType", 0x800);
	create_struct(0x4bb110,-1,"Go_uncommonType");
	set_name(0x4b5910,"sync.noCopy.uncommonType", 0x800);
	create_struct(0x4b5910,-1,"Go_uncommonType");
	set_name(0x4c1110,"runtime.overlappedEntry.uncommonType", 0x800);
	create_struct(0x4c1110,-1,"Go_uncommonType");
	set_name(0x4be110,"runtime.callbacks.uncommonType", 0x800);
	create_struct(0x4be110,-1,"Go_uncommonType");
	set_name(0x4c6110,"syscall.Win32finddata.uncommonType", 0x800);
	create_struct(0x4c6110,-1,"Go_uncommonType");
	set_name(0x4bb930,"strconv.leftCheat.uncommonType", 0x800);
	create_struct(0x4bb930,-1,"Go_uncommonType");
	set_name(0x4ae110,"uint64.uncommonType", 0x800);
	create_struct(0x4ae110,-1,"Go_uncommonType");
	set_name(0x4ad910,"int64.uncommonType", 0x800);
	create_struct(0x4ad910,-1,"Go_uncommonType");
	set_name(0x4be950,"runtime.pageCache.uncommonType", 0x800);
	create_struct(0x4be950,-1,"Go_uncommonType");
	set_name(0x4b7950,"poll.ioSrv.uncommonType", 0x800);
	create_struct(0x4b7950,-1,"Go_uncommonType");
	set_name(0x4c3150,"runtime.stackObject.uncommonType", 0x800);
	create_struct(0x4c3150,-1,"Go_uncommonType");
	set_name(0x4b4130,"runtime.muintptr.uncommonType", 0x800);
	create_struct(0x4b4130,-1,"Go_uncommonType");
	set_name(0x4bc150,"syscall.WSABuf.uncommonType", 0x800);
	create_struct(0x4bc150,-1,"Go_uncommonType");
	set_name(0x4c0130,"reflect.flag.uncommonType", 0x800);
	create_struct(0x4c0130,-1,"Go_uncommonType");
	set_name(0x4b9130,"syscall.Errno.uncommonType", 0x800);
	create_struct(0x4b9130,-1,"Go_uncommonType");
	set_name(0x4ba170,"reflect.funcTypeFixed16.uncommonType", 0x800);
	create_struct(0x4ba170,-1,"Go_uncommonType");
	set_name(0x4ae150,"uint8.uncommonType", 0x800);
	create_struct(0x4ae150,-1,"Go_uncommonType");
	set_name(0x4ad950,"int8.uncommonType", 0x800);
	create_struct(0x4ad950,-1,"Go_uncommonType");
	set_name(0x4b3958,"runtime.sliceInterfacePtr.uncommonType", 0x800);
	create_struct(0x4b3958,-1,"Go_uncommonType");
	set_name(0x4c2970,"runtime.finblock.uncommonType", 0x800);
	create_struct(0x4c2970,-1,"Go_uncommonType");
	set_name(0x4c0990,"reflectlite.Type.uncommonType", 0x800);
	create_struct(0x4c0990,-1,"Go_uncommonType");
	set_name(0x4c3990,"windows.WSAMsg.uncommonType", 0x800);
	create_struct(0x4c3990,-1,"Go_uncommonType");
	set_name(0x4c6990,"runtime._func.uncommonType", 0x800);
	create_struct(0x4c6990,-1,"Go_uncommonType");
	set_name(0x4ba990,"runtime.functab.uncommonType", 0x800);
	create_struct(0x4ba990,-1,"Go_uncommonType");
	set_name(0x4bf190,"syscall.Proc.uncommonType", 0x800);
	create_struct(0x4bf190,-1,"Go_uncommonType");
	set_name(0x4c4190,"runtime.name.uncommonType", 0x800);
	create_struct(0x4c4190,-1,"Go_uncommonType");
	set_name(0x4b4190,"runtime.puintptr.uncommonType", 0x800);
	create_struct(0x4b4190,-1,"Go_uncommonType");
	set_name(0x4ad990,"poll.fileKind.uncommonType", 0x800);
	create_struct(0x4ad990,-1,"Go_uncommonType");
	set_name(0x4ae190,"uintptr.uncommonType", 0x800);
	create_struct(0x4ae190,-1,"Go_uncommonType");
	set_name(0x4bb1b0,"runtime.stackObjectBuf.uncommonType", 0x800);
	create_struct(0x4bb1b0,-1,"Go_uncommonType");
	set_name(0x4c11d0,"runtime.sysmontick.uncommonType", 0x800);
	create_struct(0x4c11d0,-1,"Go_uncommonType");
	set_name(0x4be1d0,"runtime.cgothreadstart.uncommonType", 0x800);
	create_struct(0x4be1d0,-1,"Go_uncommonType");
	set_name(0x4bb9d0,"sync.Mutex.uncommonType", 0x800);
	create_struct(0x4bb9d0,-1,"Go_uncommonType");
	set_name(0x4b89b0,"runtime.pallocSum.uncommonType", 0x800);
	create_struct(0x4b89b0,-1,"Go_uncommonType");
	set_name(0x4b79d0,"poll.pollDesc.uncommonType", 0x800);
	create_struct(0x4b79d0,-1,"Go_uncommonType");
	set_name(0x4bc1f0,"time.abbr.uncommonType", 0x800);
	create_struct(0x4bc1f0,-1,"Go_uncommonType");
	set_name(0x4ad9d0,"reflectlite.Kind.uncommonType", 0x800);
	create_struct(0x4ad9d0,-1,"Go_uncommonType");
	set_name(0x4ae1d0,"unsafe.Pointer.uncommonType", 0x800);
	create_struct(0x4ae1d0,-1,"Go_uncommonType");
	set_name(0x4c0210,"runtime.funcInfo.uncommonType", 0x800);
	create_struct(0x4c0210,-1,"Go_uncommonType");
	set_name(0x4ba210,"reflect.funcTypeFixed32.uncommonType", 0x800);
	create_struct(0x4ba210,-1,"Go_uncommonType");
	set_name(0x4bea10,"runtime.pcvalueCacheEnt.uncommonType", 0x800);
	create_struct(0x4bea10,-1,"Go_uncommonType");
	set_name(0x4b41f0,"runtime.traceAllocBlockPtr.uncommonType", 0x800);
	create_struct(0x4b41f0,-1,"Go_uncommonType");
	set_name(0x4c3230,"syscall.Overlapped.uncommonType", 0x800);
	create_struct(0x4c3230,-1,"Go_uncommonType");
	set_name(0x4ada10,"reflectlite.nameOff.uncommonType", 0x800);
	create_struct(0x4ada10,-1,"Go_uncommonType");
	set_name(0x4baa30,"runtime.gQueue.uncommonType", 0x800);
	create_struct(0x4baa30,-1,"Go_uncommonType");
	set_name(0x4bf250,"unicode.Range16.uncommonType", 0x800);
	create_struct(0x4bf250,-1,"Go_uncommonType");
	set_name(0x4cda50,"reflect.Value.uncommonType", 0x800);
	create_struct(0x4cda50,-1,"Go_uncommonType");
	set_name(0x4b5248,"runtime.cgoCallers.uncommonType", 0x800);
	create_struct(0x4b5248,-1,"Go_uncommonType");
	set_name(0x4bb250,"runtime.stackObjectBufHdr.uncommonType", 0x800);
	create_struct(0x4bb250,-1,"Go_uncommonType");
	set_name(0x4b7a50,"runtime.Func.uncommonType", 0x800);
	create_struct(0x4b7a50,-1,"Go_uncommonType");
	set_name(0x4c0a50,"cpu.arm.uncommonType", 0x800);
	create_struct(0x4c0a50,-1,"Go_uncommonType");
	set_name(0x4c2a50,"runtime.funcinl.uncommonType", 0x800);
	create_struct(0x4c2a50,-1,"Go_uncommonType");
	set_name(0x4c2270,"fmt.fmt.uncommonType", 0x800);
	create_struct(0x4c2270,-1,"Go_uncommonType");
	set_name(0x4ad250,"bool.uncommonType", 0x800);
	create_struct(0x4ad250,-1,"Go_uncommonType");
	set_name(0x4ada50,"reflectlite.tflag.uncommonType", 0x800);
	create_struct(0x4ada50,-1,"Go_uncommonType");
	set_name(0x4b4250,"runtime.traceBufPtr.uncommonType", 0x800);
	create_struct(0x4b4250,-1,"Go_uncommonType");
	set_name(0x4bba70,"sync.Once.uncommonType", 0x800);
	create_struct(0x4bba70,-1,"Go_uncommonType");
	set_name(0x4c1290,"runtime.traceStackTable.uncommonType", 0x800);
	create_struct(0x4c1290,-1,"Go_uncommonType");
	set_name(0x4c7290,"runtime._defer.uncommonType", 0x800);
	create_struct(0x4c7290,-1,"Go_uncommonType");
	set_name(0x4c7a90,"poll.operation.uncommonType", 0x800);
	create_struct(0x4c7a90,-1,"Go_uncommonType");
	set_name(0x4bc290,"utf8.acceptRange.uncommonType", 0x800);
	create_struct(0x4bc290,-1,"Go_uncommonType");
	set_name(0x4c3a90,"runtime.bucket.uncommonType", 0x800);
	create_struct(0x4c3a90,-1,"Go_uncommonType");
	set_name(0x4be290,"runtime.forcegcstate.uncommonType", 0x800);
	create_struct(0x4be290,-1,"Go_uncommonType");
	set_name(0x4c4290,"reflect.StructField.uncommonType", 0x800);
	create_struct(0x4c4290,-1,"Go_uncommonType");
	set_name(0x4ba2b0,"reflect.funcTypeFixed4.uncommonType", 0x800);
	create_struct(0x4ba2b0,-1,"Go_uncommonType");
	set_name(0x4b52a8,"runtime.pageBits.uncommonType", 0x800);
	create_struct(0x4b52a8,-1,"Go_uncommonType");
	set_name(0x4ada90,"reflectlite.typeOff.uncommonType", 0x800);
	create_struct(0x4ada90,-1,"Go_uncommonType");
	set_name(0x4c9ab0,"cpu.arm64.uncommonType", 0x800);
	create_struct(0x4c9ab0,-1,"Go_uncommonType");
	set_name(0x4b7ad0,"runtime.bmap.uncommonType", 0x800);
	create_struct(0x4b7ad0,-1,"Go_uncommonType");
	set_name(0x4bead0,"runtime.semaRoot.uncommonType", 0x800);
	create_struct(0x4bead0,-1,"Go_uncommonType");
	set_name(0x4b42b0,"runtime.traceStackPtr.uncommonType", 0x800);
	create_struct(0x4b42b0,-1,"Go_uncommonType");
	set_name(0x4baad0,"runtime.imethod.uncommonType", 0x800);
	create_struct(0x4baad0,-1,"Go_uncommonType");
	set_name(0x4adad0,"reflect.nameOff.uncommonType", 0x800);
	create_struct(0x4adad0,-1,"Go_uncommonType");
	set_name(0x4bb2f0,"runtime.stackObjectRecord.uncommonType", 0x800);
	create_struct(0x4bb2f0,-1,"Go_uncommonType");
	set_name(0x4bdb10,"poll.fdMutex.uncommonType", 0x800);
	create_struct(0x4bdb10,-1,"Go_uncommonType");
	set_name(0x4bf310,"unicode.Range32.uncommonType", 0x800);
	create_struct(0x4bf310,-1,"Go_uncommonType");
	set_name(0x4bbb10,"sync.eface.uncommonType", 0x800);
	create_struct(0x4bbb10,-1,"Go_uncommonType");
	set_name(0x4c0b10,"os.dirInfo.uncommonType", 0x800);
	create_struct(0x4c0b10,-1,"Go_uncommonType");
	set_name(0x4c6b10,"runtime._type.uncommonType", 0x800);
	create_struct(0x4c6b10,-1,"Go_uncommonType");
	set_name(0x4b5308,"runtime.pallocBits.uncommonType", 0x800);
	create_struct(0x4b5308,-1,"Go_uncommonType");
	set_name(0x4b4310,"runtime.waitReason.uncommonType", 0x800);
	create_struct(0x4b4310,-1,"Go_uncommonType");
	set_name(0x4adb10,"reflect.tflag.uncommonType", 0x800);
	create_struct(0x4adb10,-1,"Go_uncommonType");
	set_name(0x4c2b30,"runtime.gcSweepBuf.uncommonType", 0x800);
	create_struct(0x4c2b30,-1,"Go_uncommonType");
	set_name(0x4ba350,"reflect.funcTypeFixed64.uncommonType", 0x800);
	create_struct(0x4ba350,-1,"Go_uncommonType");
	set_name(0x4c1350,"runtime.wbBuf.uncommonType", 0x800);
	create_struct(0x4c1350,-1,"Go_uncommonType");
	set_name(0x4c2350,"cpu.option.uncommonType", 0x800);
	create_struct(0x4c2350,-1,"Go_uncommonType");
	set_name(0x4b7b50,"runtime.funcval.uncommonType", 0x800);
	create_struct(0x4b7b50,-1,"Go_uncommonType");
	set_name(0x4be350,"runtime.gcBitsArena.uncommonType", 0x800);
	create_struct(0x4be350,-1,"Go_uncommonType");
	set_name(0x4adb50,"reflect.typeOff.uncommonType", 0x800);
	create_struct(0x4adb50,-1,"Go_uncommonType");
	set_name(0x4bab70,"runtime.lfnode.uncommonType", 0x800);
	create_struct(0x4bab70,-1,"Go_uncommonType");
	set_name(0x4c3b90,"runtime.libcall.uncommonType", 0x800);
	create_struct(0x4c3b90,-1,"Go_uncommonType");
	set_name(0x4beb90,"runtime.special.uncommonType", 0x800);
	create_struct(0x4beb90,-1,"Go_uncommonType");
	set_name(0x4c5b90,"fmt.pp.uncommonType", 0x800);
	create_struct(0x4c5b90,-1,"Go_uncommonType");
	set_name(0x4c4b90,"runtime._panic.uncommonType", 0x800);
	create_struct(0x4c4b90,-1,"Go_uncommonType");
	set_name(0x4bb390,"runtime.stackWorkBuf.uncommonType", 0x800);
	create_struct(0x4bb390,-1,"Go_uncommonType");
	set_name(0x4c43b0,"runtime.Frame.uncommonType", 0x800);
	create_struct(0x4c43b0,-1,"Go_uncommonType");
	set_name(0x4ad390,"complex128.uncommonType", 0x800);
	create_struct(0x4ad390,-1,"Go_uncommonType");
	set_name(0x4adb90,"runtime.boundsErrorCode.uncommonType", 0x800);
	create_struct(0x4adb90,-1,"Go_uncommonType");
	set_name(0x4bbbb0,"sync.poolChain.uncommonType", 0x800);
	create_struct(0x4bbbb0,-1,"Go_uncommonType");
	set_name(0x4bdbd0,"os.PathError.uncommonType", 0x800);
	create_struct(0x4bdbd0,-1,"Go_uncommonType");
	set_name(0x4b7bd0,"runtime.gList.uncommonType", 0x800);
	create_struct(0x4b7bd0,-1,"Go_uncommonType");
	set_name(0x4c0bd0,"os.file.uncommonType", 0x800);
	create_struct(0x4c0bd0,-1,"Go_uncommonType");
	set_name(0x4bf3d0,"unicode.RangeTable.uncommonType", 0x800);
	create_struct(0x4bf3d0,-1,"Go_uncommonType");
	set_name(0x4c63d0,"reflect.Type.uncommonType", 0x800);
	create_struct(0x4c63d0,-1,"Go_uncommonType");
	set_name(0x4ccbf0,"runtime.p.uncommonType", 0x800);
	create_struct(0x4ccbf0,-1,"Go_uncommonType");
	set_name(0x4ad3d0,"complex64.uncommonType", 0x800);
	create_struct(0x4ad3d0,-1,"Go_uncommonType");
	set_name(0x4adbd0,"runtime.bucketType.uncommonType", 0x800);
	create_struct(0x4adbd0,-1,"Go_uncommonType");
	set_name(0x4ba3f0,"reflect.funcTypeFixed8.uncommonType", 0x800);
	create_struct(0x4ba3f0,-1,"Go_uncommonType");
	set_name(0x4b6c10,"error.uncommonType", 0x800);
	create_struct(0x4b6c10,-1,"Go_uncommonType");
	set_name(0x4c7410,"runtime.gcControllerState.uncommonType", 0x800);
	create_struct(0x4c7410,-1,"Go_uncommonType");
	set_name(0x4c2c10,"runtime.heapArena.uncommonType", 0x800);
	create_struct(0x4c2c10,-1,"Go_uncommonType");
	set_name(0x4cbc10,"runtime.schedt.uncommonType", 0x800);
	create_struct(0x4cbc10,-1,"Go_uncommonType");
	set_name(0x4c1410,"runtime.wincallbackcontext.uncommonType", 0x800);
	create_struct(0x4c1410,-1,"Go_uncommonType");
	set_name(0x4be410,"runtime.initTask.uncommonType", 0x800);
	create_struct(0x4be410,-1,"Go_uncommonType");
	set_name(0x4bac10,"runtime.mSpanList.uncommonType", 0x800);
	create_struct(0x4bac10,-1,"Go_uncommonType");
	set_name(0x4ad410,"float32.uncommonType", 0x800);
	create_struct(0x4ad410,-1,"Go_uncommonType");
	set_name(0x4c2430,"reflectlite.uncommonType.uncommonType", 0x800);
	create_struct(0x4c2430,-1,"Go_uncommonType");
	set_name(0x4bb430,"runtime.stackWorkBufHdr.uncommonType", 0x800);
	create_struct(0x4bb430,-1,"Go_uncommonType");
	set_name(0x4adc10,"runtime.funcID.uncommonType", 0x800);
	create_struct(0x4adc10,-1,"Go_uncommonType");
	set_name(0x4bec50,"runtime.structfield.uncommonType", 0x800);
	create_struct(0x4bec50,-1,"Go_uncommonType");
	set_name(0x4b2c38,"fmt.buffer.uncommonType", 0x800);
	create_struct(0x4b2c38,-1,"Go_uncommonType");
	set_name(0x4bbc50,"sync.poolDequeue.uncommonType", 0x800);
	create_struct(0x4bbc50,-1,"Go_uncommonType");
	set_name(0x4b7c50,"runtime.mSpanStateBox.uncommonType", 0x800);
	create_struct(0x4b7c50,-1,"Go_uncommonType");
	set_name(0x4adc50,"runtime.gcBits.uncommonType", 0x800);
	create_struct(0x4adc50,-1,"Go_uncommonType");
	set_name(0x4c7c70,"runtime.hiter.uncommonType", 0x800);
	create_struct(0x4c7c70,-1,"Go_uncommonType");
	set_name(0x4ad450,"float64.uncommonType", 0x800);
	create_struct(0x4ad450,-1,"Go_uncommonType");
	set_name(0x4b6c90,"fmt.Formatter.uncommonType", 0x800);
	create_struct(0x4b6c90,-1,"Go_uncommonType");
	set_name(0x4c6c90,"runtime.hchan.uncommonType", 0x800);
	create_struct(0x4c6c90,-1,"Go_uncommonType");
	set_name(0x4c3c90,"runtime.sweepdata.uncommonType", 0x800);
	create_struct(0x4c3c90,-1,"Go_uncommonType");
	set_name(0x4c0c90,"runtime.TypeAssertionError.uncommonType", 0x800);
	create_struct(0x4c0c90,-1,"Go_uncommonType");
	set_name(0x4bdc90,"reflect.funcType.uncommonType", 0x800);
	create_struct(0x4bdc90,-1,"Go_uncommonType");
	set_name(0x4ba490,"reflect.layoutKey.uncommonType", 0x800);
	create_struct(0x4ba490,-1,"Go_uncommonType");
	set_name(0x4adc90,"runtime.gcMarkWorkerMode.uncommonType", 0x800);
	create_struct(0x4adc90,-1,"Go_uncommonType");
	set_name(0x4bacb0,"runtime.pallocData.uncommonType", 0x800);
	create_struct(0x4bacb0,-1,"Go_uncommonType");
	set_name(0x4c4cb0,"runtime.gcWork.uncommonType", 0x800);
	create_struct(0x4c4cb0,-1,"Go_uncommonType");
	set_name(0x4b7cd0,"runtime.mlink.uncommonType", 0x800);
	create_struct(0x4b7cd0,-1,"Go_uncommonType");
	set_name(0x4c14d0,"strconv.decimalSlice.uncommonType", 0x800);
	create_struct(0x4c14d0,-1,"Go_uncommonType");
	set_name(0x4bb4d0,"runtime.stackfreelist.uncommonType", 0x800);
	create_struct(0x4bb4d0,-1,"Go_uncommonType");
	set_name(0x4c44d0,"runtime.cgoSymbolizerArg.uncommonType", 0x800);
	create_struct(0x4c44d0,-1,"Go_uncommonType");
	set_name(0x4be4d0,"runtime.interfacetype.uncommonType", 0x800);
	create_struct(0x4be4d0,-1,"Go_uncommonType");
	set_name(0x4adcd0,"runtime.gcMode.uncommonType", 0x800);
	create_struct(0x4adcd0,-1,"Go_uncommonType");
	set_name(0x4c2cf0,"runtime.itab.uncommonType", 0x800);
	create_struct(0x4c2cf0,-1,"Go_uncommonType");
	set_name(0x4bbcf0,"sync.poolLocal.uncommonType", 0x800);
	create_struct(0x4bbcf0,-1,"Go_uncommonType");
	set_name(0x4b54f0,"poll.TimeoutError.uncommonType", 0x800);
	create_struct(0x4b54f0,-1,"Go_uncommonType");
	set_name(0x4c5cf0,"runtime.stackScanState.uncommonType", 0x800);
	create_struct(0x4c5cf0,-1,"Go_uncommonType");
	set_name(0x4b9d10,"fmtsort.SortedMap.uncommonType", 0x800);
	create_struct(0x4b9d10,-1,"Go_uncommonType");
	set_name(0x4b6d10,"fmt.GoStringer.uncommonType", 0x800);
	create_struct(0x4b6d10,-1,"Go_uncommonType");
	set_name(0x4bed10,"runtime.textsect.uncommonType", 0x800);
	create_struct(0x4bed10,-1,"Go_uncommonType");
	set_name(0x4c2510,"reflect.Method.uncommonType", 0x800);
	create_struct(0x4c2510,-1,"Go_uncommonType");
	set_name(0x4c8d10,"runtime.mspan.uncommonType", 0x800);
	create_struct(0x4c8d10,-1,"Go_uncommonType");
	set_name(0x4c5530,"fmt.fmtFlags.uncommonType", 0x800);
	create_struct(0x4c5530,-1,"Go_uncommonType");
	set_name(0x4add10,"runtime.lfstack.uncommonType", 0x800);
	create_struct(0x4add10,-1,"Go_uncommonType");
	set_name(0x4ba530,"reflect.ptrType.uncommonType", 0x800);
	create_struct(0x4ba530,-1,"Go_uncommonType");
	set_name(0x4b7d50,"runtime.mutex.uncommonType", 0x800);
	create_struct(0x4b7d50,-1,"Go_uncommonType");
	set_name(0x4bdd50,"reflect.structField.uncommonType", 0x800);
	create_struct(0x4bdd50,-1,"Go_uncommonType");
	set_name(0x4c0d50,"runtime.addrRange.uncommonType", 0x800);
	create_struct(0x4c0d50,-1,"Go_uncommonType");
	set_name(0x4b5530,"reflect.StructTag.uncommonType", 0x800);
	create_struct(0x4b5530,-1,"Go_uncommonType");
	set_name(0x4bad50,"runtime.parkInfo.uncommonType", 0x800);
	create_struct(0x4bad50,-1,"Go_uncommonType");
	set_name(0x4add50,"runtime.mSpanState.uncommonType", 0x800);
	create_struct(0x4add50,-1,"Go_uncommonType");
	set_name(0x4bb570,"runtime.stackpoolItem.uncommonType", 0x800);
	create_struct(0x4bb570,-1,"Go_uncommonType");
	set_name(0x4bbd90,"sync.poolLocalInternal.uncommonType", 0x800);
	create_struct(0x4bbd90,-1,"Go_uncommonType");
	set_name(0x4c3d90,"sync.Pool.uncommonType", 0x800);
	create_struct(0x4c3d90,-1,"Go_uncommonType");
	set_name(0x4be590,"runtime.itabTableType.uncommonType", 0x800);
	create_struct(0x4be590,-1,"Go_uncommonType");
	set_name(0x4b6d90,"fmt.Stringer.uncommonType", 0x800);
	create_struct(0x4b6d90,-1,"Go_uncommonType");
	set_name(0x4c7590,"runtime.sudog.uncommonType", 0x800);
	create_struct(0x4c7590,-1,"Go_uncommonType");
	set_name(0x4c1590,"sync.Map.uncommonType", 0x800);
	create_struct(0x4c1590,-1,"Go_uncommonType");
	set_name(0x4b9db0,"poll.ioSrvReq.uncommonType", 0x800);
	create_struct(0x4b9db0,-1,"Go_uncommonType");
	set_name(0x4b5590,"runtime.arenaIdx.uncommonType", 0x800);
	create_struct(0x4b5590,-1,"Go_uncommonType");
	set_name(0x4add90,"runtime.nameOff.uncommonType", 0x800);
	create_struct(0x4add90,-1,"Go_uncommonType");
	set_name(0x4c35b0,"runtime.boundsError.uncommonType", 0x800);
	create_struct(0x4c35b0,-1,"Go_uncommonType");
	set_name(0x4c2dd0,"runtime.mOS.uncommonType", 0x800);
	create_struct(0x4c2dd0,-1,"Go_uncommonType");
	set_name(0x4b7dd0,"runtime.note.uncommonType", 0x800);
	create_struct(0x4b7dd0,-1,"Go_uncommonType");
	set_name(0x4ba5d0,"reflect.stringHeader.uncommonType", 0x800);
	create_struct(0x4ba5d0,-1,"Go_uncommonType");
	set_name(0x4bedd0,"strconv.extFloat.uncommonType", 0x800);
	create_struct(0x4bedd0,-1,"Go_uncommonType");
	set_name(0x4bd5d0,"os.File.uncommonType", 0x800);
	create_struct(0x4bd5d0,-1,"Go_uncommonType");
	set_name(0x4c4dd0,"runtime.timer.uncommonType", 0x800);
	create_struct(0x4c4dd0,-1,"Go_uncommonType");
	set_name(0x4addd0,"runtime.stdFunction.uncommonType", 0x800);
	create_struct(0x4addd0,-1,"Go_uncommonType");
	set_name(0x4badf0,"runtime.persistentAlloc.uncommonType", 0x800);
	create_struct(0x4badf0,-1,"Go_uncommonType");
	set_name(0x4c45f0,"runtime.gobuf.uncommonType", 0x800);
	create_struct(0x4c45f0,-1,"Go_uncommonType");
	set_name(0x4c25f0,"reflect.layoutType.uncommonType", 0x800);
	create_struct(0x4c25f0,-1,"Go_uncommonType");
	set_name(0x4c6e10,"runtime.mcache.uncommonType", 0x800);
	create_struct(0x4c6e10,-1,"Go_uncommonType");
	set_name(0x4bb610,"runtime.stringStruct.uncommonType", 0x800);
	create_struct(0x4bb610,-1,"Go_uncommonType");
	set_name(0x4c0e10,"runtime.cgoTracebackArg.uncommonType", 0x800);
	create_struct(0x4c0e10,-1,"Go_uncommonType");
	set_name(0x4b6e10,"io.Writer.uncommonType", 0x800);
	create_struct(0x4b6e10,-1,"Go_uncommonType");
	set_name(0x4b55f0,"runtime.chunkIdx.uncommonType", 0x800);
	create_struct(0x4b55f0,-1,"Go_uncommonType");
	set_name(0x4bde10,"reflect.structType.uncommonType", 0x800);
	create_struct(0x4bde10,-1,"Go_uncommonType");
	set_name(0x4c8610,"cpu.x86.uncommonType", 0x800);
	create_struct(0x4c8610,-1,"Go_uncommonType");
	set_name(0x4ade10,"runtime.stringInterfacePtr.uncommonType", 0x800);
	create_struct(0x4ade10,-1,"Go_uncommonType");
	set_name(0x4bbe30,"sync.readOnly.uncommonType", 0x800);
	create_struct(0x4bbe30,-1,"Go_uncommonType");
	set_name(0x4c1650,"syscall.LazyProc.uncommonType", 0x800);
	create_struct(0x4c1650,-1,"Go_uncommonType");
	set_name(0x4b9e50,"reflect.MapIter.uncommonType", 0x800);
	create_struct(0x4b9e50,-1,"Go_uncommonType");
	set_name(0x4c5e50,"runtime.stkframe.uncommonType", 0x800);
	create_struct(0x4c5e50,-1,"Go_uncommonType");
	set_name(0x4be650,"runtime.linearAlloc.uncommonType", 0x800);
	create_struct(0x4be650,-1,"Go_uncommonType");
	set_name(0x4b7e50,"runtime.pcvalueCache.uncommonType", 0x800);
	create_struct(0x4b7e50,-1,"Go_uncommonType");
	set_name(0x4ba670,"runtime._typePair.uncommonType", 0x800);
	create_struct(0x4ba670,-1,"Go_uncommonType");
	set_name(0x4c5670,"runtime.fixalloc.uncommonType", 0x800);
	create_struct(0x4c5670,-1,"Go_uncommonType");
	set_name(0x4b5670,"runtime.dlogPerM.uncommonType", 0x800);
	create_struct(0x4b5670,-1,"Go_uncommonType");
	set_name(0x4ade50,"runtime.tflag.uncommonType", 0x800);
	create_struct(0x4ade50,-1,"Go_uncommonType");
	set_name(0x4bee90,"strconv.floatInfo.uncommonType", 0x800);
	create_struct(0x4bee90,-1,"Go_uncommonType");
	set_name(0x4b6e90,"main.Updater.uncommonType", 0x800);
	create_struct(0x4b6e90,-1,"Go_uncommonType");
	set_name(0x4c6690,"reflectlite.rtype.uncommonType", 0x800);
	create_struct(0x4c6690,-1,"Go_uncommonType");
	set_name(0x4bae90,"runtime.pollCache.uncommonType", 0x800);
	create_struct(0x4bae90,-1,"Go_uncommonType");
	set_name(0x4ade90,"runtime.typeOff.uncommonType", 0x800);
	create_struct(0x4ade90,-1,"Go_uncommonType");
	set_name(0x4bb6b0,"runtime.traceAlloc.uncommonType", 0x800);
	create_struct(0x4bb6b0,-1,"Go_uncommonType");
	set_name(0x4c2eb0,"runtime.mcentral.uncommonType", 0x800);
	create_struct(0x4c2eb0,-1,"Go_uncommonType");
	set_name(0x4c26d0,"reflect.methodValue.uncommonType", 0x800);
	create_struct(0x4c26d0,-1,"Go_uncommonType");
	set_name(0x4b7ed0,"sort.Interface.uncommonType", 0x800);
	create_struct(0x4b7ed0,-1,"Go_uncommonType");
	set_name(0x4c0ed0,"runtime.divMagic.uncommonType", 0x800);
	create_struct(0x4c0ed0,-1,"Go_uncommonType");
	set_name(0x4bded0,"runtime.Frames.uncommonType", 0x800);
	create_struct(0x4bded0,-1,"Go_uncommonType");
	set_name(0x4bbed0,"syscall.DLL.uncommonType", 0x800);
	create_struct(0x4bbed0,-1,"Go_uncommonType");
	set_name(0x4b56b0,"runtime.errorString.uncommonType", 0x800);
	create_struct(0x4b56b0,-1,"Go_uncommonType");
	set_name(0x4b9ef0,"reflect.ValueError.uncommonType", 0x800);
	create_struct(0x4b9ef0,-1,"Go_uncommonType");
	set_name(0x4aded0,"runtime.uint16InterfacePtr.uncommonType", 0x800);
	create_struct(0x4aded0,-1,"Go_uncommonType");
	set_name(0x4ba710,"runtime.addrRanges.uncommonType", 0x800);
	create_struct(0x4ba710,-1,"Go_uncommonType");
	set_name(0x4be710,"runtime.mapextra.uncommonType", 0x800);
	create_struct(0x4be710,-1,"Go_uncommonType");
	set_name(0x4b6f10,"runtime.stringer.uncommonType", 0x800);
	create_struct(0x4b6f10,-1,"Go_uncommonType");
	set_name(0x4c4710,"runtime.rwmutex.uncommonType", 0x800);
	create_struct(0x4c4710,-1,"Go_uncommonType");
	set_name(0x4c7710,"runtime.pollDesc.uncommonType", 0x800);
	create_struct(0x4c7710,-1,"Go_uncommonType");
	set_name(0x4b5730,"runtime.gsignalStack.uncommonType", 0x800);
	create_struct(0x4b5730,-1,"Go_uncommonType");
	set_name(0x4baf30,"runtime.ptabEntry.uncommonType", 0x800);
	create_struct(0x4baf30,-1,"Go_uncommonType");
	set_name(0x4adf10,"runtime.uint32InterfacePtr.uncommonType", 0x800);
	create_struct(0x4adf10,-1,"Go_uncommonType");
	set_name(0x4b7f50,"sync.entry.uncommonType", 0x800);
	create_struct(0x4b7f50,-1,"Go_uncommonType");
	set_name(0x4bef50,"sync.poolChainElt.uncommonType", 0x800);
	create_struct(0x4bef50,-1,"Go_uncommonType");
	set_name(0x4bb750,"runtime.waitq.uncommonType", 0x800);
	create_struct(0x4bb750,-1,"Go_uncommonType");
	set_name(0x4bbf70,"syscall.Filetime.uncommonType", 0x800);
	create_struct(0x4bbf70,-1,"Go_uncommonType");
	set_name(0x4adf50,"runtime.uint64InterfacePtr.uncommonType", 0x800);
	create_struct(0x4adf50,-1,"Go_uncommonType");
	set_name(0x4c0f90,"runtime.evacDst.uncommonType", 0x800);
	create_struct(0x4c0f90,-1,"Go_uncommonType");
	set_name(0x4c3790,"reflect.name.uncommonType", 0x800);
	create_struct(0x4c3790,-1,"Go_uncommonType");
	set_name(0x4bdf90,"runtime.ancestorInfo.uncommonType", 0x800);
	create_struct(0x4bdf90,-1,"Go_uncommonType");
	set_name(0x4b5790,"runtime.notInHeap.uncommonType", 0x800);
	create_struct(0x4b5790,-1,"Go_uncommonType");
	set_name(0x4c6f90,"runtime.pageAlloc.uncommonType", 0x800);
	create_struct(0x4c6f90,-1,"Go_uncommonType");
	set_name(0x4b6f90,"syscall.Sockaddr.uncommonType", 0x800);
	create_struct(0x4b6f90,-1,"Go_uncommonType");
	set_name(0x4c2f90,"runtime.net_op.uncommonType", 0x800);
	create_struct(0x4c2f90,-1,"Go_uncommonType");
	set_name(0x4b9f90,"reflect.bitVector.uncommonType", 0x800);
	create_struct(0x4b9f90,-1,"Go_uncommonType");
	set_name(0x4c27b0,"reflect.uncommonType.uncommonType", 0x800);
	create_struct(0x4c27b0,-1,"Go_uncommonType");
	set_name(0x4cc7b0,"runtime.mstats.uncommonType", 0x800);
	create_struct(0x4cc7b0,-1,"Go_uncommonType");
	set_name(0x4cdfb0,"runtime.m.uncommonType", 0x800);
	create_struct(0x4cdfb0,-1,"Go_uncommonType");
	set_name(0x4c5fb0,"runtime.systeminfo.uncommonType", 0x800);
	create_struct(0x4c5fb0,-1,"Go_uncommonType");
	set_name(0x4c57b0,"runtime.hmap.uncommonType", 0x800);
	create_struct(0x4c57b0,-1,"Go_uncommonType");
	set_name(0x4ba7b0,"runtime.bitvector.uncommonType", 0x800);
	create_struct(0x4ba7b0,-1,"Go_uncommonType");
	set_name(0x4adf90,"sys.Uintreg.uncommonType", 0x800);
	create_struct(0x4adf90,-1,"Go_uncommonType");
	set_name(0x4be7d0,"runtime.modulehash.uncommonType", 0x800);
	create_struct(0x4be7d0,-1,"Go_uncommonType");
	set_name(0x4cbfd0,"runtime.mheap.uncommonType", 0x800);
	create_struct(0x4cbfd0,-1,"Go_uncommonType");
	set_name(0x4b7fd0,"atomic.Value.uncommonType", 0x800);
	create_struct(0x4b7fd0,-1,"Go_uncommonType");
	set_name(0x4b3fb0,"reflect.ChanDir.uncommonType", 0x800);
	create_struct(0x4b3fb0,-1,"Go_uncommonType");
	set_name(0x4bafd0,"runtime.ptrtype.uncommonType", 0x800);
	create_struct(0x4bafd0,-1,"Go_uncommonType");
	set_name(0x4b57d0,"runtime.plainError.uncommonType", 0x800);
	create_struct(0x4b57d0,-1,"Go_uncommonType");
	set_name(0x4adfd0,"string.uncommonType", 0x800);
	create_struct(0x4adfd0,-1,"Go_uncommonType");
	set_name(0x4bb7f0,"runtime.workbuf.uncommonType", 0x800);
	create_struct(0x4bb7f0,-1,"Go_uncommonType");
	set_name(0x4bf010,"syscall.DLLError.uncommonType", 0x800);
	create_struct(0x4bf010,-1,"Go_uncommonType");
	set_name(0x4bc010,"syscall.RawSockaddr.uncommonType", 0x800);
	create_struct(0x4bc010,-1,"Go_uncommonType");
	set_name(0x4c6810,"reflect.rtype.uncommonType", 0x800);
	create_struct(0x4c6810,-1,"Go_uncommonType");
	set_name(0x4ae010,"syscall.Handle.uncommonType", 0x800);
	create_struct(0x4ae010,-1,"Go_uncommonType");
	set_name(0x4c4830,"syscall.WSAData.uncommonType", 0x800);
	create_struct(0x4c4830,-1,"Go_uncommonType");
	set_name(0x4b4010,"reflect.Kind.uncommonType", 0x800);
	create_struct(0x4b4010,-1,"Go_uncommonType");
	set_name(0x4c8030,"poll.FD.uncommonType", 0x800);
	create_struct(0x4c8030,-1,"Go_uncommonType");
	set_name(0x4ba030,"reflect.fieldScan.uncommonType", 0x800);
	create_struct(0x4ba030,-1,"Go_uncommonType");
	set_name(0x4ca068,"*reflect.funcTypeFixed128.Align", 0x800);
	create_struct(0x4ca068,-1,"Go_method");
	if (!is_code(get_flags(0x483a60)))
	{
		del_items(0x483a60);
		add_func(0x483a60,BADADDR);
	}
	if (!is_code(get_flags(0x483a60)))
	{
		del_items(0x483a60);
		add_func(0x483a60,BADADDR);
	}
	set_cmt(0x4ca068,"ifn @ 0x483a60, tfn @ 0x483a60",0);
	set_name(0x4ca078,"*reflect.funcTypeFixed128.AssignableTo", 0x800);
	create_struct(0x4ca078,-1,"Go_method");
	if (!is_code(get_flags(0x483a80)))
	{
		del_items(0x483a80);
		add_func(0x483a80,BADADDR);
	}
	if (!is_code(get_flags(0x483a80)))
	{
		del_items(0x483a80);
		add_func(0x483a80,BADADDR);
	}
	set_cmt(0x4ca078,"ifn @ 0x483a80, tfn @ 0x483a80",0);
	set_name(0x4ca088,"*reflect.funcTypeFixed128.Bits", 0x800);
	create_struct(0x4ca088,-1,"Go_method");
	if (!is_code(get_flags(0x483aa0)))
	{
		del_items(0x483aa0);
		add_func(0x483aa0,BADADDR);
	}
	if (!is_code(get_flags(0x483aa0)))
	{
		del_items(0x483aa0);
		add_func(0x483aa0,BADADDR);
	}
	set_cmt(0x4ca088,"ifn @ 0x483aa0, tfn @ 0x483aa0",0);
	set_name(0x4ca098,"*reflect.funcTypeFixed128.ChanDir", 0x800);
	create_struct(0x4ca098,-1,"Go_method");
	if (!is_code(get_flags(0x483ac0)))
	{
		del_items(0x483ac0);
		add_func(0x483ac0,BADADDR);
	}
	if (!is_code(get_flags(0x483ac0)))
	{
		del_items(0x483ac0);
		add_func(0x483ac0,BADADDR);
	}
	set_cmt(0x4ca098,"ifn @ 0x483ac0, tfn @ 0x483ac0",0);
	set_name(0x4ca0a8,"*reflect.funcTypeFixed128.Comparable", 0x800);
	create_struct(0x4ca0a8,-1,"Go_method");
	if (!is_code(get_flags(0x483ae0)))
	{
		del_items(0x483ae0);
		add_func(0x483ae0,BADADDR);
	}
	if (!is_code(get_flags(0x483ae0)))
	{
		del_items(0x483ae0);
		add_func(0x483ae0,BADADDR);
	}
	set_cmt(0x4ca0a8,"ifn @ 0x483ae0, tfn @ 0x483ae0",0);
	set_name(0x4ca0b8,"*reflect.funcTypeFixed128.ConvertibleTo", 0x800);
	create_struct(0x4ca0b8,-1,"Go_method");
	if (!is_code(get_flags(0x483b00)))
	{
		del_items(0x483b00);
		add_func(0x483b00,BADADDR);
	}
	if (!is_code(get_flags(0x483b00)))
	{
		del_items(0x483b00);
		add_func(0x483b00,BADADDR);
	}
	set_cmt(0x4ca0b8,"ifn @ 0x483b00, tfn @ 0x483b00",0);
	set_name(0x4ca0c8,"*reflect.funcTypeFixed128.Elem", 0x800);
	create_struct(0x4ca0c8,-1,"Go_method");
	if (!is_code(get_flags(0x483b20)))
	{
		del_items(0x483b20);
		add_func(0x483b20,BADADDR);
	}
	if (!is_code(get_flags(0x483b20)))
	{
		del_items(0x483b20);
		add_func(0x483b20,BADADDR);
	}
	set_cmt(0x4ca0c8,"ifn @ 0x483b20, tfn @ 0x483b20",0);
	set_name(0x4ca0d8,"*reflect.funcTypeFixed128.Field", 0x800);
	create_struct(0x4ca0d8,-1,"Go_method");
	if (!is_code(get_flags(0x483b40)))
	{
		del_items(0x483b40);
		add_func(0x483b40,BADADDR);
	}
	if (!is_code(get_flags(0x483b40)))
	{
		del_items(0x483b40);
		add_func(0x483b40,BADADDR);
	}
	set_cmt(0x4ca0d8,"ifn @ 0x483b40, tfn @ 0x483b40",0);
	set_name(0x4ca0e8,"*reflect.funcTypeFixed128.FieldAlign", 0x800);
	create_struct(0x4ca0e8,-1,"Go_method");
	if (!is_code(get_flags(0x483b90)))
	{
		del_items(0x483b90);
		add_func(0x483b90,BADADDR);
	}
	if (!is_code(get_flags(0x483b90)))
	{
		del_items(0x483b90);
		add_func(0x483b90,BADADDR);
	}
	set_cmt(0x4ca0e8,"ifn @ 0x483b90, tfn @ 0x483b90",0);
	set_name(0x4ca0f8,"*reflect.funcTypeFixed128.FieldByIndex", 0x800);
	create_struct(0x4ca0f8,-1,"Go_method");
	if (!is_code(get_flags(0x483bb0)))
	{
		del_items(0x483bb0);
		add_func(0x483bb0,BADADDR);
	}
	if (!is_code(get_flags(0x483bb0)))
	{
		del_items(0x483bb0);
		add_func(0x483bb0,BADADDR);
	}
	set_cmt(0x4ca0f8,"ifn @ 0x483bb0, tfn @ 0x483bb0",0);
	set_name(0x4ca108,"*reflect.funcTypeFixed128.FieldByName", 0x800);
	create_struct(0x4ca108,-1,"Go_method");
	if (!is_code(get_flags(0x483c00)))
	{
		del_items(0x483c00);
		add_func(0x483c00,BADADDR);
	}
	if (!is_code(get_flags(0x483c00)))
	{
		del_items(0x483c00);
		add_func(0x483c00,BADADDR);
	}
	set_cmt(0x4ca108,"ifn @ 0x483c00, tfn @ 0x483c00",0);
	set_name(0x4ca118,"*reflect.funcTypeFixed128.FieldByNameFunc", 0x800);
	create_struct(0x4ca118,-1,"Go_method");
	if (!is_code(get_flags(0x483c60)))
	{
		del_items(0x483c60);
		add_func(0x483c60,BADADDR);
	}
	if (!is_code(get_flags(0x483c60)))
	{
		del_items(0x483c60);
		add_func(0x483c60,BADADDR);
	}
	set_cmt(0x4ca118,"ifn @ 0x483c60, tfn @ 0x483c60",0);
	set_name(0x4ca128,"*reflect.funcTypeFixed128.Implements", 0x800);
	create_struct(0x4ca128,-1,"Go_method");
	if (!is_code(get_flags(0x483cc0)))
	{
		del_items(0x483cc0);
		add_func(0x483cc0,BADADDR);
	}
	if (!is_code(get_flags(0x483cc0)))
	{
		del_items(0x483cc0);
		add_func(0x483cc0,BADADDR);
	}
	set_cmt(0x4ca128,"ifn @ 0x483cc0, tfn @ 0x483cc0",0);
	set_name(0x4ca138,"*reflect.funcTypeFixed128.In", 0x800);
	create_struct(0x4ca138,-1,"Go_method");
	if (!is_code(get_flags(0x483ce0)))
	{
		del_items(0x483ce0);
		add_func(0x483ce0,BADADDR);
	}
	if (!is_code(get_flags(0x483ce0)))
	{
		del_items(0x483ce0);
		add_func(0x483ce0,BADADDR);
	}
	set_cmt(0x4ca138,"ifn @ 0x483ce0, tfn @ 0x483ce0",0);
	set_name(0x4ca148,"*reflect.funcTypeFixed128.IsVariadic", 0x800);
	create_struct(0x4ca148,-1,"Go_method");
	if (!is_code(get_flags(0x483d00)))
	{
		del_items(0x483d00);
		add_func(0x483d00,BADADDR);
	}
	if (!is_code(get_flags(0x483d00)))
	{
		del_items(0x483d00);
		add_func(0x483d00,BADADDR);
	}
	set_cmt(0x4ca148,"ifn @ 0x483d00, tfn @ 0x483d00",0);
	set_name(0x4ca158,"*reflect.funcTypeFixed128.Key", 0x800);
	create_struct(0x4ca158,-1,"Go_method");
	if (!is_code(get_flags(0x483d20)))
	{
		del_items(0x483d20);
		add_func(0x483d20,BADADDR);
	}
	if (!is_code(get_flags(0x483d20)))
	{
		del_items(0x483d20);
		add_func(0x483d20,BADADDR);
	}
	set_cmt(0x4ca158,"ifn @ 0x483d20, tfn @ 0x483d20",0);
	set_name(0x4ca168,"*reflect.funcTypeFixed128.Kind", 0x800);
	create_struct(0x4ca168,-1,"Go_method");
	if (!is_code(get_flags(0x483d40)))
	{
		del_items(0x483d40);
		add_func(0x483d40,BADADDR);
	}
	if (!is_code(get_flags(0x483d40)))
	{
		del_items(0x483d40);
		add_func(0x483d40,BADADDR);
	}
	set_cmt(0x4ca168,"ifn @ 0x483d40, tfn @ 0x483d40",0);
	set_name(0x4ca178,"*reflect.funcTypeFixed128.Len", 0x800);
	create_struct(0x4ca178,-1,"Go_method");
	if (!is_code(get_flags(0x483d60)))
	{
		del_items(0x483d60);
		add_func(0x483d60,BADADDR);
	}
	if (!is_code(get_flags(0x483d60)))
	{
		del_items(0x483d60);
		add_func(0x483d60,BADADDR);
	}
	set_cmt(0x4ca178,"ifn @ 0x483d60, tfn @ 0x483d60",0);
	set_name(0x4ca188,"*reflect.funcTypeFixed128.Method", 0x800);
	create_struct(0x4ca188,-1,"Go_method");
	if (!is_code(get_flags(0x483d80)))
	{
		del_items(0x483d80);
		add_func(0x483d80,BADADDR);
	}
	if (!is_code(get_flags(0x483d80)))
	{
		del_items(0x483d80);
		add_func(0x483d80,BADADDR);
	}
	set_cmt(0x4ca188,"ifn @ 0x483d80, tfn @ 0x483d80",0);
	set_name(0x4ca198,"*reflect.funcTypeFixed128.MethodByName", 0x800);
	create_struct(0x4ca198,-1,"Go_method");
	if (!is_code(get_flags(0x483dd0)))
	{
		del_items(0x483dd0);
		add_func(0x483dd0,BADADDR);
	}
	if (!is_code(get_flags(0x483dd0)))
	{
		del_items(0x483dd0);
		add_func(0x483dd0,BADADDR);
	}
	set_cmt(0x4ca198,"ifn @ 0x483dd0, tfn @ 0x483dd0",0);
	set_name(0x4ca1a8,"*reflect.funcTypeFixed128.Name", 0x800);
	create_struct(0x4ca1a8,-1,"Go_method");
	if (!is_code(get_flags(0x483e20)))
	{
		del_items(0x483e20);
		add_func(0x483e20,BADADDR);
	}
	if (!is_code(get_flags(0x483e20)))
	{
		del_items(0x483e20);
		add_func(0x483e20,BADADDR);
	}
	set_cmt(0x4ca1a8,"ifn @ 0x483e20, tfn @ 0x483e20",0);
	set_name(0x4ca1b8,"*reflect.funcTypeFixed128.NumField", 0x800);
	create_struct(0x4ca1b8,-1,"Go_method");
	if (!is_code(get_flags(0x483e40)))
	{
		del_items(0x483e40);
		add_func(0x483e40,BADADDR);
	}
	if (!is_code(get_flags(0x483e40)))
	{
		del_items(0x483e40);
		add_func(0x483e40,BADADDR);
	}
	set_cmt(0x4ca1b8,"ifn @ 0x483e40, tfn @ 0x483e40",0);
	set_name(0x4ca1c8,"*reflect.funcTypeFixed128.NumIn", 0x800);
	create_struct(0x4ca1c8,-1,"Go_method");
	if (!is_code(get_flags(0x483e60)))
	{
		del_items(0x483e60);
		add_func(0x483e60,BADADDR);
	}
	if (!is_code(get_flags(0x483e60)))
	{
		del_items(0x483e60);
		add_func(0x483e60,BADADDR);
	}
	set_cmt(0x4ca1c8,"ifn @ 0x483e60, tfn @ 0x483e60",0);
	set_name(0x4ca1d8,"*reflect.funcTypeFixed128.NumMethod", 0x800);
	create_struct(0x4ca1d8,-1,"Go_method");
	if (!is_code(get_flags(0x483e80)))
	{
		del_items(0x483e80);
		add_func(0x483e80,BADADDR);
	}
	if (!is_code(get_flags(0x483e80)))
	{
		del_items(0x483e80);
		add_func(0x483e80,BADADDR);
	}
	set_cmt(0x4ca1d8,"ifn @ 0x483e80, tfn @ 0x483e80",0);
	set_name(0x4ca1e8,"*reflect.funcTypeFixed128.NumOut", 0x800);
	create_struct(0x4ca1e8,-1,"Go_method");
	if (!is_code(get_flags(0x483ea0)))
	{
		del_items(0x483ea0);
		add_func(0x483ea0,BADADDR);
	}
	if (!is_code(get_flags(0x483ea0)))
	{
		del_items(0x483ea0);
		add_func(0x483ea0,BADADDR);
	}
	set_cmt(0x4ca1e8,"ifn @ 0x483ea0, tfn @ 0x483ea0",0);
	set_name(0x4ca1f8,"*reflect.funcTypeFixed128.Out", 0x800);
	create_struct(0x4ca1f8,-1,"Go_method");
	if (!is_code(get_flags(0x483ec0)))
	{
		del_items(0x483ec0);
		add_func(0x483ec0,BADADDR);
	}
	if (!is_code(get_flags(0x483ec0)))
	{
		del_items(0x483ec0);
		add_func(0x483ec0,BADADDR);
	}
	set_cmt(0x4ca1f8,"ifn @ 0x483ec0, tfn @ 0x483ec0",0);
	set_name(0x4ca208,"*reflect.funcTypeFixed128.PkgPath", 0x800);
	create_struct(0x4ca208,-1,"Go_method");
	if (!is_code(get_flags(0x483ee0)))
	{
		del_items(0x483ee0);
		add_func(0x483ee0,BADADDR);
	}
	if (!is_code(get_flags(0x483ee0)))
	{
		del_items(0x483ee0);
		add_func(0x483ee0,BADADDR);
	}
	set_cmt(0x4ca208,"ifn @ 0x483ee0, tfn @ 0x483ee0",0);
	set_name(0x4ca218,"*reflect.funcTypeFixed128.Size", 0x800);
	create_struct(0x4ca218,-1,"Go_method");
	if (!is_code(get_flags(0x483f00)))
	{
		del_items(0x483f00);
		add_func(0x483f00,BADADDR);
	}
	if (!is_code(get_flags(0x483f00)))
	{
		del_items(0x483f00);
		add_func(0x483f00,BADADDR);
	}
	set_cmt(0x4ca218,"ifn @ 0x483f00, tfn @ 0x483f00",0);
	set_name(0x4ca228,"*reflect.funcTypeFixed128.String", 0x800);
	create_struct(0x4ca228,-1,"Go_method");
	if (!is_code(get_flags(0x483f20)))
	{
		del_items(0x483f20);
		add_func(0x483f20,BADADDR);
	}
	if (!is_code(get_flags(0x483f20)))
	{
		del_items(0x483f20);
		add_func(0x483f20,BADADDR);
	}
	set_cmt(0x4ca228,"ifn @ 0x483f20, tfn @ 0x483f20",0);
	set_name(0x4ca238,"*reflect.funcTypeFixed128.common", 0x800);
	create_struct(0x4ca238,-1,"Go_method");
	if (!is_code(get_flags(0x483f40)))
	{
		del_items(0x483f40);
		add_func(0x483f40,BADADDR);
	}
	if (!is_code(get_flags(0x483f40)))
	{
		del_items(0x483f40);
		add_func(0x483f40,BADADDR);
	}
	set_cmt(0x4ca238,"ifn @ 0x483f40, tfn @ 0x483f40",0);
	set_name(0x4ca248,"*reflect.funcTypeFixed128.exportedMethods", 0x800);
	create_struct(0x4ca248,-1,"Go_method");
	set_name(0x4ca258,"*reflect.funcTypeFixed128.gcSlice", 0x800);
	create_struct(0x4ca258,-1,"Go_method");
	set_name(0x4ca268,"*reflect.funcTypeFixed128.hasName", 0x800);
	create_struct(0x4ca268,-1,"Go_method");
	set_name(0x4ca278,"*reflect.funcTypeFixed128.in", 0x800);
	create_struct(0x4ca278,-1,"Go_method");
	set_name(0x4ca288,"*reflect.funcTypeFixed128.nameOff", 0x800);
	create_struct(0x4ca288,-1,"Go_method");
	set_name(0x4ca298,"*reflect.funcTypeFixed128.out", 0x800);
	create_struct(0x4ca298,-1,"Go_method");
	set_name(0x4ca2a8,"*reflect.funcTypeFixed128.pointers", 0x800);
	create_struct(0x4ca2a8,-1,"Go_method");
	set_name(0x4ca2b8,"*reflect.funcTypeFixed128.ptrTo", 0x800);
	create_struct(0x4ca2b8,-1,"Go_method");
	set_name(0x4ca2c8,"*reflect.funcTypeFixed128.textOff", 0x800);
	create_struct(0x4ca2c8,-1,"Go_method");
	set_name(0x4ca2d8,"*reflect.funcTypeFixed128.typeOff", 0x800);
	create_struct(0x4ca2d8,-1,"Go_method");
	set_name(0x4ca2e8,"*reflect.funcTypeFixed128.uncommon", 0x800);
	create_struct(0x4ca2e8,-1,"Go_method");
	if (!is_code(get_flags(0x483f60)))
	{
		del_items(0x483f60);
		add_func(0x483f60,BADADDR);
	}
	if (!is_code(get_flags(0x483f60)))
	{
		del_items(0x483f60);
		add_func(0x483f60,BADADDR);
	}
	set_cmt(0x4ca2e8,"ifn @ 0x483f60, tfn @ 0x483f60",0);
	set_name(0x4b4888,"*runtime.itab.init", 0x800);
	create_struct(0x4b4888,-1,"Go_method");
	if (!is_code(get_flags(0x408de0)))
	{
		del_items(0x408de0);
		add_func(0x408de0,BADADDR);
	}
	if (!is_code(get_flags(0x408de0)))
	{
		del_items(0x408de0);
		add_func(0x408de0,BADADDR);
	}
	set_cmt(0x4b4888,"ifn @ 0x408de0, tfn @ 0x408de0",0);
	set_name(0x4bc8a8,"*sync.Pool.Get", 0x800);
	create_struct(0x4bc8a8,-1,"Go_method");
	if (!is_code(get_flags(0x46f0f0)))
	{
		del_items(0x46f0f0);
		add_func(0x46f0f0,BADADDR);
	}
	if (!is_code(get_flags(0x46f0f0)))
	{
		del_items(0x46f0f0);
		add_func(0x46f0f0,BADADDR);
	}
	set_cmt(0x4bc8a8,"ifn @ 0x46f0f0, tfn @ 0x46f0f0",0);
	set_name(0x4bc8b8,"*sync.Pool.Put", 0x800);
	create_struct(0x4bc8b8,-1,"Go_method");
	if (!is_code(get_flags(0x46f020)))
	{
		del_items(0x46f020);
		add_func(0x46f020,BADADDR);
	}
	if (!is_code(get_flags(0x46f020)))
	{
		del_items(0x46f020);
		add_func(0x46f020,BADADDR);
	}
	set_cmt(0x4bc8b8,"ifn @ 0x46f020, tfn @ 0x46f020",0);
	set_name(0x4bc8c8,"*sync.Pool.getSlow", 0x800);
	create_struct(0x4bc8c8,-1,"Go_method");
	if (!is_code(get_flags(0x46f220)))
	{
		del_items(0x46f220);
		add_func(0x46f220,BADADDR);
	}
	if (!is_code(get_flags(0x46f220)))
	{
		del_items(0x46f220);
		add_func(0x46f220,BADADDR);
	}
	set_cmt(0x4bc8c8,"ifn @ 0x46f220, tfn @ 0x46f220",0);
	set_name(0x4bc8d8,"*sync.Pool.pin", 0x800);
	create_struct(0x4bc8d8,-1,"Go_method");
	if (!is_code(get_flags(0x46f410)))
	{
		del_items(0x46f410);
		add_func(0x46f410,BADADDR);
	}
	if (!is_code(get_flags(0x46f410)))
	{
		del_items(0x46f410);
		add_func(0x46f410,BADADDR);
	}
	set_cmt(0x4bc8d8,"ifn @ 0x46f410, tfn @ 0x46f410",0);
	set_name(0x4bc8e8,"*sync.Pool.pinSlow", 0x800);
	create_struct(0x4bc8e8,-1,"Go_method");
	if (!is_code(get_flags(0x46f4a0)))
	{
		del_items(0x46f4a0);
		add_func(0x46f4a0,BADADDR);
	}
	if (!is_code(get_flags(0x46f4a0)))
	{
		del_items(0x46f4a0);
		add_func(0x46f4a0,BADADDR);
	}
	set_cmt(0x4bc8e8,"ifn @ 0x46f4a0, tfn @ 0x46f4a0",0);
	set_name(0x4b60a8,"*runtime.funcInfo._Func", 0x800);
	create_struct(0x4b60a8,-1,"Go_method");
	set_name(0x4b60b8,"*runtime.funcInfo.valid", 0x800);
	create_struct(0x4b60b8,-1,"Go_method");
	set_name(0x4b98a8,"*runtime.wbBuf.discard", 0x800);
	create_struct(0x4b98a8,-1,"Go_method");
	set_name(0x4b98b8,"*runtime.wbBuf.empty", 0x800);
	create_struct(0x4b98b8,-1,"Go_method");
	set_name(0x4b98c8,"*runtime.wbBuf.putFast", 0x800);
	create_struct(0x4b98c8,-1,"Go_method");
	set_name(0x4b98d8,"*runtime.wbBuf.reset", 0x800);
	create_struct(0x4b98d8,-1,"Go_method");
	if (!is_code(get_flags(0x42b9f0)))
	{
		del_items(0x42b9f0);
		add_func(0x42b9f0,BADADDR);
	}
	if (!is_code(get_flags(0x42b9f0)))
	{
		del_items(0x42b9f0);
		add_func(0x42b9f0,BADADDR);
	}
	set_cmt(0x4b98d8,"ifn @ 0x42b9f0, tfn @ 0x42b9f0",0);
	set_name(0x4b68a8,"*runtime.wincallbackcontext.isCleanstack", 0x800);
	create_struct(0x4b68a8,-1,"Go_method");
	set_name(0x4b68b8,"*runtime.wincallbackcontext.setCleanstack", 0x800);
	create_struct(0x4b68b8,-1,"Go_method");
	set_name(0x4c08c8,"*sync.entry.delete", 0x800);
	create_struct(0x4c08c8,-1,"Go_method");
	set_name(0x4c08d8,"*sync.entry.load", 0x800);
	create_struct(0x4c08d8,-1,"Go_method");
	set_name(0x4c08e8,"*sync.entry.storeLocked", 0x800);
	create_struct(0x4c08e8,-1,"Go_method");
	set_name(0x4c08f8,"*sync.entry.tryExpungeLocked", 0x800);
	create_struct(0x4c08f8,-1,"Go_method");
	if (!is_code(get_flags(0x46ea40)))
	{
		del_items(0x46ea40);
		add_func(0x46ea40,BADADDR);
	}
	if (!is_code(get_flags(0x46ea40)))
	{
		del_items(0x46ea40);
		add_func(0x46ea40,BADADDR);
	}
	set_cmt(0x4c08f8,"ifn @ 0x46ea40, tfn @ 0x46ea40",0);
	set_name(0x4c0908,"*sync.entry.tryLoadOrStore", 0x800);
	create_struct(0x4c0908,-1,"Go_method");
	if (!is_code(get_flags(0x46e570)))
	{
		del_items(0x46e570);
		add_func(0x46e570,BADADDR);
	}
	if (!is_code(get_flags(0x46e570)))
	{
		del_items(0x46e570);
		add_func(0x46e570,BADADDR);
	}
	set_cmt(0x4c0908,"ifn @ 0x46e570, tfn @ 0x46e570",0);
	set_name(0x4c0918,"*sync.entry.tryStore", 0x800);
	create_struct(0x4c0918,-1,"Go_method");
	if (!is_code(get_flags(0x46de30)))
	{
		del_items(0x46de30);
		add_func(0x46de30,BADADDR);
	}
	if (!is_code(get_flags(0x46de30)))
	{
		del_items(0x46de30);
		add_func(0x46de30,BADADDR);
	}
	set_cmt(0x4c0918,"ifn @ 0x46de30, tfn @ 0x46de30",0);
	set_name(0x4c0928,"*sync.entry.unexpungeLocked", 0x800);
	create_struct(0x4c0928,-1,"Go_method");
	set_name(0x4b48e8,"*runtime.notInHeap.add", 0x800);
	create_struct(0x4b48e8,-1,"Go_method");
	set_name(0x4c7108,"*fmt.fmt.clearflags", 0x800);
	create_struct(0x4c7108,-1,"Go_method");
	set_name(0x4c7118,"*fmt.fmt.fmtBoolean", 0x800);
	create_struct(0x4c7118,-1,"Go_method");
	if (!is_code(get_flags(0x4954b0)))
	{
		del_items(0x4954b0);
		add_func(0x4954b0,BADADDR);
	}
	if (!is_code(get_flags(0x4954b0)))
	{
		del_items(0x4954b0);
		add_func(0x4954b0,BADADDR);
	}
	set_cmt(0x4c7118,"ifn @ 0x4954b0, tfn @ 0x4954b0",0);
	set_name(0x4c7128,"*fmt.fmt.fmtBs", 0x800);
	create_struct(0x4c7128,-1,"Go_method");
	if (!is_code(get_flags(0x4960e0)))
	{
		del_items(0x4960e0);
		add_func(0x4960e0,BADADDR);
	}
	if (!is_code(get_flags(0x4960e0)))
	{
		del_items(0x4960e0);
		add_func(0x4960e0,BADADDR);
	}
	set_cmt(0x4c7128,"ifn @ 0x4960e0, tfn @ 0x4960e0",0);
	set_name(0x4c7138,"*fmt.fmt.fmtBx", 0x800);
	create_struct(0x4c7138,-1,"Go_method");
	set_name(0x4c7148,"*fmt.fmt.fmtC", 0x800);
	create_struct(0x4c7148,-1,"Go_method");
	if (!is_code(get_flags(0x496920)))
	{
		del_items(0x496920);
		add_func(0x496920,BADADDR);
	}
	if (!is_code(get_flags(0x496920)))
	{
		del_items(0x496920);
		add_func(0x496920,BADADDR);
	}
	set_cmt(0x4c7148,"ifn @ 0x496920, tfn @ 0x496920",0);
	set_name(0x4c7158,"*fmt.fmt.fmtFloat", 0x800);
	create_struct(0x4c7158,-1,"Go_method");
	if (!is_code(get_flags(0x496af0)))
	{
		del_items(0x496af0);
		add_func(0x496af0,BADADDR);
	}
	if (!is_code(get_flags(0x496af0)))
	{
		del_items(0x496af0);
		add_func(0x496af0,BADADDR);
	}
	set_cmt(0x4c7158,"ifn @ 0x496af0, tfn @ 0x496af0",0);
	set_name(0x4c7168,"*fmt.fmt.fmtInteger", 0x800);
	create_struct(0x4c7168,-1,"Go_method");
	if (!is_code(get_flags(0x4958c0)))
	{
		del_items(0x4958c0);
		add_func(0x4958c0,BADADDR);
	}
	if (!is_code(get_flags(0x4958c0)))
	{
		del_items(0x4958c0);
		add_func(0x4958c0,BADADDR);
	}
	set_cmt(0x4c7168,"ifn @ 0x4958c0, tfn @ 0x4958c0",0);
	set_name(0x4c7178,"*fmt.fmt.fmtQ", 0x800);
	create_struct(0x4c7178,-1,"Go_method");
	if (!is_code(get_flags(0x496720)))
	{
		del_items(0x496720);
		add_func(0x496720,BADADDR);
	}
	if (!is_code(get_flags(0x496720)))
	{
		del_items(0x496720);
		add_func(0x496720,BADADDR);
	}
	set_cmt(0x4c7178,"ifn @ 0x496720, tfn @ 0x496720",0);
	set_name(0x4c7188,"*fmt.fmt.fmtQc", 0x800);
	create_struct(0x4c7188,-1,"Go_method");
	if (!is_code(get_flags(0x4969e0)))
	{
		del_items(0x4969e0);
		add_func(0x4969e0,BADADDR);
	}
	if (!is_code(get_flags(0x4969e0)))
	{
		del_items(0x4969e0);
		add_func(0x4969e0,BADADDR);
	}
	set_cmt(0x4c7188,"ifn @ 0x4969e0, tfn @ 0x4969e0",0);
	set_name(0x4c7198,"*fmt.fmt.fmtS", 0x800);
	create_struct(0x4c7198,-1,"Go_method");
	if (!is_code(get_flags(0x496060)))
	{
		del_items(0x496060);
		add_func(0x496060,BADADDR);
	}
	if (!is_code(get_flags(0x496060)))
	{
		del_items(0x496060);
		add_func(0x496060,BADADDR);
	}
	set_cmt(0x4c7198,"ifn @ 0x496060, tfn @ 0x496060",0);
	set_name(0x4c71a8,"*fmt.fmt.fmtSbx", 0x800);
	create_struct(0x4c71a8,-1,"Go_method");
	if (!is_code(get_flags(0x496170)))
	{
		del_items(0x496170);
		add_func(0x496170,BADADDR);
	}
	if (!is_code(get_flags(0x496170)))
	{
		del_items(0x496170);
		add_func(0x496170,BADADDR);
	}
	set_cmt(0x4c71a8,"ifn @ 0x496170, tfn @ 0x496170",0);
	set_name(0x4c71b8,"*fmt.fmt.fmtSx", 0x800);
	create_struct(0x4c71b8,-1,"Go_method");
	set_name(0x4c71c8,"*fmt.fmt.fmtUnicode", 0x800);
	create_struct(0x4c71c8,-1,"Go_method");
	if (!is_code(get_flags(0x495540)))
	{
		del_items(0x495540);
		add_func(0x495540,BADADDR);
	}
	if (!is_code(get_flags(0x495540)))
	{
		del_items(0x495540);
		add_func(0x495540,BADADDR);
	}
	set_cmt(0x4c71c8,"ifn @ 0x495540, tfn @ 0x495540",0);
	set_name(0x4c71d8,"*fmt.fmt.init", 0x800);
	create_struct(0x4c71d8,-1,"Go_method");
	set_name(0x4c71e8,"*fmt.fmt.pad", 0x800);
	create_struct(0x4c71e8,-1,"Go_method");
	if (!is_code(get_flags(0x494e20)))
	{
		del_items(0x494e20);
		add_func(0x494e20,BADADDR);
	}
	if (!is_code(get_flags(0x494e20)))
	{
		del_items(0x494e20);
		add_func(0x494e20,BADADDR);
	}
	set_cmt(0x4c71e8,"ifn @ 0x494e20, tfn @ 0x494e20",0);
	set_name(0x4c71f8,"*fmt.fmt.padString", 0x800);
	create_struct(0x4c71f8,-1,"Go_method");
	if (!is_code(get_flags(0x495170)))
	{
		del_items(0x495170);
		add_func(0x495170,BADADDR);
	}
	if (!is_code(get_flags(0x495170)))
	{
		del_items(0x495170);
		add_func(0x495170,BADADDR);
	}
	set_cmt(0x4c71f8,"ifn @ 0x495170, tfn @ 0x495170",0);
	set_name(0x4c7208,"*fmt.fmt.truncate", 0x800);
	create_struct(0x4c7208,-1,"Go_method");
	if (!is_code(get_flags(0x495f20)))
	{
		del_items(0x495f20);
		add_func(0x495f20,BADADDR);
	}
	if (!is_code(get_flags(0x495f20)))
	{
		del_items(0x495f20);
		add_func(0x495f20,BADADDR);
	}
	set_cmt(0x4c7208,"ifn @ 0x495f20, tfn @ 0x495f20",0);
	set_name(0x4c7218,"*fmt.fmt.truncateString", 0x800);
	create_struct(0x4c7218,-1,"Go_method");
	if (!is_code(get_flags(0x495e30)))
	{
		del_items(0x495e30);
		add_func(0x495e30,BADADDR);
	}
	if (!is_code(get_flags(0x495e30)))
	{
		del_items(0x495e30);
		add_func(0x495e30,BADADDR);
	}
	set_cmt(0x4c7218,"ifn @ 0x495e30, tfn @ 0x495e30",0);
	set_name(0x4c7228,"*fmt.fmt.writePadding", 0x800);
	create_struct(0x4c7228,-1,"Go_method");
	if (!is_code(get_flags(0x494c90)))
	{
		del_items(0x494c90);
		add_func(0x494c90,BADADDR);
	}
	if (!is_code(get_flags(0x494c90)))
	{
		del_items(0x494c90);
		add_func(0x494c90,BADADDR);
	}
	set_cmt(0x4c7228,"ifn @ 0x494c90, tfn @ 0x494c90",0);
	set_name(0x4ca908,"*reflect.funcTypeFixed4.Align", 0x800);
	create_struct(0x4ca908,-1,"Go_method");
	if (!is_code(get_flags(0x4849c0)))
	{
		del_items(0x4849c0);
		add_func(0x4849c0,BADADDR);
	}
	if (!is_code(get_flags(0x4849c0)))
	{
		del_items(0x4849c0);
		add_func(0x4849c0,BADADDR);
	}
	set_cmt(0x4ca908,"ifn @ 0x4849c0, tfn @ 0x4849c0",0);
	set_name(0x4ca918,"*reflect.funcTypeFixed4.AssignableTo", 0x800);
	create_struct(0x4ca918,-1,"Go_method");
	if (!is_code(get_flags(0x4849e0)))
	{
		del_items(0x4849e0);
		add_func(0x4849e0,BADADDR);
	}
	if (!is_code(get_flags(0x4849e0)))
	{
		del_items(0x4849e0);
		add_func(0x4849e0,BADADDR);
	}
	set_cmt(0x4ca918,"ifn @ 0x4849e0, tfn @ 0x4849e0",0);
	set_name(0x4ca928,"*reflect.funcTypeFixed4.Bits", 0x800);
	create_struct(0x4ca928,-1,"Go_method");
	if (!is_code(get_flags(0x484a00)))
	{
		del_items(0x484a00);
		add_func(0x484a00,BADADDR);
	}
	if (!is_code(get_flags(0x484a00)))
	{
		del_items(0x484a00);
		add_func(0x484a00,BADADDR);
	}
	set_cmt(0x4ca928,"ifn @ 0x484a00, tfn @ 0x484a00",0);
	set_name(0x4ca938,"*reflect.funcTypeFixed4.ChanDir", 0x800);
	create_struct(0x4ca938,-1,"Go_method");
	if (!is_code(get_flags(0x484a20)))
	{
		del_items(0x484a20);
		add_func(0x484a20,BADADDR);
	}
	if (!is_code(get_flags(0x484a20)))
	{
		del_items(0x484a20);
		add_func(0x484a20,BADADDR);
	}
	set_cmt(0x4ca938,"ifn @ 0x484a20, tfn @ 0x484a20",0);
	set_name(0x4ca948,"*reflect.funcTypeFixed4.Comparable", 0x800);
	create_struct(0x4ca948,-1,"Go_method");
	if (!is_code(get_flags(0x484a40)))
	{
		del_items(0x484a40);
		add_func(0x484a40,BADADDR);
	}
	if (!is_code(get_flags(0x484a40)))
	{
		del_items(0x484a40);
		add_func(0x484a40,BADADDR);
	}
	set_cmt(0x4ca948,"ifn @ 0x484a40, tfn @ 0x484a40",0);
	set_name(0x4ca958,"*reflect.funcTypeFixed4.ConvertibleTo", 0x800);
	create_struct(0x4ca958,-1,"Go_method");
	if (!is_code(get_flags(0x484a60)))
	{
		del_items(0x484a60);
		add_func(0x484a60,BADADDR);
	}
	if (!is_code(get_flags(0x484a60)))
	{
		del_items(0x484a60);
		add_func(0x484a60,BADADDR);
	}
	set_cmt(0x4ca958,"ifn @ 0x484a60, tfn @ 0x484a60",0);
	set_name(0x4ca968,"*reflect.funcTypeFixed4.Elem", 0x800);
	create_struct(0x4ca968,-1,"Go_method");
	if (!is_code(get_flags(0x484a80)))
	{
		del_items(0x484a80);
		add_func(0x484a80,BADADDR);
	}
	if (!is_code(get_flags(0x484a80)))
	{
		del_items(0x484a80);
		add_func(0x484a80,BADADDR);
	}
	set_cmt(0x4ca968,"ifn @ 0x484a80, tfn @ 0x484a80",0);
	set_name(0x4ca978,"*reflect.funcTypeFixed4.Field", 0x800);
	create_struct(0x4ca978,-1,"Go_method");
	if (!is_code(get_flags(0x484aa0)))
	{
		del_items(0x484aa0);
		add_func(0x484aa0,BADADDR);
	}
	if (!is_code(get_flags(0x484aa0)))
	{
		del_items(0x484aa0);
		add_func(0x484aa0,BADADDR);
	}
	set_cmt(0x4ca978,"ifn @ 0x484aa0, tfn @ 0x484aa0",0);
	set_name(0x4ca988,"*reflect.funcTypeFixed4.FieldAlign", 0x800);
	create_struct(0x4ca988,-1,"Go_method");
	if (!is_code(get_flags(0x484af0)))
	{
		del_items(0x484af0);
		add_func(0x484af0,BADADDR);
	}
	if (!is_code(get_flags(0x484af0)))
	{
		del_items(0x484af0);
		add_func(0x484af0,BADADDR);
	}
	set_cmt(0x4ca988,"ifn @ 0x484af0, tfn @ 0x484af0",0);
	set_name(0x4ca998,"*reflect.funcTypeFixed4.FieldByIndex", 0x800);
	create_struct(0x4ca998,-1,"Go_method");
	if (!is_code(get_flags(0x484b10)))
	{
		del_items(0x484b10);
		add_func(0x484b10,BADADDR);
	}
	if (!is_code(get_flags(0x484b10)))
	{
		del_items(0x484b10);
		add_func(0x484b10,BADADDR);
	}
	set_cmt(0x4ca998,"ifn @ 0x484b10, tfn @ 0x484b10",0);
	set_name(0x4ca9a8,"*reflect.funcTypeFixed4.FieldByName", 0x800);
	create_struct(0x4ca9a8,-1,"Go_method");
	if (!is_code(get_flags(0x484b60)))
	{
		del_items(0x484b60);
		add_func(0x484b60,BADADDR);
	}
	if (!is_code(get_flags(0x484b60)))
	{
		del_items(0x484b60);
		add_func(0x484b60,BADADDR);
	}
	set_cmt(0x4ca9a8,"ifn @ 0x484b60, tfn @ 0x484b60",0);
	set_name(0x4ca9b8,"*reflect.funcTypeFixed4.FieldByNameFunc", 0x800);
	create_struct(0x4ca9b8,-1,"Go_method");
	if (!is_code(get_flags(0x484bc0)))
	{
		del_items(0x484bc0);
		add_func(0x484bc0,BADADDR);
	}
	if (!is_code(get_flags(0x484bc0)))
	{
		del_items(0x484bc0);
		add_func(0x484bc0,BADADDR);
	}
	set_cmt(0x4ca9b8,"ifn @ 0x484bc0, tfn @ 0x484bc0",0);
	set_name(0x4ca9c8,"*reflect.funcTypeFixed4.Implements", 0x800);
	create_struct(0x4ca9c8,-1,"Go_method");
	if (!is_code(get_flags(0x484c20)))
	{
		del_items(0x484c20);
		add_func(0x484c20,BADADDR);
	}
	if (!is_code(get_flags(0x484c20)))
	{
		del_items(0x484c20);
		add_func(0x484c20,BADADDR);
	}
	set_cmt(0x4ca9c8,"ifn @ 0x484c20, tfn @ 0x484c20",0);
	set_name(0x4ca9d8,"*reflect.funcTypeFixed4.In", 0x800);
	create_struct(0x4ca9d8,-1,"Go_method");
	if (!is_code(get_flags(0x484c40)))
	{
		del_items(0x484c40);
		add_func(0x484c40,BADADDR);
	}
	if (!is_code(get_flags(0x484c40)))
	{
		del_items(0x484c40);
		add_func(0x484c40,BADADDR);
	}
	set_cmt(0x4ca9d8,"ifn @ 0x484c40, tfn @ 0x484c40",0);
	set_name(0x4ca9e8,"*reflect.funcTypeFixed4.IsVariadic", 0x800);
	create_struct(0x4ca9e8,-1,"Go_method");
	if (!is_code(get_flags(0x484c60)))
	{
		del_items(0x484c60);
		add_func(0x484c60,BADADDR);
	}
	if (!is_code(get_flags(0x484c60)))
	{
		del_items(0x484c60);
		add_func(0x484c60,BADADDR);
	}
	set_cmt(0x4ca9e8,"ifn @ 0x484c60, tfn @ 0x484c60",0);
	set_name(0x4ca9f8,"*reflect.funcTypeFixed4.Key", 0x800);
	create_struct(0x4ca9f8,-1,"Go_method");
	if (!is_code(get_flags(0x484c80)))
	{
		del_items(0x484c80);
		add_func(0x484c80,BADADDR);
	}
	if (!is_code(get_flags(0x484c80)))
	{
		del_items(0x484c80);
		add_func(0x484c80,BADADDR);
	}
	set_cmt(0x4ca9f8,"ifn @ 0x484c80, tfn @ 0x484c80",0);
	set_name(0x4caa08,"*reflect.funcTypeFixed4.Kind", 0x800);
	create_struct(0x4caa08,-1,"Go_method");
	if (!is_code(get_flags(0x484ca0)))
	{
		del_items(0x484ca0);
		add_func(0x484ca0,BADADDR);
	}
	if (!is_code(get_flags(0x484ca0)))
	{
		del_items(0x484ca0);
		add_func(0x484ca0,BADADDR);
	}
	set_cmt(0x4caa08,"ifn @ 0x484ca0, tfn @ 0x484ca0",0);
	set_name(0x4caa18,"*reflect.funcTypeFixed4.Len", 0x800);
	create_struct(0x4caa18,-1,"Go_method");
	if (!is_code(get_flags(0x484cc0)))
	{
		del_items(0x484cc0);
		add_func(0x484cc0,BADADDR);
	}
	if (!is_code(get_flags(0x484cc0)))
	{
		del_items(0x484cc0);
		add_func(0x484cc0,BADADDR);
	}
	set_cmt(0x4caa18,"ifn @ 0x484cc0, tfn @ 0x484cc0",0);
	set_name(0x4caa28,"*reflect.funcTypeFixed4.Method", 0x800);
	create_struct(0x4caa28,-1,"Go_method");
	if (!is_code(get_flags(0x484ce0)))
	{
		del_items(0x484ce0);
		add_func(0x484ce0,BADADDR);
	}
	if (!is_code(get_flags(0x484ce0)))
	{
		del_items(0x484ce0);
		add_func(0x484ce0,BADADDR);
	}
	set_cmt(0x4caa28,"ifn @ 0x484ce0, tfn @ 0x484ce0",0);
	set_name(0x4caa38,"*reflect.funcTypeFixed4.MethodByName", 0x800);
	create_struct(0x4caa38,-1,"Go_method");
	if (!is_code(get_flags(0x484d30)))
	{
		del_items(0x484d30);
		add_func(0x484d30,BADADDR);
	}
	if (!is_code(get_flags(0x484d30)))
	{
		del_items(0x484d30);
		add_func(0x484d30,BADADDR);
	}
	set_cmt(0x4caa38,"ifn @ 0x484d30, tfn @ 0x484d30",0);
	set_name(0x4caa48,"*reflect.funcTypeFixed4.Name", 0x800);
	create_struct(0x4caa48,-1,"Go_method");
	if (!is_code(get_flags(0x484d80)))
	{
		del_items(0x484d80);
		add_func(0x484d80,BADADDR);
	}
	if (!is_code(get_flags(0x484d80)))
	{
		del_items(0x484d80);
		add_func(0x484d80,BADADDR);
	}
	set_cmt(0x4caa48,"ifn @ 0x484d80, tfn @ 0x484d80",0);
	set_name(0x4caa58,"*reflect.funcTypeFixed4.NumField", 0x800);
	create_struct(0x4caa58,-1,"Go_method");
	if (!is_code(get_flags(0x484da0)))
	{
		del_items(0x484da0);
		add_func(0x484da0,BADADDR);
	}
	if (!is_code(get_flags(0x484da0)))
	{
		del_items(0x484da0);
		add_func(0x484da0,BADADDR);
	}
	set_cmt(0x4caa58,"ifn @ 0x484da0, tfn @ 0x484da0",0);
	set_name(0x4caa68,"*reflect.funcTypeFixed4.NumIn", 0x800);
	create_struct(0x4caa68,-1,"Go_method");
	if (!is_code(get_flags(0x484dc0)))
	{
		del_items(0x484dc0);
		add_func(0x484dc0,BADADDR);
	}
	if (!is_code(get_flags(0x484dc0)))
	{
		del_items(0x484dc0);
		add_func(0x484dc0,BADADDR);
	}
	set_cmt(0x4caa68,"ifn @ 0x484dc0, tfn @ 0x484dc0",0);
	set_name(0x4caa78,"*reflect.funcTypeFixed4.NumMethod", 0x800);
	create_struct(0x4caa78,-1,"Go_method");
	if (!is_code(get_flags(0x484de0)))
	{
		del_items(0x484de0);
		add_func(0x484de0,BADADDR);
	}
	if (!is_code(get_flags(0x484de0)))
	{
		del_items(0x484de0);
		add_func(0x484de0,BADADDR);
	}
	set_cmt(0x4caa78,"ifn @ 0x484de0, tfn @ 0x484de0",0);
	set_name(0x4caa88,"*reflect.funcTypeFixed4.NumOut", 0x800);
	create_struct(0x4caa88,-1,"Go_method");
	if (!is_code(get_flags(0x484e00)))
	{
		del_items(0x484e00);
		add_func(0x484e00,BADADDR);
	}
	if (!is_code(get_flags(0x484e00)))
	{
		del_items(0x484e00);
		add_func(0x484e00,BADADDR);
	}
	set_cmt(0x4caa88,"ifn @ 0x484e00, tfn @ 0x484e00",0);
	set_name(0x4caa98,"*reflect.funcTypeFixed4.Out", 0x800);
	create_struct(0x4caa98,-1,"Go_method");
	if (!is_code(get_flags(0x484e20)))
	{
		del_items(0x484e20);
		add_func(0x484e20,BADADDR);
	}
	if (!is_code(get_flags(0x484e20)))
	{
		del_items(0x484e20);
		add_func(0x484e20,BADADDR);
	}
	set_cmt(0x4caa98,"ifn @ 0x484e20, tfn @ 0x484e20",0);
	set_name(0x4caaa8,"*reflect.funcTypeFixed4.PkgPath", 0x800);
	create_struct(0x4caaa8,-1,"Go_method");
	if (!is_code(get_flags(0x484e40)))
	{
		del_items(0x484e40);
		add_func(0x484e40,BADADDR);
	}
	if (!is_code(get_flags(0x484e40)))
	{
		del_items(0x484e40);
		add_func(0x484e40,BADADDR);
	}
	set_cmt(0x4caaa8,"ifn @ 0x484e40, tfn @ 0x484e40",0);
	set_name(0x4caab8,"*reflect.funcTypeFixed4.Size", 0x800);
	create_struct(0x4caab8,-1,"Go_method");
	if (!is_code(get_flags(0x484e60)))
	{
		del_items(0x484e60);
		add_func(0x484e60,BADADDR);
	}
	if (!is_code(get_flags(0x484e60)))
	{
		del_items(0x484e60);
		add_func(0x484e60,BADADDR);
	}
	set_cmt(0x4caab8,"ifn @ 0x484e60, tfn @ 0x484e60",0);
	set_name(0x4caac8,"*reflect.funcTypeFixed4.String", 0x800);
	create_struct(0x4caac8,-1,"Go_method");
	if (!is_code(get_flags(0x484e80)))
	{
		del_items(0x484e80);
		add_func(0x484e80,BADADDR);
	}
	if (!is_code(get_flags(0x484e80)))
	{
		del_items(0x484e80);
		add_func(0x484e80,BADADDR);
	}
	set_cmt(0x4caac8,"ifn @ 0x484e80, tfn @ 0x484e80",0);
	set_name(0x4caad8,"*reflect.funcTypeFixed4.common", 0x800);
	create_struct(0x4caad8,-1,"Go_method");
	if (!is_code(get_flags(0x484ea0)))
	{
		del_items(0x484ea0);
		add_func(0x484ea0,BADADDR);
	}
	if (!is_code(get_flags(0x484ea0)))
	{
		del_items(0x484ea0);
		add_func(0x484ea0,BADADDR);
	}
	set_cmt(0x4caad8,"ifn @ 0x484ea0, tfn @ 0x484ea0",0);
	set_name(0x4caae8,"*reflect.funcTypeFixed4.exportedMethods", 0x800);
	create_struct(0x4caae8,-1,"Go_method");
	set_name(0x4caaf8,"*reflect.funcTypeFixed4.gcSlice", 0x800);
	create_struct(0x4caaf8,-1,"Go_method");
	set_name(0x4cab08,"*reflect.funcTypeFixed4.hasName", 0x800);
	create_struct(0x4cab08,-1,"Go_method");
	set_name(0x4cab18,"*reflect.funcTypeFixed4.in", 0x800);
	create_struct(0x4cab18,-1,"Go_method");
	set_name(0x4cab28,"*reflect.funcTypeFixed4.nameOff", 0x800);
	create_struct(0x4cab28,-1,"Go_method");
	set_name(0x4cab38,"*reflect.funcTypeFixed4.out", 0x800);
	create_struct(0x4cab38,-1,"Go_method");
	set_name(0x4cab48,"*reflect.funcTypeFixed4.pointers", 0x800);
	create_struct(0x4cab48,-1,"Go_method");
	set_name(0x4cab58,"*reflect.funcTypeFixed4.ptrTo", 0x800);
	create_struct(0x4cab58,-1,"Go_method");
	set_name(0x4cab68,"*reflect.funcTypeFixed4.textOff", 0x800);
	create_struct(0x4cab68,-1,"Go_method");
	set_name(0x4cab78,"*reflect.funcTypeFixed4.typeOff", 0x800);
	create_struct(0x4cab78,-1,"Go_method");
	set_name(0x4cab88,"*reflect.funcTypeFixed4.uncommon", 0x800);
	create_struct(0x4cab88,-1,"Go_method");
	if (!is_code(get_flags(0x484ec0)))
	{
		del_items(0x484ec0);
		add_func(0x484ec0,BADADDR);
	}
	if (!is_code(get_flags(0x484ec0)))
	{
		del_items(0x484ec0);
		add_func(0x484ec0,BADADDR);
	}
	set_cmt(0x4cab88,"ifn @ 0x484ec0, tfn @ 0x484ec0",0);
	set_name(0x4b6128,"*runtime.gcBits.bitp", 0x800);
	create_struct(0x4b6128,-1,"Go_method");
	set_name(0x4b6138,"*runtime.gcBits.bytep", 0x800);
	create_struct(0x4b6138,-1,"Go_method");
	set_name(0x4b6928,"*runtime.workbuf.checkempty", 0x800);
	create_struct(0x4b6928,-1,"Go_method");
	if (!is_code(get_flags(0x422430)))
	{
		del_items(0x422430);
		add_func(0x422430,BADADDR);
	}
	if (!is_code(get_flags(0x422430)))
	{
		del_items(0x422430);
		add_func(0x422430,BADADDR);
	}
	set_cmt(0x4b6928,"ifn @ 0x422430, tfn @ 0x422430",0);
	set_name(0x4b6938,"*runtime.workbuf.checknonempty", 0x800);
	create_struct(0x4b6938,-1,"Go_method");
	if (!is_code(get_flags(0x4223d0)))
	{
		del_items(0x4223d0);
		add_func(0x4223d0,BADADDR);
	}
	if (!is_code(get_flags(0x4223d0)))
	{
		del_items(0x4223d0);
		add_func(0x4223d0,BADADDR);
	}
	set_cmt(0x4b6938,"ifn @ 0x4223d0, tfn @ 0x4223d0",0);
	set_name(0x4b4948,"*runtime.stackObject.setType", 0x800);
	create_struct(0x4b4948,-1,"Go_method");
	set_name(0x4bc948,"*sync.poolChainElt.pack", 0x800);
	create_struct(0x4bc948,-1,"Go_method");
	set_name(0x4bc958,"*sync.poolChainElt.popHead", 0x800);
	create_struct(0x4bc958,-1,"Go_method");
	set_name(0x4bc968,"*sync.poolChainElt.popTail", 0x800);
	create_struct(0x4bc968,-1,"Go_method");
	set_name(0x4bc978,"*sync.poolChainElt.pushHead", 0x800);
	create_struct(0x4bc978,-1,"Go_method");
	set_name(0x4bc988,"*sync.poolChainElt.unpack", 0x800);
	create_struct(0x4bc988,-1,"Go_method");
	set_name(0x4b9948,"*struct { runtime.gList; n int32 }.empty", 0x800);
	create_struct(0x4b9948,-1,"Go_method");
	set_name(0x4b9958,"*struct { runtime.gList; n int32 }.pop", 0x800);
	create_struct(0x4b9958,-1,"Go_method");
	set_name(0x4b9968,"*struct { runtime.gList; n int32 }.push", 0x800);
	create_struct(0x4b9968,-1,"Go_method");
	set_name(0x4b9978,"*struct { runtime.gList; n int32 }.pushAll", 0x800);
	create_struct(0x4b9978,-1,"Go_method");
	set_name(0x4bd988,"*runtime.gQueue.empty", 0x800);
	create_struct(0x4bd988,-1,"Go_method");
	set_name(0x4bd998,"*runtime.gQueue.pop", 0x800);
	create_struct(0x4bd998,-1,"Go_method");
	set_name(0x4bd9a8,"*runtime.gQueue.popList", 0x800);
	create_struct(0x4bd9a8,-1,"Go_method");
	set_name(0x4bd9b8,"*runtime.gQueue.push", 0x800);
	create_struct(0x4bd9b8,-1,"Go_method");
	set_name(0x4bd9c8,"*runtime.gQueue.pushBack", 0x800);
	create_struct(0x4bd9c8,-1,"Go_method");
	set_name(0x4bd9d8,"*runtime.gQueue.pushBackAll", 0x800);
	create_struct(0x4bd9d8,-1,"Go_method");
	set_name(0x4c2188,"*runtime.pageBits.block64", 0x800);
	create_struct(0x4c2188,-1,"Go_method");
	set_name(0x4c2198,"*runtime.pageBits.clear", 0x800);
	create_struct(0x4c2198,-1,"Go_method");
	set_name(0x4c21a8,"*runtime.pageBits.clearAll", 0x800);
	create_struct(0x4c21a8,-1,"Go_method");
	if (!is_code(get_flags(0x429120)))
	{
		del_items(0x429120);
		add_func(0x429120,BADADDR);
	}
	if (!is_code(get_flags(0x429120)))
	{
		del_items(0x429120);
		add_func(0x429120,BADADDR);
	}
	set_cmt(0x4c21a8,"ifn @ 0x429120, tfn @ 0x429120",0);
	set_name(0x4c21b8,"*runtime.pageBits.clearRange", 0x800);
	create_struct(0x4c21b8,-1,"Go_method");
	if (!is_code(get_flags(0x428ff0)))
	{
		del_items(0x428ff0);
		add_func(0x428ff0,BADADDR);
	}
	if (!is_code(get_flags(0x428ff0)))
	{
		del_items(0x428ff0);
		add_func(0x428ff0,BADADDR);
	}
	set_cmt(0x4c21b8,"ifn @ 0x428ff0, tfn @ 0x428ff0",0);
	set_name(0x4c21c8,"*runtime.pageBits.get", 0x800);
	create_struct(0x4c21c8,-1,"Go_method");
	set_name(0x4c21d8,"*runtime.pageBits.popcntRange", 0x800);
	create_struct(0x4c21d8,-1,"Go_method");
	if (!is_code(get_flags(0x429140)))
	{
		del_items(0x429140);
		add_func(0x429140,BADADDR);
	}
	if (!is_code(get_flags(0x429140)))
	{
		del_items(0x429140);
		add_func(0x429140,BADADDR);
	}
	set_cmt(0x4c21d8,"ifn @ 0x429140, tfn @ 0x429140",0);
	set_name(0x4c21e8,"*runtime.pageBits.set", 0x800);
	create_struct(0x4c21e8,-1,"Go_method");
	set_name(0x4c21f8,"*runtime.pageBits.setAll", 0x800);
	create_struct(0x4c21f8,-1,"Go_method");
	if (!is_code(get_flags(0x428fd0)))
	{
		del_items(0x428fd0);
		add_func(0x428fd0,BADADDR);
	}
	if (!is_code(get_flags(0x428fd0)))
	{
		del_items(0x428fd0);
		add_func(0x428fd0,BADADDR);
	}
	set_cmt(0x4c21f8,"ifn @ 0x428fd0, tfn @ 0x428fd0",0);
	set_name(0x4c2208,"*runtime.pageBits.setRange", 0x800);
	create_struct(0x4c2208,-1,"Go_method");
	if (!is_code(get_flags(0x428eb0)))
	{
		del_items(0x428eb0);
		add_func(0x428eb0,BADADDR);
	}
	if (!is_code(get_flags(0x428eb0)))
	{
		del_items(0x428eb0);
		add_func(0x428eb0,BADADDR);
	}
	set_cmt(0x4c2208,"ifn @ 0x428eb0, tfn @ 0x428eb0",0);
	set_name(0x4b69a8,"*sync.Once.Do", 0x800);
	create_struct(0x4b69a8,-1,"Go_method");
	set_name(0x4b69b8,"*sync.Once.doSlow", 0x800);
	create_struct(0x4b69b8,-1,"Go_method");
	if (!is_code(get_flags(0x46eef0)))
	{
		del_items(0x46eef0);
		add_func(0x46eef0,BADADDR);
	}
	if (!is_code(get_flags(0x46eef0)))
	{
		del_items(0x46eef0);
		add_func(0x46eef0,BADADDR);
	}
	set_cmt(0x4b69b8,"ifn @ 0x46eef0, tfn @ 0x46eef0",0);
	set_name(0x4b49a8,"*runtime.structfield.offset", 0x800);
	create_struct(0x4b49a8,-1,"Go_method");
	set_name(0x4cb1a8,"*poll.FD.Accept", 0x800);
	create_struct(0x4cb1a8,-1,"Go_method");
	set_name(0x4cb1b8,"*poll.FD.Close", 0x800);
	create_struct(0x4cb1b8,-1,"Go_method");
	if (!is_code(get_flags(0x492780)))
	{
		del_items(0x492780);
		add_func(0x492780,BADADDR);
	}
	if (!is_code(get_flags(0x492780)))
	{
		del_items(0x492780);
		add_func(0x492780,BADADDR);
	}
	set_cmt(0x4cb1b8,"ifn @ 0x492780, tfn @ 0x492780",0);
	set_name(0x4cb1c8,"*poll.FD.ConnectEx", 0x800);
	create_struct(0x4cb1c8,-1,"Go_method");
	set_name(0x4cb1d8,"*poll.FD.Fchdir", 0x800);
	create_struct(0x4cb1d8,-1,"Go_method");
	set_name(0x4cb1e8,"*poll.FD.Fchmod", 0x800);
	create_struct(0x4cb1e8,-1,"Go_method");
	set_name(0x4cb1f8,"*poll.FD.Fchown", 0x800);
	create_struct(0x4cb1f8,-1,"Go_method");
	set_name(0x4cb208,"*poll.FD.FindNextFile", 0x800);
	create_struct(0x4cb208,-1,"Go_method");
	set_name(0x4cb218,"*poll.FD.Fsync", 0x800);
	create_struct(0x4cb218,-1,"Go_method");
	set_name(0x4cb228,"*poll.FD.Ftruncate", 0x800);
	create_struct(0x4cb228,-1,"Go_method");
	set_name(0x4cb238,"*poll.FD.GetFileInformationByHandle", 0x800);
	create_struct(0x4cb238,-1,"Go_method");
	set_name(0x4cb248,"*poll.FD.GetFileType", 0x800);
	create_struct(0x4cb248,-1,"Go_method");
	set_name(0x4cb258,"*poll.FD.Init", 0x800);
	create_struct(0x4cb258,-1,"Go_method");
	if (!is_code(get_flags(0x491dc0)))
	{
		del_items(0x491dc0);
		add_func(0x491dc0,BADADDR);
	}
	if (!is_code(get_flags(0x491dc0)))
	{
		del_items(0x491dc0);
		add_func(0x491dc0,BADADDR);
	}
	set_cmt(0x4cb258,"ifn @ 0x491dc0, tfn @ 0x491dc0",0);
	set_name(0x4cb268,"*poll.FD.Pread", 0x800);
	create_struct(0x4cb268,-1,"Go_method");
	set_name(0x4cb278,"*poll.FD.Pwrite", 0x800);
	create_struct(0x4cb278,-1,"Go_method");
	set_name(0x4cb288,"*poll.FD.RawControl", 0x800);
	create_struct(0x4cb288,-1,"Go_method");
	set_name(0x4cb298,"*poll.FD.RawRead", 0x800);
	create_struct(0x4cb298,-1,"Go_method");
	set_name(0x4cb2a8,"*poll.FD.RawWrite", 0x800);
	create_struct(0x4cb2a8,-1,"Go_method");
	set_name(0x4cb2b8,"*poll.FD.Read", 0x800);
	create_struct(0x4cb2b8,-1,"Go_method");
	set_name(0x4cb2c8,"*poll.FD.ReadFrom", 0x800);
	create_struct(0x4cb2c8,-1,"Go_method");
	set_name(0x4cb2d8,"*poll.FD.ReadMsg", 0x800);
	create_struct(0x4cb2d8,-1,"Go_method");
	set_name(0x4cb2e8,"*poll.FD.Seek", 0x800);
	create_struct(0x4cb2e8,-1,"Go_method");
	set_name(0x4cb2f8,"*poll.FD.SetDeadline", 0x800);
	create_struct(0x4cb2f8,-1,"Go_method");
	set_name(0x4cb308,"*poll.FD.SetReadDeadline", 0x800);
	create_struct(0x4cb308,-1,"Go_method");
	set_name(0x4cb318,"*poll.FD.SetWriteDeadline", 0x800);
	create_struct(0x4cb318,-1,"Go_method");
	set_name(0x4cb328,"*poll.FD.Setsockopt", 0x800);
	create_struct(0x4cb328,-1,"Go_method");
	set_name(0x4cb338,"*poll.FD.SetsockoptIPMreq", 0x800);
	create_struct(0x4cb338,-1,"Go_method");
	set_name(0x4cb348,"*poll.FD.SetsockoptIPv6Mreq", 0x800);
	create_struct(0x4cb348,-1,"Go_method");
	set_name(0x4cb358,"*poll.FD.SetsockoptInet4Addr", 0x800);
	create_struct(0x4cb358,-1,"Go_method");
	set_name(0x4cb368,"*poll.FD.SetsockoptInt", 0x800);
	create_struct(0x4cb368,-1,"Go_method");
	set_name(0x4cb378,"*poll.FD.SetsockoptLinger", 0x800);
	create_struct(0x4cb378,-1,"Go_method");
	set_name(0x4cb388,"*poll.FD.Shutdown", 0x800);
	create_struct(0x4cb388,-1,"Go_method");
	set_name(0x4cb398,"*poll.FD.WSAIoctl", 0x800);
	create_struct(0x4cb398,-1,"Go_method");
	set_name(0x4cb3a8,"*poll.FD.Write", 0x800);
	create_struct(0x4cb3a8,-1,"Go_method");
	if (!is_code(get_flags(0x4928b0)))
	{
		del_items(0x4928b0);
		add_func(0x4928b0,BADADDR);
	}
	if (!is_code(get_flags(0x4928b0)))
	{
		del_items(0x4928b0);
		add_func(0x4928b0,BADADDR);
	}
	set_cmt(0x4cb3a8,"ifn @ 0x4928b0, tfn @ 0x4928b0",0);
	set_name(0x4cb3b8,"*poll.FD.WriteMsg", 0x800);
	create_struct(0x4cb3b8,-1,"Go_method");
	set_name(0x4cb3c8,"*poll.FD.WriteTo", 0x800);
	create_struct(0x4cb3c8,-1,"Go_method");
	set_name(0x4cb3d8,"*poll.FD.Writev", 0x800);
	create_struct(0x4cb3d8,-1,"Go_method");
	set_name(0x4cb3e8,"*poll.FD.acceptOne", 0x800);
	create_struct(0x4cb3e8,-1,"Go_method");
	set_name(0x4cb3f8,"*poll.FD.decref", 0x800);
	create_struct(0x4cb3f8,-1,"Go_method");
	if (!is_code(get_flags(0x490d90)))
	{
		del_items(0x490d90);
		add_func(0x490d90,BADADDR);
	}
	if (!is_code(get_flags(0x490d90)))
	{
		del_items(0x490d90);
		add_func(0x490d90,BADADDR);
	}
	set_cmt(0x4cb3f8,"ifn @ 0x490d90, tfn @ 0x490d90",0);
	set_name(0x4cb408,"*poll.FD.destroy", 0x800);
	create_struct(0x4cb408,-1,"Go_method");
	if (!is_code(get_flags(0x492640)))
	{
		del_items(0x492640);
		add_func(0x492640,BADADDR);
	}
	if (!is_code(get_flags(0x492640)))
	{
		del_items(0x492640);
		add_func(0x492640,BADADDR);
	}
	set_cmt(0x4cb408,"ifn @ 0x492640, tfn @ 0x492640",0);
	set_name(0x4cb418,"*poll.FD.eofError", 0x800);
	create_struct(0x4cb418,-1,"Go_method");
	set_name(0x4cb428,"*poll.FD.incref", 0x800);
	create_struct(0x4cb428,-1,"Go_method");
	set_name(0x4cb438,"*poll.FD.readConsole", 0x800);
	create_struct(0x4cb438,-1,"Go_method");
	set_name(0x4cb448,"*poll.FD.readLock", 0x800);
	create_struct(0x4cb448,-1,"Go_method");
	set_name(0x4cb458,"*poll.FD.readUnlock", 0x800);
	create_struct(0x4cb458,-1,"Go_method");
	set_name(0x4cb468,"*poll.FD.writeConsole", 0x800);
	create_struct(0x4cb468,-1,"Go_method");
	if (!is_code(get_flags(0x492d60)))
	{
		del_items(0x492d60);
		add_func(0x492d60,BADADDR);
	}
	if (!is_code(get_flags(0x492d60)))
	{
		del_items(0x492d60);
		add_func(0x492d60,BADADDR);
	}
	set_cmt(0x4cb468,"ifn @ 0x492d60, tfn @ 0x492d60",0);
	set_name(0x4cb478,"*poll.FD.writeLock", 0x800);
	create_struct(0x4cb478,-1,"Go_method");
	set_name(0x4cb488,"*poll.FD.writeUnlock", 0x800);
	create_struct(0x4cb488,-1,"Go_method");
	if (!is_code(get_flags(0x490e10)))
	{
		del_items(0x490e10);
		add_func(0x490e10,BADADDR);
	}
	if (!is_code(get_flags(0x490e10)))
	{
		del_items(0x490e10);
		add_func(0x490e10,BADADDR);
	}
	set_cmt(0x4cb488,"ifn @ 0x490e10, tfn @ 0x490e10",0);
	set_name(0x4b61a8,"*runtime.hchan.raceaddr", 0x800);
	create_struct(0x4b61a8,-1,"Go_method");
	set_name(0x4b61b8,"*runtime.hchan.sortkey", 0x800);
	create_struct(0x4b61b8,-1,"Go_method");
	set_name(0x4b91c8,"*fmt.buffer.write", 0x800);
	create_struct(0x4b91c8,-1,"Go_method");
	set_name(0x4b91d8,"*fmt.buffer.writeByte", 0x800);
	create_struct(0x4b91d8,-1,"Go_method");
	set_name(0x4b91e8,"*fmt.buffer.writeRune", 0x800);
	create_struct(0x4b91e8,-1,"Go_method");
	if (!is_code(get_flags(0x497430)))
	{
		del_items(0x497430);
		add_func(0x497430,BADADDR);
	}
	if (!is_code(get_flags(0x497430)))
	{
		del_items(0x497430);
		add_func(0x497430,BADADDR);
	}
	set_cmt(0x4b91e8,"ifn @ 0x497430, tfn @ 0x497430",0);
	set_name(0x4b91f8,"*fmt.buffer.writeString", 0x800);
	create_struct(0x4b91f8,-1,"Go_method");
	set_name(0x4b71c8,"*fmtsort.SortedMap.Len", 0x800);
	create_struct(0x4b71c8,-1,"Go_method");
	if (!is_code(get_flags(0x486800)))
	{
		del_items(0x486800);
		add_func(0x486800,BADADDR);
	}
	if (!is_code(get_flags(0x486800)))
	{
		del_items(0x486800);
		add_func(0x486800,BADADDR);
	}
	set_cmt(0x4b71c8,"ifn @ 0x486800, tfn @ 0x486800",0);
	set_name(0x4b71d8,"*fmtsort.SortedMap.Less", 0x800);
	create_struct(0x4b71d8,-1,"Go_method");
	if (!is_code(get_flags(0x486810)))
	{
		del_items(0x486810);
		add_func(0x486810,BADADDR);
	}
	if (!is_code(get_flags(0x486810)))
	{
		del_items(0x486810);
		add_func(0x486810,BADADDR);
	}
	set_cmt(0x4b71d8,"ifn @ 0x486810, tfn @ 0x486810",0);
	set_name(0x4b71e8,"*fmtsort.SortedMap.Swap", 0x800);
	create_struct(0x4b71e8,-1,"Go_method");
	if (!is_code(get_flags(0x4868d0)))
	{
		del_items(0x4868d0);
		add_func(0x4868d0,BADADDR);
	}
	if (!is_code(get_flags(0x4868d0)))
	{
		del_items(0x4868d0);
		add_func(0x4868d0,BADADDR);
	}
	set_cmt(0x4b71e8,"ifn @ 0x4868d0, tfn @ 0x4868d0",0);
	set_name(0x4b99e8,"*struct { sync.Mutex; m sync.Map }.Lock", 0x800);
	create_struct(0x4b99e8,-1,"Go_method");
	set_name(0x4b99f8,"*struct { sync.Mutex; m sync.Map }.Unlock", 0x800);
	create_struct(0x4b99f8,-1,"Go_method");
	set_name(0x4b9a08,"*struct { sync.Mutex; m sync.Map }.lockSlow", 0x800);
	create_struct(0x4b9a08,-1,"Go_method");
	set_name(0x4b9a18,"*struct { sync.Mutex; m sync.Map }.unlockSlow", 0x800);
	create_struct(0x4b9a18,-1,"Go_method");
	set_name(0x4bc9e8,"*sync.poolDequeue.pack", 0x800);
	create_struct(0x4bc9e8,-1,"Go_method");
	set_name(0x4bc9f8,"*sync.poolDequeue.popHead", 0x800);
	create_struct(0x4bc9f8,-1,"Go_method");
	if (!is_code(get_flags(0x46fa20)))
	{
		del_items(0x46fa20);
		add_func(0x46fa20,BADADDR);
	}
	if (!is_code(get_flags(0x46fa20)))
	{
		del_items(0x46fa20);
		add_func(0x46fa20,BADADDR);
	}
	set_cmt(0x4bc9f8,"ifn @ 0x46fa20, tfn @ 0x46fa20",0);
	set_name(0x4bca08,"*sync.poolDequeue.popTail", 0x800);
	create_struct(0x4bca08,-1,"Go_method");
	if (!is_code(get_flags(0x46fb30)))
	{
		del_items(0x46fb30);
		add_func(0x46fb30,BADADDR);
	}
	if (!is_code(get_flags(0x46fb30)))
	{
		del_items(0x46fb30);
		add_func(0x46fb30,BADADDR);
	}
	set_cmt(0x4bca08,"ifn @ 0x46fb30, tfn @ 0x46fb30",0);
	set_name(0x4bca18,"*sync.poolDequeue.pushHead", 0x800);
	create_struct(0x4bca18,-1,"Go_method");
	if (!is_code(get_flags(0x46f920)))
	{
		del_items(0x46f920);
		add_func(0x46f920,BADADDR);
	}
	if (!is_code(get_flags(0x46f920)))
	{
		del_items(0x46f920);
		add_func(0x46f920,BADADDR);
	}
	set_cmt(0x4bca18,"ifn @ 0x46f920, tfn @ 0x46f920",0);
	set_name(0x4bca28,"*sync.poolDequeue.unpack", 0x800);
	create_struct(0x4bca28,-1,"Go_method");
	set_name(0x4b4a08,"*runtime.traceStackPtr.ptr", 0x800);
	create_struct(0x4b4a08,-1,"Go_method");
	set_name(0x4c8208,"*fmt.pp.Flag", 0x800);
	create_struct(0x4c8208,-1,"Go_method");
	if (!is_code(get_flags(0x497850)))
	{
		del_items(0x497850);
		add_func(0x497850,BADADDR);
	}
	if (!is_code(get_flags(0x497850)))
	{
		del_items(0x497850);
		add_func(0x497850,BADADDR);
	}
	set_cmt(0x4c8208,"ifn @ 0x497850, tfn @ 0x497850",0);
	set_name(0x4c8218,"*fmt.pp.Precision", 0x800);
	create_struct(0x4c8218,-1,"Go_method");
	if (!is_code(get_flags(0x497830)))
	{
		del_items(0x497830);
		add_func(0x497830,BADADDR);
	}
	if (!is_code(get_flags(0x497830)))
	{
		del_items(0x497830);
		add_func(0x497830,BADADDR);
	}
	set_cmt(0x4c8218,"ifn @ 0x497830, tfn @ 0x497830",0);
	set_name(0x4c8228,"*fmt.pp.Width", 0x800);
	create_struct(0x4c8228,-1,"Go_method");
	if (!is_code(get_flags(0x497810)))
	{
		del_items(0x497810);
		add_func(0x497810,BADADDR);
	}
	if (!is_code(get_flags(0x497810)))
	{
		del_items(0x497810);
		add_func(0x497810,BADADDR);
	}
	set_cmt(0x4c8228,"ifn @ 0x497810, tfn @ 0x497810",0);
	set_name(0x4c8238,"*fmt.pp.Write", 0x800);
	create_struct(0x4c8238,-1,"Go_method");
	if (!is_code(get_flags(0x4978e0)))
	{
		del_items(0x4978e0);
		add_func(0x4978e0,BADADDR);
	}
	if (!is_code(get_flags(0x4978e0)))
	{
		del_items(0x4978e0);
		add_func(0x4978e0,BADADDR);
	}
	set_cmt(0x4c8238,"ifn @ 0x4978e0, tfn @ 0x4978e0",0);
	set_name(0x4c8248,"*fmt.pp.WriteString", 0x800);
	create_struct(0x4c8248,-1,"Go_method");
	set_name(0x4c8258,"*fmt.pp.argNumber", 0x800);
	create_struct(0x4c8258,-1,"Go_method");
	if (!is_code(get_flags(0x49e190)))
	{
		del_items(0x49e190);
		add_func(0x49e190,BADADDR);
	}
	if (!is_code(get_flags(0x49e190)))
	{
		del_items(0x49e190);
		add_func(0x49e190,BADADDR);
	}
	set_cmt(0x4c8258,"ifn @ 0x49e190, tfn @ 0x49e190",0);
	set_name(0x4c8268,"*fmt.pp.badArgNum", 0x800);
	create_struct(0x4c8268,-1,"Go_method");
	if (!is_code(get_flags(0x49e2b0)))
	{
		del_items(0x49e2b0);
		add_func(0x49e2b0,BADADDR);
	}
	if (!is_code(get_flags(0x49e2b0)))
	{
		del_items(0x49e2b0);
		add_func(0x49e2b0,BADADDR);
	}
	set_cmt(0x4c8268,"ifn @ 0x49e2b0, tfn @ 0x49e2b0",0);
	set_name(0x4c8278,"*fmt.pp.badVerb", 0x800);
	create_struct(0x4c8278,-1,"Go_method");
	if (!is_code(get_flags(0x498030)))
	{
		del_items(0x498030);
		add_func(0x498030,BADADDR);
	}
	if (!is_code(get_flags(0x498030)))
	{
		del_items(0x498030);
		add_func(0x498030,BADADDR);
	}
	set_cmt(0x4c8278,"ifn @ 0x498030, tfn @ 0x498030",0);
	set_name(0x4c8288,"*fmt.pp.catchPanic", 0x800);
	create_struct(0x4c8288,-1,"Go_method");
	if (!is_code(get_flags(0x499f20)))
	{
		del_items(0x499f20);
		add_func(0x499f20,BADADDR);
	}
	if (!is_code(get_flags(0x499f20)))
	{
		del_items(0x499f20);
		add_func(0x499f20,BADADDR);
	}
	set_cmt(0x4c8288,"ifn @ 0x499f20, tfn @ 0x499f20",0);
	set_name(0x4c8298,"*fmt.pp.doPrint", 0x800);
	create_struct(0x4c8298,-1,"Go_method");
	set_name(0x4c82a8,"*fmt.pp.doPrintf", 0x800);
	create_struct(0x4c82a8,-1,"Go_method");
	if (!is_code(get_flags(0x49e5d0)))
	{
		del_items(0x49e5d0);
		add_func(0x49e5d0,BADADDR);
	}
	if (!is_code(get_flags(0x49e5d0)))
	{
		del_items(0x49e5d0);
		add_func(0x49e5d0,BADADDR);
	}
	set_cmt(0x4c82a8,"ifn @ 0x49e5d0, tfn @ 0x49e5d0",0);
	set_name(0x4c82b8,"*fmt.pp.doPrintln", 0x800);
	create_struct(0x4c82b8,-1,"Go_method");
	set_name(0x4c82c8,"*fmt.pp.fmt0x64", 0x800);
	create_struct(0x4c82c8,-1,"Go_method");
	if (!is_code(get_flags(0x498740)))
	{
		del_items(0x498740);
		add_func(0x498740,BADADDR);
	}
	if (!is_code(get_flags(0x498740)))
	{
		del_items(0x498740);
		add_func(0x498740,BADADDR);
	}
	set_cmt(0x4c82c8,"ifn @ 0x498740, tfn @ 0x498740",0);
	set_name(0x4c82d8,"*fmt.pp.fmtBool", 0x800);
	create_struct(0x4c82d8,-1,"Go_method");
	if (!is_code(get_flags(0x4986c0)))
	{
		del_items(0x4986c0);
		add_func(0x4986c0,BADADDR);
	}
	if (!is_code(get_flags(0x4986c0)))
	{
		del_items(0x4986c0);
		add_func(0x4986c0,BADADDR);
	}
	set_cmt(0x4c82d8,"ifn @ 0x4986c0, tfn @ 0x4986c0",0);
	set_name(0x4c82e8,"*fmt.pp.fmtBytes", 0x800);
	create_struct(0x4c82e8,-1,"Go_method");
	if (!is_code(get_flags(0x4990c0)))
	{
		del_items(0x4990c0);
		add_func(0x4990c0,BADADDR);
	}
	if (!is_code(get_flags(0x4990c0)))
	{
		del_items(0x4990c0);
		add_func(0x4990c0,BADADDR);
	}
	set_cmt(0x4c82e8,"ifn @ 0x4990c0, tfn @ 0x4990c0",0);
	set_name(0x4c82f8,"*fmt.pp.fmtComplex", 0x800);
	create_struct(0x4c82f8,-1,"Go_method");
	if (!is_code(get_flags(0x498cb0)))
	{
		del_items(0x498cb0);
		add_func(0x498cb0,BADADDR);
	}
	if (!is_code(get_flags(0x498cb0)))
	{
		del_items(0x498cb0);
		add_func(0x498cb0,BADADDR);
	}
	set_cmt(0x4c82f8,"ifn @ 0x498cb0, tfn @ 0x498cb0",0);
	set_name(0x4c8308,"*fmt.pp.fmtFloat", 0x800);
	create_struct(0x4c8308,-1,"Go_method");
	if (!is_code(get_flags(0x498b10)))
	{
		del_items(0x498b10);
		add_func(0x498b10,BADADDR);
	}
	if (!is_code(get_flags(0x498b10)))
	{
		del_items(0x498b10);
		add_func(0x498b10,BADADDR);
	}
	set_cmt(0x4c8308,"ifn @ 0x498b10, tfn @ 0x498b10",0);
	set_name(0x4c8318,"*fmt.pp.fmtInteger", 0x800);
	create_struct(0x4c8318,-1,"Go_method");
	if (!is_code(get_flags(0x4987e0)))
	{
		del_items(0x4987e0);
		add_func(0x4987e0,BADADDR);
	}
	if (!is_code(get_flags(0x4987e0)))
	{
		del_items(0x4987e0);
		add_func(0x4987e0,BADADDR);
	}
	set_cmt(0x4c8318,"ifn @ 0x4987e0, tfn @ 0x4987e0",0);
	set_name(0x4c8328,"*fmt.pp.fmtPointer", 0x800);
	create_struct(0x4c8328,-1,"Go_method");
	if (!is_code(get_flags(0x4999c0)))
	{
		del_items(0x4999c0);
		add_func(0x4999c0,BADADDR);
	}
	if (!is_code(get_flags(0x4999c0)))
	{
		del_items(0x4999c0);
		add_func(0x4999c0,BADADDR);
	}
	set_cmt(0x4c8328,"ifn @ 0x4999c0, tfn @ 0x4999c0",0);
	set_name(0x4c8338,"*fmt.pp.fmtString", 0x800);
	create_struct(0x4c8338,-1,"Go_method");
	if (!is_code(get_flags(0x498ef0)))
	{
		del_items(0x498ef0);
		add_func(0x498ef0,BADADDR);
	}
	if (!is_code(get_flags(0x498ef0)))
	{
		del_items(0x498ef0);
		add_func(0x498ef0,BADADDR);
	}
	set_cmt(0x4c8338,"ifn @ 0x498ef0, tfn @ 0x498ef0",0);
	set_name(0x4c8348,"*fmt.pp.free", 0x800);
	create_struct(0x4c8348,-1,"Go_method");
	if (!is_code(get_flags(0x497700)))
	{
		del_items(0x497700);
		add_func(0x497700,BADADDR);
	}
	if (!is_code(get_flags(0x497700)))
	{
		del_items(0x497700);
		add_func(0x497700,BADADDR);
	}
	set_cmt(0x4c8348,"ifn @ 0x497700, tfn @ 0x497700",0);
	set_name(0x4c8358,"*fmt.pp.handleMethods", 0x800);
	create_struct(0x4c8358,-1,"Go_method");
	if (!is_code(get_flags(0x49a5b0)))
	{
		del_items(0x49a5b0);
		add_func(0x49a5b0,BADADDR);
	}
	if (!is_code(get_flags(0x49a5b0)))
	{
		del_items(0x49a5b0);
		add_func(0x49a5b0,BADADDR);
	}
	set_cmt(0x4c8358,"ifn @ 0x49a5b0, tfn @ 0x49a5b0",0);
	set_name(0x4c8368,"*fmt.pp.missingArg", 0x800);
	create_struct(0x4c8368,-1,"Go_method");
	if (!is_code(get_flags(0x49e440)))
	{
		del_items(0x49e440);
		add_func(0x49e440,BADADDR);
	}
	if (!is_code(get_flags(0x49e440)))
	{
		del_items(0x49e440);
		add_func(0x49e440,BADADDR);
	}
	set_cmt(0x4c8368,"ifn @ 0x49e440, tfn @ 0x49e440",0);
	set_name(0x4c8378,"*fmt.pp.printArg", 0x800);
	create_struct(0x4c8378,-1,"Go_method");
	if (!is_code(get_flags(0x49ac70)))
	{
		del_items(0x49ac70);
		add_func(0x49ac70,BADADDR);
	}
	if (!is_code(get_flags(0x49ac70)))
	{
		del_items(0x49ac70);
		add_func(0x49ac70,BADADDR);
	}
	set_cmt(0x4c8378,"ifn @ 0x49ac70, tfn @ 0x49ac70",0);
	set_name(0x4c8388,"*fmt.pp.printValue", 0x800);
	create_struct(0x4c8388,-1,"Go_method");
	if (!is_code(get_flags(0x49b630)))
	{
		del_items(0x49b630);
		add_func(0x49b630,BADADDR);
	}
	if (!is_code(get_flags(0x49b630)))
	{
		del_items(0x49b630);
		add_func(0x49b630,BADADDR);
	}
	set_cmt(0x4c8388,"ifn @ 0x49b630, tfn @ 0x49b630",0);
	set_name(0x4c8398,"*fmt.pp.unknownType", 0x800);
	create_struct(0x4c8398,-1,"Go_method");
	if (!is_code(get_flags(0x497d00)))
	{
		del_items(0x497d00);
		add_func(0x497d00,BADADDR);
	}
	if (!is_code(get_flags(0x497d00)))
	{
		del_items(0x497d00);
		add_func(0x497d00,BADADDR);
	}
	set_cmt(0x4c8398,"ifn @ 0x497d00, tfn @ 0x497d00",0);
	set_name(0x4b6a28,"*sync.noCopy.Lock", 0x800);
	create_struct(0x4b6a28,-1,"Go_method");
	set_name(0x4b6a38,"*sync.noCopy.Unlock", 0x800);
	create_struct(0x4b6a38,-1,"Go_method");
	set_name(0x4b6228,"*runtime.itabTableType.add", 0x800);
	create_struct(0x4b6228,-1,"Go_method");
	if (!is_code(get_flags(0x408d80)))
	{
		del_items(0x408d80);
		add_func(0x408d80,BADADDR);
	}
	if (!is_code(get_flags(0x408d80)))
	{
		del_items(0x408d80);
		add_func(0x408d80,BADADDR);
	}
	set_cmt(0x4b6228,"ifn @ 0x408d80, tfn @ 0x408d80",0);
	set_name(0x4b6238,"*runtime.itabTableType.find", 0x800);
	create_struct(0x4b6238,-1,"Go_method");
	if (!is_code(get_flags(0x408bc0)))
	{
		del_items(0x408bc0);
		add_func(0x408bc0,BADADDR);
	}
	if (!is_code(get_flags(0x408bc0)))
	{
		del_items(0x408bc0);
		add_func(0x408bc0,BADADDR);
	}
	set_cmt(0x4b6238,"ifn @ 0x408bc0, tfn @ 0x408bc0",0);
	set_name(0x4c5a28,"*runtime.pageAlloc.alloc", 0x800);
	create_struct(0x4c5a28,-1,"Go_method");
	if (!is_code(get_flags(0x4279f0)))
	{
		del_items(0x4279f0);
		add_func(0x4279f0,BADADDR);
	}
	if (!is_code(get_flags(0x4279f0)))
	{
		del_items(0x4279f0);
		add_func(0x4279f0,BADADDR);
	}
	set_cmt(0x4c5a28,"ifn @ 0x4279f0, tfn @ 0x4279f0",0);
	set_name(0x4c5a38,"*runtime.pageAlloc.allocRange", 0x800);
	create_struct(0x4c5a38,-1,"Go_method");
	if (!is_code(get_flags(0x426920)))
	{
		del_items(0x426920);
		add_func(0x426920,BADADDR);
	}
	if (!is_code(get_flags(0x426920)))
	{
		del_items(0x426920);
		add_func(0x426920,BADADDR);
	}
	set_cmt(0x4c5a38,"ifn @ 0x426920, tfn @ 0x426920",0);
	set_name(0x4c5a48,"*runtime.pageAlloc.allocToCache", 0x800);
	create_struct(0x4c5a48,-1,"Go_method");
	if (!is_code(get_flags(0x428ba0)))
	{
		del_items(0x428ba0);
		add_func(0x428ba0,BADADDR);
	}
	if (!is_code(get_flags(0x428ba0)))
	{
		del_items(0x428ba0);
		add_func(0x428ba0,BADADDR);
	}
	set_cmt(0x4c5a48,"ifn @ 0x428ba0, tfn @ 0x428ba0",0);
	set_name(0x4c5a58,"*runtime.pageAlloc.chunkOf", 0x800);
	create_struct(0x4c5a58,-1,"Go_method");
	set_name(0x4c5a68,"*runtime.pageAlloc.compareSearchAddrTo", 0x800);
	create_struct(0x4c5a68,-1,"Go_method");
	set_name(0x4c5a78,"*runtime.pageAlloc.find", 0x800);
	create_struct(0x4c5a78,-1,"Go_method");
	if (!is_code(get_flags(0x426cf0)))
	{
		del_items(0x426cf0);
		add_func(0x426cf0,BADADDR);
	}
	if (!is_code(get_flags(0x426cf0)))
	{
		del_items(0x426cf0);
		add_func(0x426cf0,BADADDR);
	}
	set_cmt(0x4c5a78,"ifn @ 0x426cf0, tfn @ 0x426cf0",0);
	set_name(0x4c5a88,"*runtime.pageAlloc.free", 0x800);
	create_struct(0x4c5a88,-1,"Go_method");
	if (!is_code(get_flags(0x427d40)))
	{
		del_items(0x427d40);
		add_func(0x427d40,BADADDR);
	}
	if (!is_code(get_flags(0x427d40)))
	{
		del_items(0x427d40);
		add_func(0x427d40,BADADDR);
	}
	set_cmt(0x4c5a88,"ifn @ 0x427d40, tfn @ 0x427d40",0);
	set_name(0x4c5a98,"*runtime.pageAlloc.grow", 0x800);
	create_struct(0x4c5a98,-1,"Go_method");
	if (!is_code(get_flags(0x426080)))
	{
		del_items(0x426080);
		add_func(0x426080,BADADDR);
	}
	if (!is_code(get_flags(0x426080)))
	{
		del_items(0x426080);
		add_func(0x426080,BADADDR);
	}
	set_cmt(0x4c5a98,"ifn @ 0x426080, tfn @ 0x426080",0);
	set_name(0x4c5aa8,"*runtime.pageAlloc.init", 0x800);
	create_struct(0x4c5aa8,-1,"Go_method");
	if (!is_code(get_flags(0x425ee0)))
	{
		del_items(0x425ee0);
		add_func(0x425ee0,BADADDR);
	}
	if (!is_code(get_flags(0x425ee0)))
	{
		del_items(0x425ee0);
		add_func(0x425ee0,BADADDR);
	}
	set_cmt(0x4c5aa8,"ifn @ 0x425ee0, tfn @ 0x425ee0",0);
	set_name(0x4c5ab8,"*runtime.pageAlloc.resetScavengeAddr", 0x800);
	create_struct(0x4c5ab8,-1,"Go_method");
	if (!is_code(get_flags(0x41f330)))
	{
		del_items(0x41f330);
		add_func(0x41f330,BADADDR);
	}
	if (!is_code(get_flags(0x41f330)))
	{
		del_items(0x41f330);
		add_func(0x41f330,BADADDR);
	}
	set_cmt(0x4c5ab8,"ifn @ 0x41f330, tfn @ 0x41f330",0);
	set_name(0x4c5ac8,"*runtime.pageAlloc.scavenge", 0x800);
	create_struct(0x4c5ac8,-1,"Go_method");
	if (!is_code(get_flags(0x41f130)))
	{
		del_items(0x41f130);
		add_func(0x41f130,BADADDR);
	}
	if (!is_code(get_flags(0x41f130)))
	{
		del_items(0x41f130);
		add_func(0x41f130,BADADDR);
	}
	set_cmt(0x4c5ac8,"ifn @ 0x41f130, tfn @ 0x41f130",0);
	set_name(0x4c5ad8,"*runtime.pageAlloc.scavengeOne", 0x800);
	create_struct(0x4c5ad8,-1,"Go_method");
	if (!is_code(get_flags(0x41f3d0)))
	{
		del_items(0x41f3d0);
		add_func(0x41f3d0,BADADDR);
	}
	if (!is_code(get_flags(0x41f3d0)))
	{
		del_items(0x41f3d0);
		add_func(0x41f3d0,BADADDR);
	}
	set_cmt(0x4c5ad8,"ifn @ 0x41f3d0, tfn @ 0x41f3d0",0);
	set_name(0x4c5ae8,"*runtime.pageAlloc.scavengeRangeLocked", 0x800);
	create_struct(0x4c5ae8,-1,"Go_method");
	if (!is_code(get_flags(0x41fa40)))
	{
		del_items(0x41fa40);
		add_func(0x41fa40,BADADDR);
	}
	if (!is_code(get_flags(0x41fa40)))
	{
		del_items(0x41fa40);
		add_func(0x41fa40,BADADDR);
	}
	set_cmt(0x4c5ae8,"ifn @ 0x41fa40, tfn @ 0x41fa40",0);
	set_name(0x4c5af8,"*runtime.pageAlloc.sysGrow", 0x800);
	create_struct(0x4c5af8,-1,"Go_method");
	if (!is_code(get_flags(0x428310)))
	{
		del_items(0x428310);
		add_func(0x428310,BADADDR);
	}
	if (!is_code(get_flags(0x428310)))
	{
		del_items(0x428310);
		add_func(0x428310,BADADDR);
	}
	set_cmt(0x4c5af8,"ifn @ 0x428310, tfn @ 0x428310",0);
	set_name(0x4c5b08,"*runtime.pageAlloc.sysInit", 0x800);
	create_struct(0x4c5b08,-1,"Go_method");
	if (!is_code(get_flags(0x4281b0)))
	{
		del_items(0x4281b0);
		add_func(0x4281b0,BADADDR);
	}
	if (!is_code(get_flags(0x4281b0)))
	{
		del_items(0x4281b0);
		add_func(0x4281b0,BADADDR);
	}
	set_cmt(0x4c5b08,"ifn @ 0x4281b0, tfn @ 0x4281b0",0);
	set_name(0x4c5b18,"*runtime.pageAlloc.update", 0x800);
	create_struct(0x4c5b18,-1,"Go_method");
	if (!is_code(get_flags(0x426310)))
	{
		del_items(0x426310);
		add_func(0x426310,BADADDR);
	}
	if (!is_code(get_flags(0x426310)))
	{
		del_items(0x426310);
		add_func(0x426310,BADADDR);
	}
	set_cmt(0x4c5b18,"ifn @ 0x426310, tfn @ 0x426310",0);
	set_name(0x4b7248,"*poll.TimeoutError.Error", 0x800);
	create_struct(0x4b7248,-1,"Go_method");
	if (!is_code(get_flags(0x490910)))
	{
		del_items(0x490910);
		add_func(0x490910,BADADDR);
	}
	if (!is_code(get_flags(0x490910)))
	{
		del_items(0x490910);
		add_func(0x490910,BADADDR);
	}
	set_cmt(0x4b7248,"ifn @ 0x490910, tfn @ 0x490910",0);
	set_name(0x4b7258,"*poll.TimeoutError.Temporary", 0x800);
	create_struct(0x4b7258,-1,"Go_method");
	set_name(0x4b7268,"*poll.TimeoutError.Timeout", 0x800);
	create_struct(0x4b7268,-1,"Go_method");
	set_name(0x4bda48,"*runtime.mSpanList.init", 0x800);
	create_struct(0x4bda48,-1,"Go_method");
	set_name(0x4bda58,"*runtime.mSpanList.insert", 0x800);
	create_struct(0x4bda58,-1,"Go_method");
	if (!is_code(get_flags(0x424de0)))
	{
		del_items(0x424de0);
		add_func(0x424de0,BADADDR);
	}
	if (!is_code(get_flags(0x424de0)))
	{
		del_items(0x424de0);
		add_func(0x424de0,BADADDR);
	}
	set_cmt(0x4bda58,"ifn @ 0x424de0, tfn @ 0x424de0",0);
	set_name(0x4bda68,"*runtime.mSpanList.insertBack", 0x800);
	create_struct(0x4bda68,-1,"Go_method");
	if (!is_code(get_flags(0x424f00)))
	{
		del_items(0x424f00);
		add_func(0x424f00,BADADDR);
	}
	if (!is_code(get_flags(0x424f00)))
	{
		del_items(0x424f00);
		add_func(0x424f00,BADADDR);
	}
	set_cmt(0x4bda68,"ifn @ 0x424f00, tfn @ 0x424f00",0);
	set_name(0x4bda78,"*runtime.mSpanList.isEmpty", 0x800);
	create_struct(0x4bda78,-1,"Go_method");
	set_name(0x4bda88,"*runtime.mSpanList.remove", 0x800);
	create_struct(0x4bda88,-1,"Go_method");
	if (!is_code(get_flags(0x424c40)))
	{
		del_items(0x424c40);
		add_func(0x424c40,BADADDR);
	}
	if (!is_code(get_flags(0x424c40)))
	{
		del_items(0x424c40);
		add_func(0x424c40,BADADDR);
	}
	set_cmt(0x4bda88,"ifn @ 0x424c40, tfn @ 0x424c40",0);
	set_name(0x4bda98,"*runtime.mSpanList.takeAll", 0x800);
	create_struct(0x4bda98,-1,"Go_method");
	if (!is_code(get_flags(0x425020)))
	{
		del_items(0x425020);
		add_func(0x425020,BADADDR);
	}
	if (!is_code(get_flags(0x425020)))
	{
		del_items(0x425020);
		add_func(0x425020,BADADDR);
	}
	set_cmt(0x4bda98,"ifn @ 0x425020, tfn @ 0x425020",0);
	set_name(0x4c8a68,"*os.File.Chdir", 0x800);
	create_struct(0x4c8a68,-1,"Go_method");
	set_name(0x4c8a78,"*os.File.Chmod", 0x800);
	create_struct(0x4c8a78,-1,"Go_method");
	set_name(0x4c8a88,"*os.File.Chown", 0x800);
	create_struct(0x4c8a88,-1,"Go_method");
	set_name(0x4c8a98,"*os.File.Close", 0x800);
	create_struct(0x4c8a98,-1,"Go_method");
	set_name(0x4c8aa8,"*os.File.Fd", 0x800);
	create_struct(0x4c8aa8,-1,"Go_method");
	set_name(0x4c8ab8,"*os.File.Name", 0x800);
	create_struct(0x4c8ab8,-1,"Go_method");
	if (!is_code(get_flags(0x494030)))
	{
		del_items(0x494030);
		add_func(0x494030,BADADDR);
	}
	if (!is_code(get_flags(0x494030)))
	{
		del_items(0x494030);
		add_func(0x494030,BADADDR);
	}
	set_cmt(0x4c8ab8,"ifn @ 0x494030, tfn @ 0x494030",0);
	set_name(0x4c8ac8,"*os.File.Read", 0x800);
	create_struct(0x4c8ac8,-1,"Go_method");
	set_name(0x4c8ad8,"*os.File.ReadAt", 0x800);
	create_struct(0x4c8ad8,-1,"Go_method");
	set_name(0x4c8ae8,"*os.File.Readdir", 0x800);
	create_struct(0x4c8ae8,-1,"Go_method");
	set_name(0x4c8af8,"*os.File.Readdirnames", 0x800);
	create_struct(0x4c8af8,-1,"Go_method");
	set_name(0x4c8b08,"*os.File.Seek", 0x800);
	create_struct(0x4c8b08,-1,"Go_method");
	set_name(0x4c8b18,"*os.File.SetDeadline", 0x800);
	create_struct(0x4c8b18,-1,"Go_method");
	set_name(0x4c8b28,"*os.File.SetReadDeadline", 0x800);
	create_struct(0x4c8b28,-1,"Go_method");
	set_name(0x4c8b38,"*os.File.SetWriteDeadline", 0x800);
	create_struct(0x4c8b38,-1,"Go_method");
	set_name(0x4c8b48,"*os.File.Stat", 0x800);
	create_struct(0x4c8b48,-1,"Go_method");
	set_name(0x4c8b58,"*os.File.Sync", 0x800);
	create_struct(0x4c8b58,-1,"Go_method");
	set_name(0x4c8b68,"*os.File.SyscallConn", 0x800);
	create_struct(0x4c8b68,-1,"Go_method");
	set_name(0x4c8b78,"*os.File.Truncate", 0x800);
	create_struct(0x4c8b78,-1,"Go_method");
	set_name(0x4c8b88,"*os.File.Write", 0x800);
	create_struct(0x4c8b88,-1,"Go_method");
	if (!is_code(get_flags(0x494060)))
	{
		del_items(0x494060);
		add_func(0x494060,BADADDR);
	}
	if (!is_code(get_flags(0x494060)))
	{
		del_items(0x494060);
		add_func(0x494060,BADADDR);
	}
	set_cmt(0x4c8b88,"ifn @ 0x494060, tfn @ 0x494060",0);
	set_name(0x4c8b98,"*os.File.WriteAt", 0x800);
	create_struct(0x4c8b98,-1,"Go_method");
	set_name(0x4c8ba8,"*os.File.WriteString", 0x800);
	create_struct(0x4c8ba8,-1,"Go_method");
	set_name(0x4c8bb8,"*os.File.checkValid", 0x800);
	create_struct(0x4c8bb8,-1,"Go_method");
	set_name(0x4c8bc8,"*os.File.chmod", 0x800);
	create_struct(0x4c8bc8,-1,"Go_method");
	set_name(0x4c8bd8,"*os.File.close", 0x800);
	create_struct(0x4c8bd8,-1,"Go_method");
	set_name(0x4c8be8,"*os.File.isdir", 0x800);
	create_struct(0x4c8be8,-1,"Go_method");
	set_name(0x4c8bf8,"*os.File.pread", 0x800);
	create_struct(0x4c8bf8,-1,"Go_method");
	set_name(0x4c8c08,"*os.File.pwrite", 0x800);
	create_struct(0x4c8c08,-1,"Go_method");
	set_name(0x4c8c18,"*os.File.read", 0x800);
	create_struct(0x4c8c18,-1,"Go_method");
	set_name(0x4c8c28,"*os.File.readdir", 0x800);
	create_struct(0x4c8c28,-1,"Go_method");
	set_name(0x4c8c38,"*os.File.readdirnames", 0x800);
	create_struct(0x4c8c38,-1,"Go_method");
	set_name(0x4c8c48,"*os.File.seek", 0x800);
	create_struct(0x4c8c48,-1,"Go_method");
	set_name(0x4c8c58,"*os.File.setDeadline", 0x800);
	create_struct(0x4c8c58,-1,"Go_method");
	set_name(0x4c8c68,"*os.File.setReadDeadline", 0x800);
	create_struct(0x4c8c68,-1,"Go_method");
	set_name(0x4c8c78,"*os.File.setWriteDeadline", 0x800);
	create_struct(0x4c8c78,-1,"Go_method");
	set_name(0x4c8c88,"*os.File.wrapErr", 0x800);
	create_struct(0x4c8c88,-1,"Go_method");
	set_name(0x4c8c98,"*os.File.write", 0x800);
	create_struct(0x4c8c98,-1,"Go_method");
	set_name(0x4b9268,"*poll.operation.ClearBufs", 0x800);
	create_struct(0x4b9268,-1,"Go_method");
	set_name(0x4b9278,"*poll.operation.InitBuf", 0x800);
	create_struct(0x4b9278,-1,"Go_method");
	set_name(0x4b9288,"*poll.operation.InitBufs", 0x800);
	create_struct(0x4b9288,-1,"Go_method");
	set_name(0x4b9298,"*poll.operation.InitMsg", 0x800);
	create_struct(0x4b9298,-1,"Go_method");
	set_name(0x4c9268,"*reflect.ptrType.Align", 0x800);
	create_struct(0x4c9268,-1,"Go_method");
	if (!is_code(get_flags(0x485920)))
	{
		del_items(0x485920);
		add_func(0x485920,BADADDR);
	}
	if (!is_code(get_flags(0x485920)))
	{
		del_items(0x485920);
		add_func(0x485920,BADADDR);
	}
	set_cmt(0x4c9268,"ifn @ 0x485920, tfn @ 0x485920",0);
	set_name(0x4c9278,"*reflect.ptrType.AssignableTo", 0x800);
	create_struct(0x4c9278,-1,"Go_method");
	if (!is_code(get_flags(0x485940)))
	{
		del_items(0x485940);
		add_func(0x485940,BADADDR);
	}
	if (!is_code(get_flags(0x485940)))
	{
		del_items(0x485940);
		add_func(0x485940,BADADDR);
	}
	set_cmt(0x4c9278,"ifn @ 0x485940, tfn @ 0x485940",0);
	set_name(0x4c9288,"*reflect.ptrType.Bits", 0x800);
	create_struct(0x4c9288,-1,"Go_method");
	if (!is_code(get_flags(0x485960)))
	{
		del_items(0x485960);
		add_func(0x485960,BADADDR);
	}
	if (!is_code(get_flags(0x485960)))
	{
		del_items(0x485960);
		add_func(0x485960,BADADDR);
	}
	set_cmt(0x4c9288,"ifn @ 0x485960, tfn @ 0x485960",0);
	set_name(0x4c9298,"*reflect.ptrType.ChanDir", 0x800);
	create_struct(0x4c9298,-1,"Go_method");
	if (!is_code(get_flags(0x485980)))
	{
		del_items(0x485980);
		add_func(0x485980,BADADDR);
	}
	if (!is_code(get_flags(0x485980)))
	{
		del_items(0x485980);
		add_func(0x485980,BADADDR);
	}
	set_cmt(0x4c9298,"ifn @ 0x485980, tfn @ 0x485980",0);
	set_name(0x4c92a8,"*reflect.ptrType.Comparable", 0x800);
	create_struct(0x4c92a8,-1,"Go_method");
	if (!is_code(get_flags(0x4859a0)))
	{
		del_items(0x4859a0);
		add_func(0x4859a0,BADADDR);
	}
	if (!is_code(get_flags(0x4859a0)))
	{
		del_items(0x4859a0);
		add_func(0x4859a0,BADADDR);
	}
	set_cmt(0x4c92a8,"ifn @ 0x4859a0, tfn @ 0x4859a0",0);
	set_name(0x4c92b8,"*reflect.ptrType.ConvertibleTo", 0x800);
	create_struct(0x4c92b8,-1,"Go_method");
	if (!is_code(get_flags(0x4859c0)))
	{
		del_items(0x4859c0);
		add_func(0x4859c0,BADADDR);
	}
	if (!is_code(get_flags(0x4859c0)))
	{
		del_items(0x4859c0);
		add_func(0x4859c0,BADADDR);
	}
	set_cmt(0x4c92b8,"ifn @ 0x4859c0, tfn @ 0x4859c0",0);
	set_name(0x4c92c8,"*reflect.ptrType.Elem", 0x800);
	create_struct(0x4c92c8,-1,"Go_method");
	if (!is_code(get_flags(0x4859e0)))
	{
		del_items(0x4859e0);
		add_func(0x4859e0,BADADDR);
	}
	if (!is_code(get_flags(0x4859e0)))
	{
		del_items(0x4859e0);
		add_func(0x4859e0,BADADDR);
	}
	set_cmt(0x4c92c8,"ifn @ 0x4859e0, tfn @ 0x4859e0",0);
	set_name(0x4c92d8,"*reflect.ptrType.Field", 0x800);
	create_struct(0x4c92d8,-1,"Go_method");
	if (!is_code(get_flags(0x485a00)))
	{
		del_items(0x485a00);
		add_func(0x485a00,BADADDR);
	}
	if (!is_code(get_flags(0x485a00)))
	{
		del_items(0x485a00);
		add_func(0x485a00,BADADDR);
	}
	set_cmt(0x4c92d8,"ifn @ 0x485a00, tfn @ 0x485a00",0);
	set_name(0x4c92e8,"*reflect.ptrType.FieldAlign", 0x800);
	create_struct(0x4c92e8,-1,"Go_method");
	if (!is_code(get_flags(0x485a50)))
	{
		del_items(0x485a50);
		add_func(0x485a50,BADADDR);
	}
	if (!is_code(get_flags(0x485a50)))
	{
		del_items(0x485a50);
		add_func(0x485a50,BADADDR);
	}
	set_cmt(0x4c92e8,"ifn @ 0x485a50, tfn @ 0x485a50",0);
	set_name(0x4c92f8,"*reflect.ptrType.FieldByIndex", 0x800);
	create_struct(0x4c92f8,-1,"Go_method");
	if (!is_code(get_flags(0x485a70)))
	{
		del_items(0x485a70);
		add_func(0x485a70,BADADDR);
	}
	if (!is_code(get_flags(0x485a70)))
	{
		del_items(0x485a70);
		add_func(0x485a70,BADADDR);
	}
	set_cmt(0x4c92f8,"ifn @ 0x485a70, tfn @ 0x485a70",0);
	set_name(0x4c9308,"*reflect.ptrType.FieldByName", 0x800);
	create_struct(0x4c9308,-1,"Go_method");
	if (!is_code(get_flags(0x485ac0)))
	{
		del_items(0x485ac0);
		add_func(0x485ac0,BADADDR);
	}
	if (!is_code(get_flags(0x485ac0)))
	{
		del_items(0x485ac0);
		add_func(0x485ac0,BADADDR);
	}
	set_cmt(0x4c9308,"ifn @ 0x485ac0, tfn @ 0x485ac0",0);
	set_name(0x4c9318,"*reflect.ptrType.FieldByNameFunc", 0x800);
	create_struct(0x4c9318,-1,"Go_method");
	if (!is_code(get_flags(0x485b20)))
	{
		del_items(0x485b20);
		add_func(0x485b20,BADADDR);
	}
	if (!is_code(get_flags(0x485b20)))
	{
		del_items(0x485b20);
		add_func(0x485b20,BADADDR);
	}
	set_cmt(0x4c9318,"ifn @ 0x485b20, tfn @ 0x485b20",0);
	set_name(0x4c9328,"*reflect.ptrType.Implements", 0x800);
	create_struct(0x4c9328,-1,"Go_method");
	if (!is_code(get_flags(0x485b80)))
	{
		del_items(0x485b80);
		add_func(0x485b80,BADADDR);
	}
	if (!is_code(get_flags(0x485b80)))
	{
		del_items(0x485b80);
		add_func(0x485b80,BADADDR);
	}
	set_cmt(0x4c9328,"ifn @ 0x485b80, tfn @ 0x485b80",0);
	set_name(0x4c9338,"*reflect.ptrType.In", 0x800);
	create_struct(0x4c9338,-1,"Go_method");
	if (!is_code(get_flags(0x485ba0)))
	{
		del_items(0x485ba0);
		add_func(0x485ba0,BADADDR);
	}
	if (!is_code(get_flags(0x485ba0)))
	{
		del_items(0x485ba0);
		add_func(0x485ba0,BADADDR);
	}
	set_cmt(0x4c9338,"ifn @ 0x485ba0, tfn @ 0x485ba0",0);
	set_name(0x4c9348,"*reflect.ptrType.IsVariadic", 0x800);
	create_struct(0x4c9348,-1,"Go_method");
	if (!is_code(get_flags(0x485bc0)))
	{
		del_items(0x485bc0);
		add_func(0x485bc0,BADADDR);
	}
	if (!is_code(get_flags(0x485bc0)))
	{
		del_items(0x485bc0);
		add_func(0x485bc0,BADADDR);
	}
	set_cmt(0x4c9348,"ifn @ 0x485bc0, tfn @ 0x485bc0",0);
	set_name(0x4c9358,"*reflect.ptrType.Key", 0x800);
	create_struct(0x4c9358,-1,"Go_method");
	if (!is_code(get_flags(0x485be0)))
	{
		del_items(0x485be0);
		add_func(0x485be0,BADADDR);
	}
	if (!is_code(get_flags(0x485be0)))
	{
		del_items(0x485be0);
		add_func(0x485be0,BADADDR);
	}
	set_cmt(0x4c9358,"ifn @ 0x485be0, tfn @ 0x485be0",0);
	set_name(0x4c9368,"*reflect.ptrType.Kind", 0x800);
	create_struct(0x4c9368,-1,"Go_method");
	if (!is_code(get_flags(0x485c00)))
	{
		del_items(0x485c00);
		add_func(0x485c00,BADADDR);
	}
	if (!is_code(get_flags(0x485c00)))
	{
		del_items(0x485c00);
		add_func(0x485c00,BADADDR);
	}
	set_cmt(0x4c9368,"ifn @ 0x485c00, tfn @ 0x485c00",0);
	set_name(0x4c9378,"*reflect.ptrType.Len", 0x800);
	create_struct(0x4c9378,-1,"Go_method");
	if (!is_code(get_flags(0x485c20)))
	{
		del_items(0x485c20);
		add_func(0x485c20,BADADDR);
	}
	if (!is_code(get_flags(0x485c20)))
	{
		del_items(0x485c20);
		add_func(0x485c20,BADADDR);
	}
	set_cmt(0x4c9378,"ifn @ 0x485c20, tfn @ 0x485c20",0);
	set_name(0x4c9388,"*reflect.ptrType.Method", 0x800);
	create_struct(0x4c9388,-1,"Go_method");
	if (!is_code(get_flags(0x485c40)))
	{
		del_items(0x485c40);
		add_func(0x485c40,BADADDR);
	}
	if (!is_code(get_flags(0x485c40)))
	{
		del_items(0x485c40);
		add_func(0x485c40,BADADDR);
	}
	set_cmt(0x4c9388,"ifn @ 0x485c40, tfn @ 0x485c40",0);
	set_name(0x4c9398,"*reflect.ptrType.MethodByName", 0x800);
	create_struct(0x4c9398,-1,"Go_method");
	if (!is_code(get_flags(0x485c90)))
	{
		del_items(0x485c90);
		add_func(0x485c90,BADADDR);
	}
	if (!is_code(get_flags(0x485c90)))
	{
		del_items(0x485c90);
		add_func(0x485c90,BADADDR);
	}
	set_cmt(0x4c9398,"ifn @ 0x485c90, tfn @ 0x485c90",0);
	set_name(0x4c93a8,"*reflect.ptrType.Name", 0x800);
	create_struct(0x4c93a8,-1,"Go_method");
	if (!is_code(get_flags(0x485ce0)))
	{
		del_items(0x485ce0);
		add_func(0x485ce0,BADADDR);
	}
	if (!is_code(get_flags(0x485ce0)))
	{
		del_items(0x485ce0);
		add_func(0x485ce0,BADADDR);
	}
	set_cmt(0x4c93a8,"ifn @ 0x485ce0, tfn @ 0x485ce0",0);
	set_name(0x4c93b8,"*reflect.ptrType.NumField", 0x800);
	create_struct(0x4c93b8,-1,"Go_method");
	if (!is_code(get_flags(0x485d00)))
	{
		del_items(0x485d00);
		add_func(0x485d00,BADADDR);
	}
	if (!is_code(get_flags(0x485d00)))
	{
		del_items(0x485d00);
		add_func(0x485d00,BADADDR);
	}
	set_cmt(0x4c93b8,"ifn @ 0x485d00, tfn @ 0x485d00",0);
	set_name(0x4c93c8,"*reflect.ptrType.NumIn", 0x800);
	create_struct(0x4c93c8,-1,"Go_method");
	if (!is_code(get_flags(0x485d20)))
	{
		del_items(0x485d20);
		add_func(0x485d20,BADADDR);
	}
	if (!is_code(get_flags(0x485d20)))
	{
		del_items(0x485d20);
		add_func(0x485d20,BADADDR);
	}
	set_cmt(0x4c93c8,"ifn @ 0x485d20, tfn @ 0x485d20",0);
	set_name(0x4c93d8,"*reflect.ptrType.NumMethod", 0x800);
	create_struct(0x4c93d8,-1,"Go_method");
	if (!is_code(get_flags(0x485d40)))
	{
		del_items(0x485d40);
		add_func(0x485d40,BADADDR);
	}
	if (!is_code(get_flags(0x485d40)))
	{
		del_items(0x485d40);
		add_func(0x485d40,BADADDR);
	}
	set_cmt(0x4c93d8,"ifn @ 0x485d40, tfn @ 0x485d40",0);
	set_name(0x4c93e8,"*reflect.ptrType.NumOut", 0x800);
	create_struct(0x4c93e8,-1,"Go_method");
	if (!is_code(get_flags(0x485d60)))
	{
		del_items(0x485d60);
		add_func(0x485d60,BADADDR);
	}
	if (!is_code(get_flags(0x485d60)))
	{
		del_items(0x485d60);
		add_func(0x485d60,BADADDR);
	}
	set_cmt(0x4c93e8,"ifn @ 0x485d60, tfn @ 0x485d60",0);
	set_name(0x4c93f8,"*reflect.ptrType.Out", 0x800);
	create_struct(0x4c93f8,-1,"Go_method");
	if (!is_code(get_flags(0x485d80)))
	{
		del_items(0x485d80);
		add_func(0x485d80,BADADDR);
	}
	if (!is_code(get_flags(0x485d80)))
	{
		del_items(0x485d80);
		add_func(0x485d80,BADADDR);
	}
	set_cmt(0x4c93f8,"ifn @ 0x485d80, tfn @ 0x485d80",0);
	set_name(0x4c9408,"*reflect.ptrType.PkgPath", 0x800);
	create_struct(0x4c9408,-1,"Go_method");
	if (!is_code(get_flags(0x485da0)))
	{
		del_items(0x485da0);
		add_func(0x485da0,BADADDR);
	}
	if (!is_code(get_flags(0x485da0)))
	{
		del_items(0x485da0);
		add_func(0x485da0,BADADDR);
	}
	set_cmt(0x4c9408,"ifn @ 0x485da0, tfn @ 0x485da0",0);
	set_name(0x4c9418,"*reflect.ptrType.Size", 0x800);
	create_struct(0x4c9418,-1,"Go_method");
	if (!is_code(get_flags(0x485dc0)))
	{
		del_items(0x485dc0);
		add_func(0x485dc0,BADADDR);
	}
	if (!is_code(get_flags(0x485dc0)))
	{
		del_items(0x485dc0);
		add_func(0x485dc0,BADADDR);
	}
	set_cmt(0x4c9418,"ifn @ 0x485dc0, tfn @ 0x485dc0",0);
	set_name(0x4c9428,"*reflect.ptrType.String", 0x800);
	create_struct(0x4c9428,-1,"Go_method");
	if (!is_code(get_flags(0x485de0)))
	{
		del_items(0x485de0);
		add_func(0x485de0,BADADDR);
	}
	if (!is_code(get_flags(0x485de0)))
	{
		del_items(0x485de0);
		add_func(0x485de0,BADADDR);
	}
	set_cmt(0x4c9428,"ifn @ 0x485de0, tfn @ 0x485de0",0);
	set_name(0x4c9438,"*reflect.ptrType.common", 0x800);
	create_struct(0x4c9438,-1,"Go_method");
	if (!is_code(get_flags(0x485e00)))
	{
		del_items(0x485e00);
		add_func(0x485e00,BADADDR);
	}
	if (!is_code(get_flags(0x485e00)))
	{
		del_items(0x485e00);
		add_func(0x485e00,BADADDR);
	}
	set_cmt(0x4c9438,"ifn @ 0x485e00, tfn @ 0x485e00",0);
	set_name(0x4c9448,"*reflect.ptrType.exportedMethods", 0x800);
	create_struct(0x4c9448,-1,"Go_method");
	set_name(0x4c9458,"*reflect.ptrType.gcSlice", 0x800);
	create_struct(0x4c9458,-1,"Go_method");
	set_name(0x4c9468,"*reflect.ptrType.hasName", 0x800);
	create_struct(0x4c9468,-1,"Go_method");
	set_name(0x4c9478,"*reflect.ptrType.nameOff", 0x800);
	create_struct(0x4c9478,-1,"Go_method");
	set_name(0x4c9488,"*reflect.ptrType.pointers", 0x800);
	create_struct(0x4c9488,-1,"Go_method");
	set_name(0x4c9498,"*reflect.ptrType.ptrTo", 0x800);
	create_struct(0x4c9498,-1,"Go_method");
	set_name(0x4c94a8,"*reflect.ptrType.textOff", 0x800);
	create_struct(0x4c94a8,-1,"Go_method");
	set_name(0x4c94b8,"*reflect.ptrType.typeOff", 0x800);
	create_struct(0x4c94b8,-1,"Go_method");
	set_name(0x4c94c8,"*reflect.ptrType.uncommon", 0x800);
	create_struct(0x4c94c8,-1,"Go_method");
	if (!is_code(get_flags(0x485e20)))
	{
		del_items(0x485e20);
		add_func(0x485e20,BADADDR);
	}
	if (!is_code(get_flags(0x485e20)))
	{
		del_items(0x485e20);
		add_func(0x485e20,BADADDR);
	}
	set_cmt(0x4c94c8,"ifn @ 0x485e20, tfn @ 0x485e20",0);
	set_name(0x4c6268,"*runtime.mheap.alloc", 0x800);
	create_struct(0x4c6268,-1,"Go_method");
	if (!is_code(get_flags(0x423760)))
	{
		del_items(0x423760);
		add_func(0x423760,BADADDR);
	}
	if (!is_code(get_flags(0x423760)))
	{
		del_items(0x423760);
		add_func(0x423760,BADADDR);
	}
	set_cmt(0x4c6268,"ifn @ 0x423760, tfn @ 0x423760",0);
	set_name(0x4c6278,"*runtime.mheap.allocMSpanLocked", 0x800);
	create_struct(0x4c6278,-1,"Go_method");
	if (!is_code(get_flags(0x423b20)))
	{
		del_items(0x423b20);
		add_func(0x423b20,BADADDR);
	}
	if (!is_code(get_flags(0x423b20)))
	{
		del_items(0x423b20);
		add_func(0x423b20,BADADDR);
	}
	set_cmt(0x4c6278,"ifn @ 0x423b20, tfn @ 0x423b20",0);
	set_name(0x4c6288,"*runtime.mheap.allocManual", 0x800);
	create_struct(0x4c6288,-1,"Go_method");
	if (!is_code(get_flags(0x423850)))
	{
		del_items(0x423850);
		add_func(0x423850,BADADDR);
	}
	if (!is_code(get_flags(0x423850)))
	{
		del_items(0x423850);
		add_func(0x423850,BADADDR);
	}
	set_cmt(0x4c6288,"ifn @ 0x423850, tfn @ 0x423850",0);
	set_name(0x4c6298,"*runtime.mheap.allocNeedsZero", 0x800);
	create_struct(0x4c6298,-1,"Go_method");
	if (!is_code(get_flags(0x4239c0)))
	{
		del_items(0x4239c0);
		add_func(0x4239c0,BADADDR);
	}
	if (!is_code(get_flags(0x4239c0)))
	{
		del_items(0x4239c0);
		add_func(0x4239c0,BADADDR);
	}
	set_cmt(0x4c6298,"ifn @ 0x4239c0, tfn @ 0x4239c0",0);
	set_name(0x4c62a8,"*runtime.mheap.allocSpan", 0x800);
	create_struct(0x4c62a8,-1,"Go_method");
	if (!is_code(get_flags(0x423c40)))
	{
		del_items(0x423c40);
		add_func(0x423c40,BADADDR);
	}
	if (!is_code(get_flags(0x423c40)))
	{
		del_items(0x423c40);
		add_func(0x423c40,BADADDR);
	}
	set_cmt(0x4c62a8,"ifn @ 0x423c40, tfn @ 0x423c40",0);
	set_name(0x4c62b8,"*runtime.mheap.freeMSpanLocked", 0x800);
	create_struct(0x4c62b8,-1,"Go_method");
	set_name(0x4c62c8,"*runtime.mheap.freeManual", 0x800);
	create_struct(0x4c62c8,-1,"Go_method");
	if (!is_code(get_flags(0x4247e0)))
	{
		del_items(0x4247e0);
		add_func(0x4247e0,BADADDR);
	}
	if (!is_code(get_flags(0x4247e0)))
	{
		del_items(0x4247e0);
		add_func(0x4247e0,BADADDR);
	}
	set_cmt(0x4c62c8,"ifn @ 0x4247e0, tfn @ 0x4247e0",0);
	set_name(0x4c62d8,"*runtime.mheap.freeSpan", 0x800);
	create_struct(0x4c62d8,-1,"Go_method");
	if (!is_code(get_flags(0x424760)))
	{
		del_items(0x424760);
		add_func(0x424760,BADADDR);
	}
	if (!is_code(get_flags(0x424760)))
	{
		del_items(0x424760);
		add_func(0x424760,BADADDR);
	}
	set_cmt(0x4c62d8,"ifn @ 0x424760, tfn @ 0x424760",0);
	set_name(0x4c62e8,"*runtime.mheap.freeSpanLocked", 0x800);
	create_struct(0x4c62e8,-1,"Go_method");
	if (!is_code(get_flags(0x4248b0)))
	{
		del_items(0x4248b0);
		add_func(0x4248b0,BADADDR);
	}
	if (!is_code(get_flags(0x4248b0)))
	{
		del_items(0x4248b0);
		add_func(0x4248b0,BADADDR);
	}
	set_cmt(0x4c62e8,"ifn @ 0x4248b0, tfn @ 0x4248b0",0);
	set_name(0x4c62f8,"*runtime.mheap.grow", 0x800);
	create_struct(0x4c62f8,-1,"Go_method");
	if (!is_code(get_flags(0x4244a0)))
	{
		del_items(0x4244a0);
		add_func(0x4244a0,BADADDR);
	}
	if (!is_code(get_flags(0x4244a0)))
	{
		del_items(0x4244a0);
		add_func(0x4244a0,BADADDR);
	}
	set_cmt(0x4c62f8,"ifn @ 0x4244a0, tfn @ 0x4244a0",0);
	set_name(0x4c6308,"*runtime.mheap.init", 0x800);
	create_struct(0x4c6308,-1,"Go_method");
	if (!is_code(get_flags(0x422d80)))
	{
		del_items(0x422d80);
		add_func(0x422d80,BADADDR);
	}
	if (!is_code(get_flags(0x422d80)))
	{
		del_items(0x422d80);
		add_func(0x422d80,BADADDR);
	}
	set_cmt(0x4c6308,"ifn @ 0x422d80, tfn @ 0x422d80",0);
	set_name(0x4c6318,"*runtime.mheap.reclaim", 0x800);
	create_struct(0x4c6318,-1,"Go_method");
	if (!is_code(get_flags(0x423150)))
	{
		del_items(0x423150);
		add_func(0x423150,BADADDR);
	}
	if (!is_code(get_flags(0x423150)))
	{
		del_items(0x423150);
		add_func(0x423150,BADADDR);
	}
	set_cmt(0x4c6318,"ifn @ 0x423150, tfn @ 0x423150",0);
	set_name(0x4c6328,"*runtime.mheap.reclaimChunk", 0x800);
	create_struct(0x4c6328,-1,"Go_method");
	if (!is_code(get_flags(0x4233c0)))
	{
		del_items(0x4233c0);
		add_func(0x4233c0,BADADDR);
	}
	if (!is_code(get_flags(0x4233c0)))
	{
		del_items(0x4233c0);
		add_func(0x4233c0,BADADDR);
	}
	set_cmt(0x4c6328,"ifn @ 0x4233c0, tfn @ 0x4233c0",0);
	set_name(0x4c6338,"*runtime.mheap.scavengeAll", 0x800);
	create_struct(0x4c6338,-1,"Go_method");
	set_name(0x4c6348,"*runtime.mheap.setSpans", 0x800);
	create_struct(0x4c6348,-1,"Go_method");
	if (!is_code(get_flags(0x4238c0)))
	{
		del_items(0x4238c0);
		add_func(0x4238c0,BADADDR);
	}
	if (!is_code(get_flags(0x4238c0)))
	{
		del_items(0x4238c0);
		add_func(0x4238c0,BADADDR);
	}
	set_cmt(0x4c6348,"ifn @ 0x4238c0, tfn @ 0x4238c0",0);
	set_name(0x4c6358,"*runtime.mheap.sysAlloc", 0x800);
	create_struct(0x4c6358,-1,"Go_method");
	if (!is_code(get_flags(0x40aa00)))
	{
		del_items(0x40aa00);
		add_func(0x40aa00,BADADDR);
	}
	if (!is_code(get_flags(0x40aa00)))
	{
		del_items(0x40aa00);
		add_func(0x40aa00,BADADDR);
	}
	set_cmt(0x4c6358,"ifn @ 0x40aa00, tfn @ 0x40aa00",0);
	set_name(0x4c6368,"*runtime.mheap.tryAllocMSpan", 0x800);
	create_struct(0x4c6368,-1,"Go_method");
	set_name(0x4c4a68,"*runtime.pallocData.allocAll", 0x800);
	create_struct(0x4c4a68,-1,"Go_method");
	if (!is_code(get_flags(0x429c90)))
	{
		del_items(0x429c90);
		add_func(0x429c90,BADADDR);
	}
	if (!is_code(get_flags(0x429c90)))
	{
		del_items(0x429c90);
		add_func(0x429c90,BADADDR);
	}
	set_cmt(0x4c4a68,"ifn @ 0x429c90, tfn @ 0x429c90",0);
	set_name(0x4c4a78,"*runtime.pallocData.allocRange", 0x800);
	create_struct(0x4c4a78,-1,"Go_method");
	if (!is_code(get_flags(0x429c10)))
	{
		del_items(0x429c10);
		add_func(0x429c10,BADADDR);
	}
	if (!is_code(get_flags(0x429c10)))
	{
		del_items(0x429c10);
		add_func(0x429c10,BADADDR);
	}
	set_cmt(0x4c4a78,"ifn @ 0x429c10, tfn @ 0x429c10",0);
	set_name(0x4c4a88,"*runtime.pallocData.find", 0x800);
	create_struct(0x4c4a88,-1,"Go_method");
	set_name(0x4c4a98,"*runtime.pallocData.find1", 0x800);
	create_struct(0x4c4a98,-1,"Go_method");
	set_name(0x4c4aa8,"*runtime.pallocData.findLargeN", 0x800);
	create_struct(0x4c4aa8,-1,"Go_method");
	set_name(0x4c4ab8,"*runtime.pallocData.findScavengeCandidate", 0x800);
	create_struct(0x4c4ab8,-1,"Go_method");
	if (!is_code(get_flags(0x41feb0)))
	{
		del_items(0x41feb0);
		add_func(0x41feb0,BADADDR);
	}
	if (!is_code(get_flags(0x41feb0)))
	{
		del_items(0x41feb0);
		add_func(0x41feb0,BADADDR);
	}
	set_cmt(0x4c4ab8,"ifn @ 0x41feb0, tfn @ 0x41feb0",0);
	set_name(0x4c4ac8,"*runtime.pallocData.findSmallN", 0x800);
	create_struct(0x4c4ac8,-1,"Go_method");
	set_name(0x4c4ad8,"*runtime.pallocData.free", 0x800);
	create_struct(0x4c4ad8,-1,"Go_method");
	set_name(0x4c4ae8,"*runtime.pallocData.free1", 0x800);
	create_struct(0x4c4ae8,-1,"Go_method");
	set_name(0x4c4af8,"*runtime.pallocData.freeAll", 0x800);
	create_struct(0x4c4af8,-1,"Go_method");
	set_name(0x4c4b08,"*runtime.pallocData.hasScavengeCandidate", 0x800);
	create_struct(0x4c4b08,-1,"Go_method");
	if (!is_code(get_flags(0x41fd50)))
	{
		del_items(0x41fd50);
		add_func(0x41fd50,BADADDR);
	}
	if (!is_code(get_flags(0x41fd50)))
	{
		del_items(0x41fd50);
		add_func(0x41fd50,BADADDR);
	}
	set_cmt(0x4c4b08,"ifn @ 0x41fd50, tfn @ 0x41fd50",0);
	set_name(0x4c4b18,"*runtime.pallocData.pages64", 0x800);
	create_struct(0x4c4b18,-1,"Go_method");
	set_name(0x4c4b28,"*runtime.pallocData.summarize", 0x800);
	create_struct(0x4c4b28,-1,"Go_method");
	set_name(0x4b4a68,"*runtime.waitReason.String", 0x800);
	create_struct(0x4b4a68,-1,"Go_method");
	if (!is_code(get_flags(0x45f620)))
	{
		del_items(0x45f620);
		add_func(0x45f620,BADADDR);
	}
	if (!is_code(get_flags(0x45f620)))
	{
		del_items(0x45f620);
		add_func(0x45f620,BADADDR);
	}
	set_cmt(0x4b4a68,"ifn @ 0x45f620, tfn @ 0x45f620",0);
	set_name(0x4b9a88,"*sync.Mutex.Lock", 0x800);
	create_struct(0x4b9a88,-1,"Go_method");
	set_name(0x4b9a98,"*sync.Mutex.Unlock", 0x800);
	create_struct(0x4b9a98,-1,"Go_method");
	if (!is_code(get_flags(0x46eda0)))
	{
		del_items(0x46eda0);
		add_func(0x46eda0,BADADDR);
	}
	if (!is_code(get_flags(0x46eda0)))
	{
		del_items(0x46eda0);
		add_func(0x46eda0,BADADDR);
	}
	set_cmt(0x4b9a98,"ifn @ 0x46eda0, tfn @ 0x46eda0",0);
	set_name(0x4b9aa8,"*sync.Mutex.lockSlow", 0x800);
	create_struct(0x4b9aa8,-1,"Go_method");
	if (!is_code(get_flags(0x46eae0)))
	{
		del_items(0x46eae0);
		add_func(0x46eae0,BADADDR);
	}
	if (!is_code(get_flags(0x46eae0)))
	{
		del_items(0x46eae0);
		add_func(0x46eae0,BADADDR);
	}
	set_cmt(0x4b9aa8,"ifn @ 0x46eae0, tfn @ 0x46eae0",0);
	set_name(0x4b9ab8,"*sync.Mutex.unlockSlow", 0x800);
	create_struct(0x4b9ab8,-1,"Go_method");
	if (!is_code(get_flags(0x46ee00)))
	{
		del_items(0x46ee00);
		add_func(0x46ee00,BADADDR);
	}
	if (!is_code(get_flags(0x46ee00)))
	{
		del_items(0x46ee00);
		add_func(0x46ee00,BADADDR);
	}
	set_cmt(0x4b9ab8,"ifn @ 0x46ee00, tfn @ 0x46ee00",0);
	set_name(0x4b5aa8,"*poll.ioSrv.ExecIO", 0x800);
	create_struct(0x4b5aa8,-1,"Go_method");
	if (!is_code(get_flags(0x491600)))
	{
		del_items(0x491600);
		add_func(0x491600,BADADDR);
	}
	if (!is_code(get_flags(0x491600)))
	{
		del_items(0x491600);
		add_func(0x491600,BADADDR);
	}
	set_cmt(0x4b5aa8,"ifn @ 0x491600, tfn @ 0x491600",0);
	set_name(0x4b5ab8,"*poll.ioSrv.ProcessRemoteIO", 0x800);
	create_struct(0x4b5ab8,-1,"Go_method");
	if (!is_code(get_flags(0x4914a0)))
	{
		del_items(0x4914a0);
		add_func(0x4914a0,BADADDR);
	}
	if (!is_code(get_flags(0x4914a0)))
	{
		del_items(0x4914a0);
		add_func(0x4914a0,BADADDR);
	}
	set_cmt(0x4b5ab8,"ifn @ 0x4914a0, tfn @ 0x4914a0",0);
	set_name(0x4b6aa8,"*atomic.Value.Load", 0x800);
	create_struct(0x4b6aa8,-1,"Go_method");
	set_name(0x4b6ab8,"*atomic.Value.Store", 0x800);
	create_struct(0x4b6ab8,-1,"Go_method");
	if (!is_code(get_flags(0x464220)))
	{
		del_items(0x464220);
		add_func(0x464220,BADADDR);
	}
	if (!is_code(get_flags(0x464220)))
	{
		del_items(0x464220);
		add_func(0x464220,BADADDR);
	}
	set_cmt(0x4b6ab8,"ifn @ 0x464220, tfn @ 0x464220",0);
	set_name(0x4b62a8,"*runtime.linearAlloc.alloc", 0x800);
	create_struct(0x4b62a8,-1,"Go_method");
	if (!is_code(get_flags(0x40c920)))
	{
		del_items(0x40c920);
		add_func(0x40c920,BADADDR);
	}
	if (!is_code(get_flags(0x40c920)))
	{
		del_items(0x40c920);
		add_func(0x40c920,BADADDR);
	}
	set_cmt(0x4b62a8,"ifn @ 0x40c920, tfn @ 0x40c920",0);
	set_name(0x4b62b8,"*runtime.linearAlloc.init", 0x800);
	create_struct(0x4b62b8,-1,"Go_method");
	set_name(0x4b72c8,"*os.PathError.Error", 0x800);
	create_struct(0x4b72c8,-1,"Go_method");
	if (!is_code(get_flags(0x493650)))
	{
		del_items(0x493650);
		add_func(0x493650,BADADDR);
	}
	if (!is_code(get_flags(0x493650)))
	{
		del_items(0x493650);
		add_func(0x493650,BADADDR);
	}
	set_cmt(0x4b72c8,"ifn @ 0x493650, tfn @ 0x493650",0);
	set_name(0x4b72d8,"*os.PathError.Timeout", 0x800);
	create_struct(0x4b72d8,-1,"Go_method");
	set_name(0x4b72e8,"*os.PathError.Unwrap", 0x800);
	create_struct(0x4b72e8,-1,"Go_method");
	set_name(0x4b4ac8,"*syscall.DLLError.Error", 0x800);
	create_struct(0x4b4ac8,-1,"Go_method");
	if (!is_code(get_flags(0x488ee0)))
	{
		del_items(0x488ee0);
		add_func(0x488ee0,BADADDR);
	}
	if (!is_code(get_flags(0x488ee0)))
	{
		del_items(0x488ee0);
		add_func(0x488ee0,BADADDR);
	}
	set_cmt(0x4b4ac8,"ifn @ 0x488ee0, tfn @ 0x488ee0",0);
	set_name(0x4b9308,"*runtime.addrRanges.add", 0x800);
	create_struct(0x4b9308,-1,"Go_method");
	if (!is_code(get_flags(0x42b1c0)))
	{
		del_items(0x42b1c0);
		add_func(0x42b1c0,BADADDR);
	}
	if (!is_code(get_flags(0x42b1c0)))
	{
		del_items(0x42b1c0);
		add_func(0x42b1c0,BADADDR);
	}
	set_cmt(0x4b9308,"ifn @ 0x42b1c0, tfn @ 0x42b1c0",0);
	set_name(0x4b9318,"*runtime.addrRanges.contains", 0x800);
	create_struct(0x4b9318,-1,"Go_method");
	if (!is_code(get_flags(0x42b110)))
	{
		del_items(0x42b110);
		add_func(0x42b110,BADADDR);
	}
	if (!is_code(get_flags(0x42b110)))
	{
		del_items(0x42b110);
		add_func(0x42b110,BADADDR);
	}
	set_cmt(0x4b9318,"ifn @ 0x42b110, tfn @ 0x42b110",0);
	set_name(0x4b9328,"*runtime.addrRanges.findSucc", 0x800);
	create_struct(0x4b9328,-1,"Go_method");
	if (!is_code(get_flags(0x42b0d0)))
	{
		del_items(0x42b0d0);
		add_func(0x42b0d0,BADADDR);
	}
	if (!is_code(get_flags(0x42b0d0)))
	{
		del_items(0x42b0d0);
		add_func(0x42b0d0,BADADDR);
	}
	set_cmt(0x4b9328,"ifn @ 0x42b0d0, tfn @ 0x42b0d0",0);
	set_name(0x4b9338,"*runtime.addrRanges.init", 0x800);
	create_struct(0x4b9338,-1,"Go_method");
	if (!is_code(get_flags(0x42b030)))
	{
		del_items(0x42b030);
		add_func(0x42b030,BADADDR);
	}
	if (!is_code(get_flags(0x42b030)))
	{
		del_items(0x42b030);
		add_func(0x42b030,BADADDR);
	}
	set_cmt(0x4b9338,"ifn @ 0x42b030, tfn @ 0x42b030",0);
	set_name(0x4b4b28,"*syscall.Filetime.Nanoseconds", 0x800);
	create_struct(0x4b4b28,-1,"Go_method");
	set_name(0x4b5b28,"*reflectlite.uncommonType.exportedMethods", 0x800);
	create_struct(0x4b5b28,-1,"Go_method");
	set_name(0x4b5b38,"*reflectlite.uncommonType.methods", 0x800);
	create_struct(0x4b5b38,-1,"Go_method");
	set_name(0x4b6328,"*runtime.mSpanStateBox.get", 0x800);
	create_struct(0x4b6328,-1,"Go_method");
	set_name(0x4b6338,"*runtime.mSpanStateBox.set", 0x800);
	create_struct(0x4b6338,-1,"Go_method");
	set_name(0x4b9b28,"*syscall.Errno.Error", 0x800);
	create_struct(0x4b9b28,-1,"Go_method");
	if (!is_code(get_flags(0x48ed20)))
	{
		del_items(0x48ed20);
		add_func(0x48ed20,BADADDR);
	}
	if (!is_code(get_flags(0x48ed20)))
	{
		del_items(0x48ed20);
		add_func(0x48ed20,BADADDR);
	}
	set_cmt(0x4b9b28,"ifn @ 0x48ed20, tfn @ 0x48ed20",0);
	set_name(0x4b9b38,"*syscall.Errno.Is", 0x800);
	create_struct(0x4b9b38,-1,"Go_method");
	set_name(0x4b9b48,"*syscall.Errno.Temporary", 0x800);
	create_struct(0x4b9b48,-1,"Go_method");
	set_name(0x4b9b58,"*syscall.Errno.Timeout", 0x800);
	create_struct(0x4b9b58,-1,"Go_method");
	set_name(0x4b6b28,"*syscall.Proc.Addr", 0x800);
	create_struct(0x4b6b28,-1,"Go_method");
	set_name(0x4b6b38,"*syscall.Proc.Call", 0x800);
	create_struct(0x4b6b38,-1,"Go_method");
	set_name(0x4ca348,"*reflect.funcTypeFixed16.Align", 0x800);
	create_struct(0x4ca348,-1,"Go_method");
	if (!is_code(get_flags(0x483f80)))
	{
		del_items(0x483f80);
		add_func(0x483f80,BADADDR);
	}
	if (!is_code(get_flags(0x483f80)))
	{
		del_items(0x483f80);
		add_func(0x483f80,BADADDR);
	}
	set_cmt(0x4ca348,"ifn @ 0x483f80, tfn @ 0x483f80",0);
	set_name(0x4ca358,"*reflect.funcTypeFixed16.AssignableTo", 0x800);
	create_struct(0x4ca358,-1,"Go_method");
	if (!is_code(get_flags(0x483fa0)))
	{
		del_items(0x483fa0);
		add_func(0x483fa0,BADADDR);
	}
	if (!is_code(get_flags(0x483fa0)))
	{
		del_items(0x483fa0);
		add_func(0x483fa0,BADADDR);
	}
	set_cmt(0x4ca358,"ifn @ 0x483fa0, tfn @ 0x483fa0",0);
	set_name(0x4ca368,"*reflect.funcTypeFixed16.Bits", 0x800);
	create_struct(0x4ca368,-1,"Go_method");
	if (!is_code(get_flags(0x483fc0)))
	{
		del_items(0x483fc0);
		add_func(0x483fc0,BADADDR);
	}
	if (!is_code(get_flags(0x483fc0)))
	{
		del_items(0x483fc0);
		add_func(0x483fc0,BADADDR);
	}
	set_cmt(0x4ca368,"ifn @ 0x483fc0, tfn @ 0x483fc0",0);
	set_name(0x4ca378,"*reflect.funcTypeFixed16.ChanDir", 0x800);
	create_struct(0x4ca378,-1,"Go_method");
	if (!is_code(get_flags(0x483fe0)))
	{
		del_items(0x483fe0);
		add_func(0x483fe0,BADADDR);
	}
	if (!is_code(get_flags(0x483fe0)))
	{
		del_items(0x483fe0);
		add_func(0x483fe0,BADADDR);
	}
	set_cmt(0x4ca378,"ifn @ 0x483fe0, tfn @ 0x483fe0",0);
	set_name(0x4ca388,"*reflect.funcTypeFixed16.Comparable", 0x800);
	create_struct(0x4ca388,-1,"Go_method");
	if (!is_code(get_flags(0x484000)))
	{
		del_items(0x484000);
		add_func(0x484000,BADADDR);
	}
	if (!is_code(get_flags(0x484000)))
	{
		del_items(0x484000);
		add_func(0x484000,BADADDR);
	}
	set_cmt(0x4ca388,"ifn @ 0x484000, tfn @ 0x484000",0);
	set_name(0x4ca398,"*reflect.funcTypeFixed16.ConvertibleTo", 0x800);
	create_struct(0x4ca398,-1,"Go_method");
	if (!is_code(get_flags(0x484020)))
	{
		del_items(0x484020);
		add_func(0x484020,BADADDR);
	}
	if (!is_code(get_flags(0x484020)))
	{
		del_items(0x484020);
		add_func(0x484020,BADADDR);
	}
	set_cmt(0x4ca398,"ifn @ 0x484020, tfn @ 0x484020",0);
	set_name(0x4ca3a8,"*reflect.funcTypeFixed16.Elem", 0x800);
	create_struct(0x4ca3a8,-1,"Go_method");
	if (!is_code(get_flags(0x484040)))
	{
		del_items(0x484040);
		add_func(0x484040,BADADDR);
	}
	if (!is_code(get_flags(0x484040)))
	{
		del_items(0x484040);
		add_func(0x484040,BADADDR);
	}
	set_cmt(0x4ca3a8,"ifn @ 0x484040, tfn @ 0x484040",0);
	set_name(0x4ca3b8,"*reflect.funcTypeFixed16.Field", 0x800);
	create_struct(0x4ca3b8,-1,"Go_method");
	if (!is_code(get_flags(0x484060)))
	{
		del_items(0x484060);
		add_func(0x484060,BADADDR);
	}
	if (!is_code(get_flags(0x484060)))
	{
		del_items(0x484060);
		add_func(0x484060,BADADDR);
	}
	set_cmt(0x4ca3b8,"ifn @ 0x484060, tfn @ 0x484060",0);
	set_name(0x4ca3c8,"*reflect.funcTypeFixed16.FieldAlign", 0x800);
	create_struct(0x4ca3c8,-1,"Go_method");
	if (!is_code(get_flags(0x4840b0)))
	{
		del_items(0x4840b0);
		add_func(0x4840b0,BADADDR);
	}
	if (!is_code(get_flags(0x4840b0)))
	{
		del_items(0x4840b0);
		add_func(0x4840b0,BADADDR);
	}
	set_cmt(0x4ca3c8,"ifn @ 0x4840b0, tfn @ 0x4840b0",0);
	set_name(0x4ca3d8,"*reflect.funcTypeFixed16.FieldByIndex", 0x800);
	create_struct(0x4ca3d8,-1,"Go_method");
	if (!is_code(get_flags(0x4840d0)))
	{
		del_items(0x4840d0);
		add_func(0x4840d0,BADADDR);
	}
	if (!is_code(get_flags(0x4840d0)))
	{
		del_items(0x4840d0);
		add_func(0x4840d0,BADADDR);
	}
	set_cmt(0x4ca3d8,"ifn @ 0x4840d0, tfn @ 0x4840d0",0);
	set_name(0x4ca3e8,"*reflect.funcTypeFixed16.FieldByName", 0x800);
	create_struct(0x4ca3e8,-1,"Go_method");
	if (!is_code(get_flags(0x484120)))
	{
		del_items(0x484120);
		add_func(0x484120,BADADDR);
	}
	if (!is_code(get_flags(0x484120)))
	{
		del_items(0x484120);
		add_func(0x484120,BADADDR);
	}
	set_cmt(0x4ca3e8,"ifn @ 0x484120, tfn @ 0x484120",0);
	set_name(0x4ca3f8,"*reflect.funcTypeFixed16.FieldByNameFunc", 0x800);
	create_struct(0x4ca3f8,-1,"Go_method");
	if (!is_code(get_flags(0x484180)))
	{
		del_items(0x484180);
		add_func(0x484180,BADADDR);
	}
	if (!is_code(get_flags(0x484180)))
	{
		del_items(0x484180);
		add_func(0x484180,BADADDR);
	}
	set_cmt(0x4ca3f8,"ifn @ 0x484180, tfn @ 0x484180",0);
	set_name(0x4ca408,"*reflect.funcTypeFixed16.Implements", 0x800);
	create_struct(0x4ca408,-1,"Go_method");
	if (!is_code(get_flags(0x4841e0)))
	{
		del_items(0x4841e0);
		add_func(0x4841e0,BADADDR);
	}
	if (!is_code(get_flags(0x4841e0)))
	{
		del_items(0x4841e0);
		add_func(0x4841e0,BADADDR);
	}
	set_cmt(0x4ca408,"ifn @ 0x4841e0, tfn @ 0x4841e0",0);
	set_name(0x4ca418,"*reflect.funcTypeFixed16.In", 0x800);
	create_struct(0x4ca418,-1,"Go_method");
	if (!is_code(get_flags(0x484200)))
	{
		del_items(0x484200);
		add_func(0x484200,BADADDR);
	}
	if (!is_code(get_flags(0x484200)))
	{
		del_items(0x484200);
		add_func(0x484200,BADADDR);
	}
	set_cmt(0x4ca418,"ifn @ 0x484200, tfn @ 0x484200",0);
	set_name(0x4ca428,"*reflect.funcTypeFixed16.IsVariadic", 0x800);
	create_struct(0x4ca428,-1,"Go_method");
	if (!is_code(get_flags(0x484220)))
	{
		del_items(0x484220);
		add_func(0x484220,BADADDR);
	}
	if (!is_code(get_flags(0x484220)))
	{
		del_items(0x484220);
		add_func(0x484220,BADADDR);
	}
	set_cmt(0x4ca428,"ifn @ 0x484220, tfn @ 0x484220",0);
	set_name(0x4ca438,"*reflect.funcTypeFixed16.Key", 0x800);
	create_struct(0x4ca438,-1,"Go_method");
	if (!is_code(get_flags(0x484240)))
	{
		del_items(0x484240);
		add_func(0x484240,BADADDR);
	}
	if (!is_code(get_flags(0x484240)))
	{
		del_items(0x484240);
		add_func(0x484240,BADADDR);
	}
	set_cmt(0x4ca438,"ifn @ 0x484240, tfn @ 0x484240",0);
	set_name(0x4ca448,"*reflect.funcTypeFixed16.Kind", 0x800);
	create_struct(0x4ca448,-1,"Go_method");
	if (!is_code(get_flags(0x484260)))
	{
		del_items(0x484260);
		add_func(0x484260,BADADDR);
	}
	if (!is_code(get_flags(0x484260)))
	{
		del_items(0x484260);
		add_func(0x484260,BADADDR);
	}
	set_cmt(0x4ca448,"ifn @ 0x484260, tfn @ 0x484260",0);
	set_name(0x4ca458,"*reflect.funcTypeFixed16.Len", 0x800);
	create_struct(0x4ca458,-1,"Go_method");
	if (!is_code(get_flags(0x484280)))
	{
		del_items(0x484280);
		add_func(0x484280,BADADDR);
	}
	if (!is_code(get_flags(0x484280)))
	{
		del_items(0x484280);
		add_func(0x484280,BADADDR);
	}
	set_cmt(0x4ca458,"ifn @ 0x484280, tfn @ 0x484280",0);
	set_name(0x4ca468,"*reflect.funcTypeFixed16.Method", 0x800);
	create_struct(0x4ca468,-1,"Go_method");
	if (!is_code(get_flags(0x4842a0)))
	{
		del_items(0x4842a0);
		add_func(0x4842a0,BADADDR);
	}
	if (!is_code(get_flags(0x4842a0)))
	{
		del_items(0x4842a0);
		add_func(0x4842a0,BADADDR);
	}
	set_cmt(0x4ca468,"ifn @ 0x4842a0, tfn @ 0x4842a0",0);
	set_name(0x4ca478,"*reflect.funcTypeFixed16.MethodByName", 0x800);
	create_struct(0x4ca478,-1,"Go_method");
	if (!is_code(get_flags(0x4842f0)))
	{
		del_items(0x4842f0);
		add_func(0x4842f0,BADADDR);
	}
	if (!is_code(get_flags(0x4842f0)))
	{
		del_items(0x4842f0);
		add_func(0x4842f0,BADADDR);
	}
	set_cmt(0x4ca478,"ifn @ 0x4842f0, tfn @ 0x4842f0",0);
	set_name(0x4ca488,"*reflect.funcTypeFixed16.Name", 0x800);
	create_struct(0x4ca488,-1,"Go_method");
	if (!is_code(get_flags(0x484340)))
	{
		del_items(0x484340);
		add_func(0x484340,BADADDR);
	}
	if (!is_code(get_flags(0x484340)))
	{
		del_items(0x484340);
		add_func(0x484340,BADADDR);
	}
	set_cmt(0x4ca488,"ifn @ 0x484340, tfn @ 0x484340",0);
	set_name(0x4ca498,"*reflect.funcTypeFixed16.NumField", 0x800);
	create_struct(0x4ca498,-1,"Go_method");
	if (!is_code(get_flags(0x484360)))
	{
		del_items(0x484360);
		add_func(0x484360,BADADDR);
	}
	if (!is_code(get_flags(0x484360)))
	{
		del_items(0x484360);
		add_func(0x484360,BADADDR);
	}
	set_cmt(0x4ca498,"ifn @ 0x484360, tfn @ 0x484360",0);
	set_name(0x4ca4a8,"*reflect.funcTypeFixed16.NumIn", 0x800);
	create_struct(0x4ca4a8,-1,"Go_method");
	if (!is_code(get_flags(0x484380)))
	{
		del_items(0x484380);
		add_func(0x484380,BADADDR);
	}
	if (!is_code(get_flags(0x484380)))
	{
		del_items(0x484380);
		add_func(0x484380,BADADDR);
	}
	set_cmt(0x4ca4a8,"ifn @ 0x484380, tfn @ 0x484380",0);
	set_name(0x4ca4b8,"*reflect.funcTypeFixed16.NumMethod", 0x800);
	create_struct(0x4ca4b8,-1,"Go_method");
	if (!is_code(get_flags(0x4843a0)))
	{
		del_items(0x4843a0);
		add_func(0x4843a0,BADADDR);
	}
	if (!is_code(get_flags(0x4843a0)))
	{
		del_items(0x4843a0);
		add_func(0x4843a0,BADADDR);
	}
	set_cmt(0x4ca4b8,"ifn @ 0x4843a0, tfn @ 0x4843a0",0);
	set_name(0x4ca4c8,"*reflect.funcTypeFixed16.NumOut", 0x800);
	create_struct(0x4ca4c8,-1,"Go_method");
	if (!is_code(get_flags(0x4843c0)))
	{
		del_items(0x4843c0);
		add_func(0x4843c0,BADADDR);
	}
	if (!is_code(get_flags(0x4843c0)))
	{
		del_items(0x4843c0);
		add_func(0x4843c0,BADADDR);
	}
	set_cmt(0x4ca4c8,"ifn @ 0x4843c0, tfn @ 0x4843c0",0);
	set_name(0x4ca4d8,"*reflect.funcTypeFixed16.Out", 0x800);
	create_struct(0x4ca4d8,-1,"Go_method");
	if (!is_code(get_flags(0x4843e0)))
	{
		del_items(0x4843e0);
		add_func(0x4843e0,BADADDR);
	}
	if (!is_code(get_flags(0x4843e0)))
	{
		del_items(0x4843e0);
		add_func(0x4843e0,BADADDR);
	}
	set_cmt(0x4ca4d8,"ifn @ 0x4843e0, tfn @ 0x4843e0",0);
	set_name(0x4ca4e8,"*reflect.funcTypeFixed16.PkgPath", 0x800);
	create_struct(0x4ca4e8,-1,"Go_method");
	if (!is_code(get_flags(0x484400)))
	{
		del_items(0x484400);
		add_func(0x484400,BADADDR);
	}
	if (!is_code(get_flags(0x484400)))
	{
		del_items(0x484400);
		add_func(0x484400,BADADDR);
	}
	set_cmt(0x4ca4e8,"ifn @ 0x484400, tfn @ 0x484400",0);
	set_name(0x4ca4f8,"*reflect.funcTypeFixed16.Size", 0x800);
	create_struct(0x4ca4f8,-1,"Go_method");
	if (!is_code(get_flags(0x484420)))
	{
		del_items(0x484420);
		add_func(0x484420,BADADDR);
	}
	if (!is_code(get_flags(0x484420)))
	{
		del_items(0x484420);
		add_func(0x484420,BADADDR);
	}
	set_cmt(0x4ca4f8,"ifn @ 0x484420, tfn @ 0x484420",0);
	set_name(0x4ca508,"*reflect.funcTypeFixed16.String", 0x800);
	create_struct(0x4ca508,-1,"Go_method");
	if (!is_code(get_flags(0x484440)))
	{
		del_items(0x484440);
		add_func(0x484440,BADADDR);
	}
	if (!is_code(get_flags(0x484440)))
	{
		del_items(0x484440);
		add_func(0x484440,BADADDR);
	}
	set_cmt(0x4ca508,"ifn @ 0x484440, tfn @ 0x484440",0);
	set_name(0x4ca518,"*reflect.funcTypeFixed16.common", 0x800);
	create_struct(0x4ca518,-1,"Go_method");
	if (!is_code(get_flags(0x484460)))
	{
		del_items(0x484460);
		add_func(0x484460,BADADDR);
	}
	if (!is_code(get_flags(0x484460)))
	{
		del_items(0x484460);
		add_func(0x484460,BADADDR);
	}
	set_cmt(0x4ca518,"ifn @ 0x484460, tfn @ 0x484460",0);
	set_name(0x4ca528,"*reflect.funcTypeFixed16.exportedMethods", 0x800);
	create_struct(0x4ca528,-1,"Go_method");
	set_name(0x4ca538,"*reflect.funcTypeFixed16.gcSlice", 0x800);
	create_struct(0x4ca538,-1,"Go_method");
	set_name(0x4ca548,"*reflect.funcTypeFixed16.hasName", 0x800);
	create_struct(0x4ca548,-1,"Go_method");
	set_name(0x4ca558,"*reflect.funcTypeFixed16.in", 0x800);
	create_struct(0x4ca558,-1,"Go_method");
	set_name(0x4ca568,"*reflect.funcTypeFixed16.nameOff", 0x800);
	create_struct(0x4ca568,-1,"Go_method");
	set_name(0x4ca578,"*reflect.funcTypeFixed16.out", 0x800);
	create_struct(0x4ca578,-1,"Go_method");
	set_name(0x4ca588,"*reflect.funcTypeFixed16.pointers", 0x800);
	create_struct(0x4ca588,-1,"Go_method");
	set_name(0x4ca598,"*reflect.funcTypeFixed16.ptrTo", 0x800);
	create_struct(0x4ca598,-1,"Go_method");
	set_name(0x4ca5a8,"*reflect.funcTypeFixed16.textOff", 0x800);
	create_struct(0x4ca5a8,-1,"Go_method");
	set_name(0x4ca5b8,"*reflect.funcTypeFixed16.typeOff", 0x800);
	create_struct(0x4ca5b8,-1,"Go_method");
	set_name(0x4ca5c8,"*reflect.funcTypeFixed16.uncommon", 0x800);
	create_struct(0x4ca5c8,-1,"Go_method");
	if (!is_code(get_flags(0x484480)))
	{
		del_items(0x484480);
		add_func(0x484480,BADADDR);
	}
	if (!is_code(get_flags(0x484480)))
	{
		del_items(0x484480);
		add_func(0x484480,BADADDR);
	}
	set_cmt(0x4ca5c8,"ifn @ 0x484480, tfn @ 0x484480",0);
	set_name(0x4b7348,"*reflect.MapIter.Key", 0x800);
	create_struct(0x4b7348,-1,"Go_method");
	if (!is_code(get_flags(0x47f190)))
	{
		del_items(0x47f190);
		add_func(0x47f190,BADADDR);
	}
	if (!is_code(get_flags(0x47f190)))
	{
		del_items(0x47f190);
		add_func(0x47f190,BADADDR);
	}
	set_cmt(0x4b7348,"ifn @ 0x47f190, tfn @ 0x47f190",0);
	set_name(0x4b7358,"*reflect.MapIter.Next", 0x800);
	create_struct(0x4b7358,-1,"Go_method");
	if (!is_code(get_flags(0x47f3f0)))
	{
		del_items(0x47f3f0);
		add_func(0x47f3f0,BADADDR);
	}
	if (!is_code(get_flags(0x47f3f0)))
	{
		del_items(0x47f3f0);
		add_func(0x47f3f0,BADADDR);
	}
	set_cmt(0x4b7358,"ifn @ 0x47f3f0, tfn @ 0x47f3f0",0);
	set_name(0x4b7368,"*reflect.MapIter.Value", 0x800);
	create_struct(0x4b7368,-1,"Go_method");
	if (!is_code(get_flags(0x47f2c0)))
	{
		del_items(0x47f2c0);
		add_func(0x47f2c0,BADADDR);
	}
	if (!is_code(get_flags(0x47f2c0)))
	{
		del_items(0x47f2c0);
		add_func(0x47f2c0,BADADDR);
	}
	set_cmt(0x4b7368,"ifn @ 0x47f2c0, tfn @ 0x47f2c0",0);
	set_name(0x4b4b88,"*syscall.RawSockaddrAny.Sockaddr", 0x800);
	create_struct(0x4b4b88,-1,"Go_method");
	set_name(0x4b5ba8,"*main.custom.PrintName", 0x800);
	create_struct(0x4b5ba8,-1,"Go_method");
	set_name(0x4b5bb8,"*main.custom.UpdateQty", 0x800);
	create_struct(0x4b5bb8,-1,"Go_method");
	if (!is_code(get_flags(0x49f950)))
	{
		del_items(0x49f950);
		add_func(0x49f950,BADADDR);
	}
	if (!is_code(get_flags(0x49f950)))
	{
		del_items(0x49f950);
		add_func(0x49f950,BADADDR);
	}
	set_cmt(0x4b5bb8,"ifn @ 0x49f950, tfn @ 0x49f950",0);
	set_name(0x4b93a8,"*runtime.gList.empty", 0x800);
	create_struct(0x4b93a8,-1,"Go_method");
	set_name(0x4b93b8,"*runtime.gList.pop", 0x800);
	create_struct(0x4b93b8,-1,"Go_method");
	set_name(0x4b93c8,"*runtime.gList.push", 0x800);
	create_struct(0x4b93c8,-1,"Go_method");
	set_name(0x4b93d8,"*runtime.gList.pushAll", 0x800);
	create_struct(0x4b93d8,-1,"Go_method");
	set_name(0x4b63a8,"*runtime.muintptr.ptr", 0x800);
	create_struct(0x4b63a8,-1,"Go_method");
	set_name(0x4b63b8,"*runtime.muintptr.set", 0x800);
	create_struct(0x4b63b8,-1,"Go_method");
	set_name(0x4b9bc8,"*syscall.LazyDLL.Handle", 0x800);
	create_struct(0x4b9bc8,-1,"Go_method");
	set_name(0x4b9bd8,"*syscall.LazyDLL.Load", 0x800);
	create_struct(0x4b9bd8,-1,"Go_method");
	if (!is_code(get_flags(0x489850)))
	{
		del_items(0x489850);
		add_func(0x489850,BADADDR);
	}
	if (!is_code(get_flags(0x489850)))
	{
		del_items(0x489850);
		add_func(0x489850,BADADDR);
	}
	set_cmt(0x4b9bd8,"ifn @ 0x489850, tfn @ 0x489850",0);
	set_name(0x4b9be8,"*syscall.LazyDLL.NewProc", 0x800);
	create_struct(0x4b9be8,-1,"Go_method");
	if (!is_code(get_flags(0x4899a0)))
	{
		del_items(0x4899a0);
		add_func(0x4899a0,BADADDR);
	}
	if (!is_code(get_flags(0x4899a0)))
	{
		del_items(0x4899a0);
		add_func(0x4899a0,BADADDR);
	}
	set_cmt(0x4b9be8,"ifn @ 0x4899a0, tfn @ 0x4899a0",0);
	set_name(0x4b9bf8,"*syscall.LazyDLL.mustLoad", 0x800);
	create_struct(0x4b9bf8,-1,"Go_method");
	set_name(0x4b73c8,"*runtime.addrRange.contains", 0x800);
	create_struct(0x4b73c8,-1,"Go_method");
	set_name(0x4b73d8,"*runtime.addrRange.size", 0x800);
	create_struct(0x4b73d8,-1,"Go_method");
	set_name(0x4b73e8,"*runtime.addrRange.subtract", 0x800);
	create_struct(0x4b73e8,-1,"Go_method");
	set_name(0x4cabe8,"*reflect.funcTypeFixed64.Align", 0x800);
	create_struct(0x4cabe8,-1,"Go_method");
	if (!is_code(get_flags(0x484ee0)))
	{
		del_items(0x484ee0);
		add_func(0x484ee0,BADADDR);
	}
	if (!is_code(get_flags(0x484ee0)))
	{
		del_items(0x484ee0);
		add_func(0x484ee0,BADADDR);
	}
	set_cmt(0x4cabe8,"ifn @ 0x484ee0, tfn @ 0x484ee0",0);
	set_name(0x4cabf8,"*reflect.funcTypeFixed64.AssignableTo", 0x800);
	create_struct(0x4cabf8,-1,"Go_method");
	if (!is_code(get_flags(0x484f00)))
	{
		del_items(0x484f00);
		add_func(0x484f00,BADADDR);
	}
	if (!is_code(get_flags(0x484f00)))
	{
		del_items(0x484f00);
		add_func(0x484f00,BADADDR);
	}
	set_cmt(0x4cabf8,"ifn @ 0x484f00, tfn @ 0x484f00",0);
	set_name(0x4cac08,"*reflect.funcTypeFixed64.Bits", 0x800);
	create_struct(0x4cac08,-1,"Go_method");
	if (!is_code(get_flags(0x484f20)))
	{
		del_items(0x484f20);
		add_func(0x484f20,BADADDR);
	}
	if (!is_code(get_flags(0x484f20)))
	{
		del_items(0x484f20);
		add_func(0x484f20,BADADDR);
	}
	set_cmt(0x4cac08,"ifn @ 0x484f20, tfn @ 0x484f20",0);
	set_name(0x4cac18,"*reflect.funcTypeFixed64.ChanDir", 0x800);
	create_struct(0x4cac18,-1,"Go_method");
	if (!is_code(get_flags(0x484f40)))
	{
		del_items(0x484f40);
		add_func(0x484f40,BADADDR);
	}
	if (!is_code(get_flags(0x484f40)))
	{
		del_items(0x484f40);
		add_func(0x484f40,BADADDR);
	}
	set_cmt(0x4cac18,"ifn @ 0x484f40, tfn @ 0x484f40",0);
	set_name(0x4cac28,"*reflect.funcTypeFixed64.Comparable", 0x800);
	create_struct(0x4cac28,-1,"Go_method");
	if (!is_code(get_flags(0x484f60)))
	{
		del_items(0x484f60);
		add_func(0x484f60,BADADDR);
	}
	if (!is_code(get_flags(0x484f60)))
	{
		del_items(0x484f60);
		add_func(0x484f60,BADADDR);
	}
	set_cmt(0x4cac28,"ifn @ 0x484f60, tfn @ 0x484f60",0);
	set_name(0x4cac38,"*reflect.funcTypeFixed64.ConvertibleTo", 0x800);
	create_struct(0x4cac38,-1,"Go_method");
	if (!is_code(get_flags(0x484f80)))
	{
		del_items(0x484f80);
		add_func(0x484f80,BADADDR);
	}
	if (!is_code(get_flags(0x484f80)))
	{
		del_items(0x484f80);
		add_func(0x484f80,BADADDR);
	}
	set_cmt(0x4cac38,"ifn @ 0x484f80, tfn @ 0x484f80",0);
	set_name(0x4cac48,"*reflect.funcTypeFixed64.Elem", 0x800);
	create_struct(0x4cac48,-1,"Go_method");
	if (!is_code(get_flags(0x484fa0)))
	{
		del_items(0x484fa0);
		add_func(0x484fa0,BADADDR);
	}
	if (!is_code(get_flags(0x484fa0)))
	{
		del_items(0x484fa0);
		add_func(0x484fa0,BADADDR);
	}
	set_cmt(0x4cac48,"ifn @ 0x484fa0, tfn @ 0x484fa0",0);
	set_name(0x4cac58,"*reflect.funcTypeFixed64.Field", 0x800);
	create_struct(0x4cac58,-1,"Go_method");
	if (!is_code(get_flags(0x484fc0)))
	{
		del_items(0x484fc0);
		add_func(0x484fc0,BADADDR);
	}
	if (!is_code(get_flags(0x484fc0)))
	{
		del_items(0x484fc0);
		add_func(0x484fc0,BADADDR);
	}
	set_cmt(0x4cac58,"ifn @ 0x484fc0, tfn @ 0x484fc0",0);
	set_name(0x4cac68,"*reflect.funcTypeFixed64.FieldAlign", 0x800);
	create_struct(0x4cac68,-1,"Go_method");
	if (!is_code(get_flags(0x485010)))
	{
		del_items(0x485010);
		add_func(0x485010,BADADDR);
	}
	if (!is_code(get_flags(0x485010)))
	{
		del_items(0x485010);
		add_func(0x485010,BADADDR);
	}
	set_cmt(0x4cac68,"ifn @ 0x485010, tfn @ 0x485010",0);
	set_name(0x4cac78,"*reflect.funcTypeFixed64.FieldByIndex", 0x800);
	create_struct(0x4cac78,-1,"Go_method");
	if (!is_code(get_flags(0x485030)))
	{
		del_items(0x485030);
		add_func(0x485030,BADADDR);
	}
	if (!is_code(get_flags(0x485030)))
	{
		del_items(0x485030);
		add_func(0x485030,BADADDR);
	}
	set_cmt(0x4cac78,"ifn @ 0x485030, tfn @ 0x485030",0);
	set_name(0x4cac88,"*reflect.funcTypeFixed64.FieldByName", 0x800);
	create_struct(0x4cac88,-1,"Go_method");
	if (!is_code(get_flags(0x485080)))
	{
		del_items(0x485080);
		add_func(0x485080,BADADDR);
	}
	if (!is_code(get_flags(0x485080)))
	{
		del_items(0x485080);
		add_func(0x485080,BADADDR);
	}
	set_cmt(0x4cac88,"ifn @ 0x485080, tfn @ 0x485080",0);
	set_name(0x4cac98,"*reflect.funcTypeFixed64.FieldByNameFunc", 0x800);
	create_struct(0x4cac98,-1,"Go_method");
	if (!is_code(get_flags(0x4850e0)))
	{
		del_items(0x4850e0);
		add_func(0x4850e0,BADADDR);
	}
	if (!is_code(get_flags(0x4850e0)))
	{
		del_items(0x4850e0);
		add_func(0x4850e0,BADADDR);
	}
	set_cmt(0x4cac98,"ifn @ 0x4850e0, tfn @ 0x4850e0",0);
	set_name(0x4caca8,"*reflect.funcTypeFixed64.Implements", 0x800);
	create_struct(0x4caca8,-1,"Go_method");
	if (!is_code(get_flags(0x485140)))
	{
		del_items(0x485140);
		add_func(0x485140,BADADDR);
	}
	if (!is_code(get_flags(0x485140)))
	{
		del_items(0x485140);
		add_func(0x485140,BADADDR);
	}
	set_cmt(0x4caca8,"ifn @ 0x485140, tfn @ 0x485140",0);
	set_name(0x4cacb8,"*reflect.funcTypeFixed64.In", 0x800);
	create_struct(0x4cacb8,-1,"Go_method");
	if (!is_code(get_flags(0x485160)))
	{
		del_items(0x485160);
		add_func(0x485160,BADADDR);
	}
	if (!is_code(get_flags(0x485160)))
	{
		del_items(0x485160);
		add_func(0x485160,BADADDR);
	}
	set_cmt(0x4cacb8,"ifn @ 0x485160, tfn @ 0x485160",0);
	set_name(0x4cacc8,"*reflect.funcTypeFixed64.IsVariadic", 0x800);
	create_struct(0x4cacc8,-1,"Go_method");
	if (!is_code(get_flags(0x485180)))
	{
		del_items(0x485180);
		add_func(0x485180,BADADDR);
	}
	if (!is_code(get_flags(0x485180)))
	{
		del_items(0x485180);
		add_func(0x485180,BADADDR);
	}
	set_cmt(0x4cacc8,"ifn @ 0x485180, tfn @ 0x485180",0);
	set_name(0x4cacd8,"*reflect.funcTypeFixed64.Key", 0x800);
	create_struct(0x4cacd8,-1,"Go_method");
	if (!is_code(get_flags(0x4851a0)))
	{
		del_items(0x4851a0);
		add_func(0x4851a0,BADADDR);
	}
	if (!is_code(get_flags(0x4851a0)))
	{
		del_items(0x4851a0);
		add_func(0x4851a0,BADADDR);
	}
	set_cmt(0x4cacd8,"ifn @ 0x4851a0, tfn @ 0x4851a0",0);
	set_name(0x4cace8,"*reflect.funcTypeFixed64.Kind", 0x800);
	create_struct(0x4cace8,-1,"Go_method");
	if (!is_code(get_flags(0x4851c0)))
	{
		del_items(0x4851c0);
		add_func(0x4851c0,BADADDR);
	}
	if (!is_code(get_flags(0x4851c0)))
	{
		del_items(0x4851c0);
		add_func(0x4851c0,BADADDR);
	}
	set_cmt(0x4cace8,"ifn @ 0x4851c0, tfn @ 0x4851c0",0);
	set_name(0x4cacf8,"*reflect.funcTypeFixed64.Len", 0x800);
	create_struct(0x4cacf8,-1,"Go_method");
	if (!is_code(get_flags(0x4851e0)))
	{
		del_items(0x4851e0);
		add_func(0x4851e0,BADADDR);
	}
	if (!is_code(get_flags(0x4851e0)))
	{
		del_items(0x4851e0);
		add_func(0x4851e0,BADADDR);
	}
	set_cmt(0x4cacf8,"ifn @ 0x4851e0, tfn @ 0x4851e0",0);
	set_name(0x4cad08,"*reflect.funcTypeFixed64.Method", 0x800);
	create_struct(0x4cad08,-1,"Go_method");
	if (!is_code(get_flags(0x485200)))
	{
		del_items(0x485200);
		add_func(0x485200,BADADDR);
	}
	if (!is_code(get_flags(0x485200)))
	{
		del_items(0x485200);
		add_func(0x485200,BADADDR);
	}
	set_cmt(0x4cad08,"ifn @ 0x485200, tfn @ 0x485200",0);
	set_name(0x4cad18,"*reflect.funcTypeFixed64.MethodByName", 0x800);
	create_struct(0x4cad18,-1,"Go_method");
	if (!is_code(get_flags(0x485250)))
	{
		del_items(0x485250);
		add_func(0x485250,BADADDR);
	}
	if (!is_code(get_flags(0x485250)))
	{
		del_items(0x485250);
		add_func(0x485250,BADADDR);
	}
	set_cmt(0x4cad18,"ifn @ 0x485250, tfn @ 0x485250",0);
	set_name(0x4cad28,"*reflect.funcTypeFixed64.Name", 0x800);
	create_struct(0x4cad28,-1,"Go_method");
	if (!is_code(get_flags(0x4852a0)))
	{
		del_items(0x4852a0);
		add_func(0x4852a0,BADADDR);
	}
	if (!is_code(get_flags(0x4852a0)))
	{
		del_items(0x4852a0);
		add_func(0x4852a0,BADADDR);
	}
	set_cmt(0x4cad28,"ifn @ 0x4852a0, tfn @ 0x4852a0",0);
	set_name(0x4cad38,"*reflect.funcTypeFixed64.NumField", 0x800);
	create_struct(0x4cad38,-1,"Go_method");
	if (!is_code(get_flags(0x4852c0)))
	{
		del_items(0x4852c0);
		add_func(0x4852c0,BADADDR);
	}
	if (!is_code(get_flags(0x4852c0)))
	{
		del_items(0x4852c0);
		add_func(0x4852c0,BADADDR);
	}
	set_cmt(0x4cad38,"ifn @ 0x4852c0, tfn @ 0x4852c0",0);
	set_name(0x4cad48,"*reflect.funcTypeFixed64.NumIn", 0x800);
	create_struct(0x4cad48,-1,"Go_method");
	if (!is_code(get_flags(0x4852e0)))
	{
		del_items(0x4852e0);
		add_func(0x4852e0,BADADDR);
	}
	if (!is_code(get_flags(0x4852e0)))
	{
		del_items(0x4852e0);
		add_func(0x4852e0,BADADDR);
	}
	set_cmt(0x4cad48,"ifn @ 0x4852e0, tfn @ 0x4852e0",0);
	set_name(0x4cad58,"*reflect.funcTypeFixed64.NumMethod", 0x800);
	create_struct(0x4cad58,-1,"Go_method");
	if (!is_code(get_flags(0x485300)))
	{
		del_items(0x485300);
		add_func(0x485300,BADADDR);
	}
	if (!is_code(get_flags(0x485300)))
	{
		del_items(0x485300);
		add_func(0x485300,BADADDR);
	}
	set_cmt(0x4cad58,"ifn @ 0x485300, tfn @ 0x485300",0);
	set_name(0x4cad68,"*reflect.funcTypeFixed64.NumOut", 0x800);
	create_struct(0x4cad68,-1,"Go_method");
	if (!is_code(get_flags(0x485320)))
	{
		del_items(0x485320);
		add_func(0x485320,BADADDR);
	}
	if (!is_code(get_flags(0x485320)))
	{
		del_items(0x485320);
		add_func(0x485320,BADADDR);
	}
	set_cmt(0x4cad68,"ifn @ 0x485320, tfn @ 0x485320",0);
	set_name(0x4cad78,"*reflect.funcTypeFixed64.Out", 0x800);
	create_struct(0x4cad78,-1,"Go_method");
	if (!is_code(get_flags(0x485340)))
	{
		del_items(0x485340);
		add_func(0x485340,BADADDR);
	}
	if (!is_code(get_flags(0x485340)))
	{
		del_items(0x485340);
		add_func(0x485340,BADADDR);
	}
	set_cmt(0x4cad78,"ifn @ 0x485340, tfn @ 0x485340",0);
	set_name(0x4cad88,"*reflect.funcTypeFixed64.PkgPath", 0x800);
	create_struct(0x4cad88,-1,"Go_method");
	if (!is_code(get_flags(0x485360)))
	{
		del_items(0x485360);
		add_func(0x485360,BADADDR);
	}
	if (!is_code(get_flags(0x485360)))
	{
		del_items(0x485360);
		add_func(0x485360,BADADDR);
	}
	set_cmt(0x4cad88,"ifn @ 0x485360, tfn @ 0x485360",0);
	set_name(0x4cad98,"*reflect.funcTypeFixed64.Size", 0x800);
	create_struct(0x4cad98,-1,"Go_method");
	if (!is_code(get_flags(0x485380)))
	{
		del_items(0x485380);
		add_func(0x485380,BADADDR);
	}
	if (!is_code(get_flags(0x485380)))
	{
		del_items(0x485380);
		add_func(0x485380,BADADDR);
	}
	set_cmt(0x4cad98,"ifn @ 0x485380, tfn @ 0x485380",0);
	set_name(0x4cada8,"*reflect.funcTypeFixed64.String", 0x800);
	create_struct(0x4cada8,-1,"Go_method");
	if (!is_code(get_flags(0x4853a0)))
	{
		del_items(0x4853a0);
		add_func(0x4853a0,BADADDR);
	}
	if (!is_code(get_flags(0x4853a0)))
	{
		del_items(0x4853a0);
		add_func(0x4853a0,BADADDR);
	}
	set_cmt(0x4cada8,"ifn @ 0x4853a0, tfn @ 0x4853a0",0);
	set_name(0x4cadb8,"*reflect.funcTypeFixed64.common", 0x800);
	create_struct(0x4cadb8,-1,"Go_method");
	if (!is_code(get_flags(0x4853c0)))
	{
		del_items(0x4853c0);
		add_func(0x4853c0,BADADDR);
	}
	if (!is_code(get_flags(0x4853c0)))
	{
		del_items(0x4853c0);
		add_func(0x4853c0,BADADDR);
	}
	set_cmt(0x4cadb8,"ifn @ 0x4853c0, tfn @ 0x4853c0",0);
	set_name(0x4cadc8,"*reflect.funcTypeFixed64.exportedMethods", 0x800);
	create_struct(0x4cadc8,-1,"Go_method");
	set_name(0x4cadd8,"*reflect.funcTypeFixed64.gcSlice", 0x800);
	create_struct(0x4cadd8,-1,"Go_method");
	set_name(0x4cade8,"*reflect.funcTypeFixed64.hasName", 0x800);
	create_struct(0x4cade8,-1,"Go_method");
	set_name(0x4cadf8,"*reflect.funcTypeFixed64.in", 0x800);
	create_struct(0x4cadf8,-1,"Go_method");
	set_name(0x4cae08,"*reflect.funcTypeFixed64.nameOff", 0x800);
	create_struct(0x4cae08,-1,"Go_method");
	set_name(0x4cae18,"*reflect.funcTypeFixed64.out", 0x800);
	create_struct(0x4cae18,-1,"Go_method");
	set_name(0x4cae28,"*reflect.funcTypeFixed64.pointers", 0x800);
	create_struct(0x4cae28,-1,"Go_method");
	set_name(0x4cae38,"*reflect.funcTypeFixed64.ptrTo", 0x800);
	create_struct(0x4cae38,-1,"Go_method");
	set_name(0x4cae48,"*reflect.funcTypeFixed64.textOff", 0x800);
	create_struct(0x4cae48,-1,"Go_method");
	set_name(0x4cae58,"*reflect.funcTypeFixed64.typeOff", 0x800);
	create_struct(0x4cae58,-1,"Go_method");
	set_name(0x4cae68,"*reflect.funcTypeFixed64.uncommon", 0x800);
	create_struct(0x4cae68,-1,"Go_method");
	if (!is_code(get_flags(0x4853e0)))
	{
		del_items(0x4853e0);
		add_func(0x4853e0,BADADDR);
	}
	if (!is_code(get_flags(0x4853e0)))
	{
		del_items(0x4853e0);
		add_func(0x4853e0,BADADDR);
	}
	set_cmt(0x4cae68,"ifn @ 0x4853e0, tfn @ 0x4853e0",0);
	set_name(0x4b5c28,"*os.file.close", 0x800);
	create_struct(0x4b5c28,-1,"Go_method");
	if (!is_code(get_flags(0x4945a0)))
	{
		del_items(0x4945a0);
		add_func(0x4945a0,BADADDR);
	}
	if (!is_code(get_flags(0x4945a0)))
	{
		del_items(0x4945a0);
		add_func(0x4945a0,BADADDR);
	}
	set_cmt(0x4b5c28,"ifn @ 0x4945a0, tfn @ 0x4945a0",0);
	set_name(0x4b5c38,"*os.file.isdir", 0x800);
	create_struct(0x4b5c38,-1,"Go_method");
	set_name(0x4b6428,"*runtime.p.destroy", 0x800);
	create_struct(0x4b6428,-1,"Go_method");
	if (!is_code(get_flags(0x43db30)))
	{
		del_items(0x43db30);
		add_func(0x43db30,BADADDR);
	}
	if (!is_code(get_flags(0x43db30)))
	{
		del_items(0x43db30);
		add_func(0x43db30,BADADDR);
	}
	set_cmt(0x4b6428,"ifn @ 0x43db30, tfn @ 0x43db30",0);
	set_name(0x4b6438,"*runtime.p.init", 0x800);
	create_struct(0x4b6438,-1,"Go_method");
	if (!is_code(get_flags(0x43d9d0)))
	{
		del_items(0x43d9d0);
		add_func(0x43d9d0,BADADDR);
	}
	if (!is_code(get_flags(0x43d9d0)))
	{
		del_items(0x43d9d0);
		add_func(0x43d9d0,BADADDR);
	}
	set_cmt(0x4b6438,"ifn @ 0x43d9d0, tfn @ 0x43d9d0",0);
	set_name(0x4bc448,"*poll.fdMutex.decref", 0x800);
	create_struct(0x4bc448,-1,"Go_method");
	if (!is_code(get_flags(0x490a60)))
	{
		del_items(0x490a60);
		add_func(0x490a60,BADADDR);
	}
	if (!is_code(get_flags(0x490a60)))
	{
		del_items(0x490a60);
		add_func(0x490a60,BADADDR);
	}
	set_cmt(0x4bc448,"ifn @ 0x490a60, tfn @ 0x490a60",0);
	set_name(0x4bc458,"*poll.fdMutex.incref", 0x800);
	create_struct(0x4bc458,-1,"Go_method");
	set_name(0x4bc468,"*poll.fdMutex.increfAndClose", 0x800);
	create_struct(0x4bc468,-1,"Go_method");
	if (!is_code(get_flags(0x490930)))
	{
		del_items(0x490930);
		add_func(0x490930,BADADDR);
	}
	if (!is_code(get_flags(0x490930)))
	{
		del_items(0x490930);
		add_func(0x490930,BADADDR);
	}
	set_cmt(0x4bc468,"ifn @ 0x490930, tfn @ 0x490930",0);
	set_name(0x4bc478,"*poll.fdMutex.rwlock", 0x800);
	create_struct(0x4bc478,-1,"Go_method");
	if (!is_code(get_flags(0x490af0)))
	{
		del_items(0x490af0);
		add_func(0x490af0,BADADDR);
	}
	if (!is_code(get_flags(0x490af0)))
	{
		del_items(0x490af0);
		add_func(0x490af0,BADADDR);
	}
	set_cmt(0x4bc478,"ifn @ 0x490af0, tfn @ 0x490af0",0);
	set_name(0x4bc488,"*poll.fdMutex.rwunlock", 0x800);
	create_struct(0x4bc488,-1,"Go_method");
	if (!is_code(get_flags(0x490c60)))
	{
		del_items(0x490c60);
		add_func(0x490c60,BADADDR);
	}
	if (!is_code(get_flags(0x490c60)))
	{
		del_items(0x490c60);
		add_func(0x490c60,BADADDR);
	}
	set_cmt(0x4bc488,"ifn @ 0x490c60, tfn @ 0x490c60",0);
	set_name(0x4b9448,"*runtime.gcSweepBuf.block", 0x800);
	create_struct(0x4b9448,-1,"Go_method");
	if (!is_code(get_flags(0x421cb0)))
	{
		del_items(0x421cb0);
		add_func(0x421cb0,BADADDR);
	}
	if (!is_code(get_flags(0x421cb0)))
	{
		del_items(0x421cb0);
		add_func(0x421cb0,BADADDR);
	}
	set_cmt(0x4b9448,"ifn @ 0x421cb0, tfn @ 0x421cb0",0);
	set_name(0x4b9458,"*runtime.gcSweepBuf.numBlocks", 0x800);
	create_struct(0x4b9458,-1,"Go_method");
	set_name(0x4b9468,"*runtime.gcSweepBuf.pop", 0x800);
	create_struct(0x4b9468,-1,"Go_method");
	set_name(0x4b9478,"*runtime.gcSweepBuf.push", 0x800);
	create_struct(0x4b9478,-1,"Go_method");
	if (!is_code(get_flags(0x421ae0)))
	{
		del_items(0x421ae0);
		add_func(0x421ae0,BADADDR);
	}
	if (!is_code(get_flags(0x421ae0)))
	{
		del_items(0x421ae0);
		add_func(0x421ae0,BADADDR);
	}
	set_cmt(0x4b9478,"ifn @ 0x421ae0, tfn @ 0x421ae0",0);
	set_name(0x4b7448,"*runtime.bmap.keys", 0x800);
	create_struct(0x4b7448,-1,"Go_method");
	set_name(0x4b7458,"*runtime.bmap.overflow", 0x800);
	create_struct(0x4b7458,-1,"Go_method");
	set_name(0x4b7468,"*runtime.bmap.setoverflow", 0x800);
	create_struct(0x4b7468,-1,"Go_method");
	set_name(0x4b9c68,"*syscall.LazyProc.Addr", 0x800);
	create_struct(0x4b9c68,-1,"Go_method");
	if (!is_code(get_flags(0x489cf0)))
	{
		del_items(0x489cf0);
		add_func(0x489cf0,BADADDR);
	}
	if (!is_code(get_flags(0x489cf0)))
	{
		del_items(0x489cf0);
		add_func(0x489cf0,BADADDR);
	}
	set_cmt(0x4b9c68,"ifn @ 0x489cf0, tfn @ 0x489cf0",0);
	set_name(0x4b9c78,"*syscall.LazyProc.Call", 0x800);
	create_struct(0x4b9c78,-1,"Go_method");
	set_name(0x4b9c88,"*syscall.LazyProc.Find", 0x800);
	create_struct(0x4b9c88,-1,"Go_method");
	if (!is_code(get_flags(0x489ad0)))
	{
		del_items(0x489ad0);
		add_func(0x489ad0,BADADDR);
	}
	if (!is_code(get_flags(0x489ad0)))
	{
		del_items(0x489ad0);
		add_func(0x489ad0,BADADDR);
	}
	set_cmt(0x4b9c88,"ifn @ 0x489ad0, tfn @ 0x489ad0",0);
	set_name(0x4b9c98,"*syscall.LazyProc.mustFind", 0x800);
	create_struct(0x4b9c98,-1,"Go_method");
	if (!is_code(get_flags(0x489c80)))
	{
		del_items(0x489c80);
		add_func(0x489c80,BADADDR);
	}
	if (!is_code(get_flags(0x489c80)))
	{
		del_items(0x489c80);
		add_func(0x489c80,BADADDR);
	}
	set_cmt(0x4b9c98,"ifn @ 0x489c80, tfn @ 0x489c80",0);
	set_name(0x4b5ca8,"*reflect.StructTag.Get", 0x800);
	create_struct(0x4b5ca8,-1,"Go_method");
	set_name(0x4b5cb8,"*reflect.StructTag.Lookup", 0x800);
	create_struct(0x4b5cb8,-1,"Go_method");
	set_name(0x4b64a8,"*runtime.plainError.Error", 0x800);
	create_struct(0x4b64a8,-1,"Go_method");
	if (!is_code(get_flags(0x460f80)))
	{
		del_items(0x460f80);
		add_func(0x460f80,BADADDR);
	}
	if (!is_code(get_flags(0x460f80)))
	{
		del_items(0x460f80);
		add_func(0x460f80,BADADDR);
	}
	set_cmt(0x4b64a8,"ifn @ 0x460f80, tfn @ 0x460f80",0);
	set_name(0x4b64b8,"*runtime.plainError.RuntimeError", 0x800);
	create_struct(0x4b64b8,-1,"Go_method");
	set_name(0x4b74c8,"*runtime.bucket.bp", 0x800);
	create_struct(0x4b74c8,-1,"Go_method");
	if (!is_code(get_flags(0x429e30)))
	{
		del_items(0x429e30);
		add_func(0x429e30,BADADDR);
	}
	if (!is_code(get_flags(0x429e30)))
	{
		del_items(0x429e30);
		add_func(0x429e30,BADADDR);
	}
	set_cmt(0x4b74c8,"ifn @ 0x429e30, tfn @ 0x429e30",0);
	set_name(0x4b74d8,"*runtime.bucket.mp", 0x800);
	create_struct(0x4b74d8,-1,"Go_method");
	if (!is_code(get_flags(0x429dc0)))
	{
		del_items(0x429dc0);
		add_func(0x429dc0,BADADDR);
	}
	if (!is_code(get_flags(0x429dc0)))
	{
		del_items(0x429dc0);
		add_func(0x429dc0,BADADDR);
	}
	set_cmt(0x4b74d8,"ifn @ 0x429dc0, tfn @ 0x429dc0",0);
	set_name(0x4b74e8,"*runtime.bucket.stk", 0x800);
	create_struct(0x4b74e8,-1,"Go_method");
	set_name(0x4bc4e8,"*runtime.Func.Entry", 0x800);
	create_struct(0x4bc4e8,-1,"Go_method");
	set_name(0x4bc4f8,"*runtime.Func.FileLine", 0x800);
	create_struct(0x4bc4f8,-1,"Go_method");
	set_name(0x4bc508,"*runtime.Func.Name", 0x800);
	create_struct(0x4bc508,-1,"Go_method");
	if (!is_code(get_flags(0x44af00)))
	{
		del_items(0x44af00);
		add_func(0x44af00,BADADDR);
	}
	if (!is_code(get_flags(0x44af00)))
	{
		del_items(0x44af00);
		add_func(0x44af00,BADADDR);
	}
	set_cmt(0x4bc508,"ifn @ 0x44af00, tfn @ 0x44af00",0);
	set_name(0x4bc518,"*runtime.Func.funcInfo", 0x800);
	create_struct(0x4bc518,-1,"Go_method");
	set_name(0x4bc528,"*runtime.Func.raw", 0x800);
	create_struct(0x4bc528,-1,"Go_method");
	set_name(0x4b94e8,"*runtime.mcache.nextFree", 0x800);
	create_struct(0x4b94e8,-1,"Go_method");
	if (!is_code(get_flags(0x40b380)))
	{
		del_items(0x40b380);
		add_func(0x40b380,BADADDR);
	}
	if (!is_code(get_flags(0x40b380)))
	{
		del_items(0x40b380);
		add_func(0x40b380,BADADDR);
	}
	set_cmt(0x4b94e8,"ifn @ 0x40b380, tfn @ 0x40b380",0);
	set_name(0x4b94f8,"*runtime.mcache.prepareForSweep", 0x800);
	create_struct(0x4b94f8,-1,"Go_method");
	if (!is_code(get_flags(0x415060)))
	{
		del_items(0x415060);
		add_func(0x415060,BADADDR);
	}
	if (!is_code(get_flags(0x415060)))
	{
		del_items(0x415060);
		add_func(0x415060,BADADDR);
	}
	set_cmt(0x4b94f8,"ifn @ 0x415060, tfn @ 0x415060",0);
	set_name(0x4b9508,"*runtime.mcache.refill", 0x800);
	create_struct(0x4b9508,-1,"Go_method");
	if (!is_code(get_flags(0x414e70)))
	{
		del_items(0x414e70);
		add_func(0x414e70,BADADDR);
	}
	if (!is_code(get_flags(0x414e70)))
	{
		del_items(0x414e70);
		add_func(0x414e70,BADADDR);
	}
	set_cmt(0x4b9508,"ifn @ 0x414e70, tfn @ 0x414e70",0);
	set_name(0x4b9518,"*runtime.mcache.releaseAll", 0x800);
	create_struct(0x4b9518,-1,"Go_method");
	if (!is_code(get_flags(0x414fb0)))
	{
		del_items(0x414fb0);
		add_func(0x414fb0,BADADDR);
	}
	if (!is_code(get_flags(0x414fb0)))
	{
		del_items(0x414fb0);
		add_func(0x414fb0,BADADDR);
	}
	set_cmt(0x4b9518,"ifn @ 0x414fb0, tfn @ 0x414fb0",0);
	set_name(0x4c0508,"*reflect.flag.kind", 0x800);
	create_struct(0x4c0508,-1,"Go_method");
	set_name(0x4c0518,"*reflect.flag.mustBe", 0x800);
	create_struct(0x4c0518,-1,"Go_method");
	set_name(0x4c0528,"*reflect.flag.mustBeAssignable", 0x800);
	create_struct(0x4c0528,-1,"Go_method");
	set_name(0x4c0538,"*reflect.flag.mustBeAssignableSlow", 0x800);
	create_struct(0x4c0538,-1,"Go_method");
	set_name(0x4c0548,"*reflect.flag.mustBeExported", 0x800);
	create_struct(0x4c0548,-1,"Go_method");
	set_name(0x4c0558,"*reflect.flag.mustBeExportedSlow", 0x800);
	create_struct(0x4c0558,-1,"Go_method");
	set_name(0x4c0568,"*reflect.flag.ro", 0x800);
	create_struct(0x4c0568,-1,"Go_method");
	set_name(0x4b4528,"*errors.errorString.Error", 0x800);
	create_struct(0x4b4528,-1,"Go_method");
	if (!is_code(get_flags(0x4667e0)))
	{
		del_items(0x4667e0);
		add_func(0x4667e0,BADADDR);
	}
	if (!is_code(get_flags(0x4667e0)))
	{
		del_items(0x4667e0);
		add_func(0x4667e0,BADADDR);
	}
	set_cmt(0x4b4528,"ifn @ 0x4667e0, tfn @ 0x4667e0",0);
	set_name(0x4c9528,"*reflect.rtype.Align", 0x800);
	create_struct(0x4c9528,-1,"Go_method");
	if (!is_code(get_flags(0x475d50)))
	{
		del_items(0x475d50);
		add_func(0x475d50,BADADDR);
	}
	if (!is_code(get_flags(0x475d50)))
	{
		del_items(0x475d50);
		add_func(0x475d50,BADADDR);
	}
	set_cmt(0x4c9528,"ifn @ 0x475d50, tfn @ 0x475d50",0);
	set_name(0x4c9538,"*reflect.rtype.AssignableTo", 0x800);
	create_struct(0x4c9538,-1,"Go_method");
	if (!is_code(get_flags(0x479670)))
	{
		del_items(0x479670);
		add_func(0x479670,BADADDR);
	}
	if (!is_code(get_flags(0x479670)))
	{
		del_items(0x479670);
		add_func(0x479670,BADADDR);
	}
	set_cmt(0x4c9538,"ifn @ 0x479670, tfn @ 0x479670",0);
	set_name(0x4c9548,"*reflect.rtype.Bits", 0x800);
	create_struct(0x4c9548,-1,"Go_method");
	if (!is_code(get_flags(0x475c50)))
	{
		del_items(0x475c50);
		add_func(0x475c50,BADADDR);
	}
	if (!is_code(get_flags(0x475c50)))
	{
		del_items(0x475c50);
		add_func(0x475c50,BADADDR);
	}
	set_cmt(0x4c9548,"ifn @ 0x475c50, tfn @ 0x475c50",0);
	set_name(0x4c9558,"*reflect.rtype.ChanDir", 0x800);
	create_struct(0x4c9558,-1,"Go_method");
	if (!is_code(get_flags(0x476ac0)))
	{
		del_items(0x476ac0);
		add_func(0x476ac0,BADADDR);
	}
	if (!is_code(get_flags(0x476ac0)))
	{
		del_items(0x476ac0);
		add_func(0x476ac0,BADADDR);
	}
	set_cmt(0x4c9558,"ifn @ 0x476ac0, tfn @ 0x476ac0",0);
	set_name(0x4c9568,"*reflect.rtype.Comparable", 0x800);
	create_struct(0x4c9568,-1,"Go_method");
	if (!is_code(get_flags(0x479810)))
	{
		del_items(0x479810);
		add_func(0x479810,BADADDR);
	}
	if (!is_code(get_flags(0x479810)))
	{
		del_items(0x479810);
		add_func(0x479810,BADADDR);
	}
	set_cmt(0x4c9568,"ifn @ 0x479810, tfn @ 0x479810",0);
	set_name(0x4c9578,"*reflect.rtype.ConvertibleTo", 0x800);
	create_struct(0x4c9578,-1,"Go_method");
	if (!is_code(get_flags(0x479750)))
	{
		del_items(0x479750);
		add_func(0x479750,BADADDR);
	}
	if (!is_code(get_flags(0x479750)))
	{
		del_items(0x479750);
		add_func(0x479750,BADADDR);
	}
	set_cmt(0x4c9578,"ifn @ 0x479750, tfn @ 0x479750",0);
	set_name(0x4c9588,"*reflect.rtype.Elem", 0x800);
	create_struct(0x4c9588,-1,"Go_method");
	if (!is_code(get_flags(0x476c60)))
	{
		del_items(0x476c60);
		add_func(0x476c60,BADADDR);
	}
	if (!is_code(get_flags(0x476c60)))
	{
		del_items(0x476c60);
		add_func(0x476c60,BADADDR);
	}
	set_cmt(0x4c9588,"ifn @ 0x476c60, tfn @ 0x476c60",0);
	set_name(0x4c9598,"*reflect.rtype.Field", 0x800);
	create_struct(0x4c9598,-1,"Go_method");
	if (!is_code(get_flags(0x476e10)))
	{
		del_items(0x476e10);
		add_func(0x476e10,BADADDR);
	}
	if (!is_code(get_flags(0x476e10)))
	{
		del_items(0x476e10);
		add_func(0x476e10,BADADDR);
	}
	set_cmt(0x4c9598,"ifn @ 0x476e10, tfn @ 0x476e10",0);
	set_name(0x4c95a8,"*reflect.rtype.FieldAlign", 0x800);
	create_struct(0x4c95a8,-1,"Go_method");
	if (!is_code(get_flags(0x475d60)))
	{
		del_items(0x475d60);
		add_func(0x475d60,BADADDR);
	}
	if (!is_code(get_flags(0x475d60)))
	{
		del_items(0x475d60);
		add_func(0x475d60,BADADDR);
	}
	set_cmt(0x4c95a8,"ifn @ 0x475d60, tfn @ 0x475d60",0);
	set_name(0x4c95b8,"*reflect.rtype.FieldByIndex", 0x800);
	create_struct(0x4c95b8,-1,"Go_method");
	if (!is_code(get_flags(0x476f50)))
	{
		del_items(0x476f50);
		add_func(0x476f50,BADADDR);
	}
	if (!is_code(get_flags(0x476f50)))
	{
		del_items(0x476f50);
		add_func(0x476f50,BADADDR);
	}
	set_cmt(0x4c95b8,"ifn @ 0x476f50, tfn @ 0x476f50",0);
	set_name(0x4c95c8,"*reflect.rtype.FieldByName", 0x800);
	create_struct(0x4c95c8,-1,"Go_method");
	if (!is_code(get_flags(0x4770c0)))
	{
		del_items(0x4770c0);
		add_func(0x4770c0,BADADDR);
	}
	if (!is_code(get_flags(0x4770c0)))
	{
		del_items(0x4770c0);
		add_func(0x4770c0,BADADDR);
	}
	set_cmt(0x4c95c8,"ifn @ 0x4770c0, tfn @ 0x4770c0",0);
	set_name(0x4c95d8,"*reflect.rtype.FieldByNameFunc", 0x800);
	create_struct(0x4c95d8,-1,"Go_method");
	if (!is_code(get_flags(0x477260)))
	{
		del_items(0x477260);
		add_func(0x477260,BADADDR);
	}
	if (!is_code(get_flags(0x477260)))
	{
		del_items(0x477260);
		add_func(0x477260,BADADDR);
	}
	set_cmt(0x4c95d8,"ifn @ 0x477260, tfn @ 0x477260",0);
	set_name(0x4c95e8,"*reflect.rtype.Implements", 0x800);
	create_struct(0x4c95e8,-1,"Go_method");
	if (!is_code(get_flags(0x479580)))
	{
		del_items(0x479580);
		add_func(0x479580,BADADDR);
	}
	if (!is_code(get_flags(0x479580)))
	{
		del_items(0x479580);
		add_func(0x479580,BADADDR);
	}
	set_cmt(0x4c95e8,"ifn @ 0x479580, tfn @ 0x479580",0);
	set_name(0x4c95f8,"*reflect.rtype.In", 0x800);
	create_struct(0x4c95f8,-1,"Go_method");
	if (!is_code(get_flags(0x4773f0)))
	{
		del_items(0x4773f0);
		add_func(0x4773f0,BADADDR);
	}
	if (!is_code(get_flags(0x4773f0)))
	{
		del_items(0x4773f0);
		add_func(0x4773f0,BADADDR);
	}
	set_cmt(0x4c95f8,"ifn @ 0x4773f0, tfn @ 0x4773f0",0);
	set_name(0x4c9608,"*reflect.rtype.IsVariadic", 0x800);
	create_struct(0x4c9608,-1,"Go_method");
	if (!is_code(get_flags(0x476b90)))
	{
		del_items(0x476b90);
		add_func(0x476b90,BADADDR);
	}
	if (!is_code(get_flags(0x476b90)))
	{
		del_items(0x476b90);
		add_func(0x476b90,BADADDR);
	}
	set_cmt(0x4c9608,"ifn @ 0x476b90, tfn @ 0x476b90",0);
	set_name(0x4c9618,"*reflect.rtype.Key", 0x800);
	create_struct(0x4c9618,-1,"Go_method");
	if (!is_code(get_flags(0x477530)))
	{
		del_items(0x477530);
		add_func(0x477530,BADADDR);
	}
	if (!is_code(get_flags(0x477530)))
	{
		del_items(0x477530);
		add_func(0x477530,BADADDR);
	}
	set_cmt(0x4c9618,"ifn @ 0x477530, tfn @ 0x477530",0);
	set_name(0x4c9628,"*reflect.rtype.Kind", 0x800);
	create_struct(0x4c9628,-1,"Go_method");
	if (!is_code(get_flags(0x475d70)))
	{
		del_items(0x475d70);
		add_func(0x475d70,BADADDR);
	}
	if (!is_code(get_flags(0x475d70)))
	{
		del_items(0x475d70);
		add_func(0x475d70,BADADDR);
	}
	set_cmt(0x4c9628,"ifn @ 0x475d70, tfn @ 0x475d70",0);
	set_name(0x4c9638,"*reflect.rtype.Len", 0x800);
	create_struct(0x4c9638,-1,"Go_method");
	if (!is_code(get_flags(0x477610)))
	{
		del_items(0x477610);
		add_func(0x477610,BADADDR);
	}
	if (!is_code(get_flags(0x477610)))
	{
		del_items(0x477610);
		add_func(0x477610,BADADDR);
	}
	set_cmt(0x4c9638,"ifn @ 0x477610, tfn @ 0x477610",0);
	set_name(0x4c9648,"*reflect.rtype.Method", 0x800);
	create_struct(0x4c9648,-1,"Go_method");
	if (!is_code(get_flags(0x475ec0)))
	{
		del_items(0x475ec0);
		add_func(0x475ec0,BADADDR);
	}
	if (!is_code(get_flags(0x475ec0)))
	{
		del_items(0x475ec0);
		add_func(0x475ec0,BADADDR);
	}
	set_cmt(0x4c9648,"ifn @ 0x475ec0, tfn @ 0x475ec0",0);
	set_name(0x4c9658,"*reflect.rtype.MethodByName", 0x800);
	create_struct(0x4c9658,-1,"Go_method");
	if (!is_code(get_flags(0x476630)))
	{
		del_items(0x476630);
		add_func(0x476630,BADADDR);
	}
	if (!is_code(get_flags(0x476630)))
	{
		del_items(0x476630);
		add_func(0x476630,BADADDR);
	}
	set_cmt(0x4c9658,"ifn @ 0x476630, tfn @ 0x476630",0);
	set_name(0x4c9668,"*reflect.rtype.Name", 0x800);
	create_struct(0x4c9668,-1,"Go_method");
	if (!is_code(get_flags(0x476a00)))
	{
		del_items(0x476a00);
		add_func(0x476a00,BADADDR);
	}
	if (!is_code(get_flags(0x476a00)))
	{
		del_items(0x476a00);
		add_func(0x476a00,BADADDR);
	}
	set_cmt(0x4c9668,"ifn @ 0x476a00, tfn @ 0x476a00",0);
	set_name(0x4c9678,"*reflect.rtype.NumField", 0x800);
	create_struct(0x4c9678,-1,"Go_method");
	if (!is_code(get_flags(0x4776e0)))
	{
		del_items(0x4776e0);
		add_func(0x4776e0,BADADDR);
	}
	if (!is_code(get_flags(0x4776e0)))
	{
		del_items(0x4776e0);
		add_func(0x4776e0,BADADDR);
	}
	set_cmt(0x4c9678,"ifn @ 0x4776e0, tfn @ 0x4776e0",0);
	set_name(0x4c9688,"*reflect.rtype.NumIn", 0x800);
	create_struct(0x4c9688,-1,"Go_method");
	if (!is_code(get_flags(0x4777b0)))
	{
		del_items(0x4777b0);
		add_func(0x4777b0,BADADDR);
	}
	if (!is_code(get_flags(0x4777b0)))
	{
		del_items(0x4777b0);
		add_func(0x4777b0,BADADDR);
	}
	set_cmt(0x4c9688,"ifn @ 0x4777b0, tfn @ 0x4777b0",0);
	set_name(0x4c9698,"*reflect.rtype.NumMethod", 0x800);
	create_struct(0x4c9698,-1,"Go_method");
	if (!is_code(get_flags(0x475e50)))
	{
		del_items(0x475e50);
		add_func(0x475e50,BADADDR);
	}
	if (!is_code(get_flags(0x475e50)))
	{
		del_items(0x475e50);
		add_func(0x475e50,BADADDR);
	}
	set_cmt(0x4c9698,"ifn @ 0x475e50, tfn @ 0x475e50",0);
	set_name(0x4c96a8,"*reflect.rtype.NumOut", 0x800);
	create_struct(0x4c96a8,-1,"Go_method");
	if (!is_code(get_flags(0x477880)))
	{
		del_items(0x477880);
		add_func(0x477880,BADADDR);
	}
	if (!is_code(get_flags(0x477880)))
	{
		del_items(0x477880);
		add_func(0x477880,BADADDR);
	}
	set_cmt(0x4c96a8,"ifn @ 0x477880, tfn @ 0x477880",0);
	set_name(0x4c96b8,"*reflect.rtype.Out", 0x800);
	create_struct(0x4c96b8,-1,"Go_method");
	if (!is_code(get_flags(0x477980)))
	{
		del_items(0x477980);
		add_func(0x477980,BADADDR);
	}
	if (!is_code(get_flags(0x477980)))
	{
		del_items(0x477980);
		add_func(0x477980,BADADDR);
	}
	set_cmt(0x4c96b8,"ifn @ 0x477980, tfn @ 0x477980",0);
	set_name(0x4c96c8,"*reflect.rtype.PkgPath", 0x800);
	create_struct(0x4c96c8,-1,"Go_method");
	if (!is_code(get_flags(0x476920)))
	{
		del_items(0x476920);
		add_func(0x476920,BADADDR);
	}
	if (!is_code(get_flags(0x476920)))
	{
		del_items(0x476920);
		add_func(0x476920,BADADDR);
	}
	set_cmt(0x4c96c8,"ifn @ 0x476920, tfn @ 0x476920",0);
	set_name(0x4c96d8,"*reflect.rtype.Size", 0x800);
	create_struct(0x4c96d8,-1,"Go_method");
	if (!is_code(get_flags(0x475c40)))
	{
		del_items(0x475c40);
		add_func(0x475c40,BADADDR);
	}
	if (!is_code(get_flags(0x475c40)))
	{
		del_items(0x475c40);
		add_func(0x475c40,BADADDR);
	}
	set_cmt(0x4c96d8,"ifn @ 0x475c40, tfn @ 0x475c40",0);
	set_name(0x4c96e8,"*reflect.rtype.String", 0x800);
	create_struct(0x4c96e8,-1,"Go_method");
	if (!is_code(get_flags(0x475b60)))
	{
		del_items(0x475b60);
		add_func(0x475b60,BADADDR);
	}
	if (!is_code(get_flags(0x475b60)))
	{
		del_items(0x475b60);
		add_func(0x475b60,BADADDR);
	}
	set_cmt(0x4c96e8,"ifn @ 0x475b60, tfn @ 0x475b60",0);
	set_name(0x4c96f8,"*reflect.rtype.common", 0x800);
	create_struct(0x4c96f8,-1,"Go_method");
	if (!is_code(get_flags(0x475d90)))
	{
		del_items(0x475d90);
		add_func(0x475d90,BADADDR);
	}
	if (!is_code(get_flags(0x475d90)))
	{
		del_items(0x475d90);
		add_func(0x475d90,BADADDR);
	}
	set_cmt(0x4c96f8,"ifn @ 0x475d90, tfn @ 0x475d90",0);
	set_name(0x4c9708,"*reflect.rtype.exportedMethods", 0x800);
	create_struct(0x4c9708,-1,"Go_method");
	if (!is_code(get_flags(0x475da0)))
	{
		del_items(0x475da0);
		add_func(0x475da0,BADADDR);
	}
	if (!is_code(get_flags(0x475da0)))
	{
		del_items(0x475da0);
		add_func(0x475da0,BADADDR);
	}
	set_cmt(0x4c9708,"ifn @ 0x475da0, tfn @ 0x475da0",0);
	set_name(0x4c9718,"*reflect.rtype.gcSlice", 0x800);
	create_struct(0x4c9718,-1,"Go_method");
	set_name(0x4c9728,"*reflect.rtype.hasName", 0x800);
	create_struct(0x4c9728,-1,"Go_method");
	set_name(0x4c9738,"*reflect.rtype.nameOff", 0x800);
	create_struct(0x4c9738,-1,"Go_method");
	set_name(0x4c9748,"*reflect.rtype.pointers", 0x800);
	create_struct(0x4c9748,-1,"Go_method");
	set_name(0x4c9758,"*reflect.rtype.ptrTo", 0x800);
	create_struct(0x4c9758,-1,"Go_method");
	if (!is_code(get_flags(0x479170)))
	{
		del_items(0x479170);
		add_func(0x479170,BADADDR);
	}
	if (!is_code(get_flags(0x479170)))
	{
		del_items(0x479170);
		add_func(0x479170,BADADDR);
	}
	set_cmt(0x4c9758,"ifn @ 0x479170, tfn @ 0x479170",0);
	set_name(0x4c9768,"*reflect.rtype.textOff", 0x800);
	create_struct(0x4c9768,-1,"Go_method");
	set_name(0x4c9778,"*reflect.rtype.typeOff", 0x800);
	create_struct(0x4c9778,-1,"Go_method");
	set_name(0x4c9788,"*reflect.rtype.uncommon", 0x800);
	create_struct(0x4c9788,-1,"Go_method");
	if (!is_code(get_flags(0x475aa0)))
	{
		del_items(0x475aa0);
		add_func(0x475aa0,BADADDR);
	}
	if (!is_code(get_flags(0x475aa0)))
	{
		del_items(0x475aa0);
		add_func(0x475aa0,BADADDR);
	}
	set_cmt(0x4c9788,"ifn @ 0x475aa0, tfn @ 0x475aa0",0);
	set_name(0x4b5d28,"*reflect.structField.embedded", 0x800);
	create_struct(0x4b5d28,-1,"Go_method");
	set_name(0x4b5d38,"*reflect.structField.offset", 0x800);
	create_struct(0x4b5d38,-1,"Go_method");
	set_name(0x4b6528,"*runtime.pollCache.alloc", 0x800);
	create_struct(0x4b6528,-1,"Go_method");
	if (!is_code(get_flags(0x42c8a0)))
	{
		del_items(0x42c8a0);
		add_func(0x42c8a0,BADADDR);
	}
	if (!is_code(get_flags(0x42c8a0)))
	{
		del_items(0x42c8a0);
		add_func(0x42c8a0,BADADDR);
	}
	set_cmt(0x4b6528,"ifn @ 0x42c8a0, tfn @ 0x42c8a0",0);
	set_name(0x4b6538,"*runtime.pollCache.free", 0x800);
	create_struct(0x4b6538,-1,"Go_method");
	if (!is_code(get_flags(0x42c0b0)))
	{
		del_items(0x42c0b0);
		add_func(0x42c0b0,BADADDR);
	}
	if (!is_code(get_flags(0x42c0b0)))
	{
		del_items(0x42c0b0);
		add_func(0x42c0b0,BADADDR);
	}
	set_cmt(0x4b6538,"ifn @ 0x42c0b0, tfn @ 0x42c0b0",0);
	set_name(0x4b7548,"*runtime.fixalloc.alloc", 0x800);
	create_struct(0x4b7548,-1,"Go_method");
	if (!is_code(get_flags(0x417060)))
	{
		del_items(0x417060);
		add_func(0x417060,BADADDR);
	}
	if (!is_code(get_flags(0x417060)))
	{
		del_items(0x417060);
		add_func(0x417060,BADADDR);
	}
	set_cmt(0x4b7548,"ifn @ 0x417060, tfn @ 0x417060",0);
	set_name(0x4b7558,"*runtime.fixalloc.free", 0x800);
	create_struct(0x4b7558,-1,"Go_method");
	set_name(0x4b7568,"*runtime.fixalloc.init", 0x800);
	create_struct(0x4b7568,-1,"Go_method");
	set_name(0x4cd548,"*reflect.Value.Addr", 0x800);
	create_struct(0x4cd548,-1,"Go_method");
	set_name(0x4cd558,"*reflect.Value.Bool", 0x800);
	create_struct(0x4cd558,-1,"Go_method");
	set_name(0x4cd568,"*reflect.Value.Bytes", 0x800);
	create_struct(0x4cd568,-1,"Go_method");
	set_name(0x4cd578,"*reflect.Value.Call", 0x800);
	create_struct(0x4cd578,-1,"Go_method");
	set_name(0x4cd588,"*reflect.Value.CallSlice", 0x800);
	create_struct(0x4cd588,-1,"Go_method");
	set_name(0x4cd598,"*reflect.Value.CanAddr", 0x800);
	create_struct(0x4cd598,-1,"Go_method");
	set_name(0x4cd5a8,"*reflect.Value.CanInterface", 0x800);
	create_struct(0x4cd5a8,-1,"Go_method");
	set_name(0x4cd5b8,"*reflect.Value.CanSet", 0x800);
	create_struct(0x4cd5b8,-1,"Go_method");
	set_name(0x4cd5c8,"*reflect.Value.Cap", 0x800);
	create_struct(0x4cd5c8,-1,"Go_method");
	set_name(0x4cd5d8,"*reflect.Value.Close", 0x800);
	create_struct(0x4cd5d8,-1,"Go_method");
	set_name(0x4cd5e8,"*reflect.Value.Complex", 0x800);
	create_struct(0x4cd5e8,-1,"Go_method");
	set_name(0x4cd5f8,"*reflect.Value.Convert", 0x800);
	create_struct(0x4cd5f8,-1,"Go_method");
	set_name(0x4cd608,"*reflect.Value.Elem", 0x800);
	create_struct(0x4cd608,-1,"Go_method");
	set_name(0x4cd618,"*reflect.Value.Field", 0x800);
	create_struct(0x4cd618,-1,"Go_method");
	set_name(0x4cd628,"*reflect.Value.FieldByIndex", 0x800);
	create_struct(0x4cd628,-1,"Go_method");
	set_name(0x4cd638,"*reflect.Value.FieldByName", 0x800);
	create_struct(0x4cd638,-1,"Go_method");
	set_name(0x4cd648,"*reflect.Value.FieldByNameFunc", 0x800);
	create_struct(0x4cd648,-1,"Go_method");
	set_name(0x4cd658,"*reflect.Value.Float", 0x800);
	create_struct(0x4cd658,-1,"Go_method");
	set_name(0x4cd668,"*reflect.Value.Index", 0x800);
	create_struct(0x4cd668,-1,"Go_method");
	set_name(0x4cd678,"*reflect.Value.Int", 0x800);
	create_struct(0x4cd678,-1,"Go_method");
	set_name(0x4cd688,"*reflect.Value.Interface", 0x800);
	create_struct(0x4cd688,-1,"Go_method");
	set_name(0x4cd698,"*reflect.Value.InterfaceData", 0x800);
	create_struct(0x4cd698,-1,"Go_method");
	set_name(0x4cd6a8,"*reflect.Value.IsNil", 0x800);
	create_struct(0x4cd6a8,-1,"Go_method");
	set_name(0x4cd6b8,"*reflect.Value.IsValid", 0x800);
	create_struct(0x4cd6b8,-1,"Go_method");
	set_name(0x4cd6c8,"*reflect.Value.IsZero", 0x800);
	create_struct(0x4cd6c8,-1,"Go_method");
	set_name(0x4cd6d8,"*reflect.Value.Kind", 0x800);
	create_struct(0x4cd6d8,-1,"Go_method");
	if (!is_code(get_flags(0x482d00)))
	{
		del_items(0x482d00);
		add_func(0x482d00,BADADDR);
	}
	if (!is_code(get_flags(0x482d00)))
	{
		del_items(0x482d00);
		add_func(0x482d00,BADADDR);
	}
	set_cmt(0x4cd6d8,"ifn @ 0x482d00, tfn @ 0x482d00",0);
	set_name(0x4cd6e8,"*reflect.Value.Len", 0x800);
	create_struct(0x4cd6e8,-1,"Go_method");
	if (!is_code(get_flags(0x482d60)))
	{
		del_items(0x482d60);
		add_func(0x482d60,BADADDR);
	}
	if (!is_code(get_flags(0x482d60)))
	{
		del_items(0x482d60);
		add_func(0x482d60,BADADDR);
	}
	set_cmt(0x4cd6e8,"ifn @ 0x482d60, tfn @ 0x482d60",0);
	set_name(0x4cd6f8,"*reflect.Value.MapIndex", 0x800);
	create_struct(0x4cd6f8,-1,"Go_method");
	set_name(0x4cd708,"*reflect.Value.MapKeys", 0x800);
	create_struct(0x4cd708,-1,"Go_method");
	set_name(0x4cd718,"*reflect.Value.MapRange", 0x800);
	create_struct(0x4cd718,-1,"Go_method");
	set_name(0x4cd728,"*reflect.Value.Method", 0x800);
	create_struct(0x4cd728,-1,"Go_method");
	set_name(0x4cd738,"*reflect.Value.MethodByName", 0x800);
	create_struct(0x4cd738,-1,"Go_method");
	set_name(0x4cd748,"*reflect.Value.NumField", 0x800);
	create_struct(0x4cd748,-1,"Go_method");
	if (!is_code(get_flags(0x482df0)))
	{
		del_items(0x482df0);
		add_func(0x482df0,BADADDR);
	}
	if (!is_code(get_flags(0x482df0)))
	{
		del_items(0x482df0);
		add_func(0x482df0,BADADDR);
	}
	set_cmt(0x4cd748,"ifn @ 0x482df0, tfn @ 0x482df0",0);
	set_name(0x4cd758,"*reflect.Value.NumMethod", 0x800);
	create_struct(0x4cd758,-1,"Go_method");
	if (!is_code(get_flags(0x482e80)))
	{
		del_items(0x482e80);
		add_func(0x482e80,BADADDR);
	}
	if (!is_code(get_flags(0x482e80)))
	{
		del_items(0x482e80);
		add_func(0x482e80,BADADDR);
	}
	set_cmt(0x4cd758,"ifn @ 0x482e80, tfn @ 0x482e80",0);
	set_name(0x4cd768,"*reflect.Value.OverflowComplex", 0x800);
	create_struct(0x4cd768,-1,"Go_method");
	set_name(0x4cd778,"*reflect.Value.OverflowFloat", 0x800);
	create_struct(0x4cd778,-1,"Go_method");
	set_name(0x4cd788,"*reflect.Value.OverflowInt", 0x800);
	create_struct(0x4cd788,-1,"Go_method");
	set_name(0x4cd798,"*reflect.Value.OverflowUint", 0x800);
	create_struct(0x4cd798,-1,"Go_method");
	set_name(0x4cd7a8,"*reflect.Value.Pointer", 0x800);
	create_struct(0x4cd7a8,-1,"Go_method");
	set_name(0x4cd7b8,"*reflect.Value.Recv", 0x800);
	create_struct(0x4cd7b8,-1,"Go_method");
	set_name(0x4cd7c8,"*reflect.Value.Send", 0x800);
	create_struct(0x4cd7c8,-1,"Go_method");
	set_name(0x4cd7d8,"*reflect.Value.Set", 0x800);
	create_struct(0x4cd7d8,-1,"Go_method");
	set_name(0x4cd7e8,"*reflect.Value.SetBool", 0x800);
	create_struct(0x4cd7e8,-1,"Go_method");
	set_name(0x4cd7f8,"*reflect.Value.SetBytes", 0x800);
	create_struct(0x4cd7f8,-1,"Go_method");
	set_name(0x4cd808,"*reflect.Value.SetCap", 0x800);
	create_struct(0x4cd808,-1,"Go_method");
	set_name(0x4cd818,"*reflect.Value.SetComplex", 0x800);
	create_struct(0x4cd818,-1,"Go_method");
	set_name(0x4cd828,"*reflect.Value.SetFloat", 0x800);
	create_struct(0x4cd828,-1,"Go_method");
	set_name(0x4cd838,"*reflect.Value.SetInt", 0x800);
	create_struct(0x4cd838,-1,"Go_method");
	set_name(0x4cd848,"*reflect.Value.SetLen", 0x800);
	create_struct(0x4cd848,-1,"Go_method");
	set_name(0x4cd858,"*reflect.Value.SetMapIndex", 0x800);
	create_struct(0x4cd858,-1,"Go_method");
	set_name(0x4cd868,"*reflect.Value.SetPointer", 0x800);
	create_struct(0x4cd868,-1,"Go_method");
	set_name(0x4cd878,"*reflect.Value.SetString", 0x800);
	create_struct(0x4cd878,-1,"Go_method");
	set_name(0x4cd888,"*reflect.Value.SetUint", 0x800);
	create_struct(0x4cd888,-1,"Go_method");
	set_name(0x4cd898,"*reflect.Value.Slice", 0x800);
	create_struct(0x4cd898,-1,"Go_method");
	set_name(0x4cd8a8,"*reflect.Value.Slice3", 0x800);
	create_struct(0x4cd8a8,-1,"Go_method");
	set_name(0x4cd8b8,"*reflect.Value.String", 0x800);
	create_struct(0x4cd8b8,-1,"Go_method");
	if (!is_code(get_flags(0x482f10)))
	{
		del_items(0x482f10);
		add_func(0x482f10,BADADDR);
	}
	if (!is_code(get_flags(0x482f10)))
	{
		del_items(0x482f10);
		add_func(0x482f10,BADADDR);
	}
	set_cmt(0x4cd8b8,"ifn @ 0x482f10, tfn @ 0x482f10",0);
	set_name(0x4cd8c8,"*reflect.Value.TryRecv", 0x800);
	create_struct(0x4cd8c8,-1,"Go_method");
	set_name(0x4cd8d8,"*reflect.Value.TrySend", 0x800);
	create_struct(0x4cd8d8,-1,"Go_method");
	set_name(0x4cd8e8,"*reflect.Value.Type", 0x800);
	create_struct(0x4cd8e8,-1,"Go_method");
	set_name(0x4cd8f8,"*reflect.Value.Uint", 0x800);
	create_struct(0x4cd8f8,-1,"Go_method");
	set_name(0x4cd908,"*reflect.Value.UnsafeAddr", 0x800);
	create_struct(0x4cd908,-1,"Go_method");
	set_name(0x4cd918,"*reflect.Value.assignTo", 0x800);
	create_struct(0x4cd918,-1,"Go_method");
	set_name(0x4cd928,"*reflect.Value.call", 0x800);
	create_struct(0x4cd928,-1,"Go_method");
	set_name(0x4cd938,"*reflect.Value.kind", 0x800);
	create_struct(0x4cd938,-1,"Go_method");
	set_name(0x4cd948,"*reflect.Value.mustBe", 0x800);
	create_struct(0x4cd948,-1,"Go_method");
	set_name(0x4cd958,"*reflect.Value.mustBeAssignable", 0x800);
	create_struct(0x4cd958,-1,"Go_method");
	set_name(0x4cd968,"*reflect.Value.mustBeAssignableSlow", 0x800);
	create_struct(0x4cd968,-1,"Go_method");
	set_name(0x4cd978,"*reflect.Value.mustBeExported", 0x800);
	create_struct(0x4cd978,-1,"Go_method");
	set_name(0x4cd988,"*reflect.Value.mustBeExportedSlow", 0x800);
	create_struct(0x4cd988,-1,"Go_method");
	set_name(0x4cd998,"*reflect.Value.pointer", 0x800);
	create_struct(0x4cd998,-1,"Go_method");
	set_name(0x4cd9a8,"*reflect.Value.recv", 0x800);
	create_struct(0x4cd9a8,-1,"Go_method");
	set_name(0x4cd9b8,"*reflect.Value.ro", 0x800);
	create_struct(0x4cd9b8,-1,"Go_method");
	set_name(0x4cd9c8,"*reflect.Value.runes", 0x800);
	create_struct(0x4cd9c8,-1,"Go_method");
	set_name(0x4cd9d8,"*reflect.Value.send", 0x800);
	create_struct(0x4cd9d8,-1,"Go_method");
	set_name(0x4cd9e8,"*reflect.Value.setRunes", 0x800);
	create_struct(0x4cd9e8,-1,"Go_method");
	set_name(0x4bc588,"*runtime.gcControllerState.endCycle", 0x800);
	create_struct(0x4bc588,-1,"Go_method");
	if (!is_code(get_flags(0x4178e0)))
	{
		del_items(0x4178e0);
		add_func(0x4178e0,BADADDR);
	}
	if (!is_code(get_flags(0x4178e0)))
	{
		del_items(0x4178e0);
		add_func(0x4178e0,BADADDR);
	}
	set_cmt(0x4bc588,"ifn @ 0x4178e0, tfn @ 0x4178e0",0);
	set_name(0x4bc598,"*runtime.gcControllerState.enlistWorker", 0x800);
	create_struct(0x4bc598,-1,"Go_method");
	if (!is_code(get_flags(0x417df0)))
	{
		del_items(0x417df0);
		add_func(0x417df0,BADADDR);
	}
	if (!is_code(get_flags(0x417df0)))
	{
		del_items(0x417df0);
		add_func(0x417df0,BADADDR);
	}
	set_cmt(0x4bc598,"ifn @ 0x417df0, tfn @ 0x417df0",0);
	set_name(0x4bc5a8,"*runtime.gcControllerState.findRunnableGCWorker", 0x800);
	create_struct(0x4bc5a8,-1,"Go_method");
	if (!is_code(get_flags(0x417f80)))
	{
		del_items(0x417f80);
		add_func(0x417f80,BADADDR);
	}
	if (!is_code(get_flags(0x417f80)))
	{
		del_items(0x417f80);
		add_func(0x417f80,BADADDR);
	}
	set_cmt(0x4bc5a8,"ifn @ 0x417f80, tfn @ 0x417f80",0);
	set_name(0x4bc5b8,"*runtime.gcControllerState.revise", 0x800);
	create_struct(0x4bc5b8,-1,"Go_method");
	if (!is_code(get_flags(0x4177b0)))
	{
		del_items(0x4177b0);
		add_func(0x4177b0,BADADDR);
	}
	if (!is_code(get_flags(0x4177b0)))
	{
		del_items(0x4177b0);
		add_func(0x4177b0,BADADDR);
	}
	set_cmt(0x4bc5b8,"ifn @ 0x4177b0, tfn @ 0x4177b0",0);
	set_name(0x4bc5c8,"*runtime.gcControllerState.startCycle", 0x800);
	create_struct(0x4bc5c8,-1,"Go_method");
	if (!is_code(get_flags(0x4174e0)))
	{
		del_items(0x4174e0);
		add_func(0x4174e0,BADADDR);
	}
	if (!is_code(get_flags(0x4174e0)))
	{
		del_items(0x4174e0);
		add_func(0x4174e0,BADADDR);
	}
	set_cmt(0x4bc5c8,"ifn @ 0x4174e0, tfn @ 0x4174e0",0);
	set_name(0x4b9588,"*runtime.pageCache.alloc", 0x800);
	create_struct(0x4b9588,-1,"Go_method");
	if (!is_code(get_flags(0x428720)))
	{
		del_items(0x428720);
		add_func(0x428720,BADADDR);
	}
	if (!is_code(get_flags(0x428720)))
	{
		del_items(0x428720);
		add_func(0x428720,BADADDR);
	}
	set_cmt(0x4b9588,"ifn @ 0x428720, tfn @ 0x428720",0);
	set_name(0x4b9598,"*runtime.pageCache.allocN", 0x800);
	create_struct(0x4b9598,-1,"Go_method");
	if (!is_code(get_flags(0x428830)))
	{
		del_items(0x428830);
		add_func(0x428830,BADADDR);
	}
	if (!is_code(get_flags(0x428830)))
	{
		del_items(0x428830);
		add_func(0x428830,BADADDR);
	}
	set_cmt(0x4b9598,"ifn @ 0x428830, tfn @ 0x428830",0);
	set_name(0x4b95a8,"*runtime.pageCache.empty", 0x800);
	create_struct(0x4b95a8,-1,"Go_method");
	set_name(0x4b95b8,"*runtime.pageCache.flush", 0x800);
	create_struct(0x4b95b8,-1,"Go_method");
	if (!is_code(get_flags(0x428970)))
	{
		del_items(0x428970);
		add_func(0x428970,BADADDR);
	}
	if (!is_code(get_flags(0x428970)))
	{
		del_items(0x428970);
		add_func(0x428970,BADADDR);
	}
	set_cmt(0x4b95b8,"ifn @ 0x428970, tfn @ 0x428970",0);
	set_name(0x4b4588,"*reflect.ChanDir.String", 0x800);
	create_struct(0x4b4588,-1,"Go_method");
	if (!is_code(get_flags(0x482b20)))
	{
		del_items(0x482b20);
		add_func(0x482b20,BADADDR);
	}
	if (!is_code(get_flags(0x482b20)))
	{
		del_items(0x482b20);
		add_func(0x482b20,BADADDR);
	}
	set_cmt(0x4b4588,"ifn @ 0x482b20, tfn @ 0x482b20",0);
	set_name(0x4c9d88,"*reflect.funcType.Align", 0x800);
	create_struct(0x4c9d88,-1,"Go_method");
	if (!is_code(get_flags(0x4834b0)))
	{
		del_items(0x4834b0);
		add_func(0x4834b0,BADADDR);
	}
	if (!is_code(get_flags(0x4834b0)))
	{
		del_items(0x4834b0);
		add_func(0x4834b0,BADADDR);
	}
	set_cmt(0x4c9d88,"ifn @ 0x4834b0, tfn @ 0x4834b0",0);
	set_name(0x4c9d98,"*reflect.funcType.AssignableTo", 0x800);
	create_struct(0x4c9d98,-1,"Go_method");
	if (!is_code(get_flags(0x4834d0)))
	{
		del_items(0x4834d0);
		add_func(0x4834d0,BADADDR);
	}
	if (!is_code(get_flags(0x4834d0)))
	{
		del_items(0x4834d0);
		add_func(0x4834d0,BADADDR);
	}
	set_cmt(0x4c9d98,"ifn @ 0x4834d0, tfn @ 0x4834d0",0);
	set_name(0x4c9da8,"*reflect.funcType.Bits", 0x800);
	create_struct(0x4c9da8,-1,"Go_method");
	if (!is_code(get_flags(0x4834f0)))
	{
		del_items(0x4834f0);
		add_func(0x4834f0,BADADDR);
	}
	if (!is_code(get_flags(0x4834f0)))
	{
		del_items(0x4834f0);
		add_func(0x4834f0,BADADDR);
	}
	set_cmt(0x4c9da8,"ifn @ 0x4834f0, tfn @ 0x4834f0",0);
	set_name(0x4c9db8,"*reflect.funcType.ChanDir", 0x800);
	create_struct(0x4c9db8,-1,"Go_method");
	if (!is_code(get_flags(0x483510)))
	{
		del_items(0x483510);
		add_func(0x483510,BADADDR);
	}
	if (!is_code(get_flags(0x483510)))
	{
		del_items(0x483510);
		add_func(0x483510,BADADDR);
	}
	set_cmt(0x4c9db8,"ifn @ 0x483510, tfn @ 0x483510",0);
	set_name(0x4c9dc8,"*reflect.funcType.Comparable", 0x800);
	create_struct(0x4c9dc8,-1,"Go_method");
	if (!is_code(get_flags(0x483530)))
	{
		del_items(0x483530);
		add_func(0x483530,BADADDR);
	}
	if (!is_code(get_flags(0x483530)))
	{
		del_items(0x483530);
		add_func(0x483530,BADADDR);
	}
	set_cmt(0x4c9dc8,"ifn @ 0x483530, tfn @ 0x483530",0);
	set_name(0x4c9dd8,"*reflect.funcType.ConvertibleTo", 0x800);
	create_struct(0x4c9dd8,-1,"Go_method");
	if (!is_code(get_flags(0x483550)))
	{
		del_items(0x483550);
		add_func(0x483550,BADADDR);
	}
	if (!is_code(get_flags(0x483550)))
	{
		del_items(0x483550);
		add_func(0x483550,BADADDR);
	}
	set_cmt(0x4c9dd8,"ifn @ 0x483550, tfn @ 0x483550",0);
	set_name(0x4c9de8,"*reflect.funcType.Elem", 0x800);
	create_struct(0x4c9de8,-1,"Go_method");
	if (!is_code(get_flags(0x483570)))
	{
		del_items(0x483570);
		add_func(0x483570,BADADDR);
	}
	if (!is_code(get_flags(0x483570)))
	{
		del_items(0x483570);
		add_func(0x483570,BADADDR);
	}
	set_cmt(0x4c9de8,"ifn @ 0x483570, tfn @ 0x483570",0);
	set_name(0x4c9df8,"*reflect.funcType.Field", 0x800);
	create_struct(0x4c9df8,-1,"Go_method");
	if (!is_code(get_flags(0x483590)))
	{
		del_items(0x483590);
		add_func(0x483590,BADADDR);
	}
	if (!is_code(get_flags(0x483590)))
	{
		del_items(0x483590);
		add_func(0x483590,BADADDR);
	}
	set_cmt(0x4c9df8,"ifn @ 0x483590, tfn @ 0x483590",0);
	set_name(0x4c9e08,"*reflect.funcType.FieldAlign", 0x800);
	create_struct(0x4c9e08,-1,"Go_method");
	if (!is_code(get_flags(0x4835e0)))
	{
		del_items(0x4835e0);
		add_func(0x4835e0,BADADDR);
	}
	if (!is_code(get_flags(0x4835e0)))
	{
		del_items(0x4835e0);
		add_func(0x4835e0,BADADDR);
	}
	set_cmt(0x4c9e08,"ifn @ 0x4835e0, tfn @ 0x4835e0",0);
	set_name(0x4c9e18,"*reflect.funcType.FieldByIndex", 0x800);
	create_struct(0x4c9e18,-1,"Go_method");
	if (!is_code(get_flags(0x483600)))
	{
		del_items(0x483600);
		add_func(0x483600,BADADDR);
	}
	if (!is_code(get_flags(0x483600)))
	{
		del_items(0x483600);
		add_func(0x483600,BADADDR);
	}
	set_cmt(0x4c9e18,"ifn @ 0x483600, tfn @ 0x483600",0);
	set_name(0x4c9e28,"*reflect.funcType.FieldByName", 0x800);
	create_struct(0x4c9e28,-1,"Go_method");
	if (!is_code(get_flags(0x483650)))
	{
		del_items(0x483650);
		add_func(0x483650,BADADDR);
	}
	if (!is_code(get_flags(0x483650)))
	{
		del_items(0x483650);
		add_func(0x483650,BADADDR);
	}
	set_cmt(0x4c9e28,"ifn @ 0x483650, tfn @ 0x483650",0);
	set_name(0x4c9e38,"*reflect.funcType.FieldByNameFunc", 0x800);
	create_struct(0x4c9e38,-1,"Go_method");
	if (!is_code(get_flags(0x4836b0)))
	{
		del_items(0x4836b0);
		add_func(0x4836b0,BADADDR);
	}
	if (!is_code(get_flags(0x4836b0)))
	{
		del_items(0x4836b0);
		add_func(0x4836b0,BADADDR);
	}
	set_cmt(0x4c9e38,"ifn @ 0x4836b0, tfn @ 0x4836b0",0);
	set_name(0x4c9e48,"*reflect.funcType.Implements", 0x800);
	create_struct(0x4c9e48,-1,"Go_method");
	if (!is_code(get_flags(0x483710)))
	{
		del_items(0x483710);
		add_func(0x483710,BADADDR);
	}
	if (!is_code(get_flags(0x483710)))
	{
		del_items(0x483710);
		add_func(0x483710,BADADDR);
	}
	set_cmt(0x4c9e48,"ifn @ 0x483710, tfn @ 0x483710",0);
	set_name(0x4c9e58,"*reflect.funcType.In", 0x800);
	create_struct(0x4c9e58,-1,"Go_method");
	if (!is_code(get_flags(0x483730)))
	{
		del_items(0x483730);
		add_func(0x483730,BADADDR);
	}
	if (!is_code(get_flags(0x483730)))
	{
		del_items(0x483730);
		add_func(0x483730,BADADDR);
	}
	set_cmt(0x4c9e58,"ifn @ 0x483730, tfn @ 0x483730",0);
	set_name(0x4c9e68,"*reflect.funcType.IsVariadic", 0x800);
	create_struct(0x4c9e68,-1,"Go_method");
	if (!is_code(get_flags(0x483750)))
	{
		del_items(0x483750);
		add_func(0x483750,BADADDR);
	}
	if (!is_code(get_flags(0x483750)))
	{
		del_items(0x483750);
		add_func(0x483750,BADADDR);
	}
	set_cmt(0x4c9e68,"ifn @ 0x483750, tfn @ 0x483750",0);
	set_name(0x4c9e78,"*reflect.funcType.Key", 0x800);
	create_struct(0x4c9e78,-1,"Go_method");
	if (!is_code(get_flags(0x483770)))
	{
		del_items(0x483770);
		add_func(0x483770,BADADDR);
	}
	if (!is_code(get_flags(0x483770)))
	{
		del_items(0x483770);
		add_func(0x483770,BADADDR);
	}
	set_cmt(0x4c9e78,"ifn @ 0x483770, tfn @ 0x483770",0);
	set_name(0x4c9e88,"*reflect.funcType.Kind", 0x800);
	create_struct(0x4c9e88,-1,"Go_method");
	if (!is_code(get_flags(0x483790)))
	{
		del_items(0x483790);
		add_func(0x483790,BADADDR);
	}
	if (!is_code(get_flags(0x483790)))
	{
		del_items(0x483790);
		add_func(0x483790,BADADDR);
	}
	set_cmt(0x4c9e88,"ifn @ 0x483790, tfn @ 0x483790",0);
	set_name(0x4c9e98,"*reflect.funcType.Len", 0x800);
	create_struct(0x4c9e98,-1,"Go_method");
	if (!is_code(get_flags(0x4837b0)))
	{
		del_items(0x4837b0);
		add_func(0x4837b0,BADADDR);
	}
	if (!is_code(get_flags(0x4837b0)))
	{
		del_items(0x4837b0);
		add_func(0x4837b0,BADADDR);
	}
	set_cmt(0x4c9e98,"ifn @ 0x4837b0, tfn @ 0x4837b0",0);
	set_name(0x4c9ea8,"*reflect.funcType.Method", 0x800);
	create_struct(0x4c9ea8,-1,"Go_method");
	if (!is_code(get_flags(0x4837d0)))
	{
		del_items(0x4837d0);
		add_func(0x4837d0,BADADDR);
	}
	if (!is_code(get_flags(0x4837d0)))
	{
		del_items(0x4837d0);
		add_func(0x4837d0,BADADDR);
	}
	set_cmt(0x4c9ea8,"ifn @ 0x4837d0, tfn @ 0x4837d0",0);
	set_name(0x4c9eb8,"*reflect.funcType.MethodByName", 0x800);
	create_struct(0x4c9eb8,-1,"Go_method");
	if (!is_code(get_flags(0x483820)))
	{
		del_items(0x483820);
		add_func(0x483820,BADADDR);
	}
	if (!is_code(get_flags(0x483820)))
	{
		del_items(0x483820);
		add_func(0x483820,BADADDR);
	}
	set_cmt(0x4c9eb8,"ifn @ 0x483820, tfn @ 0x483820",0);
	set_name(0x4c9ec8,"*reflect.funcType.Name", 0x800);
	create_struct(0x4c9ec8,-1,"Go_method");
	if (!is_code(get_flags(0x483870)))
	{
		del_items(0x483870);
		add_func(0x483870,BADADDR);
	}
	if (!is_code(get_flags(0x483870)))
	{
		del_items(0x483870);
		add_func(0x483870,BADADDR);
	}
	set_cmt(0x4c9ec8,"ifn @ 0x483870, tfn @ 0x483870",0);
	set_name(0x4c9ed8,"*reflect.funcType.NumField", 0x800);
	create_struct(0x4c9ed8,-1,"Go_method");
	if (!is_code(get_flags(0x483890)))
	{
		del_items(0x483890);
		add_func(0x483890,BADADDR);
	}
	if (!is_code(get_flags(0x483890)))
	{
		del_items(0x483890);
		add_func(0x483890,BADADDR);
	}
	set_cmt(0x4c9ed8,"ifn @ 0x483890, tfn @ 0x483890",0);
	set_name(0x4c9ee8,"*reflect.funcType.NumIn", 0x800);
	create_struct(0x4c9ee8,-1,"Go_method");
	if (!is_code(get_flags(0x4838b0)))
	{
		del_items(0x4838b0);
		add_func(0x4838b0,BADADDR);
	}
	if (!is_code(get_flags(0x4838b0)))
	{
		del_items(0x4838b0);
		add_func(0x4838b0,BADADDR);
	}
	set_cmt(0x4c9ee8,"ifn @ 0x4838b0, tfn @ 0x4838b0",0);
	set_name(0x4c9ef8,"*reflect.funcType.NumMethod", 0x800);
	create_struct(0x4c9ef8,-1,"Go_method");
	if (!is_code(get_flags(0x4838d0)))
	{
		del_items(0x4838d0);
		add_func(0x4838d0,BADADDR);
	}
	if (!is_code(get_flags(0x4838d0)))
	{
		del_items(0x4838d0);
		add_func(0x4838d0,BADADDR);
	}
	set_cmt(0x4c9ef8,"ifn @ 0x4838d0, tfn @ 0x4838d0",0);
	set_name(0x4c9f08,"*reflect.funcType.NumOut", 0x800);
	create_struct(0x4c9f08,-1,"Go_method");
	if (!is_code(get_flags(0x4838f0)))
	{
		del_items(0x4838f0);
		add_func(0x4838f0,BADADDR);
	}
	if (!is_code(get_flags(0x4838f0)))
	{
		del_items(0x4838f0);
		add_func(0x4838f0,BADADDR);
	}
	set_cmt(0x4c9f08,"ifn @ 0x4838f0, tfn @ 0x4838f0",0);
	set_name(0x4c9f18,"*reflect.funcType.Out", 0x800);
	create_struct(0x4c9f18,-1,"Go_method");
	if (!is_code(get_flags(0x483910)))
	{
		del_items(0x483910);
		add_func(0x483910,BADADDR);
	}
	if (!is_code(get_flags(0x483910)))
	{
		del_items(0x483910);
		add_func(0x483910,BADADDR);
	}
	set_cmt(0x4c9f18,"ifn @ 0x483910, tfn @ 0x483910",0);
	set_name(0x4c9f28,"*reflect.funcType.PkgPath", 0x800);
	create_struct(0x4c9f28,-1,"Go_method");
	if (!is_code(get_flags(0x483930)))
	{
		del_items(0x483930);
		add_func(0x483930,BADADDR);
	}
	if (!is_code(get_flags(0x483930)))
	{
		del_items(0x483930);
		add_func(0x483930,BADADDR);
	}
	set_cmt(0x4c9f28,"ifn @ 0x483930, tfn @ 0x483930",0);
	set_name(0x4c9f38,"*reflect.funcType.Size", 0x800);
	create_struct(0x4c9f38,-1,"Go_method");
	if (!is_code(get_flags(0x483950)))
	{
		del_items(0x483950);
		add_func(0x483950,BADADDR);
	}
	if (!is_code(get_flags(0x483950)))
	{
		del_items(0x483950);
		add_func(0x483950,BADADDR);
	}
	set_cmt(0x4c9f38,"ifn @ 0x483950, tfn @ 0x483950",0);
	set_name(0x4c9f48,"*reflect.funcType.String", 0x800);
	create_struct(0x4c9f48,-1,"Go_method");
	if (!is_code(get_flags(0x483970)))
	{
		del_items(0x483970);
		add_func(0x483970,BADADDR);
	}
	if (!is_code(get_flags(0x483970)))
	{
		del_items(0x483970);
		add_func(0x483970,BADADDR);
	}
	set_cmt(0x4c9f48,"ifn @ 0x483970, tfn @ 0x483970",0);
	set_name(0x4c9f58,"*reflect.funcType.common", 0x800);
	create_struct(0x4c9f58,-1,"Go_method");
	if (!is_code(get_flags(0x483990)))
	{
		del_items(0x483990);
		add_func(0x483990,BADADDR);
	}
	if (!is_code(get_flags(0x483990)))
	{
		del_items(0x483990);
		add_func(0x483990,BADADDR);
	}
	set_cmt(0x4c9f58,"ifn @ 0x483990, tfn @ 0x483990",0);
	set_name(0x4c9f68,"*reflect.funcType.exportedMethods", 0x800);
	create_struct(0x4c9f68,-1,"Go_method");
	set_name(0x4c9f78,"*reflect.funcType.gcSlice", 0x800);
	create_struct(0x4c9f78,-1,"Go_method");
	set_name(0x4c9f88,"*reflect.funcType.hasName", 0x800);
	create_struct(0x4c9f88,-1,"Go_method");
	set_name(0x4c9f98,"*reflect.funcType.in", 0x800);
	create_struct(0x4c9f98,-1,"Go_method");
	set_name(0x4c9fa8,"*reflect.funcType.nameOff", 0x800);
	create_struct(0x4c9fa8,-1,"Go_method");
	set_name(0x4c9fb8,"*reflect.funcType.out", 0x800);
	create_struct(0x4c9fb8,-1,"Go_method");
	set_name(0x4c9fc8,"*reflect.funcType.pointers", 0x800);
	create_struct(0x4c9fc8,-1,"Go_method");
	set_name(0x4c9fd8,"*reflect.funcType.ptrTo", 0x800);
	create_struct(0x4c9fd8,-1,"Go_method");
	set_name(0x4c9fe8,"*reflect.funcType.textOff", 0x800);
	create_struct(0x4c9fe8,-1,"Go_method");
	set_name(0x4c9ff8,"*reflect.funcType.typeOff", 0x800);
	create_struct(0x4c9ff8,-1,"Go_method");
	set_name(0x4ca008,"*reflect.funcType.uncommon", 0x800);
	create_struct(0x4ca008,-1,"Go_method");
	if (!is_code(get_flags(0x4839b0)))
	{
		del_items(0x4839b0);
		add_func(0x4839b0,BADADDR);
	}
	if (!is_code(get_flags(0x4839b0)))
	{
		del_items(0x4839b0);
		add_func(0x4839b0,BADADDR);
	}
	set_cmt(0x4ca008,"ifn @ 0x4839b0, tfn @ 0x4839b0",0);
	set_name(0x4b5da8,"*reflect.uncommonType.exportedMethods", 0x800);
	create_struct(0x4b5da8,-1,"Go_method");
	set_name(0x4b5db8,"*reflect.uncommonType.methods", 0x800);
	create_struct(0x4b5db8,-1,"Go_method");
	set_name(0x4b65a8,"*runtime.puintptr.ptr", 0x800);
	create_struct(0x4b65a8,-1,"Go_method");
	set_name(0x4b65b8,"*runtime.puintptr.set", 0x800);
	create_struct(0x4b65b8,-1,"Go_method");
	set_name(0x4b75c8,"*runtime.guintptr.cas", 0x800);
	create_struct(0x4b75c8,-1,"Go_method");
	set_name(0x4b75d8,"*runtime.guintptr.ptr", 0x800);
	create_struct(0x4b75d8,-1,"Go_method");
	set_name(0x4b75e8,"*runtime.guintptr.set", 0x800);
	create_struct(0x4b75e8,-1,"Go_method");
	set_name(0x4c05c8,"*reflect.name.data", 0x800);
	create_struct(0x4c05c8,-1,"Go_method");
	set_name(0x4c05d8,"*reflect.name.isExported", 0x800);
	create_struct(0x4c05d8,-1,"Go_method");
	set_name(0x4c05e8,"*reflect.name.name", 0x800);
	create_struct(0x4c05e8,-1,"Go_method");
	set_name(0x4c05f8,"*reflect.name.nameLen", 0x800);
	create_struct(0x4c05f8,-1,"Go_method");
	set_name(0x4c0608,"*reflect.name.pkgPath", 0x800);
	create_struct(0x4c0608,-1,"Go_method");
	set_name(0x4c0618,"*reflect.name.tag", 0x800);
	create_struct(0x4c0618,-1,"Go_method");
	set_name(0x4c0628,"*reflect.name.tagLen", 0x800);
	create_struct(0x4c0628,-1,"Go_method");
	set_name(0x4b45e8,"*reflect.Kind.String", 0x800);
	create_struct(0x4b45e8,-1,"Go_method");
	if (!is_code(get_flags(0x482ba0)))
	{
		del_items(0x482ba0);
		add_func(0x482ba0,BADADDR);
	}
	if (!is_code(get_flags(0x482ba0)))
	{
		del_items(0x482ba0);
		add_func(0x482ba0,BADADDR);
	}
	set_cmt(0x4b45e8,"ifn @ 0x482ba0, tfn @ 0x482ba0",0);
	set_name(0x4b9628,"*runtime.pallocSum.end", 0x800);
	create_struct(0x4b9628,-1,"Go_method");
	set_name(0x4b9638,"*runtime.pallocSum.max", 0x800);
	create_struct(0x4b9638,-1,"Go_method");
	set_name(0x4b9648,"*runtime.pallocSum.start", 0x800);
	create_struct(0x4b9648,-1,"Go_method");
	set_name(0x4b9658,"*runtime.pallocSum.unpack", 0x800);
	create_struct(0x4b9658,-1,"Go_method");
	set_name(0x4b6628,"*runtime.randomOrder.reset", 0x800);
	create_struct(0x4b6628,-1,"Go_method");
	if (!is_code(get_flags(0x440e10)))
	{
		del_items(0x440e10);
		add_func(0x440e10,BADADDR);
	}
	if (!is_code(get_flags(0x440e10)))
	{
		del_items(0x440e10);
		add_func(0x440e10,BADADDR);
	}
	set_cmt(0x4b6628,"ifn @ 0x440e10, tfn @ 0x440e10",0);
	set_name(0x4b6638,"*runtime.randomOrder.start", 0x800);
	create_struct(0x4b6638,-1,"Go_method");
	set_name(0x4ca628,"*reflect.funcTypeFixed32.Align", 0x800);
	create_struct(0x4ca628,-1,"Go_method");
	if (!is_code(get_flags(0x4844a0)))
	{
		del_items(0x4844a0);
		add_func(0x4844a0,BADADDR);
	}
	if (!is_code(get_flags(0x4844a0)))
	{
		del_items(0x4844a0);
		add_func(0x4844a0,BADADDR);
	}
	set_cmt(0x4ca628,"ifn @ 0x4844a0, tfn @ 0x4844a0",0);
	set_name(0x4ca638,"*reflect.funcTypeFixed32.AssignableTo", 0x800);
	create_struct(0x4ca638,-1,"Go_method");
	if (!is_code(get_flags(0x4844c0)))
	{
		del_items(0x4844c0);
		add_func(0x4844c0,BADADDR);
	}
	if (!is_code(get_flags(0x4844c0)))
	{
		del_items(0x4844c0);
		add_func(0x4844c0,BADADDR);
	}
	set_cmt(0x4ca638,"ifn @ 0x4844c0, tfn @ 0x4844c0",0);
	set_name(0x4ca648,"*reflect.funcTypeFixed32.Bits", 0x800);
	create_struct(0x4ca648,-1,"Go_method");
	if (!is_code(get_flags(0x4844e0)))
	{
		del_items(0x4844e0);
		add_func(0x4844e0,BADADDR);
	}
	if (!is_code(get_flags(0x4844e0)))
	{
		del_items(0x4844e0);
		add_func(0x4844e0,BADADDR);
	}
	set_cmt(0x4ca648,"ifn @ 0x4844e0, tfn @ 0x4844e0",0);
	set_name(0x4ca658,"*reflect.funcTypeFixed32.ChanDir", 0x800);
	create_struct(0x4ca658,-1,"Go_method");
	if (!is_code(get_flags(0x484500)))
	{
		del_items(0x484500);
		add_func(0x484500,BADADDR);
	}
	if (!is_code(get_flags(0x484500)))
	{
		del_items(0x484500);
		add_func(0x484500,BADADDR);
	}
	set_cmt(0x4ca658,"ifn @ 0x484500, tfn @ 0x484500",0);
	set_name(0x4ca668,"*reflect.funcTypeFixed32.Comparable", 0x800);
	create_struct(0x4ca668,-1,"Go_method");
	if (!is_code(get_flags(0x484520)))
	{
		del_items(0x484520);
		add_func(0x484520,BADADDR);
	}
	if (!is_code(get_flags(0x484520)))
	{
		del_items(0x484520);
		add_func(0x484520,BADADDR);
	}
	set_cmt(0x4ca668,"ifn @ 0x484520, tfn @ 0x484520",0);
	set_name(0x4ca678,"*reflect.funcTypeFixed32.ConvertibleTo", 0x800);
	create_struct(0x4ca678,-1,"Go_method");
	if (!is_code(get_flags(0x484540)))
	{
		del_items(0x484540);
		add_func(0x484540,BADADDR);
	}
	if (!is_code(get_flags(0x484540)))
	{
		del_items(0x484540);
		add_func(0x484540,BADADDR);
	}
	set_cmt(0x4ca678,"ifn @ 0x484540, tfn @ 0x484540",0);
	set_name(0x4ca688,"*reflect.funcTypeFixed32.Elem", 0x800);
	create_struct(0x4ca688,-1,"Go_method");
	if (!is_code(get_flags(0x484560)))
	{
		del_items(0x484560);
		add_func(0x484560,BADADDR);
	}
	if (!is_code(get_flags(0x484560)))
	{
		del_items(0x484560);
		add_func(0x484560,BADADDR);
	}
	set_cmt(0x4ca688,"ifn @ 0x484560, tfn @ 0x484560",0);
	set_name(0x4ca698,"*reflect.funcTypeFixed32.Field", 0x800);
	create_struct(0x4ca698,-1,"Go_method");
	if (!is_code(get_flags(0x484580)))
	{
		del_items(0x484580);
		add_func(0x484580,BADADDR);
	}
	if (!is_code(get_flags(0x484580)))
	{
		del_items(0x484580);
		add_func(0x484580,BADADDR);
	}
	set_cmt(0x4ca698,"ifn @ 0x484580, tfn @ 0x484580",0);
	set_name(0x4ca6a8,"*reflect.funcTypeFixed32.FieldAlign", 0x800);
	create_struct(0x4ca6a8,-1,"Go_method");
	if (!is_code(get_flags(0x4845d0)))
	{
		del_items(0x4845d0);
		add_func(0x4845d0,BADADDR);
	}
	if (!is_code(get_flags(0x4845d0)))
	{
		del_items(0x4845d0);
		add_func(0x4845d0,BADADDR);
	}
	set_cmt(0x4ca6a8,"ifn @ 0x4845d0, tfn @ 0x4845d0",0);
	set_name(0x4ca6b8,"*reflect.funcTypeFixed32.FieldByIndex", 0x800);
	create_struct(0x4ca6b8,-1,"Go_method");
	if (!is_code(get_flags(0x4845f0)))
	{
		del_items(0x4845f0);
		add_func(0x4845f0,BADADDR);
	}
	if (!is_code(get_flags(0x4845f0)))
	{
		del_items(0x4845f0);
		add_func(0x4845f0,BADADDR);
	}
	set_cmt(0x4ca6b8,"ifn @ 0x4845f0, tfn @ 0x4845f0",0);
	set_name(0x4ca6c8,"*reflect.funcTypeFixed32.FieldByName", 0x800);
	create_struct(0x4ca6c8,-1,"Go_method");
	if (!is_code(get_flags(0x484640)))
	{
		del_items(0x484640);
		add_func(0x484640,BADADDR);
	}
	if (!is_code(get_flags(0x484640)))
	{
		del_items(0x484640);
		add_func(0x484640,BADADDR);
	}
	set_cmt(0x4ca6c8,"ifn @ 0x484640, tfn @ 0x484640",0);
	set_name(0x4ca6d8,"*reflect.funcTypeFixed32.FieldByNameFunc", 0x800);
	create_struct(0x4ca6d8,-1,"Go_method");
	if (!is_code(get_flags(0x4846a0)))
	{
		del_items(0x4846a0);
		add_func(0x4846a0,BADADDR);
	}
	if (!is_code(get_flags(0x4846a0)))
	{
		del_items(0x4846a0);
		add_func(0x4846a0,BADADDR);
	}
	set_cmt(0x4ca6d8,"ifn @ 0x4846a0, tfn @ 0x4846a0",0);
	set_name(0x4ca6e8,"*reflect.funcTypeFixed32.Implements", 0x800);
	create_struct(0x4ca6e8,-1,"Go_method");
	if (!is_code(get_flags(0x484700)))
	{
		del_items(0x484700);
		add_func(0x484700,BADADDR);
	}
	if (!is_code(get_flags(0x484700)))
	{
		del_items(0x484700);
		add_func(0x484700,BADADDR);
	}
	set_cmt(0x4ca6e8,"ifn @ 0x484700, tfn @ 0x484700",0);
	set_name(0x4ca6f8,"*reflect.funcTypeFixed32.In", 0x800);
	create_struct(0x4ca6f8,-1,"Go_method");
	if (!is_code(get_flags(0x484720)))
	{
		del_items(0x484720);
		add_func(0x484720,BADADDR);
	}
	if (!is_code(get_flags(0x484720)))
	{
		del_items(0x484720);
		add_func(0x484720,BADADDR);
	}
	set_cmt(0x4ca6f8,"ifn @ 0x484720, tfn @ 0x484720",0);
	set_name(0x4ca708,"*reflect.funcTypeFixed32.IsVariadic", 0x800);
	create_struct(0x4ca708,-1,"Go_method");
	if (!is_code(get_flags(0x484740)))
	{
		del_items(0x484740);
		add_func(0x484740,BADADDR);
	}
	if (!is_code(get_flags(0x484740)))
	{
		del_items(0x484740);
		add_func(0x484740,BADADDR);
	}
	set_cmt(0x4ca708,"ifn @ 0x484740, tfn @ 0x484740",0);
	set_name(0x4ca718,"*reflect.funcTypeFixed32.Key", 0x800);
	create_struct(0x4ca718,-1,"Go_method");
	if (!is_code(get_flags(0x484760)))
	{
		del_items(0x484760);
		add_func(0x484760,BADADDR);
	}
	if (!is_code(get_flags(0x484760)))
	{
		del_items(0x484760);
		add_func(0x484760,BADADDR);
	}
	set_cmt(0x4ca718,"ifn @ 0x484760, tfn @ 0x484760",0);
	set_name(0x4ca728,"*reflect.funcTypeFixed32.Kind", 0x800);
	create_struct(0x4ca728,-1,"Go_method");
	if (!is_code(get_flags(0x484780)))
	{
		del_items(0x484780);
		add_func(0x484780,BADADDR);
	}
	if (!is_code(get_flags(0x484780)))
	{
		del_items(0x484780);
		add_func(0x484780,BADADDR);
	}
	set_cmt(0x4ca728,"ifn @ 0x484780, tfn @ 0x484780",0);
	set_name(0x4ca738,"*reflect.funcTypeFixed32.Len", 0x800);
	create_struct(0x4ca738,-1,"Go_method");
	if (!is_code(get_flags(0x4847a0)))
	{
		del_items(0x4847a0);
		add_func(0x4847a0,BADADDR);
	}
	if (!is_code(get_flags(0x4847a0)))
	{
		del_items(0x4847a0);
		add_func(0x4847a0,BADADDR);
	}
	set_cmt(0x4ca738,"ifn @ 0x4847a0, tfn @ 0x4847a0",0);
	set_name(0x4ca748,"*reflect.funcTypeFixed32.Method", 0x800);
	create_struct(0x4ca748,-1,"Go_method");
	if (!is_code(get_flags(0x4847c0)))
	{
		del_items(0x4847c0);
		add_func(0x4847c0,BADADDR);
	}
	if (!is_code(get_flags(0x4847c0)))
	{
		del_items(0x4847c0);
		add_func(0x4847c0,BADADDR);
	}
	set_cmt(0x4ca748,"ifn @ 0x4847c0, tfn @ 0x4847c0",0);
	set_name(0x4ca758,"*reflect.funcTypeFixed32.MethodByName", 0x800);
	create_struct(0x4ca758,-1,"Go_method");
	if (!is_code(get_flags(0x484810)))
	{
		del_items(0x484810);
		add_func(0x484810,BADADDR);
	}
	if (!is_code(get_flags(0x484810)))
	{
		del_items(0x484810);
		add_func(0x484810,BADADDR);
	}
	set_cmt(0x4ca758,"ifn @ 0x484810, tfn @ 0x484810",0);
	set_name(0x4ca768,"*reflect.funcTypeFixed32.Name", 0x800);
	create_struct(0x4ca768,-1,"Go_method");
	if (!is_code(get_flags(0x484860)))
	{
		del_items(0x484860);
		add_func(0x484860,BADADDR);
	}
	if (!is_code(get_flags(0x484860)))
	{
		del_items(0x484860);
		add_func(0x484860,BADADDR);
	}
	set_cmt(0x4ca768,"ifn @ 0x484860, tfn @ 0x484860",0);
	set_name(0x4ca778,"*reflect.funcTypeFixed32.NumField", 0x800);
	create_struct(0x4ca778,-1,"Go_method");
	if (!is_code(get_flags(0x484880)))
	{
		del_items(0x484880);
		add_func(0x484880,BADADDR);
	}
	if (!is_code(get_flags(0x484880)))
	{
		del_items(0x484880);
		add_func(0x484880,BADADDR);
	}
	set_cmt(0x4ca778,"ifn @ 0x484880, tfn @ 0x484880",0);
	set_name(0x4ca788,"*reflect.funcTypeFixed32.NumIn", 0x800);
	create_struct(0x4ca788,-1,"Go_method");
	if (!is_code(get_flags(0x4848a0)))
	{
		del_items(0x4848a0);
		add_func(0x4848a0,BADADDR);
	}
	if (!is_code(get_flags(0x4848a0)))
	{
		del_items(0x4848a0);
		add_func(0x4848a0,BADADDR);
	}
	set_cmt(0x4ca788,"ifn @ 0x4848a0, tfn @ 0x4848a0",0);
	set_name(0x4ca798,"*reflect.funcTypeFixed32.NumMethod", 0x800);
	create_struct(0x4ca798,-1,"Go_method");
	if (!is_code(get_flags(0x4848c0)))
	{
		del_items(0x4848c0);
		add_func(0x4848c0,BADADDR);
	}
	if (!is_code(get_flags(0x4848c0)))
	{
		del_items(0x4848c0);
		add_func(0x4848c0,BADADDR);
	}
	set_cmt(0x4ca798,"ifn @ 0x4848c0, tfn @ 0x4848c0",0);
	set_name(0x4ca7a8,"*reflect.funcTypeFixed32.NumOut", 0x800);
	create_struct(0x4ca7a8,-1,"Go_method");
	if (!is_code(get_flags(0x4848e0)))
	{
		del_items(0x4848e0);
		add_func(0x4848e0,BADADDR);
	}
	if (!is_code(get_flags(0x4848e0)))
	{
		del_items(0x4848e0);
		add_func(0x4848e0,BADADDR);
	}
	set_cmt(0x4ca7a8,"ifn @ 0x4848e0, tfn @ 0x4848e0",0);
	set_name(0x4ca7b8,"*reflect.funcTypeFixed32.Out", 0x800);
	create_struct(0x4ca7b8,-1,"Go_method");
	if (!is_code(get_flags(0x484900)))
	{
		del_items(0x484900);
		add_func(0x484900,BADADDR);
	}
	if (!is_code(get_flags(0x484900)))
	{
		del_items(0x484900);
		add_func(0x484900,BADADDR);
	}
	set_cmt(0x4ca7b8,"ifn @ 0x484900, tfn @ 0x484900",0);
	set_name(0x4ca7c8,"*reflect.funcTypeFixed32.PkgPath", 0x800);
	create_struct(0x4ca7c8,-1,"Go_method");
	if (!is_code(get_flags(0x484920)))
	{
		del_items(0x484920);
		add_func(0x484920,BADADDR);
	}
	if (!is_code(get_flags(0x484920)))
	{
		del_items(0x484920);
		add_func(0x484920,BADADDR);
	}
	set_cmt(0x4ca7c8,"ifn @ 0x484920, tfn @ 0x484920",0);
	set_name(0x4ca7d8,"*reflect.funcTypeFixed32.Size", 0x800);
	create_struct(0x4ca7d8,-1,"Go_method");
	if (!is_code(get_flags(0x484940)))
	{
		del_items(0x484940);
		add_func(0x484940,BADADDR);
	}
	if (!is_code(get_flags(0x484940)))
	{
		del_items(0x484940);
		add_func(0x484940,BADADDR);
	}
	set_cmt(0x4ca7d8,"ifn @ 0x484940, tfn @ 0x484940",0);
	set_name(0x4ca7e8,"*reflect.funcTypeFixed32.String", 0x800);
	create_struct(0x4ca7e8,-1,"Go_method");
	if (!is_code(get_flags(0x484960)))
	{
		del_items(0x484960);
		add_func(0x484960,BADADDR);
	}
	if (!is_code(get_flags(0x484960)))
	{
		del_items(0x484960);
		add_func(0x484960,BADADDR);
	}
	set_cmt(0x4ca7e8,"ifn @ 0x484960, tfn @ 0x484960",0);
	set_name(0x4ca7f8,"*reflect.funcTypeFixed32.common", 0x800);
	create_struct(0x4ca7f8,-1,"Go_method");
	if (!is_code(get_flags(0x484980)))
	{
		del_items(0x484980);
		add_func(0x484980,BADADDR);
	}
	if (!is_code(get_flags(0x484980)))
	{
		del_items(0x484980);
		add_func(0x484980,BADADDR);
	}
	set_cmt(0x4ca7f8,"ifn @ 0x484980, tfn @ 0x484980",0);
	set_name(0x4ca808,"*reflect.funcTypeFixed32.exportedMethods", 0x800);
	create_struct(0x4ca808,-1,"Go_method");
	set_name(0x4ca818,"*reflect.funcTypeFixed32.gcSlice", 0x800);
	create_struct(0x4ca818,-1,"Go_method");
	set_name(0x4ca828,"*reflect.funcTypeFixed32.hasName", 0x800);
	create_struct(0x4ca828,-1,"Go_method");
	set_name(0x4ca838,"*reflect.funcTypeFixed32.in", 0x800);
	create_struct(0x4ca838,-1,"Go_method");
	set_name(0x4ca848,"*reflect.funcTypeFixed32.nameOff", 0x800);
	create_struct(0x4ca848,-1,"Go_method");
	set_name(0x4ca858,"*reflect.funcTypeFixed32.out", 0x800);
	create_struct(0x4ca858,-1,"Go_method");
	set_name(0x4ca868,"*reflect.funcTypeFixed32.pointers", 0x800);
	create_struct(0x4ca868,-1,"Go_method");
	set_name(0x4ca878,"*reflect.funcTypeFixed32.ptrTo", 0x800);
	create_struct(0x4ca878,-1,"Go_method");
	set_name(0x4ca888,"*reflect.funcTypeFixed32.textOff", 0x800);
	create_struct(0x4ca888,-1,"Go_method");
	set_name(0x4ca898,"*reflect.funcTypeFixed32.typeOff", 0x800);
	create_struct(0x4ca898,-1,"Go_method");
	set_name(0x4ca8a8,"*reflect.funcTypeFixed32.uncommon", 0x800);
	create_struct(0x4ca8a8,-1,"Go_method");
	if (!is_code(get_flags(0x4849a0)))
	{
		del_items(0x4849a0);
		add_func(0x4849a0,BADADDR);
	}
	if (!is_code(get_flags(0x4849a0)))
	{
		del_items(0x4849a0);
		add_func(0x4849a0,BADADDR);
	}
	set_cmt(0x4ca8a8,"ifn @ 0x4849a0, tfn @ 0x4849a0",0);
	set_name(0x4b5e28,"*runtime.TypeAssertionError.Error", 0x800);
	create_struct(0x4b5e28,-1,"Go_method");
	if (!is_code(get_flags(0x406a40)))
	{
		del_items(0x406a40);
		add_func(0x406a40,BADADDR);
	}
	if (!is_code(get_flags(0x406a40)))
	{
		del_items(0x406a40);
		add_func(0x406a40,BADADDR);
	}
	set_cmt(0x4b5e28,"ifn @ 0x406a40, tfn @ 0x406a40",0);
	set_name(0x4b5e38,"*runtime.TypeAssertionError.RuntimeError", 0x800);
	create_struct(0x4b5e38,-1,"Go_method");
	set_name(0x4bc628,"*runtime.maptype.hashMightPanic", 0x800);
	create_struct(0x4bc628,-1,"Go_method");
	set_name(0x4bc638,"*runtime.maptype.indirectelem", 0x800);
	create_struct(0x4bc638,-1,"Go_method");
	set_name(0x4bc648,"*runtime.maptype.indirectkey", 0x800);
	create_struct(0x4bc648,-1,"Go_method");
	set_name(0x4bc658,"*runtime.maptype.needkeyupdate", 0x800);
	create_struct(0x4bc658,-1,"Go_method");
	set_name(0x4bc668,"*runtime.maptype.reflexivekey", 0x800);
	create_struct(0x4bc668,-1,"Go_method");
	set_name(0x4b4648,"*reflect.ValueError.Error", 0x800);
	create_struct(0x4b4648,-1,"Go_method");
	if (!is_code(get_flags(0x47d980)))
	{
		del_items(0x47d980);
		add_func(0x47d980,BADADDR);
	}
	if (!is_code(get_flags(0x47d980)))
	{
		del_items(0x47d980);
		add_func(0x47d980,BADADDR);
	}
	set_cmt(0x4b4648,"ifn @ 0x47d980, tfn @ 0x47d980",0);
	set_name(0x4b7648,"*runtime.lfstack.empty", 0x800);
	create_struct(0x4b7648,-1,"Go_method");
	set_name(0x4b7658,"*runtime.lfstack.pop", 0x800);
	create_struct(0x4b7658,-1,"Go_method");
	if (!is_code(get_flags(0x409cb0)))
	{
		del_items(0x409cb0);
		add_func(0x409cb0,BADADDR);
	}
	if (!is_code(get_flags(0x409cb0)))
	{
		del_items(0x409cb0);
		add_func(0x409cb0,BADADDR);
	}
	set_cmt(0x4b7658,"ifn @ 0x409cb0, tfn @ 0x409cb0",0);
	set_name(0x4b7668,"*runtime.lfstack.push", 0x800);
	create_struct(0x4b7668,-1,"Go_method");
	if (!is_code(get_flags(0x409b40)))
	{
		del_items(0x409b40);
		add_func(0x409b40,BADADDR);
	}
	if (!is_code(get_flags(0x409b40)))
	{
		del_items(0x409b40);
		add_func(0x409b40,BADADDR);
	}
	set_cmt(0x4b7668,"ifn @ 0x409b40, tfn @ 0x409b40",0);
	set_name(0x4c7e48,"*reflectlite.rtype.AssignableTo", 0x800);
	create_struct(0x4c7e48,-1,"Go_method");
	if (!is_code(get_flags(0x465070)))
	{
		del_items(0x465070);
		add_func(0x465070,BADADDR);
	}
	if (!is_code(get_flags(0x465070)))
	{
		del_items(0x465070);
		add_func(0x465070,BADADDR);
	}
	set_cmt(0x4c7e48,"ifn @ 0x465070, tfn @ 0x465070",0);
	set_name(0x4c7e58,"*reflectlite.rtype.Comparable", 0x800);
	create_struct(0x4c7e58,-1,"Go_method");
	if (!is_code(get_flags(0x465150)))
	{
		del_items(0x465150);
		add_func(0x465150,BADADDR);
	}
	if (!is_code(get_flags(0x465150)))
	{
		del_items(0x465150);
		add_func(0x465150,BADADDR);
	}
	set_cmt(0x4c7e58,"ifn @ 0x465150, tfn @ 0x465150",0);
	set_name(0x4c7e68,"*reflectlite.rtype.Elem", 0x800);
	create_struct(0x4c7e68,-1,"Go_method");
	if (!is_code(get_flags(0x464a20)))
	{
		del_items(0x464a20);
		add_func(0x464a20,BADADDR);
	}
	if (!is_code(get_flags(0x464a20)))
	{
		del_items(0x464a20);
		add_func(0x464a20,BADADDR);
	}
	set_cmt(0x4c7e68,"ifn @ 0x464a20, tfn @ 0x464a20",0);
	set_name(0x4c7e78,"*reflectlite.rtype.Implements", 0x800);
	create_struct(0x4c7e78,-1,"Go_method");
	if (!is_code(get_flags(0x464f80)))
	{
		del_items(0x464f80);
		add_func(0x464f80,BADADDR);
	}
	if (!is_code(get_flags(0x464f80)))
	{
		del_items(0x464f80);
		add_func(0x464f80,BADADDR);
	}
	set_cmt(0x4c7e78,"ifn @ 0x464f80, tfn @ 0x464f80",0);
	set_name(0x4c7e88,"*reflectlite.rtype.In", 0x800);
	create_struct(0x4c7e88,-1,"Go_method");
	if (!is_code(get_flags(0x464b80)))
	{
		del_items(0x464b80);
		add_func(0x464b80,BADADDR);
	}
	if (!is_code(get_flags(0x464b80)))
	{
		del_items(0x464b80);
		add_func(0x464b80,BADADDR);
	}
	set_cmt(0x4c7e88,"ifn @ 0x464b80, tfn @ 0x464b80",0);
	set_name(0x4c7e98,"*reflectlite.rtype.Key", 0x800);
	create_struct(0x4c7e98,-1,"Go_method");
	set_name(0x4c7ea8,"*reflectlite.rtype.Kind", 0x800);
	create_struct(0x4c7ea8,-1,"Go_method");
	if (!is_code(get_flags(0x464730)))
	{
		del_items(0x464730);
		add_func(0x464730,BADADDR);
	}
	if (!is_code(get_flags(0x464730)))
	{
		del_items(0x464730);
		add_func(0x464730,BADADDR);
	}
	set_cmt(0x4c7ea8,"ifn @ 0x464730, tfn @ 0x464730",0);
	set_name(0x4c7eb8,"*reflectlite.rtype.Len", 0x800);
	create_struct(0x4c7eb8,-1,"Go_method");
	if (!is_code(get_flags(0x464c60)))
	{
		del_items(0x464c60);
		add_func(0x464c60,BADADDR);
	}
	if (!is_code(get_flags(0x464c60)))
	{
		del_items(0x464c60);
		add_func(0x464c60,BADADDR);
	}
	set_cmt(0x4c7eb8,"ifn @ 0x464c60, tfn @ 0x464c60",0);
	set_name(0x4c7ec8,"*reflectlite.rtype.Name", 0x800);
	create_struct(0x4c7ec8,-1,"Go_method");
	if (!is_code(get_flags(0x464960)))
	{
		del_items(0x464960);
		add_func(0x464960,BADADDR);
	}
	if (!is_code(get_flags(0x464960)))
	{
		del_items(0x464960);
		add_func(0x464960,BADADDR);
	}
	set_cmt(0x4c7ec8,"ifn @ 0x464960, tfn @ 0x464960",0);
	set_name(0x4c7ed8,"*reflectlite.rtype.NumField", 0x800);
	create_struct(0x4c7ed8,-1,"Go_method");
	if (!is_code(get_flags(0x464cd0)))
	{
		del_items(0x464cd0);
		add_func(0x464cd0,BADADDR);
	}
	if (!is_code(get_flags(0x464cd0)))
	{
		del_items(0x464cd0);
		add_func(0x464cd0,BADADDR);
	}
	set_cmt(0x4c7ed8,"ifn @ 0x464cd0, tfn @ 0x464cd0",0);
	set_name(0x4c7ee8,"*reflectlite.rtype.NumIn", 0x800);
	create_struct(0x4c7ee8,-1,"Go_method");
	if (!is_code(get_flags(0x464d40)))
	{
		del_items(0x464d40);
		add_func(0x464d40,BADADDR);
	}
	if (!is_code(get_flags(0x464d40)))
	{
		del_items(0x464d40);
		add_func(0x464d40,BADADDR);
	}
	set_cmt(0x4c7ee8,"ifn @ 0x464d40, tfn @ 0x464d40",0);
	set_name(0x4c7ef8,"*reflectlite.rtype.NumMethod", 0x800);
	create_struct(0x4c7ef8,-1,"Go_method");
	if (!is_code(get_flags(0x464810)))
	{
		del_items(0x464810);
		add_func(0x464810,BADADDR);
	}
	if (!is_code(get_flags(0x464810)))
	{
		del_items(0x464810);
		add_func(0x464810,BADADDR);
	}
	set_cmt(0x4c7ef8,"ifn @ 0x464810, tfn @ 0x464810",0);
	set_name(0x4c7f08,"*reflectlite.rtype.NumOut", 0x800);
	create_struct(0x4c7f08,-1,"Go_method");
	if (!is_code(get_flags(0x464db0)))
	{
		del_items(0x464db0);
		add_func(0x464db0,BADADDR);
	}
	if (!is_code(get_flags(0x464db0)))
	{
		del_items(0x464db0);
		add_func(0x464db0,BADADDR);
	}
	set_cmt(0x4c7f08,"ifn @ 0x464db0, tfn @ 0x464db0",0);
	set_name(0x4c7f18,"*reflectlite.rtype.Out", 0x800);
	create_struct(0x4c7f18,-1,"Go_method");
	if (!is_code(get_flags(0x464e50)))
	{
		del_items(0x464e50);
		add_func(0x464e50,BADADDR);
	}
	if (!is_code(get_flags(0x464e50)))
	{
		del_items(0x464e50);
		add_func(0x464e50,BADADDR);
	}
	set_cmt(0x4c7f18,"ifn @ 0x464e50, tfn @ 0x464e50",0);
	set_name(0x4c7f28,"*reflectlite.rtype.PkgPath", 0x800);
	create_struct(0x4c7f28,-1,"Go_method");
	if (!is_code(get_flags(0x464880)))
	{
		del_items(0x464880);
		add_func(0x464880,BADADDR);
	}
	if (!is_code(get_flags(0x464880)))
	{
		del_items(0x464880);
		add_func(0x464880,BADADDR);
	}
	set_cmt(0x4c7f28,"ifn @ 0x464880, tfn @ 0x464880",0);
	set_name(0x4c7f38,"*reflectlite.rtype.Size", 0x800);
	create_struct(0x4c7f38,-1,"Go_method");
	if (!is_code(get_flags(0x464720)))
	{
		del_items(0x464720);
		add_func(0x464720,BADADDR);
	}
	if (!is_code(get_flags(0x464720)))
	{
		del_items(0x464720);
		add_func(0x464720,BADADDR);
	}
	set_cmt(0x4c7f38,"ifn @ 0x464720, tfn @ 0x464720",0);
	set_name(0x4c7f48,"*reflectlite.rtype.String", 0x800);
	create_struct(0x4c7f48,-1,"Go_method");
	if (!is_code(get_flags(0x464640)))
	{
		del_items(0x464640);
		add_func(0x464640,BADADDR);
	}
	if (!is_code(get_flags(0x464640)))
	{
		del_items(0x464640);
		add_func(0x464640,BADADDR);
	}
	set_cmt(0x4c7f48,"ifn @ 0x464640, tfn @ 0x464640",0);
	set_name(0x4c7f58,"*reflectlite.rtype.chanDir", 0x800);
	create_struct(0x4c7f58,-1,"Go_method");
	set_name(0x4c7f68,"*reflectlite.rtype.common", 0x800);
	create_struct(0x4c7f68,-1,"Go_method");
	if (!is_code(get_flags(0x464750)))
	{
		del_items(0x464750);
		add_func(0x464750,BADADDR);
	}
	if (!is_code(get_flags(0x464750)))
	{
		del_items(0x464750);
		add_func(0x464750,BADADDR);
	}
	set_cmt(0x4c7f68,"ifn @ 0x464750, tfn @ 0x464750",0);
	set_name(0x4c7f78,"*reflectlite.rtype.exportedMethods", 0x800);
	create_struct(0x4c7f78,-1,"Go_method");
	if (!is_code(get_flags(0x464760)))
	{
		del_items(0x464760);
		add_func(0x464760,BADADDR);
	}
	if (!is_code(get_flags(0x464760)))
	{
		del_items(0x464760);
		add_func(0x464760,BADADDR);
	}
	set_cmt(0x4c7f78,"ifn @ 0x464760, tfn @ 0x464760",0);
	set_name(0x4c7f88,"*reflectlite.rtype.hasName", 0x800);
	create_struct(0x4c7f88,-1,"Go_method");
	set_name(0x4c7f98,"*reflectlite.rtype.nameOff", 0x800);
	create_struct(0x4c7f98,-1,"Go_method");
	set_name(0x4c7fa8,"*reflectlite.rtype.pointers", 0x800);
	create_struct(0x4c7fa8,-1,"Go_method");
	set_name(0x4c7fb8,"*reflectlite.rtype.typeOff", 0x800);
	create_struct(0x4c7fb8,-1,"Go_method");
	set_name(0x4c7fc8,"*reflectlite.rtype.uncommon", 0x800);
	create_struct(0x4c7fc8,-1,"Go_method");
	if (!is_code(get_flags(0x464580)))
	{
		del_items(0x464580);
		add_func(0x464580,BADADDR);
	}
	if (!is_code(get_flags(0x464580)))
	{
		del_items(0x464580);
		add_func(0x464580,BADADDR);
	}
	set_cmt(0x4c7fc8,"ifn @ 0x464580, tfn @ 0x464580",0);
	set_name(0x4c3e88,"*poll.pollDesc.close", 0x800);
	create_struct(0x4c3e88,-1,"Go_method");
	set_name(0x4c3e98,"*poll.pollDesc.evict", 0x800);
	create_struct(0x4c3e98,-1,"Go_method");
	set_name(0x4c3ea8,"*poll.pollDesc.init", 0x800);
	create_struct(0x4c3ea8,-1,"Go_method");
	if (!is_code(get_flags(0x490e80)))
	{
		del_items(0x490e80);
		add_func(0x490e80,BADADDR);
	}
	if (!is_code(get_flags(0x490e80)))
	{
		del_items(0x490e80);
		add_func(0x490e80,BADADDR);
	}
	set_cmt(0x4c3ea8,"ifn @ 0x490e80, tfn @ 0x490e80",0);
	set_name(0x4c3eb8,"*poll.pollDesc.pollable", 0x800);
	create_struct(0x4c3eb8,-1,"Go_method");
	set_name(0x4c3ec8,"*poll.pollDesc.prepare", 0x800);
	create_struct(0x4c3ec8,-1,"Go_method");
	if (!is_code(get_flags(0x490f90)))
	{
		del_items(0x490f90);
		add_func(0x490f90,BADADDR);
	}
	if (!is_code(get_flags(0x490f90)))
	{
		del_items(0x490f90);
		add_func(0x490f90,BADADDR);
	}
	set_cmt(0x4c3ec8,"ifn @ 0x490f90, tfn @ 0x490f90",0);
	set_name(0x4c3ed8,"*poll.pollDesc.prepareRead", 0x800);
	create_struct(0x4c3ed8,-1,"Go_method");
	set_name(0x4c3ee8,"*poll.pollDesc.prepareWrite", 0x800);
	create_struct(0x4c3ee8,-1,"Go_method");
	set_name(0x4c3ef8,"*poll.pollDesc.wait", 0x800);
	create_struct(0x4c3ef8,-1,"Go_method");
	if (!is_code(get_flags(0x4910e0)))
	{
		del_items(0x4910e0);
		add_func(0x4910e0,BADADDR);
	}
	if (!is_code(get_flags(0x4910e0)))
	{
		del_items(0x4910e0);
		add_func(0x4910e0,BADADDR);
	}
	set_cmt(0x4c3ef8,"ifn @ 0x4910e0, tfn @ 0x4910e0",0);
	set_name(0x4c3f08,"*poll.pollDesc.waitCanceled", 0x800);
	create_struct(0x4c3f08,-1,"Go_method");
	set_name(0x4c3f18,"*poll.pollDesc.waitRead", 0x800);
	create_struct(0x4c3f18,-1,"Go_method");
	set_name(0x4c3f28,"*poll.pollDesc.waitWrite", 0x800);
	create_struct(0x4c3f28,-1,"Go_method");
	set_name(0x4c3688,"*runtime.gcWork.balance", 0x800);
	create_struct(0x4c3688,-1,"Go_method");
	if (!is_code(get_flags(0x4222d0)))
	{
		del_items(0x4222d0);
		add_func(0x4222d0,BADADDR);
	}
	if (!is_code(get_flags(0x4222d0)))
	{
		del_items(0x4222d0);
		add_func(0x4222d0,BADADDR);
	}
	set_cmt(0x4c3688,"ifn @ 0x4222d0, tfn @ 0x4222d0",0);
	set_name(0x4c3698,"*runtime.gcWork.checkPut", 0x800);
	create_struct(0x4c3698,-1,"Go_method");
	set_name(0x4c36a8,"*runtime.gcWork.dispose", 0x800);
	create_struct(0x4c36a8,-1,"Go_method");
	if (!is_code(get_flags(0x4221e0)))
	{
		del_items(0x4221e0);
		add_func(0x4221e0,BADADDR);
	}
	if (!is_code(get_flags(0x4221e0)))
	{
		del_items(0x4221e0);
		add_func(0x4221e0,BADADDR);
	}
	set_cmt(0x4c36a8,"ifn @ 0x4221e0, tfn @ 0x4221e0",0);
	set_name(0x4c36b8,"*runtime.gcWork.empty", 0x800);
	create_struct(0x4c36b8,-1,"Go_method");
	set_name(0x4c36c8,"*runtime.gcWork.init", 0x800);
	create_struct(0x4c36c8,-1,"Go_method");
	if (!is_code(get_flags(0x421d80)))
	{
		del_items(0x421d80);
		add_func(0x421d80,BADADDR);
	}
	if (!is_code(get_flags(0x421d80)))
	{
		del_items(0x421d80);
		add_func(0x421d80,BADADDR);
	}
	set_cmt(0x4c36c8,"ifn @ 0x421d80, tfn @ 0x421d80",0);
	set_name(0x4c36d8,"*runtime.gcWork.put", 0x800);
	create_struct(0x4c36d8,-1,"Go_method");
	if (!is_code(get_flags(0x421df0)))
	{
		del_items(0x421df0);
		add_func(0x421df0,BADADDR);
	}
	if (!is_code(get_flags(0x421df0)))
	{
		del_items(0x421df0);
		add_func(0x421df0,BADADDR);
	}
	set_cmt(0x4c36d8,"ifn @ 0x421df0, tfn @ 0x421df0",0);
	set_name(0x4c36e8,"*runtime.gcWork.putBatch", 0x800);
	create_struct(0x4c36e8,-1,"Go_method");
	if (!is_code(get_flags(0x421f10)))
	{
		del_items(0x421f10);
		add_func(0x421f10,BADADDR);
	}
	if (!is_code(get_flags(0x421f10)))
	{
		del_items(0x421f10);
		add_func(0x421f10,BADADDR);
	}
	set_cmt(0x4c36e8,"ifn @ 0x421f10, tfn @ 0x421f10",0);
	set_name(0x4c36f8,"*runtime.gcWork.putFast", 0x800);
	create_struct(0x4c36f8,-1,"Go_method");
	set_name(0x4c3708,"*runtime.gcWork.tryGet", 0x800);
	create_struct(0x4c3708,-1,"Go_method");
	if (!is_code(get_flags(0x4220f0)))
	{
		del_items(0x4220f0);
		add_func(0x4220f0,BADADDR);
	}
	if (!is_code(get_flags(0x4220f0)))
	{
		del_items(0x4220f0);
		add_func(0x4220f0,BADADDR);
	}
	set_cmt(0x4c3708,"ifn @ 0x4220f0, tfn @ 0x4220f0",0);
	set_name(0x4c3718,"*runtime.gcWork.tryGetFast", 0x800);
	create_struct(0x4c3718,-1,"Go_method");
	set_name(0x4c0688,"*runtime._type.name", 0x800);
	create_struct(0x4c0688,-1,"Go_method");
	set_name(0x4c0698,"*runtime._type.nameOff", 0x800);
	create_struct(0x4c0698,-1,"Go_method");
	set_name(0x4c06a8,"*runtime._type.pkgpath", 0x800);
	create_struct(0x4c06a8,-1,"Go_method");
	if (!is_code(get_flags(0x454b50)))
	{
		del_items(0x454b50);
		add_func(0x454b50,BADADDR);
	}
	if (!is_code(get_flags(0x454b50)))
	{
		del_items(0x454b50);
		add_func(0x454b50,BADADDR);
	}
	set_cmt(0x4c06a8,"ifn @ 0x454b50, tfn @ 0x454b50",0);
	set_name(0x4c06b8,"*runtime._type.string", 0x800);
	create_struct(0x4c06b8,-1,"Go_method");
	if (!is_code(get_flags(0x4549e0)))
	{
		del_items(0x4549e0);
		add_func(0x4549e0,BADADDR);
	}
	if (!is_code(get_flags(0x4549e0)))
	{
		del_items(0x4549e0);
		add_func(0x4549e0,BADADDR);
	}
	set_cmt(0x4c06b8,"ifn @ 0x4549e0, tfn @ 0x4549e0",0);
	set_name(0x4c06c8,"*runtime._type.textOff", 0x800);
	create_struct(0x4c06c8,-1,"Go_method");
	if (!is_code(get_flags(0x4552b0)))
	{
		del_items(0x4552b0);
		add_func(0x4552b0,BADADDR);
	}
	if (!is_code(get_flags(0x4552b0)))
	{
		del_items(0x4552b0);
		add_func(0x4552b0,BADADDR);
	}
	set_cmt(0x4c06c8,"ifn @ 0x4552b0, tfn @ 0x4552b0",0);
	set_name(0x4c06d8,"*runtime._type.typeOff", 0x800);
	create_struct(0x4c06d8,-1,"Go_method");
	set_name(0x4c06e8,"*runtime._type.uncommon", 0x800);
	create_struct(0x4c06e8,-1,"Go_method");
	if (!is_code(get_flags(0x454aa0)))
	{
		del_items(0x454aa0);
		add_func(0x454aa0,BADADDR);
	}
	if (!is_code(get_flags(0x454aa0)))
	{
		del_items(0x454aa0);
		add_func(0x454aa0,BADADDR);
	}
	set_cmt(0x4c06e8,"ifn @ 0x454aa0, tfn @ 0x454aa0",0);
	set_name(0x4b46a8,"*reflect.bitVector.append", 0x800);
	create_struct(0x4b46a8,-1,"Go_method");
	set_name(0x4b5ea8,"*runtime.arenaIdx.l1", 0x800);
	create_struct(0x4b5ea8,-1,"Go_method");
	set_name(0x4b5eb8,"*runtime.arenaIdx.l2", 0x800);
	create_struct(0x4b5eb8,-1,"Go_method");
	set_name(0x4b66a8,"*runtime.spanClass.noscan", 0x800);
	create_struct(0x4b66a8,-1,"Go_method");
	set_name(0x4b66b8,"*runtime.spanClass.sizeclass", 0x800);
	create_struct(0x4b66b8,-1,"Go_method");
	set_name(0x4b76c8,"*runtime.waitq.dequeue", 0x800);
	create_struct(0x4b76c8,-1,"Go_method");
	if (!is_code(get_flags(0x405ec0)))
	{
		del_items(0x405ec0);
		add_func(0x405ec0,BADADDR);
	}
	if (!is_code(get_flags(0x405ec0)))
	{
		del_items(0x405ec0);
		add_func(0x405ec0,BADADDR);
	}
	set_cmt(0x4b76c8,"ifn @ 0x405ec0, tfn @ 0x405ec0",0);
	set_name(0x4b76d8,"*runtime.waitq.dequeueSudoG", 0x800);
	create_struct(0x4b76d8,-1,"Go_method");
	set_name(0x4b76e8,"*runtime.waitq.enqueue", 0x800);
	create_struct(0x4b76e8,-1,"Go_method");
	set_name(0x4caec8,"*reflect.funcTypeFixed8.Align", 0x800);
	create_struct(0x4caec8,-1,"Go_method");
	if (!is_code(get_flags(0x485400)))
	{
		del_items(0x485400);
		add_func(0x485400,BADADDR);
	}
	if (!is_code(get_flags(0x485400)))
	{
		del_items(0x485400);
		add_func(0x485400,BADADDR);
	}
	set_cmt(0x4caec8,"ifn @ 0x485400, tfn @ 0x485400",0);
	set_name(0x4caed8,"*reflect.funcTypeFixed8.AssignableTo", 0x800);
	create_struct(0x4caed8,-1,"Go_method");
	if (!is_code(get_flags(0x485420)))
	{
		del_items(0x485420);
		add_func(0x485420,BADADDR);
	}
	if (!is_code(get_flags(0x485420)))
	{
		del_items(0x485420);
		add_func(0x485420,BADADDR);
	}
	set_cmt(0x4caed8,"ifn @ 0x485420, tfn @ 0x485420",0);
	set_name(0x4caee8,"*reflect.funcTypeFixed8.Bits", 0x800);
	create_struct(0x4caee8,-1,"Go_method");
	if (!is_code(get_flags(0x485440)))
	{
		del_items(0x485440);
		add_func(0x485440,BADADDR);
	}
	if (!is_code(get_flags(0x485440)))
	{
		del_items(0x485440);
		add_func(0x485440,BADADDR);
	}
	set_cmt(0x4caee8,"ifn @ 0x485440, tfn @ 0x485440",0);
	set_name(0x4caef8,"*reflect.funcTypeFixed8.ChanDir", 0x800);
	create_struct(0x4caef8,-1,"Go_method");
	if (!is_code(get_flags(0x485460)))
	{
		del_items(0x485460);
		add_func(0x485460,BADADDR);
	}
	if (!is_code(get_flags(0x485460)))
	{
		del_items(0x485460);
		add_func(0x485460,BADADDR);
	}
	set_cmt(0x4caef8,"ifn @ 0x485460, tfn @ 0x485460",0);
	set_name(0x4caf08,"*reflect.funcTypeFixed8.Comparable", 0x800);
	create_struct(0x4caf08,-1,"Go_method");
	if (!is_code(get_flags(0x485480)))
	{
		del_items(0x485480);
		add_func(0x485480,BADADDR);
	}
	if (!is_code(get_flags(0x485480)))
	{
		del_items(0x485480);
		add_func(0x485480,BADADDR);
	}
	set_cmt(0x4caf08,"ifn @ 0x485480, tfn @ 0x485480",0);
	set_name(0x4caf18,"*reflect.funcTypeFixed8.ConvertibleTo", 0x800);
	create_struct(0x4caf18,-1,"Go_method");
	if (!is_code(get_flags(0x4854a0)))
	{
		del_items(0x4854a0);
		add_func(0x4854a0,BADADDR);
	}
	if (!is_code(get_flags(0x4854a0)))
	{
		del_items(0x4854a0);
		add_func(0x4854a0,BADADDR);
	}
	set_cmt(0x4caf18,"ifn @ 0x4854a0, tfn @ 0x4854a0",0);
	set_name(0x4caf28,"*reflect.funcTypeFixed8.Elem", 0x800);
	create_struct(0x4caf28,-1,"Go_method");
	if (!is_code(get_flags(0x4854c0)))
	{
		del_items(0x4854c0);
		add_func(0x4854c0,BADADDR);
	}
	if (!is_code(get_flags(0x4854c0)))
	{
		del_items(0x4854c0);
		add_func(0x4854c0,BADADDR);
	}
	set_cmt(0x4caf28,"ifn @ 0x4854c0, tfn @ 0x4854c0",0);
	set_name(0x4caf38,"*reflect.funcTypeFixed8.Field", 0x800);
	create_struct(0x4caf38,-1,"Go_method");
	if (!is_code(get_flags(0x4854e0)))
	{
		del_items(0x4854e0);
		add_func(0x4854e0,BADADDR);
	}
	if (!is_code(get_flags(0x4854e0)))
	{
		del_items(0x4854e0);
		add_func(0x4854e0,BADADDR);
	}
	set_cmt(0x4caf38,"ifn @ 0x4854e0, tfn @ 0x4854e0",0);
	set_name(0x4caf48,"*reflect.funcTypeFixed8.FieldAlign", 0x800);
	create_struct(0x4caf48,-1,"Go_method");
	if (!is_code(get_flags(0x485530)))
	{
		del_items(0x485530);
		add_func(0x485530,BADADDR);
	}
	if (!is_code(get_flags(0x485530)))
	{
		del_items(0x485530);
		add_func(0x485530,BADADDR);
	}
	set_cmt(0x4caf48,"ifn @ 0x485530, tfn @ 0x485530",0);
	set_name(0x4caf58,"*reflect.funcTypeFixed8.FieldByIndex", 0x800);
	create_struct(0x4caf58,-1,"Go_method");
	if (!is_code(get_flags(0x485550)))
	{
		del_items(0x485550);
		add_func(0x485550,BADADDR);
	}
	if (!is_code(get_flags(0x485550)))
	{
		del_items(0x485550);
		add_func(0x485550,BADADDR);
	}
	set_cmt(0x4caf58,"ifn @ 0x485550, tfn @ 0x485550",0);
	set_name(0x4caf68,"*reflect.funcTypeFixed8.FieldByName", 0x800);
	create_struct(0x4caf68,-1,"Go_method");
	if (!is_code(get_flags(0x4855a0)))
	{
		del_items(0x4855a0);
		add_func(0x4855a0,BADADDR);
	}
	if (!is_code(get_flags(0x4855a0)))
	{
		del_items(0x4855a0);
		add_func(0x4855a0,BADADDR);
	}
	set_cmt(0x4caf68,"ifn @ 0x4855a0, tfn @ 0x4855a0",0);
	set_name(0x4caf78,"*reflect.funcTypeFixed8.FieldByNameFunc", 0x800);
	create_struct(0x4caf78,-1,"Go_method");
	if (!is_code(get_flags(0x485600)))
	{
		del_items(0x485600);
		add_func(0x485600,BADADDR);
	}
	if (!is_code(get_flags(0x485600)))
	{
		del_items(0x485600);
		add_func(0x485600,BADADDR);
	}
	set_cmt(0x4caf78,"ifn @ 0x485600, tfn @ 0x485600",0);
	set_name(0x4caf88,"*reflect.funcTypeFixed8.Implements", 0x800);
	create_struct(0x4caf88,-1,"Go_method");
	if (!is_code(get_flags(0x485660)))
	{
		del_items(0x485660);
		add_func(0x485660,BADADDR);
	}
	if (!is_code(get_flags(0x485660)))
	{
		del_items(0x485660);
		add_func(0x485660,BADADDR);
	}
	set_cmt(0x4caf88,"ifn @ 0x485660, tfn @ 0x485660",0);
	set_name(0x4caf98,"*reflect.funcTypeFixed8.In", 0x800);
	create_struct(0x4caf98,-1,"Go_method");
	if (!is_code(get_flags(0x485680)))
	{
		del_items(0x485680);
		add_func(0x485680,BADADDR);
	}
	if (!is_code(get_flags(0x485680)))
	{
		del_items(0x485680);
		add_func(0x485680,BADADDR);
	}
	set_cmt(0x4caf98,"ifn @ 0x485680, tfn @ 0x485680",0);
	set_name(0x4cafa8,"*reflect.funcTypeFixed8.IsVariadic", 0x800);
	create_struct(0x4cafa8,-1,"Go_method");
	if (!is_code(get_flags(0x4856a0)))
	{
		del_items(0x4856a0);
		add_func(0x4856a0,BADADDR);
	}
	if (!is_code(get_flags(0x4856a0)))
	{
		del_items(0x4856a0);
		add_func(0x4856a0,BADADDR);
	}
	set_cmt(0x4cafa8,"ifn @ 0x4856a0, tfn @ 0x4856a0",0);
	set_name(0x4cafb8,"*reflect.funcTypeFixed8.Key", 0x800);
	create_struct(0x4cafb8,-1,"Go_method");
	if (!is_code(get_flags(0x4856c0)))
	{
		del_items(0x4856c0);
		add_func(0x4856c0,BADADDR);
	}
	if (!is_code(get_flags(0x4856c0)))
	{
		del_items(0x4856c0);
		add_func(0x4856c0,BADADDR);
	}
	set_cmt(0x4cafb8,"ifn @ 0x4856c0, tfn @ 0x4856c0",0);
	set_name(0x4cafc8,"*reflect.funcTypeFixed8.Kind", 0x800);
	create_struct(0x4cafc8,-1,"Go_method");
	if (!is_code(get_flags(0x4856e0)))
	{
		del_items(0x4856e0);
		add_func(0x4856e0,BADADDR);
	}
	if (!is_code(get_flags(0x4856e0)))
	{
		del_items(0x4856e0);
		add_func(0x4856e0,BADADDR);
	}
	set_cmt(0x4cafc8,"ifn @ 0x4856e0, tfn @ 0x4856e0",0);
	set_name(0x4cafd8,"*reflect.funcTypeFixed8.Len", 0x800);
	create_struct(0x4cafd8,-1,"Go_method");
	if (!is_code(get_flags(0x485700)))
	{
		del_items(0x485700);
		add_func(0x485700,BADADDR);
	}
	if (!is_code(get_flags(0x485700)))
	{
		del_items(0x485700);
		add_func(0x485700,BADADDR);
	}
	set_cmt(0x4cafd8,"ifn @ 0x485700, tfn @ 0x485700",0);
	set_name(0x4cafe8,"*reflect.funcTypeFixed8.Method", 0x800);
	create_struct(0x4cafe8,-1,"Go_method");
	if (!is_code(get_flags(0x485720)))
	{
		del_items(0x485720);
		add_func(0x485720,BADADDR);
	}
	if (!is_code(get_flags(0x485720)))
	{
		del_items(0x485720);
		add_func(0x485720,BADADDR);
	}
	set_cmt(0x4cafe8,"ifn @ 0x485720, tfn @ 0x485720",0);
	set_name(0x4caff8,"*reflect.funcTypeFixed8.MethodByName", 0x800);
	create_struct(0x4caff8,-1,"Go_method");
	if (!is_code(get_flags(0x485770)))
	{
		del_items(0x485770);
		add_func(0x485770,BADADDR);
	}
	if (!is_code(get_flags(0x485770)))
	{
		del_items(0x485770);
		add_func(0x485770,BADADDR);
	}
	set_cmt(0x4caff8,"ifn @ 0x485770, tfn @ 0x485770",0);
	set_name(0x4cb008,"*reflect.funcTypeFixed8.Name", 0x800);
	create_struct(0x4cb008,-1,"Go_method");
	if (!is_code(get_flags(0x4857c0)))
	{
		del_items(0x4857c0);
		add_func(0x4857c0,BADADDR);
	}
	if (!is_code(get_flags(0x4857c0)))
	{
		del_items(0x4857c0);
		add_func(0x4857c0,BADADDR);
	}
	set_cmt(0x4cb008,"ifn @ 0x4857c0, tfn @ 0x4857c0",0);
	set_name(0x4cb018,"*reflect.funcTypeFixed8.NumField", 0x800);
	create_struct(0x4cb018,-1,"Go_method");
	if (!is_code(get_flags(0x4857e0)))
	{
		del_items(0x4857e0);
		add_func(0x4857e0,BADADDR);
	}
	if (!is_code(get_flags(0x4857e0)))
	{
		del_items(0x4857e0);
		add_func(0x4857e0,BADADDR);
	}
	set_cmt(0x4cb018,"ifn @ 0x4857e0, tfn @ 0x4857e0",0);
	set_name(0x4cb028,"*reflect.funcTypeFixed8.NumIn", 0x800);
	create_struct(0x4cb028,-1,"Go_method");
	if (!is_code(get_flags(0x485800)))
	{
		del_items(0x485800);
		add_func(0x485800,BADADDR);
	}
	if (!is_code(get_flags(0x485800)))
	{
		del_items(0x485800);
		add_func(0x485800,BADADDR);
	}
	set_cmt(0x4cb028,"ifn @ 0x485800, tfn @ 0x485800",0);
	set_name(0x4cb038,"*reflect.funcTypeFixed8.NumMethod", 0x800);
	create_struct(0x4cb038,-1,"Go_method");
	if (!is_code(get_flags(0x485820)))
	{
		del_items(0x485820);
		add_func(0x485820,BADADDR);
	}
	if (!is_code(get_flags(0x485820)))
	{
		del_items(0x485820);
		add_func(0x485820,BADADDR);
	}
	set_cmt(0x4cb038,"ifn @ 0x485820, tfn @ 0x485820",0);
	set_name(0x4cb048,"*reflect.funcTypeFixed8.NumOut", 0x800);
	create_struct(0x4cb048,-1,"Go_method");
	if (!is_code(get_flags(0x485840)))
	{
		del_items(0x485840);
		add_func(0x485840,BADADDR);
	}
	if (!is_code(get_flags(0x485840)))
	{
		del_items(0x485840);
		add_func(0x485840,BADADDR);
	}
	set_cmt(0x4cb048,"ifn @ 0x485840, tfn @ 0x485840",0);
	set_name(0x4cb058,"*reflect.funcTypeFixed8.Out", 0x800);
	create_struct(0x4cb058,-1,"Go_method");
	if (!is_code(get_flags(0x485860)))
	{
		del_items(0x485860);
		add_func(0x485860,BADADDR);
	}
	if (!is_code(get_flags(0x485860)))
	{
		del_items(0x485860);
		add_func(0x485860,BADADDR);
	}
	set_cmt(0x4cb058,"ifn @ 0x485860, tfn @ 0x485860",0);
	set_name(0x4cb068,"*reflect.funcTypeFixed8.PkgPath", 0x800);
	create_struct(0x4cb068,-1,"Go_method");
	if (!is_code(get_flags(0x485880)))
	{
		del_items(0x485880);
		add_func(0x485880,BADADDR);
	}
	if (!is_code(get_flags(0x485880)))
	{
		del_items(0x485880);
		add_func(0x485880,BADADDR);
	}
	set_cmt(0x4cb068,"ifn @ 0x485880, tfn @ 0x485880",0);
	set_name(0x4cb078,"*reflect.funcTypeFixed8.Size", 0x800);
	create_struct(0x4cb078,-1,"Go_method");
	if (!is_code(get_flags(0x4858a0)))
	{
		del_items(0x4858a0);
		add_func(0x4858a0,BADADDR);
	}
	if (!is_code(get_flags(0x4858a0)))
	{
		del_items(0x4858a0);
		add_func(0x4858a0,BADADDR);
	}
	set_cmt(0x4cb078,"ifn @ 0x4858a0, tfn @ 0x4858a0",0);
	set_name(0x4cb088,"*reflect.funcTypeFixed8.String", 0x800);
	create_struct(0x4cb088,-1,"Go_method");
	if (!is_code(get_flags(0x4858c0)))
	{
		del_items(0x4858c0);
		add_func(0x4858c0,BADADDR);
	}
	if (!is_code(get_flags(0x4858c0)))
	{
		del_items(0x4858c0);
		add_func(0x4858c0,BADADDR);
	}
	set_cmt(0x4cb088,"ifn @ 0x4858c0, tfn @ 0x4858c0",0);
	set_name(0x4cb098,"*reflect.funcTypeFixed8.common", 0x800);
	create_struct(0x4cb098,-1,"Go_method");
	if (!is_code(get_flags(0x4858e0)))
	{
		del_items(0x4858e0);
		add_func(0x4858e0,BADADDR);
	}
	if (!is_code(get_flags(0x4858e0)))
	{
		del_items(0x4858e0);
		add_func(0x4858e0,BADADDR);
	}
	set_cmt(0x4cb098,"ifn @ 0x4858e0, tfn @ 0x4858e0",0);
	set_name(0x4cb0a8,"*reflect.funcTypeFixed8.exportedMethods", 0x800);
	create_struct(0x4cb0a8,-1,"Go_method");
	set_name(0x4cb0b8,"*reflect.funcTypeFixed8.gcSlice", 0x800);
	create_struct(0x4cb0b8,-1,"Go_method");
	set_name(0x4cb0c8,"*reflect.funcTypeFixed8.hasName", 0x800);
	create_struct(0x4cb0c8,-1,"Go_method");
	set_name(0x4cb0d8,"*reflect.funcTypeFixed8.in", 0x800);
	create_struct(0x4cb0d8,-1,"Go_method");
	set_name(0x4cb0e8,"*reflect.funcTypeFixed8.nameOff", 0x800);
	create_struct(0x4cb0e8,-1,"Go_method");
	set_name(0x4cb0f8,"*reflect.funcTypeFixed8.out", 0x800);
	create_struct(0x4cb0f8,-1,"Go_method");
	set_name(0x4cb108,"*reflect.funcTypeFixed8.pointers", 0x800);
	create_struct(0x4cb108,-1,"Go_method");
	set_name(0x4cb118,"*reflect.funcTypeFixed8.ptrTo", 0x800);
	create_struct(0x4cb118,-1,"Go_method");
	set_name(0x4cb128,"*reflect.funcTypeFixed8.textOff", 0x800);
	create_struct(0x4cb128,-1,"Go_method");
	set_name(0x4cb138,"*reflect.funcTypeFixed8.typeOff", 0x800);
	create_struct(0x4cb138,-1,"Go_method");
	set_name(0x4cb148,"*reflect.funcTypeFixed8.uncommon", 0x800);
	create_struct(0x4cb148,-1,"Go_method");
	if (!is_code(get_flags(0x485900)))
	{
		del_items(0x485900);
		add_func(0x485900,BADADDR);
	}
	if (!is_code(get_flags(0x485900)))
	{
		del_items(0x485900);
		add_func(0x485900,BADADDR);
	}
	set_cmt(0x4cb148,"ifn @ 0x485900, tfn @ 0x485900",0);
	set_name(0x4bc6c8,"*runtime.markBits.advance", 0x800);
	create_struct(0x4bc6c8,-1,"Go_method");
	set_name(0x4bc6d8,"*runtime.markBits.clearMarked", 0x800);
	create_struct(0x4bc6d8,-1,"Go_method");
	set_name(0x4bc6e8,"*runtime.markBits.isMarked", 0x800);
	create_struct(0x4bc6e8,-1,"Go_method");
	set_name(0x4bc6f8,"*runtime.markBits.setMarked", 0x800);
	create_struct(0x4bc6f8,-1,"Go_method");
	set_name(0x4bc708,"*runtime.markBits.setMarkedNonAtomic", 0x800);
	create_struct(0x4bc708,-1,"Go_method");
	set_name(0x4b96c8,"*runtime.rwmutex.lock", 0x800);
	create_struct(0x4b96c8,-1,"Go_method");
	set_name(0x4b96d8,"*runtime.rwmutex.rlock", 0x800);
	create_struct(0x4b96d8,-1,"Go_method");
	if (!is_code(get_flags(0x442470)))
	{
		del_items(0x442470);
		add_func(0x442470,BADADDR);
	}
	if (!is_code(get_flags(0x442470)))
	{
		del_items(0x442470);
		add_func(0x442470,BADADDR);
	}
	set_cmt(0x4b96d8,"ifn @ 0x442470, tfn @ 0x442470",0);
	set_name(0x4b96e8,"*runtime.rwmutex.runlock", 0x800);
	create_struct(0x4b96e8,-1,"Go_method");
	if (!is_code(get_flags(0x442510)))
	{
		del_items(0x442510);
		add_func(0x442510,BADADDR);
	}
	if (!is_code(get_flags(0x442510)))
	{
		del_items(0x442510);
		add_func(0x442510,BADADDR);
	}
	set_cmt(0x4b96e8,"ifn @ 0x442510, tfn @ 0x442510",0);
	set_name(0x4b96f8,"*runtime.rwmutex.unlock", 0x800);
	create_struct(0x4b96f8,-1,"Go_method");
	set_name(0x4c4ee8,"*runtime.mspan.allocBitsForIndex", 0x800);
	create_struct(0x4c4ee8,-1,"Go_method");
	set_name(0x4c4ef8,"*runtime.mspan.base", 0x800);
	create_struct(0x4c4ef8,-1,"Go_method");
	set_name(0x4c4f08,"*runtime.mspan.countAlloc", 0x800);
	create_struct(0x4c4f08,-1,"Go_method");
	if (!is_code(get_flags(0x413600)))
	{
		del_items(0x413600);
		add_func(0x413600,BADADDR);
	}
	if (!is_code(get_flags(0x413600)))
	{
		del_items(0x413600);
		add_func(0x413600,BADADDR);
	}
	set_cmt(0x4c4f08,"ifn @ 0x413600, tfn @ 0x413600",0);
	set_name(0x4c4f18,"*runtime.mspan.ensureSwept", 0x800);
	create_struct(0x4c4f18,-1,"Go_method");
	if (!is_code(get_flags(0x420ed0)))
	{
		del_items(0x420ed0);
		add_func(0x420ed0,BADADDR);
	}
	if (!is_code(get_flags(0x420ed0)))
	{
		del_items(0x420ed0);
		add_func(0x420ed0,BADADDR);
	}
	set_cmt(0x4c4f18,"ifn @ 0x420ed0, tfn @ 0x420ed0",0);
	set_name(0x4c4f28,"*runtime.mspan.inList", 0x800);
	create_struct(0x4c4f28,-1,"Go_method");
	set_name(0x4c4f38,"*runtime.mspan.init", 0x800);
	create_struct(0x4c4f38,-1,"Go_method");
	set_name(0x4c4f48,"*runtime.mspan.isFree", 0x800);
	create_struct(0x4c4f48,-1,"Go_method");
	set_name(0x4c4f58,"*runtime.mspan.layout", 0x800);
	create_struct(0x4c4f58,-1,"Go_method");
	set_name(0x4c4f68,"*runtime.mspan.markBitsForBase", 0x800);
	create_struct(0x4c4f68,-1,"Go_method");
	set_name(0x4c4f78,"*runtime.mspan.markBitsForIndex", 0x800);
	create_struct(0x4c4f78,-1,"Go_method");
	set_name(0x4c4f88,"*runtime.mspan.nextFreeIndex", 0x800);
	create_struct(0x4c4f88,-1,"Go_method");
	if (!is_code(get_flags(0x411e10)))
	{
		del_items(0x411e10);
		add_func(0x411e10,BADADDR);
	}
	if (!is_code(get_flags(0x411e10)))
	{
		del_items(0x411e10);
		add_func(0x411e10,BADADDR);
	}
	set_cmt(0x4c4f88,"ifn @ 0x411e10, tfn @ 0x411e10",0);
	set_name(0x4c4f98,"*runtime.mspan.objIndex", 0x800);
	create_struct(0x4c4f98,-1,"Go_method");
	set_name(0x4c4fa8,"*runtime.mspan.refillAllocCache", 0x800);
	create_struct(0x4c4fa8,-1,"Go_method");
	if (!is_code(get_flags(0x411df0)))
	{
		del_items(0x411df0);
		add_func(0x411df0,BADADDR);
	}
	if (!is_code(get_flags(0x411df0)))
	{
		del_items(0x411df0);
		add_func(0x411df0,BADADDR);
	}
	set_cmt(0x4c4fa8,"ifn @ 0x411df0, tfn @ 0x411df0",0);
	set_name(0x4c4fb8,"*runtime.mspan.sweep", 0x800);
	create_struct(0x4c4fb8,-1,"Go_method");
	if (!is_code(get_flags(0x420ff0)))
	{
		del_items(0x420ff0);
		add_func(0x420ff0,BADADDR);
	}
	if (!is_code(get_flags(0x420ff0)))
	{
		del_items(0x420ff0);
		add_func(0x420ff0,BADADDR);
	}
	set_cmt(0x4c4fb8,"ifn @ 0x420ff0, tfn @ 0x420ff0",0);
	set_name(0x4c1708,"*runtime.name.data", 0x800);
	create_struct(0x4c1708,-1,"Go_method");
	set_name(0x4c1718,"*runtime.name.isBlank", 0x800);
	create_struct(0x4c1718,-1,"Go_method");
	set_name(0x4c1728,"*runtime.name.isExported", 0x800);
	create_struct(0x4c1728,-1,"Go_method");
	set_name(0x4c1738,"*runtime.name.name", 0x800);
	create_struct(0x4c1738,-1,"Go_method");
	set_name(0x4c1748,"*runtime.name.nameLen", 0x800);
	create_struct(0x4c1748,-1,"Go_method");
	set_name(0x4c1758,"*runtime.name.pkgPath", 0x800);
	create_struct(0x4c1758,-1,"Go_method");
	set_name(0x4c1768,"*runtime.name.tag", 0x800);
	create_struct(0x4c1768,-1,"Go_method");
	set_name(0x4c1778,"*runtime.name.tagLen", 0x800);
	create_struct(0x4c1778,-1,"Go_method");
	set_name(0x4b4708,"*runtime.Frames.Next", 0x800);
	create_struct(0x4b4708,-1,"Go_method");
	if (!is_code(get_flags(0x449880)))
	{
		del_items(0x449880);
		add_func(0x449880,BADADDR);
	}
	if (!is_code(get_flags(0x449880)))
	{
		del_items(0x449880);
		add_func(0x449880,BADADDR);
	}
	set_cmt(0x4b4708,"ifn @ 0x449880, tfn @ 0x449880",0);
	set_name(0x4b5f28,"*runtime.boundsError.Error", 0x800);
	create_struct(0x4b5f28,-1,"Go_method");
	if (!is_code(get_flags(0x4607e0)))
	{
		del_items(0x4607e0);
		add_func(0x4607e0,BADADDR);
	}
	if (!is_code(get_flags(0x4607e0)))
	{
		del_items(0x4607e0);
		add_func(0x4607e0,BADADDR);
	}
	set_cmt(0x4b5f28,"ifn @ 0x4607e0, tfn @ 0x4607e0",0);
	set_name(0x4b5f38,"*runtime.boundsError.RuntimeError", 0x800);
	create_struct(0x4b5f38,-1,"Go_method");
	set_name(0x4b6728,"*runtime.traceAlloc.alloc", 0x800);
	create_struct(0x4b6728,-1,"Go_method");
	if (!is_code(get_flags(0x44fe10)))
	{
		del_items(0x44fe10);
		add_func(0x44fe10,BADADDR);
	}
	if (!is_code(get_flags(0x44fe10)))
	{
		del_items(0x44fe10);
		add_func(0x44fe10,BADADDR);
	}
	set_cmt(0x4b6728,"ifn @ 0x44fe10, tfn @ 0x44fe10",0);
	set_name(0x4b6738,"*runtime.traceAlloc.drop", 0x800);
	create_struct(0x4b6738,-1,"Go_method");
	set_name(0x4b7748,"*sync.poolChain.popHead", 0x800);
	create_struct(0x4b7748,-1,"Go_method");
	if (!is_code(get_flags(0x46fea0)))
	{
		del_items(0x46fea0);
		add_func(0x46fea0,BADADDR);
	}
	if (!is_code(get_flags(0x46fea0)))
	{
		del_items(0x46fea0);
		add_func(0x46fea0,BADADDR);
	}
	set_cmt(0x4b7748,"ifn @ 0x46fea0, tfn @ 0x46fea0",0);
	set_name(0x4b7758,"*sync.poolChain.popTail", 0x800);
	create_struct(0x4b7758,-1,"Go_method");
	if (!is_code(get_flags(0x46ff40)))
	{
		del_items(0x46ff40);
		add_func(0x46ff40,BADADDR);
	}
	if (!is_code(get_flags(0x46ff40)))
	{
		del_items(0x46ff40);
		add_func(0x46ff40,BADADDR);
	}
	set_cmt(0x4b7758,"ifn @ 0x46ff40, tfn @ 0x46ff40",0);
	set_name(0x4b7768,"*sync.poolChain.pushHead", 0x800);
	create_struct(0x4b7768,-1,"Go_method");
	if (!is_code(get_flags(0x46fc60)))
	{
		del_items(0x46fc60);
		add_func(0x46fc60,BADADDR);
	}
	if (!is_code(get_flags(0x46fc60)))
	{
		del_items(0x46fc60);
		add_func(0x46fc60,BADADDR);
	}
	set_cmt(0x4b7768,"ifn @ 0x46fc60, tfn @ 0x46fc60",0);
	set_name(0x4c0748,"*runtime.hmap.createOverflow", 0x800);
	create_struct(0x4c0748,-1,"Go_method");
	set_name(0x4c0758,"*runtime.hmap.growing", 0x800);
	create_struct(0x4c0758,-1,"Go_method");
	set_name(0x4c0768,"*runtime.hmap.incrnoverflow", 0x800);
	create_struct(0x4c0768,-1,"Go_method");
	if (!is_code(get_flags(0x40ca30)))
	{
		del_items(0x40ca30);
		add_func(0x40ca30,BADADDR);
	}
	if (!is_code(get_flags(0x40ca30)))
	{
		del_items(0x40ca30);
		add_func(0x40ca30,BADADDR);
	}
	set_cmt(0x4c0768,"ifn @ 0x40ca30, tfn @ 0x40ca30",0);
	set_name(0x4c0778,"*runtime.hmap.newoverflow", 0x800);
	create_struct(0x4c0778,-1,"Go_method");
	if (!is_code(get_flags(0x40cac0)))
	{
		del_items(0x40cac0);
		add_func(0x40cac0,BADADDR);
	}
	if (!is_code(get_flags(0x40cac0)))
	{
		del_items(0x40cac0);
		add_func(0x40cac0,BADADDR);
	}
	set_cmt(0x4c0778,"ifn @ 0x40cac0, tfn @ 0x40cac0",0);
	set_name(0x4c0788,"*runtime.hmap.noldbuckets", 0x800);
	create_struct(0x4c0788,-1,"Go_method");
	set_name(0x4c0798,"*runtime.hmap.oldbucketmask", 0x800);
	create_struct(0x4c0798,-1,"Go_method");
	set_name(0x4c07a8,"*runtime.hmap.sameSizeGrow", 0x800);
	create_struct(0x4c07a8,-1,"Go_method");
	set_name(0x4b4768,"*runtime.bitvector.ptrbit", 0x800);
	create_struct(0x4b4768,-1,"Go_method");
	set_name(0x4bc768,"*runtime.mcentral.cacheSpan", 0x800);
	create_struct(0x4bc768,-1,"Go_method");
	if (!is_code(get_flags(0x415170)))
	{
		del_items(0x415170);
		add_func(0x415170,BADADDR);
	}
	if (!is_code(get_flags(0x415170)))
	{
		del_items(0x415170);
		add_func(0x415170,BADADDR);
	}
	set_cmt(0x4bc768,"ifn @ 0x415170, tfn @ 0x415170",0);
	set_name(0x4bc778,"*runtime.mcentral.freeSpan", 0x800);
	create_struct(0x4bc778,-1,"Go_method");
	if (!is_code(get_flags(0x4156f0)))
	{
		del_items(0x4156f0);
		add_func(0x4156f0,BADADDR);
	}
	if (!is_code(get_flags(0x4156f0)))
	{
		del_items(0x4156f0);
		add_func(0x4156f0,BADADDR);
	}
	set_cmt(0x4bc778,"ifn @ 0x4156f0, tfn @ 0x4156f0",0);
	set_name(0x4bc788,"*runtime.mcentral.grow", 0x800);
	create_struct(0x4bc788,-1,"Go_method");
	if (!is_code(get_flags(0x415890)))
	{
		del_items(0x415890);
		add_func(0x415890,BADADDR);
	}
	if (!is_code(get_flags(0x415890)))
	{
		del_items(0x415890);
		add_func(0x415890,BADADDR);
	}
	set_cmt(0x4bc788,"ifn @ 0x415890, tfn @ 0x415890",0);
	set_name(0x4bc798,"*runtime.mcentral.init", 0x800);
	create_struct(0x4bc798,-1,"Go_method");
	set_name(0x4bc7a8,"*runtime.mcentral.uncacheSpan", 0x800);
	create_struct(0x4bc7a8,-1,"Go_method");
	if (!is_code(get_flags(0x415590)))
	{
		del_items(0x415590);
		add_func(0x415590,BADADDR);
	}
	if (!is_code(get_flags(0x415590)))
	{
		del_items(0x415590);
		add_func(0x415590,BADADDR);
	}
	set_cmt(0x4bc7a8,"ifn @ 0x415590, tfn @ 0x415590",0);
	set_name(0x4b9768,"*runtime.semaRoot.dequeue", 0x800);
	create_struct(0x4b9768,-1,"Go_method");
	if (!is_code(get_flags(0x4431a0)))
	{
		del_items(0x4431a0);
		add_func(0x4431a0,BADADDR);
	}
	if (!is_code(get_flags(0x4431a0)))
	{
		del_items(0x4431a0);
		add_func(0x4431a0,BADADDR);
	}
	set_cmt(0x4b9768,"ifn @ 0x4431a0, tfn @ 0x4431a0",0);
	set_name(0x4b9778,"*runtime.semaRoot.queue", 0x800);
	create_struct(0x4b9778,-1,"Go_method");
	if (!is_code(get_flags(0x442d40)))
	{
		del_items(0x442d40);
		add_func(0x442d40,BADADDR);
	}
	if (!is_code(get_flags(0x442d40)))
	{
		del_items(0x442d40);
		add_func(0x442d40,BADADDR);
	}
	set_cmt(0x4b9778,"ifn @ 0x442d40, tfn @ 0x442d40",0);
	set_name(0x4b9788,"*runtime.semaRoot.rotateLeft", 0x800);
	create_struct(0x4b9788,-1,"Go_method");
	if (!is_code(get_flags(0x443520)))
	{
		del_items(0x443520);
		add_func(0x443520,BADADDR);
	}
	if (!is_code(get_flags(0x443520)))
	{
		del_items(0x443520);
		add_func(0x443520,BADADDR);
	}
	set_cmt(0x4b9788,"ifn @ 0x443520, tfn @ 0x443520",0);
	set_name(0x4b9798,"*runtime.semaRoot.rotateRight", 0x800);
	create_struct(0x4b9798,-1,"Go_method");
	if (!is_code(get_flags(0x443690)))
	{
		del_items(0x443690);
		add_func(0x443690,BADADDR);
	}
	if (!is_code(get_flags(0x443690)))
	{
		del_items(0x443690);
		add_func(0x443690,BADADDR);
	}
	set_cmt(0x4b9798,"ifn @ 0x443690, tfn @ 0x443690",0);
	set_name(0x4c3f88,"*runtime.pallocBits.allocAll", 0x800);
	create_struct(0x4c3f88,-1,"Go_method");
	set_name(0x4c3f98,"*runtime.pallocBits.allocRange", 0x800);
	create_struct(0x4c3f98,-1,"Go_method");
	set_name(0x4c3fa8,"*runtime.pallocBits.find", 0x800);
	create_struct(0x4c3fa8,-1,"Go_method");
	if (!is_code(get_flags(0x4294e0)))
	{
		del_items(0x4294e0);
		add_func(0x4294e0,BADADDR);
	}
	if (!is_code(get_flags(0x4294e0)))
	{
		del_items(0x4294e0);
		add_func(0x4294e0,BADADDR);
	}
	set_cmt(0x4c3fa8,"ifn @ 0x4294e0, tfn @ 0x4294e0",0);
	set_name(0x4c3fb8,"*runtime.pallocBits.find1", 0x800);
	create_struct(0x4c3fb8,-1,"Go_method");
	if (!is_code(get_flags(0x4295d0)))
	{
		del_items(0x4295d0);
		add_func(0x4295d0,BADADDR);
	}
	if (!is_code(get_flags(0x4295d0)))
	{
		del_items(0x4295d0);
		add_func(0x4295d0,BADADDR);
	}
	set_cmt(0x4c3fb8,"ifn @ 0x4295d0, tfn @ 0x4295d0",0);
	set_name(0x4c3fc8,"*runtime.pallocBits.findLargeN", 0x800);
	create_struct(0x4c3fc8,-1,"Go_method");
	if (!is_code(get_flags(0x429880)))
	{
		del_items(0x429880);
		add_func(0x429880,BADADDR);
	}
	if (!is_code(get_flags(0x429880)))
	{
		del_items(0x429880);
		add_func(0x429880,BADADDR);
	}
	set_cmt(0x4c3fc8,"ifn @ 0x429880, tfn @ 0x429880",0);
	set_name(0x4c3fd8,"*runtime.pallocBits.findSmallN", 0x800);
	create_struct(0x4c3fd8,-1,"Go_method");
	if (!is_code(get_flags(0x429650)))
	{
		del_items(0x429650);
		add_func(0x429650,BADADDR);
	}
	if (!is_code(get_flags(0x429650)))
	{
		del_items(0x429650);
		add_func(0x429650,BADADDR);
	}
	set_cmt(0x4c3fd8,"ifn @ 0x429650, tfn @ 0x429650",0);
	set_name(0x4c3fe8,"*runtime.pallocBits.free", 0x800);
	create_struct(0x4c3fe8,-1,"Go_method");
	set_name(0x4c3ff8,"*runtime.pallocBits.free1", 0x800);
	create_struct(0x4c3ff8,-1,"Go_method");
	set_name(0x4c4008,"*runtime.pallocBits.freeAll", 0x800);
	create_struct(0x4c4008,-1,"Go_method");
	set_name(0x4c4018,"*runtime.pallocBits.pages64", 0x800);
	create_struct(0x4c4018,-1,"Go_method");
	set_name(0x4c4028,"*runtime.pallocBits.summarize", 0x800);
	create_struct(0x4c4028,-1,"Go_method");
	if (!is_code(get_flags(0x4293f0)))
	{
		del_items(0x4293f0);
		add_func(0x4293f0,BADADDR);
	}
	if (!is_code(get_flags(0x4293f0)))
	{
		del_items(0x4293f0);
		add_func(0x4293f0,BADADDR);
	}
	set_cmt(0x4c4028,"ifn @ 0x4293f0, tfn @ 0x4293f0",0);
	set_name(0x4b67a8,"*runtime.traceAllocBlockPtr.ptr", 0x800);
	create_struct(0x4b67a8,-1,"Go_method");
	set_name(0x4b67b8,"*runtime.traceAllocBlockPtr.set", 0x800);
	create_struct(0x4b67b8,-1,"Go_method");
	set_name(0x4b5fa8,"*runtime.chunkIdx.l1", 0x800);
	create_struct(0x4b5fa8,-1,"Go_method");
	set_name(0x4b5fb8,"*runtime.chunkIdx.l2", 0x800);
	create_struct(0x4b5fb8,-1,"Go_method");
	set_name(0x4b77c8,"*syscall.DLL.FindProc", 0x800);
	create_struct(0x4b77c8,-1,"Go_method");
	if (!is_code(get_flags(0x4894c0)))
	{
		del_items(0x4894c0);
		add_func(0x4894c0,BADADDR);
	}
	if (!is_code(get_flags(0x4894c0)))
	{
		del_items(0x4894c0);
		add_func(0x4894c0,BADADDR);
	}
	set_cmt(0x4b77c8,"ifn @ 0x4894c0, tfn @ 0x4894c0",0);
	set_name(0x4b77d8,"*syscall.DLL.MustFindProc", 0x800);
	create_struct(0x4b77d8,-1,"Go_method");
	set_name(0x4b77e8,"*syscall.DLL.Release", 0x800);
	create_struct(0x4b77e8,-1,"Go_method");
	set_name(0x4b47c8,"*runtime.gcBitsArena.tryAlloc", 0x800);
	create_struct(0x4b47c8,-1,"Go_method");
	set_name(0x4c97e8,"*reflect.structType.Align", 0x800);
	create_struct(0x4c97e8,-1,"Go_method");
	if (!is_code(get_flags(0x4830f0)))
	{
		del_items(0x4830f0);
		add_func(0x4830f0,BADADDR);
	}
	if (!is_code(get_flags(0x4830f0)))
	{
		del_items(0x4830f0);
		add_func(0x4830f0,BADADDR);
	}
	set_cmt(0x4c97e8,"ifn @ 0x4830f0, tfn @ 0x4830f0",0);
	set_name(0x4c97f8,"*reflect.structType.AssignableTo", 0x800);
	create_struct(0x4c97f8,-1,"Go_method");
	if (!is_code(get_flags(0x483110)))
	{
		del_items(0x483110);
		add_func(0x483110,BADADDR);
	}
	if (!is_code(get_flags(0x483110)))
	{
		del_items(0x483110);
		add_func(0x483110,BADADDR);
	}
	set_cmt(0x4c97f8,"ifn @ 0x483110, tfn @ 0x483110",0);
	set_name(0x4c9808,"*reflect.structType.Bits", 0x800);
	create_struct(0x4c9808,-1,"Go_method");
	if (!is_code(get_flags(0x483130)))
	{
		del_items(0x483130);
		add_func(0x483130,BADADDR);
	}
	if (!is_code(get_flags(0x483130)))
	{
		del_items(0x483130);
		add_func(0x483130,BADADDR);
	}
	set_cmt(0x4c9808,"ifn @ 0x483130, tfn @ 0x483130",0);
	set_name(0x4c9818,"*reflect.structType.ChanDir", 0x800);
	create_struct(0x4c9818,-1,"Go_method");
	if (!is_code(get_flags(0x483150)))
	{
		del_items(0x483150);
		add_func(0x483150,BADADDR);
	}
	if (!is_code(get_flags(0x483150)))
	{
		del_items(0x483150);
		add_func(0x483150,BADADDR);
	}
	set_cmt(0x4c9818,"ifn @ 0x483150, tfn @ 0x483150",0);
	set_name(0x4c9828,"*reflect.structType.Comparable", 0x800);
	create_struct(0x4c9828,-1,"Go_method");
	if (!is_code(get_flags(0x483170)))
	{
		del_items(0x483170);
		add_func(0x483170,BADADDR);
	}
	if (!is_code(get_flags(0x483170)))
	{
		del_items(0x483170);
		add_func(0x483170,BADADDR);
	}
	set_cmt(0x4c9828,"ifn @ 0x483170, tfn @ 0x483170",0);
	set_name(0x4c9838,"*reflect.structType.ConvertibleTo", 0x800);
	create_struct(0x4c9838,-1,"Go_method");
	if (!is_code(get_flags(0x483190)))
	{
		del_items(0x483190);
		add_func(0x483190,BADADDR);
	}
	if (!is_code(get_flags(0x483190)))
	{
		del_items(0x483190);
		add_func(0x483190,BADADDR);
	}
	set_cmt(0x4c9838,"ifn @ 0x483190, tfn @ 0x483190",0);
	set_name(0x4c9848,"*reflect.structType.Elem", 0x800);
	create_struct(0x4c9848,-1,"Go_method");
	if (!is_code(get_flags(0x4831b0)))
	{
		del_items(0x4831b0);
		add_func(0x4831b0,BADADDR);
	}
	if (!is_code(get_flags(0x4831b0)))
	{
		del_items(0x4831b0);
		add_func(0x4831b0,BADADDR);
	}
	set_cmt(0x4c9848,"ifn @ 0x4831b0, tfn @ 0x4831b0",0);
	set_name(0x4c9858,"*reflect.structType.Field", 0x800);
	create_struct(0x4c9858,-1,"Go_method");
	if (!is_code(get_flags(0x477f70)))
	{
		del_items(0x477f70);
		add_func(0x477f70,BADADDR);
	}
	if (!is_code(get_flags(0x477f70)))
	{
		del_items(0x477f70);
		add_func(0x477f70,BADADDR);
	}
	set_cmt(0x4c9858,"ifn @ 0x477f70, tfn @ 0x477f70",0);
	set_name(0x4c9868,"*reflect.structType.FieldAlign", 0x800);
	create_struct(0x4c9868,-1,"Go_method");
	if (!is_code(get_flags(0x4831d0)))
	{
		del_items(0x4831d0);
		add_func(0x4831d0,BADADDR);
	}
	if (!is_code(get_flags(0x4831d0)))
	{
		del_items(0x4831d0);
		add_func(0x4831d0,BADADDR);
	}
	set_cmt(0x4c9868,"ifn @ 0x4831d0, tfn @ 0x4831d0",0);
	set_name(0x4c9878,"*reflect.structType.FieldByIndex", 0x800);
	create_struct(0x4c9878,-1,"Go_method");
	if (!is_code(get_flags(0x478170)))
	{
		del_items(0x478170);
		add_func(0x478170,BADADDR);
	}
	if (!is_code(get_flags(0x478170)))
	{
		del_items(0x478170);
		add_func(0x478170,BADADDR);
	}
	set_cmt(0x4c9878,"ifn @ 0x478170, tfn @ 0x478170",0);
	set_name(0x4c9888,"*reflect.structType.FieldByName", 0x800);
	create_struct(0x4c9888,-1,"Go_method");
	if (!is_code(get_flags(0x478e40)))
	{
		del_items(0x478e40);
		add_func(0x478e40,BADADDR);
	}
	if (!is_code(get_flags(0x478e40)))
	{
		del_items(0x478e40);
		add_func(0x478e40,BADADDR);
	}
	set_cmt(0x4c9888,"ifn @ 0x478e40, tfn @ 0x478e40",0);
	set_name(0x4c9898,"*reflect.structType.FieldByNameFunc", 0x800);
	create_struct(0x4c9898,-1,"Go_method");
	if (!is_code(get_flags(0x478370)))
	{
		del_items(0x478370);
		add_func(0x478370,BADADDR);
	}
	if (!is_code(get_flags(0x478370)))
	{
		del_items(0x478370);
		add_func(0x478370,BADADDR);
	}
	set_cmt(0x4c9898,"ifn @ 0x478370, tfn @ 0x478370",0);
	set_name(0x4c98a8,"*reflect.structType.Implements", 0x800);
	create_struct(0x4c98a8,-1,"Go_method");
	if (!is_code(get_flags(0x4831f0)))
	{
		del_items(0x4831f0);
		add_func(0x4831f0,BADADDR);
	}
	if (!is_code(get_flags(0x4831f0)))
	{
		del_items(0x4831f0);
		add_func(0x4831f0,BADADDR);
	}
	set_cmt(0x4c98a8,"ifn @ 0x4831f0, tfn @ 0x4831f0",0);
	set_name(0x4c98b8,"*reflect.structType.In", 0x800);
	create_struct(0x4c98b8,-1,"Go_method");
	if (!is_code(get_flags(0x483210)))
	{
		del_items(0x483210);
		add_func(0x483210,BADADDR);
	}
	if (!is_code(get_flags(0x483210)))
	{
		del_items(0x483210);
		add_func(0x483210,BADADDR);
	}
	set_cmt(0x4c98b8,"ifn @ 0x483210, tfn @ 0x483210",0);
	set_name(0x4c98c8,"*reflect.structType.IsVariadic", 0x800);
	create_struct(0x4c98c8,-1,"Go_method");
	if (!is_code(get_flags(0x483230)))
	{
		del_items(0x483230);
		add_func(0x483230,BADADDR);
	}
	if (!is_code(get_flags(0x483230)))
	{
		del_items(0x483230);
		add_func(0x483230,BADADDR);
	}
	set_cmt(0x4c98c8,"ifn @ 0x483230, tfn @ 0x483230",0);
	set_name(0x4c98d8,"*reflect.structType.Key", 0x800);
	create_struct(0x4c98d8,-1,"Go_method");
	if (!is_code(get_flags(0x483250)))
	{
		del_items(0x483250);
		add_func(0x483250,BADADDR);
	}
	if (!is_code(get_flags(0x483250)))
	{
		del_items(0x483250);
		add_func(0x483250,BADADDR);
	}
	set_cmt(0x4c98d8,"ifn @ 0x483250, tfn @ 0x483250",0);
	set_name(0x4c98e8,"*reflect.structType.Kind", 0x800);
	create_struct(0x4c98e8,-1,"Go_method");
	if (!is_code(get_flags(0x483270)))
	{
		del_items(0x483270);
		add_func(0x483270,BADADDR);
	}
	if (!is_code(get_flags(0x483270)))
	{
		del_items(0x483270);
		add_func(0x483270,BADADDR);
	}
	set_cmt(0x4c98e8,"ifn @ 0x483270, tfn @ 0x483270",0);
	set_name(0x4c98f8,"*reflect.structType.Len", 0x800);
	create_struct(0x4c98f8,-1,"Go_method");
	if (!is_code(get_flags(0x483290)))
	{
		del_items(0x483290);
		add_func(0x483290,BADADDR);
	}
	if (!is_code(get_flags(0x483290)))
	{
		del_items(0x483290);
		add_func(0x483290,BADADDR);
	}
	set_cmt(0x4c98f8,"ifn @ 0x483290, tfn @ 0x483290",0);
	set_name(0x4c9908,"*reflect.structType.Method", 0x800);
	create_struct(0x4c9908,-1,"Go_method");
	if (!is_code(get_flags(0x4832b0)))
	{
		del_items(0x4832b0);
		add_func(0x4832b0,BADADDR);
	}
	if (!is_code(get_flags(0x4832b0)))
	{
		del_items(0x4832b0);
		add_func(0x4832b0,BADADDR);
	}
	set_cmt(0x4c9908,"ifn @ 0x4832b0, tfn @ 0x4832b0",0);
	set_name(0x4c9918,"*reflect.structType.MethodByName", 0x800);
	create_struct(0x4c9918,-1,"Go_method");
	if (!is_code(get_flags(0x483300)))
	{
		del_items(0x483300);
		add_func(0x483300,BADADDR);
	}
	if (!is_code(get_flags(0x483300)))
	{
		del_items(0x483300);
		add_func(0x483300,BADADDR);
	}
	set_cmt(0x4c9918,"ifn @ 0x483300, tfn @ 0x483300",0);
	set_name(0x4c9928,"*reflect.structType.Name", 0x800);
	create_struct(0x4c9928,-1,"Go_method");
	if (!is_code(get_flags(0x483350)))
	{
		del_items(0x483350);
		add_func(0x483350,BADADDR);
	}
	if (!is_code(get_flags(0x483350)))
	{
		del_items(0x483350);
		add_func(0x483350,BADADDR);
	}
	set_cmt(0x4c9928,"ifn @ 0x483350, tfn @ 0x483350",0);
	set_name(0x4c9938,"*reflect.structType.NumField", 0x800);
	create_struct(0x4c9938,-1,"Go_method");
	if (!is_code(get_flags(0x483370)))
	{
		del_items(0x483370);
		add_func(0x483370,BADADDR);
	}
	if (!is_code(get_flags(0x483370)))
	{
		del_items(0x483370);
		add_func(0x483370,BADADDR);
	}
	set_cmt(0x4c9938,"ifn @ 0x483370, tfn @ 0x483370",0);
	set_name(0x4c9948,"*reflect.structType.NumIn", 0x800);
	create_struct(0x4c9948,-1,"Go_method");
	if (!is_code(get_flags(0x483390)))
	{
		del_items(0x483390);
		add_func(0x483390,BADADDR);
	}
	if (!is_code(get_flags(0x483390)))
	{
		del_items(0x483390);
		add_func(0x483390,BADADDR);
	}
	set_cmt(0x4c9948,"ifn @ 0x483390, tfn @ 0x483390",0);
	set_name(0x4c9958,"*reflect.structType.NumMethod", 0x800);
	create_struct(0x4c9958,-1,"Go_method");
	if (!is_code(get_flags(0x4833b0)))
	{
		del_items(0x4833b0);
		add_func(0x4833b0,BADADDR);
	}
	if (!is_code(get_flags(0x4833b0)))
	{
		del_items(0x4833b0);
		add_func(0x4833b0,BADADDR);
	}
	set_cmt(0x4c9958,"ifn @ 0x4833b0, tfn @ 0x4833b0",0);
	set_name(0x4c9968,"*reflect.structType.NumOut", 0x800);
	create_struct(0x4c9968,-1,"Go_method");
	if (!is_code(get_flags(0x4833d0)))
	{
		del_items(0x4833d0);
		add_func(0x4833d0,BADADDR);
	}
	if (!is_code(get_flags(0x4833d0)))
	{
		del_items(0x4833d0);
		add_func(0x4833d0,BADADDR);
	}
	set_cmt(0x4c9968,"ifn @ 0x4833d0, tfn @ 0x4833d0",0);
	set_name(0x4c9978,"*reflect.structType.Out", 0x800);
	create_struct(0x4c9978,-1,"Go_method");
	if (!is_code(get_flags(0x4833f0)))
	{
		del_items(0x4833f0);
		add_func(0x4833f0,BADADDR);
	}
	if (!is_code(get_flags(0x4833f0)))
	{
		del_items(0x4833f0);
		add_func(0x4833f0,BADADDR);
	}
	set_cmt(0x4c9978,"ifn @ 0x4833f0, tfn @ 0x4833f0",0);
	set_name(0x4c9988,"*reflect.structType.PkgPath", 0x800);
	create_struct(0x4c9988,-1,"Go_method");
	if (!is_code(get_flags(0x483410)))
	{
		del_items(0x483410);
		add_func(0x483410,BADADDR);
	}
	if (!is_code(get_flags(0x483410)))
	{
		del_items(0x483410);
		add_func(0x483410,BADADDR);
	}
	set_cmt(0x4c9988,"ifn @ 0x483410, tfn @ 0x483410",0);
	set_name(0x4c9998,"*reflect.structType.Size", 0x800);
	create_struct(0x4c9998,-1,"Go_method");
	if (!is_code(get_flags(0x483430)))
	{
		del_items(0x483430);
		add_func(0x483430,BADADDR);
	}
	if (!is_code(get_flags(0x483430)))
	{
		del_items(0x483430);
		add_func(0x483430,BADADDR);
	}
	set_cmt(0x4c9998,"ifn @ 0x483430, tfn @ 0x483430",0);
	set_name(0x4c99a8,"*reflect.structType.String", 0x800);
	create_struct(0x4c99a8,-1,"Go_method");
	if (!is_code(get_flags(0x483450)))
	{
		del_items(0x483450);
		add_func(0x483450,BADADDR);
	}
	if (!is_code(get_flags(0x483450)))
	{
		del_items(0x483450);
		add_func(0x483450,BADADDR);
	}
	set_cmt(0x4c99a8,"ifn @ 0x483450, tfn @ 0x483450",0);
	set_name(0x4c99b8,"*reflect.structType.common", 0x800);
	create_struct(0x4c99b8,-1,"Go_method");
	if (!is_code(get_flags(0x483470)))
	{
		del_items(0x483470);
		add_func(0x483470,BADADDR);
	}
	if (!is_code(get_flags(0x483470)))
	{
		del_items(0x483470);
		add_func(0x483470,BADADDR);
	}
	set_cmt(0x4c99b8,"ifn @ 0x483470, tfn @ 0x483470",0);
	set_name(0x4c99c8,"*reflect.structType.exportedMethods", 0x800);
	create_struct(0x4c99c8,-1,"Go_method");
	set_name(0x4c99d8,"*reflect.structType.gcSlice", 0x800);
	create_struct(0x4c99d8,-1,"Go_method");
	set_name(0x4c99e8,"*reflect.structType.hasName", 0x800);
	create_struct(0x4c99e8,-1,"Go_method");
	set_name(0x4c99f8,"*reflect.structType.nameOff", 0x800);
	create_struct(0x4c99f8,-1,"Go_method");
	set_name(0x4c9a08,"*reflect.structType.pointers", 0x800);
	create_struct(0x4c9a08,-1,"Go_method");
	set_name(0x4c9a18,"*reflect.structType.ptrTo", 0x800);
	create_struct(0x4c9a18,-1,"Go_method");
	set_name(0x4c9a28,"*reflect.structType.textOff", 0x800);
	create_struct(0x4c9a28,-1,"Go_method");
	set_name(0x4c9a38,"*reflect.structType.typeOff", 0x800);
	create_struct(0x4c9a38,-1,"Go_method");
	set_name(0x4c9a48,"*reflect.structType.uncommon", 0x800);
	create_struct(0x4c9a48,-1,"Go_method");
	if (!is_code(get_flags(0x483490)))
	{
		del_items(0x483490);
		add_func(0x483490,BADADDR);
	}
	if (!is_code(get_flags(0x483490)))
	{
		del_items(0x483490);
		add_func(0x483490,BADADDR);
	}
	set_cmt(0x4c9a48,"ifn @ 0x483490, tfn @ 0x483490",0);
	set_name(0x4c17e8,"*strconv.extFloat.AssignComputeBounds", 0x800);
	create_struct(0x4c17e8,-1,"Go_method");
	if (!is_code(get_flags(0x467900)))
	{
		del_items(0x467900);
		add_func(0x467900,BADADDR);
	}
	if (!is_code(get_flags(0x467900)))
	{
		del_items(0x467900);
		add_func(0x467900,BADADDR);
	}
	set_cmt(0x4c17e8,"ifn @ 0x467900, tfn @ 0x467900",0);
	set_name(0x4c17f8,"*strconv.extFloat.AssignDecimal", 0x800);
	create_struct(0x4c17f8,-1,"Go_method");
	set_name(0x4c1808,"*strconv.extFloat.FixedDecimal", 0x800);
	create_struct(0x4c1808,-1,"Go_method");
	if (!is_code(get_flags(0x467bf0)))
	{
		del_items(0x467bf0);
		add_func(0x467bf0,BADADDR);
	}
	if (!is_code(get_flags(0x467bf0)))
	{
		del_items(0x467bf0);
		add_func(0x467bf0,BADADDR);
	}
	set_cmt(0x4c1808,"ifn @ 0x467bf0, tfn @ 0x467bf0",0);
	set_name(0x4c1818,"*strconv.extFloat.Multiply", 0x800);
	create_struct(0x4c1818,-1,"Go_method");
	set_name(0x4c1828,"*strconv.extFloat.Normalize", 0x800);
	create_struct(0x4c1828,-1,"Go_method");
	set_name(0x4c1838,"*strconv.extFloat.ShortestDecimal", 0x800);
	create_struct(0x4c1838,-1,"Go_method");
	if (!is_code(get_flags(0x468140)))
	{
		del_items(0x468140);
		add_func(0x468140,BADADDR);
	}
	if (!is_code(get_flags(0x468140)))
	{
		del_items(0x468140);
		add_func(0x468140,BADADDR);
	}
	set_cmt(0x4c1838,"ifn @ 0x468140, tfn @ 0x468140",0);
	set_name(0x4c1848,"*strconv.extFloat.floatBits", 0x800);
	create_struct(0x4c1848,-1,"Go_method");
	set_name(0x4c1858,"*strconv.extFloat.frexp10", 0x800);
	create_struct(0x4c1858,-1,"Go_method");
	if (!is_code(get_flags(0x467a20)))
	{
		del_items(0x467a20);
		add_func(0x467a20,BADADDR);
	}
	if (!is_code(get_flags(0x467a20)))
	{
		del_items(0x467a20);
		add_func(0x467a20,BADADDR);
	}
	set_cmt(0x4c1858,"ifn @ 0x467a20, tfn @ 0x467a20",0);
	set_name(0x4bc808,"*runtime.stackScanState.addObject", 0x800);
	create_struct(0x4bc808,-1,"Go_method");
	if (!is_code(get_flags(0x4205c0)))
	{
		del_items(0x4205c0);
		add_func(0x4205c0,BADADDR);
	}
	if (!is_code(get_flags(0x4205c0)))
	{
		del_items(0x4205c0);
		add_func(0x4205c0,BADADDR);
	}
	set_cmt(0x4bc808,"ifn @ 0x4205c0, tfn @ 0x4205c0",0);
	set_name(0x4bc818,"*runtime.stackScanState.buildIndex", 0x800);
	create_struct(0x4bc818,-1,"Go_method");
	set_name(0x4bc828,"*runtime.stackScanState.findObject", 0x800);
	create_struct(0x4bc828,-1,"Go_method");
	if (!is_code(get_flags(0x4208b0)))
	{
		del_items(0x4208b0);
		add_func(0x4208b0,BADADDR);
	}
	if (!is_code(get_flags(0x4208b0)))
	{
		del_items(0x4208b0);
		add_func(0x4208b0,BADADDR);
	}
	set_cmt(0x4bc828,"ifn @ 0x4208b0, tfn @ 0x4208b0",0);
	set_name(0x4bc838,"*runtime.stackScanState.getPtr", 0x800);
	create_struct(0x4bc838,-1,"Go_method");
	if (!is_code(get_flags(0x420460)))
	{
		del_items(0x420460);
		add_func(0x420460,BADADDR);
	}
	if (!is_code(get_flags(0x420460)))
	{
		del_items(0x420460);
		add_func(0x420460,BADADDR);
	}
	set_cmt(0x4bc838,"ifn @ 0x420460, tfn @ 0x420460",0);
	set_name(0x4bc848,"*runtime.stackScanState.putPtr", 0x800);
	create_struct(0x4bc848,-1,"Go_method");
	if (!is_code(get_flags(0x420330)))
	{
		del_items(0x420330);
		add_func(0x420330,BADADDR);
	}
	if (!is_code(get_flags(0x420330)))
	{
		del_items(0x420330);
		add_func(0x420330,BADADDR);
	}
	set_cmt(0x4bc848,"ifn @ 0x420330, tfn @ 0x420330",0);
	set_name(0x4b9808,"*runtime.traceStackTable.dump", 0x800);
	create_struct(0x4b9808,-1,"Go_method");
	set_name(0x4b9818,"*runtime.traceStackTable.find", 0x800);
	create_struct(0x4b9818,-1,"Go_method");
	if (!is_code(get_flags(0x44fd00)))
	{
		del_items(0x44fd00);
		add_func(0x44fd00,BADADDR);
	}
	if (!is_code(get_flags(0x44fd00)))
	{
		del_items(0x44fd00);
		add_func(0x44fd00,BADADDR);
	}
	set_cmt(0x4b9818,"ifn @ 0x44fd00, tfn @ 0x44fd00",0);
	set_name(0x4b9828,"*runtime.traceStackTable.newStack", 0x800);
	create_struct(0x4b9828,-1,"Go_method");
	if (!is_code(get_flags(0x44fda0)))
	{
		del_items(0x44fda0);
		add_func(0x44fda0,BADADDR);
	}
	if (!is_code(get_flags(0x44fda0)))
	{
		del_items(0x44fda0);
		add_func(0x44fda0,BADADDR);
	}
	set_cmt(0x4b9828,"ifn @ 0x44fda0, tfn @ 0x44fda0",0);
	set_name(0x4b9838,"*runtime.traceStackTable.put", 0x800);
	create_struct(0x4b9838,-1,"Go_method");
	if (!is_code(get_flags(0x44fb00)))
	{
		del_items(0x44fb00);
		add_func(0x44fb00,BADADDR);
	}
	if (!is_code(get_flags(0x44fb00)))
	{
		del_items(0x44fb00);
		add_func(0x44fb00,BADADDR);
	}
	set_cmt(0x4b9838,"ifn @ 0x44fb00, tfn @ 0x44fb00",0);
	set_name(0x4c0808,"*sync.Map.Delete", 0x800);
	create_struct(0x4c0808,-1,"Go_method");
	set_name(0x4c0818,"*sync.Map.Load", 0x800);
	create_struct(0x4c0818,-1,"Go_method");
	if (!is_code(get_flags(0x46d580)))
	{
		del_items(0x46d580);
		add_func(0x46d580,BADADDR);
	}
	if (!is_code(get_flags(0x46d580)))
	{
		del_items(0x46d580);
		add_func(0x46d580,BADADDR);
	}
	set_cmt(0x4c0818,"ifn @ 0x46d580, tfn @ 0x46d580",0);
	set_name(0x4c0828,"*sync.Map.LoadOrStore", 0x800);
	create_struct(0x4c0828,-1,"Go_method");
	if (!is_code(get_flags(0x46deb0)))
	{
		del_items(0x46deb0);
		add_func(0x46deb0,BADADDR);
	}
	if (!is_code(get_flags(0x46deb0)))
	{
		del_items(0x46deb0);
		add_func(0x46deb0,BADADDR);
	}
	set_cmt(0x4c0828,"ifn @ 0x46deb0, tfn @ 0x46deb0",0);
	set_name(0x4c0838,"*sync.Map.Range", 0x800);
	create_struct(0x4c0838,-1,"Go_method");
	set_name(0x4c0848,"*sync.Map.Store", 0x800);
	create_struct(0x4c0848,-1,"Go_method");
	if (!is_code(get_flags(0x46d880)))
	{
		del_items(0x46d880);
		add_func(0x46d880,BADADDR);
	}
	if (!is_code(get_flags(0x46d880)))
	{
		del_items(0x46d880);
		add_func(0x46d880,BADADDR);
	}
	set_cmt(0x4c0848,"ifn @ 0x46d880, tfn @ 0x46d880",0);
	set_name(0x4c0858,"*sync.Map.dirtyLocked", 0x800);
	create_struct(0x4c0858,-1,"Go_method");
	if (!is_code(get_flags(0x46e810)))
	{
		del_items(0x46e810);
		add_func(0x46e810,BADADDR);
	}
	if (!is_code(get_flags(0x46e810)))
	{
		del_items(0x46e810);
		add_func(0x46e810,BADADDR);
	}
	set_cmt(0x4c0858,"ifn @ 0x46e810, tfn @ 0x46e810",0);
	set_name(0x4c0868,"*sync.Map.missLocked", 0x800);
	create_struct(0x4c0868,-1,"Go_method");
	if (!is_code(get_flags(0x46e710)))
	{
		del_items(0x46e710);
		add_func(0x46e710,BADADDR);
	}
	if (!is_code(get_flags(0x46e710)))
	{
		del_items(0x46e710);
		add_func(0x46e710,BADADDR);
	}
	set_cmt(0x4c0868,"ifn @ 0x46e710, tfn @ 0x46e710",0);
	set_name(0x4b6828,"*runtime.traceBufPtr.ptr", 0x800);
	create_struct(0x4b6828,-1,"Go_method");
	set_name(0x4b6838,"*runtime.traceBufPtr.set", 0x800);
	create_struct(0x4b6838,-1,"Go_method");
	set_name(0x4b6028,"*runtime.errorString.Error", 0x800);
	create_struct(0x4b6028,-1,"Go_method");
	if (!is_code(get_flags(0x460970)))
	{
		del_items(0x460970);
		add_func(0x460970,BADADDR);
	}
	if (!is_code(get_flags(0x460970)))
	{
		del_items(0x460970);
		add_func(0x460970,BADADDR);
	}
	set_cmt(0x4b6028,"ifn @ 0x460970, tfn @ 0x460970",0);
	set_name(0x4b6038,"*runtime.errorString.RuntimeError", 0x800);
	create_struct(0x4b6038,-1,"Go_method");
	set_name(0x4b4828,"*runtime.gclinkptr.ptr", 0x800);
	create_struct(0x4b4828,-1,"Go_method");
	set_name(0x4c38e8,"runtime.markBits.clearMarked", 0x800);
	create_struct(0x4c38e8,-1,"Go_method");
	set_name(0x4c38f8,"runtime.markBits.isMarked", 0x800);
	create_struct(0x4c38f8,-1,"Go_method");
	set_name(0x4c3908,"runtime.markBits.setMarked", 0x800);
	create_struct(0x4c3908,-1,"Go_method");
	set_name(0x4c3918,"runtime.markBits.setMarkedNonAtomic", 0x800);
	create_struct(0x4c3918,-1,"Go_method");
	set_name(0x4b4080,"runtime.gclinkptr.ptr", 0x800);
	create_struct(0x4b4080,-1,"Go_method");
	set_name(0x4c2120,"main.custom.PrintName", 0x800);
	create_struct(0x4c2120,-1,"Go_method");
	if (!is_code(get_flags(0x49f980)))
	{
		del_items(0x49f980);
		add_func(0x49f980,BADADDR);
	}
	set_cmt(0x4c2120,"tfn @ 0x49f980",0);
	set_name(0x4b58a0,"runtime.spanClass.noscan", 0x800);
	create_struct(0x4b58a0,-1,"Go_method");
	set_name(0x4b58b0,"runtime.spanClass.sizeclass", 0x800);
	create_struct(0x4b58b0,-1,"Go_method");
	set_name(0x4b40e0,"runtime.guintptr.ptr", 0x800);
	create_struct(0x4b40e0,-1,"Go_method");
	set_name(0x4b4140,"runtime.muintptr.ptr", 0x800);
	create_struct(0x4b4140,-1,"Go_method");
	set_name(0x4c0140,"reflect.flag.kind", 0x800);
	create_struct(0x4c0140,-1,"Go_method");
	set_name(0x4c0150,"reflect.flag.mustBe", 0x800);
	create_struct(0x4c0150,-1,"Go_method");
	set_name(0x4c0160,"reflect.flag.mustBeAssignable", 0x800);
	create_struct(0x4c0160,-1,"Go_method");
	set_name(0x4c0170,"reflect.flag.mustBeAssignableSlow", 0x800);
	create_struct(0x4c0170,-1,"Go_method");
	if (!is_code(get_flags(0x47dc10)))
	{
		del_items(0x47dc10);
		add_func(0x47dc10,BADADDR);
	}
	set_cmt(0x4c0170,"tfn @ 0x47dc10",0);
	set_name(0x4c0180,"reflect.flag.mustBeExported", 0x800);
	create_struct(0x4c0180,-1,"Go_method");
	set_name(0x4c0190,"reflect.flag.mustBeExportedSlow", 0x800);
	create_struct(0x4c0190,-1,"Go_method");
	set_name(0x4c01a0,"reflect.flag.ro", 0x800);
	create_struct(0x4c01a0,-1,"Go_method");
	set_name(0x4b9140,"syscall.Errno.Error", 0x800);
	create_struct(0x4b9140,-1,"Go_method");
	if (!is_code(get_flags(0x48ed20)))
	{
		del_items(0x48ed20);
		add_func(0x48ed20,BADADDR);
	}
	if (!is_code(get_flags(0x48a250)))
	{
		del_items(0x48a250);
		add_func(0x48a250,BADADDR);
	}
	set_cmt(0x4b9140,"ifn @ 0x48ed20, tfn @ 0x48a250",0);
	set_name(0x4b9150,"syscall.Errno.Is", 0x800);
	create_struct(0x4b9150,-1,"Go_method");
	set_name(0x4b9160,"syscall.Errno.Temporary", 0x800);
	create_struct(0x4b9160,-1,"Go_method");
	set_name(0x4b9170,"syscall.Errno.Timeout", 0x800);
	create_struct(0x4b9170,-1,"Go_method");
	set_name(0x4c41b8,"runtime.name.data", 0x800);
	create_struct(0x4c41b8,-1,"Go_method");
	set_name(0x4c41c8,"runtime.name.isBlank", 0x800);
	create_struct(0x4c41c8,-1,"Go_method");
	if (!is_code(get_flags(0x455800)))
	{
		del_items(0x455800);
		add_func(0x455800,BADADDR);
	}
	if (!is_code(get_flags(0x455800)))
	{
		del_items(0x455800);
		add_func(0x455800,BADADDR);
	}
	set_cmt(0x4c41c8,"ifn @ 0x455800, tfn @ 0x455800",0);
	set_name(0x4c41d8,"runtime.name.isExported", 0x800);
	create_struct(0x4c41d8,-1,"Go_method");
	set_name(0x4c41e8,"runtime.name.name", 0x800);
	create_struct(0x4c41e8,-1,"Go_method");
	if (!is_code(get_flags(0x455640)))
	{
		del_items(0x455640);
		add_func(0x455640,BADADDR);
	}
	if (!is_code(get_flags(0x455640)))
	{
		del_items(0x455640);
		add_func(0x455640,BADADDR);
	}
	set_cmt(0x4c41e8,"ifn @ 0x455640, tfn @ 0x455640",0);
	set_name(0x4c41f8,"runtime.name.nameLen", 0x800);
	create_struct(0x4c41f8,-1,"Go_method");
	set_name(0x4c4208,"runtime.name.pkgPath", 0x800);
	create_struct(0x4c4208,-1,"Go_method");
	if (!is_code(get_flags(0x455710)))
	{
		del_items(0x455710);
		add_func(0x455710,BADADDR);
	}
	if (!is_code(get_flags(0x455710)))
	{
		del_items(0x455710);
		add_func(0x455710,BADADDR);
	}
	set_cmt(0x4c4208,"ifn @ 0x455710, tfn @ 0x455710",0);
	set_name(0x4c4218,"runtime.name.tag", 0x800);
	create_struct(0x4c4218,-1,"Go_method");
	if (!is_code(get_flags(0x455680)))
	{
		del_items(0x455680);
		add_func(0x455680,BADADDR);
	}
	if (!is_code(get_flags(0x455680)))
	{
		del_items(0x455680);
		add_func(0x455680,BADADDR);
	}
	set_cmt(0x4c4218,"ifn @ 0x455680, tfn @ 0x455680",0);
	set_name(0x4c4228,"runtime.name.tagLen", 0x800);
	create_struct(0x4c4228,-1,"Go_method");
	if (!is_code(get_flags(0x4555f0)))
	{
		del_items(0x4555f0);
		add_func(0x4555f0,BADADDR);
	}
	if (!is_code(get_flags(0x4555f0)))
	{
		del_items(0x4555f0);
		add_func(0x4555f0,BADADDR);
	}
	set_cmt(0x4c4228,"ifn @ 0x4555f0, tfn @ 0x4555f0",0);
	set_name(0x4b41a0,"runtime.puintptr.ptr", 0x800);
	create_struct(0x4b41a0,-1,"Go_method");
	set_name(0x4b89c0,"runtime.pallocSum.end", 0x800);
	create_struct(0x4b89c0,-1,"Go_method");
	set_name(0x4b89d0,"runtime.pallocSum.max", 0x800);
	create_struct(0x4b89d0,-1,"Go_method");
	set_name(0x4b89e0,"runtime.pallocSum.start", 0x800);
	create_struct(0x4b89e0,-1,"Go_method");
	set_name(0x4b89f0,"runtime.pallocSum.unpack", 0x800);
	create_struct(0x4b89f0,-1,"Go_method");
	set_name(0x4c0250,"runtime.funcInfo._Func", 0x800);
	create_struct(0x4c0250,-1,"Go_method");
	set_name(0x4c0260,"runtime.funcInfo.valid", 0x800);
	create_struct(0x4c0260,-1,"Go_method");
	set_name(0x4b4200,"runtime.traceAllocBlockPtr.ptr", 0x800);
	create_struct(0x4b4200,-1,"Go_method");
	set_name(0x4cdaa8,"reflect.Value.Addr", 0x800);
	create_struct(0x4cdaa8,-1,"Go_method");
	set_name(0x4cdab8,"reflect.Value.Bool", 0x800);
	create_struct(0x4cdab8,-1,"Go_method");
	if (!is_code(get_flags(0x47dde0)))
	{
		del_items(0x47dde0);
		add_func(0x47dde0,BADADDR);
	}
	set_cmt(0x4cdab8,"tfn @ 0x47dde0",0);
	set_name(0x4cdac8,"reflect.Value.Bytes", 0x800);
	create_struct(0x4cdac8,-1,"Go_method");
	if (!is_code(get_flags(0x47deb0)))
	{
		del_items(0x47deb0);
		add_func(0x47deb0,BADADDR);
	}
	set_cmt(0x4cdac8,"tfn @ 0x47deb0",0);
	set_name(0x4cdad8,"reflect.Value.Call", 0x800);
	create_struct(0x4cdad8,-1,"Go_method");
	set_name(0x4cdae8,"reflect.Value.CallSlice", 0x800);
	create_struct(0x4cdae8,-1,"Go_method");
	set_name(0x4cdaf8,"reflect.Value.CanAddr", 0x800);
	create_struct(0x4cdaf8,-1,"Go_method");
	set_name(0x4cdb08,"reflect.Value.CanInterface", 0x800);
	create_struct(0x4cdb08,-1,"Go_method");
	set_name(0x4cdb18,"reflect.Value.CanSet", 0x800);
	create_struct(0x4cdb18,-1,"Go_method");
	set_name(0x4cdb28,"reflect.Value.Cap", 0x800);
	create_struct(0x4cdb28,-1,"Go_method");
	set_name(0x4cdb38,"reflect.Value.Close", 0x800);
	create_struct(0x4cdb38,-1,"Go_method");
	set_name(0x4cdb48,"reflect.Value.Complex", 0x800);
	create_struct(0x4cdb48,-1,"Go_method");
	set_name(0x4cdb58,"reflect.Value.Convert", 0x800);
	create_struct(0x4cdb58,-1,"Go_method");
	set_name(0x4cdb68,"reflect.Value.Elem", 0x800);
	create_struct(0x4cdb68,-1,"Go_method");
	if (!is_code(get_flags(0x47e8d0)))
	{
		del_items(0x47e8d0);
		add_func(0x47e8d0,BADADDR);
	}
	set_cmt(0x4cdb68,"tfn @ 0x47e8d0",0);
	set_name(0x4cdb78,"reflect.Value.Field", 0x800);
	create_struct(0x4cdb78,-1,"Go_method");
	if (!is_code(get_flags(0x47ea90)))
	{
		del_items(0x47ea90);
		add_func(0x47ea90,BADADDR);
	}
	set_cmt(0x4cdb78,"tfn @ 0x47ea90",0);
	set_name(0x4cdb88,"reflect.Value.FieldByIndex", 0x800);
	create_struct(0x4cdb88,-1,"Go_method");
	set_name(0x4cdb98,"reflect.Value.FieldByName", 0x800);
	create_struct(0x4cdb98,-1,"Go_method");
	set_name(0x4cdba8,"reflect.Value.FieldByNameFunc", 0x800);
	create_struct(0x4cdba8,-1,"Go_method");
	set_name(0x4cdbb8,"reflect.Value.Float", 0x800);
	create_struct(0x4cdbb8,-1,"Go_method");
	set_name(0x4cdbc8,"reflect.Value.Index", 0x800);
	create_struct(0x4cdbc8,-1,"Go_method");
	if (!is_code(get_flags(0x47ebd0)))
	{
		del_items(0x47ebd0);
		add_func(0x47ebd0,BADADDR);
	}
	set_cmt(0x4cdbc8,"tfn @ 0x47ebd0",0);
	set_name(0x4cdbd8,"reflect.Value.Int", 0x800);
	create_struct(0x4cdbd8,-1,"Go_method");
	set_name(0x4cdbe8,"reflect.Value.Interface", 0x800);
	create_struct(0x4cdbe8,-1,"Go_method");
	set_name(0x4cdbf8,"reflect.Value.InterfaceData", 0x800);
	create_struct(0x4cdbf8,-1,"Go_method");
	set_name(0x4cdc08,"reflect.Value.IsNil", 0x800);
	create_struct(0x4cdc08,-1,"Go_method");
	set_name(0x4cdc18,"reflect.Value.IsValid", 0x800);
	create_struct(0x4cdc18,-1,"Go_method");
	set_name(0x4cdc28,"reflect.Value.IsZero", 0x800);
	create_struct(0x4cdc28,-1,"Go_method");
	set_name(0x4cdc38,"reflect.Value.Kind", 0x800);
	create_struct(0x4cdc38,-1,"Go_method");
	if (!is_code(get_flags(0x482d00)))
	{
		del_items(0x482d00);
		add_func(0x482d00,BADADDR);
	}
	if (!is_code(get_flags(0x47efb0)))
	{
		del_items(0x47efb0);
		add_func(0x47efb0,BADADDR);
	}
	set_cmt(0x4cdc38,"ifn @ 0x482d00, tfn @ 0x47efb0",0);
	set_name(0x4cdc48,"reflect.Value.Len", 0x800);
	create_struct(0x4cdc48,-1,"Go_method");
	if (!is_code(get_flags(0x482d60)))
	{
		del_items(0x482d60);
		add_func(0x482d60,BADADDR);
	}
	if (!is_code(get_flags(0x47efc0)))
	{
		del_items(0x47efc0);
		add_func(0x47efc0,BADADDR);
	}
	set_cmt(0x4cdc48,"ifn @ 0x482d60, tfn @ 0x47efc0",0);
	set_name(0x4cdc58,"reflect.Value.MapIndex", 0x800);
	create_struct(0x4cdc58,-1,"Go_method");
	set_name(0x4cdc68,"reflect.Value.MapKeys", 0x800);
	create_struct(0x4cdc68,-1,"Go_method");
	set_name(0x4cdc78,"reflect.Value.MapRange", 0x800);
	create_struct(0x4cdc78,-1,"Go_method");
	if (!is_code(get_flags(0x47f520)))
	{
		del_items(0x47f520);
		add_func(0x47f520,BADADDR);
	}
	set_cmt(0x4cdc78,"tfn @ 0x47f520",0);
	set_name(0x4cdc88,"reflect.Value.Method", 0x800);
	create_struct(0x4cdc88,-1,"Go_method");
	set_name(0x4cdc98,"reflect.Value.MethodByName", 0x800);
	create_struct(0x4cdc98,-1,"Go_method");
	set_name(0x4cdca8,"reflect.Value.NumField", 0x800);
	create_struct(0x4cdca8,-1,"Go_method");
	if (!is_code(get_flags(0x482df0)))
	{
		del_items(0x482df0);
		add_func(0x482df0,BADADDR);
	}
	if (!is_code(get_flags(0x47f7d0)))
	{
		del_items(0x47f7d0);
		add_func(0x47f7d0,BADADDR);
	}
	set_cmt(0x4cdca8,"ifn @ 0x482df0, tfn @ 0x47f7d0",0);
	set_name(0x4cdcb8,"reflect.Value.NumMethod", 0x800);
	create_struct(0x4cdcb8,-1,"Go_method");
	if (!is_code(get_flags(0x482e80)))
	{
		del_items(0x482e80);
		add_func(0x482e80,BADADDR);
	}
	if (!is_code(get_flags(0x47f710)))
	{
		del_items(0x47f710);
		add_func(0x47f710,BADADDR);
	}
	set_cmt(0x4cdcb8,"ifn @ 0x482e80, tfn @ 0x47f710",0);
	set_name(0x4cdcc8,"reflect.Value.OverflowComplex", 0x800);
	create_struct(0x4cdcc8,-1,"Go_method");
	set_name(0x4cdcd8,"reflect.Value.OverflowFloat", 0x800);
	create_struct(0x4cdcd8,-1,"Go_method");
	set_name(0x4cdce8,"reflect.Value.OverflowInt", 0x800);
	create_struct(0x4cdce8,-1,"Go_method");
	set_name(0x4cdcf8,"reflect.Value.OverflowUint", 0x800);
	create_struct(0x4cdcf8,-1,"Go_method");
	set_name(0x4cdd08,"reflect.Value.Pointer", 0x800);
	create_struct(0x4cdd08,-1,"Go_method");
	if (!is_code(get_flags(0x47f8a0)))
	{
		del_items(0x47f8a0);
		add_func(0x47f8a0,BADADDR);
	}
	set_cmt(0x4cdd08,"tfn @ 0x47f8a0",0);
	set_name(0x4cdd18,"reflect.Value.Recv", 0x800);
	create_struct(0x4cdd18,-1,"Go_method");
	set_name(0x4cdd28,"reflect.Value.Send", 0x800);
	create_struct(0x4cdd28,-1,"Go_method");
	set_name(0x4cdd38,"reflect.Value.Set", 0x800);
	create_struct(0x4cdd38,-1,"Go_method");
	set_name(0x4cdd48,"reflect.Value.SetBool", 0x800);
	create_struct(0x4cdd48,-1,"Go_method");
	set_name(0x4cdd58,"reflect.Value.SetBytes", 0x800);
	create_struct(0x4cdd58,-1,"Go_method");
	if (!is_code(get_flags(0x47fa60)))
	{
		del_items(0x47fa60);
		add_func(0x47fa60,BADADDR);
	}
	set_cmt(0x4cdd58,"tfn @ 0x47fa60",0);
	set_name(0x4cdd68,"reflect.Value.SetCap", 0x800);
	create_struct(0x4cdd68,-1,"Go_method");
	set_name(0x4cdd78,"reflect.Value.SetComplex", 0x800);
	create_struct(0x4cdd78,-1,"Go_method");
	set_name(0x4cdd88,"reflect.Value.SetFloat", 0x800);
	create_struct(0x4cdd88,-1,"Go_method");
	set_name(0x4cdd98,"reflect.Value.SetInt", 0x800);
	create_struct(0x4cdd98,-1,"Go_method");
	set_name(0x4cdda8,"reflect.Value.SetLen", 0x800);
	create_struct(0x4cdda8,-1,"Go_method");
	set_name(0x4cddb8,"reflect.Value.SetMapIndex", 0x800);
	create_struct(0x4cddb8,-1,"Go_method");
	set_name(0x4cddc8,"reflect.Value.SetPointer", 0x800);
	create_struct(0x4cddc8,-1,"Go_method");
	set_name(0x4cddd8,"reflect.Value.SetString", 0x800);
	create_struct(0x4cddd8,-1,"Go_method");
	if (!is_code(get_flags(0x47fd40)))
	{
		del_items(0x47fd40);
		add_func(0x47fd40,BADADDR);
	}
	set_cmt(0x4cddd8,"tfn @ 0x47fd40",0);
	set_name(0x4cdde8,"reflect.Value.SetUint", 0x800);
	create_struct(0x4cdde8,-1,"Go_method");
	set_name(0x4cddf8,"reflect.Value.Slice", 0x800);
	create_struct(0x4cddf8,-1,"Go_method");
	if (!is_code(get_flags(0x47fe60)))
	{
		del_items(0x47fe60);
		add_func(0x47fe60,BADADDR);
	}
	set_cmt(0x4cddf8,"tfn @ 0x47fe60",0);
	set_name(0x4cde08,"reflect.Value.Slice3", 0x800);
	create_struct(0x4cde08,-1,"Go_method");
	set_name(0x4cde18,"reflect.Value.String", 0x800);
	create_struct(0x4cde18,-1,"Go_method");
	if (!is_code(get_flags(0x482f10)))
	{
		del_items(0x482f10);
		add_func(0x482f10,BADADDR);
	}
	if (!is_code(get_flags(0x480120)))
	{
		del_items(0x480120);
		add_func(0x480120,BADADDR);
	}
	set_cmt(0x4cde18,"ifn @ 0x482f10, tfn @ 0x480120",0);
	set_name(0x4cde28,"reflect.Value.TryRecv", 0x800);
	create_struct(0x4cde28,-1,"Go_method");
	set_name(0x4cde38,"reflect.Value.TrySend", 0x800);
	create_struct(0x4cde38,-1,"Go_method");
	set_name(0x4cde48,"reflect.Value.Type", 0x800);
	create_struct(0x4cde48,-1,"Go_method");
	if (!is_code(get_flags(0x480250)))
	{
		del_items(0x480250);
		add_func(0x480250,BADADDR);
	}
	set_cmt(0x4cde48,"tfn @ 0x480250",0);
	set_name(0x4cde58,"reflect.Value.Uint", 0x800);
	create_struct(0x4cde58,-1,"Go_method");
	set_name(0x4cde68,"reflect.Value.UnsafeAddr", 0x800);
	create_struct(0x4cde68,-1,"Go_method");
	set_name(0x4cde78,"reflect.Value.assignTo", 0x800);
	create_struct(0x4cde78,-1,"Go_method");
	set_name(0x4cde88,"reflect.Value.call", 0x800);
	create_struct(0x4cde88,-1,"Go_method");
	set_name(0x4cde98,"reflect.Value.kind", 0x800);
	create_struct(0x4cde98,-1,"Go_method");
	set_name(0x4cdea8,"reflect.Value.mustBe", 0x800);
	create_struct(0x4cdea8,-1,"Go_method");
	set_name(0x4cdeb8,"reflect.Value.mustBeAssignable", 0x800);
	create_struct(0x4cdeb8,-1,"Go_method");
	set_name(0x4cdec8,"reflect.Value.mustBeAssignableSlow", 0x800);
	create_struct(0x4cdec8,-1,"Go_method");
	set_name(0x4cded8,"reflect.Value.mustBeExported", 0x800);
	create_struct(0x4cded8,-1,"Go_method");
	set_name(0x4cdee8,"reflect.Value.mustBeExportedSlow", 0x800);
	create_struct(0x4cdee8,-1,"Go_method");
	set_name(0x4cdef8,"reflect.Value.pointer", 0x800);
	create_struct(0x4cdef8,-1,"Go_method");
	set_name(0x4cdf08,"reflect.Value.recv", 0x800);
	create_struct(0x4cdf08,-1,"Go_method");
	set_name(0x4cdf18,"reflect.Value.ro", 0x800);
	create_struct(0x4cdf18,-1,"Go_method");
	set_name(0x4cdf28,"reflect.Value.runes", 0x800);
	create_struct(0x4cdf28,-1,"Go_method");
	if (!is_code(get_flags(0x47dfe0)))
	{
		del_items(0x47dfe0);
		add_func(0x47dfe0,BADADDR);
	}
	set_cmt(0x4cdf28,"tfn @ 0x47dfe0",0);
	set_name(0x4cdf38,"reflect.Value.send", 0x800);
	create_struct(0x4cdf38,-1,"Go_method");
	set_name(0x4cdf48,"reflect.Value.setRunes", 0x800);
	create_struct(0x4cdf48,-1,"Go_method");
	if (!is_code(get_flags(0x47fbd0)))
	{
		del_items(0x47fbd0);
		add_func(0x47fbd0,BADADDR);
	}
	set_cmt(0x4cdf48,"tfn @ 0x47fbd0",0);
	set_name(0x4b4260,"runtime.traceBufPtr.ptr", 0x800);
	create_struct(0x4b4260,-1,"Go_method");
	set_name(0x4b42c0,"runtime.traceStackPtr.ptr", 0x800);
	create_struct(0x4b42c0,-1,"Go_method");
	set_name(0x4b4320,"runtime.waitReason.String", 0x800);
	create_struct(0x4b4320,-1,"Go_method");
	if (!is_code(get_flags(0x45f620)))
	{
		del_items(0x45f620);
		add_func(0x45f620,BADADDR);
	}
	if (!is_code(get_flags(0x442420)))
	{
		del_items(0x442420);
		add_func(0x442420,BADADDR);
	}
	set_cmt(0x4b4320,"ifn @ 0x45f620, tfn @ 0x442420",0);
	set_name(0x4c0d90,"runtime.addrRange.contains", 0x800);
	create_struct(0x4c0d90,-1,"Go_method");
	set_name(0x4c0da0,"runtime.addrRange.size", 0x800);
	create_struct(0x4c0da0,-1,"Go_method");
	set_name(0x4c0db0,"runtime.addrRange.subtract", 0x800);
	create_struct(0x4c0db0,-1,"Go_method");
	if (!is_code(get_flags(0x42af60)))
	{
		del_items(0x42af60);
		add_func(0x42af60,BADADDR);
	}
	set_cmt(0x4c0db0,"tfn @ 0x42af60",0);
	set_name(0x4b5540,"reflect.StructTag.Get", 0x800);
	create_struct(0x4b5540,-1,"Go_method");
	set_name(0x4b5550,"reflect.StructTag.Lookup", 0x800);
	create_struct(0x4b5550,-1,"Go_method");
	set_name(0x4b55a0,"runtime.arenaIdx.l1", 0x800);
	create_struct(0x4b55a0,-1,"Go_method");
	set_name(0x4b55b0,"runtime.arenaIdx.l2", 0x800);
	create_struct(0x4b55b0,-1,"Go_method");
	set_name(0x4c3620,"runtime.boundsError.Error", 0x800);
	create_struct(0x4c3620,-1,"Go_method");
	if (!is_code(get_flags(0x4607e0)))
	{
		del_items(0x4607e0);
		add_func(0x4607e0,BADADDR);
	}
	if (!is_code(get_flags(0x4072c0)))
	{
		del_items(0x4072c0);
		add_func(0x4072c0,BADADDR);
	}
	set_cmt(0x4c3620,"ifn @ 0x4607e0, tfn @ 0x4072c0",0);
	set_name(0x4c3630,"runtime.boundsError.RuntimeError", 0x800);
	create_struct(0x4c3630,-1,"Go_method");
	set_name(0x4bd5f8,"os.File.close", 0x800);
	create_struct(0x4bd5f8,-1,"Go_method");
	set_name(0x4bd608,"os.File.isdir", 0x800);
	create_struct(0x4bd608,-1,"Go_method");
	set_name(0x4b5600,"runtime.chunkIdx.l1", 0x800);
	create_struct(0x4b5600,-1,"Go_method");
	set_name(0x4b5610,"runtime.chunkIdx.l2", 0x800);
	create_struct(0x4b5610,-1,"Go_method");
	set_name(0x4b56c0,"runtime.errorString.Error", 0x800);
	create_struct(0x4b56c0,-1,"Go_method");
	if (!is_code(get_flags(0x460970)))
	{
		del_items(0x460970);
		add_func(0x460970,BADADDR);
	}
	if (!is_code(get_flags(0x406ff0)))
	{
		del_items(0x406ff0);
		add_func(0x406ff0,BADADDR);
	}
	set_cmt(0x4b56c0,"ifn @ 0x460970, tfn @ 0x406ff0",0);
	set_name(0x4b56d0,"runtime.errorString.RuntimeError", 0x800);
	create_struct(0x4b56d0,-1,"Go_method");
	set_name(0x4c37b8,"reflect.name.data", 0x800);
	create_struct(0x4c37b8,-1,"Go_method");
	set_name(0x4c37c8,"reflect.name.isExported", 0x800);
	create_struct(0x4c37c8,-1,"Go_method");
	set_name(0x4c37d8,"reflect.name.name", 0x800);
	create_struct(0x4c37d8,-1,"Go_method");
	set_name(0x4c37e8,"reflect.name.nameLen", 0x800);
	create_struct(0x4c37e8,-1,"Go_method");
	set_name(0x4c37f8,"reflect.name.pkgPath", 0x800);
	create_struct(0x4c37f8,-1,"Go_method");
	if (!is_code(get_flags(0x4755b0)))
	{
		del_items(0x4755b0);
		add_func(0x4755b0,BADADDR);
	}
	if (!is_code(get_flags(0x4755b0)))
	{
		del_items(0x4755b0);
		add_func(0x4755b0,BADADDR);
	}
	set_cmt(0x4c37f8,"ifn @ 0x4755b0, tfn @ 0x4755b0",0);
	set_name(0x4c3808,"reflect.name.tag", 0x800);
	create_struct(0x4c3808,-1,"Go_method");
	if (!is_code(get_flags(0x475520)))
	{
		del_items(0x475520);
		add_func(0x475520,BADADDR);
	}
	if (!is_code(get_flags(0x475520)))
	{
		del_items(0x475520);
		add_func(0x475520,BADADDR);
	}
	set_cmt(0x4c3808,"ifn @ 0x475520, tfn @ 0x475520",0);
	set_name(0x4c3818,"reflect.name.tagLen", 0x800);
	create_struct(0x4c3818,-1,"Go_method");
	if (!is_code(get_flags(0x4754d0)))
	{
		del_items(0x4754d0);
		add_func(0x4754d0,BADADDR);
	}
	if (!is_code(get_flags(0x4754d0)))
	{
		del_items(0x4754d0);
		add_func(0x4754d0,BADADDR);
	}
	set_cmt(0x4c3818,"ifn @ 0x4754d0, tfn @ 0x4754d0",0);
	set_name(0x4b3fc0,"reflect.ChanDir.String", 0x800);
	create_struct(0x4b3fc0,-1,"Go_method");
	if (!is_code(get_flags(0x482b20)))
	{
		del_items(0x482b20);
		add_func(0x482b20,BADADDR);
	}
	if (!is_code(get_flags(0x477ae0)))
	{
		del_items(0x477ae0);
		add_func(0x477ae0,BADADDR);
	}
	set_cmt(0x4b3fc0,"ifn @ 0x482b20, tfn @ 0x477ae0",0);
	set_name(0x4b57e0,"runtime.plainError.Error", 0x800);
	create_struct(0x4b57e0,-1,"Go_method");
	if (!is_code(get_flags(0x460f80)))
	{
		del_items(0x460f80);
		add_func(0x460f80,BADADDR);
	}
	if (!is_code(get_flags(0x407070)))
	{
		del_items(0x407070);
		add_func(0x407070,BADADDR);
	}
	set_cmt(0x4b57e0,"ifn @ 0x460f80, tfn @ 0x407070",0);
	set_name(0x4b57f0,"runtime.plainError.RuntimeError", 0x800);
	create_struct(0x4b57f0,-1,"Go_method");
	set_name(0x4b4020,"reflect.Kind.String", 0x800);
	create_struct(0x4b4020,-1,"Go_method");
	if (!is_code(get_flags(0x482ba0)))
	{
		del_items(0x482ba0);
		add_func(0x482ba0,BADADDR);
	}
	if (!is_code(get_flags(0x4759c0)))
	{
		del_items(0x4759c0);
		add_func(0x4759c0,BADADDR);
	}
	set_cmt(0x4b4020,"ifn @ 0x482ba0, tfn @ 0x4759c0",0);
	set_name(0x4b8060,"fmt.State.Flag", 0x800);
	create_struct(0x4b8060,-1,"Go_imethod");
	set_cmt(0x4b8060,"imethod type @ 0x4b2e40 = func(int) bool",0);
	set_name(0x4b8068,"fmt.State.Precision", 0x800);
	create_struct(0x4b8068,-1,"Go_imethod");
	set_cmt(0x4b8068,"imethod type @ 0x4b2c60 = func() (int, bool)",0);
	set_name(0x4b8070,"fmt.State.Width", 0x800);
	create_struct(0x4b8070,-1,"Go_imethod");
	set_cmt(0x4b8070,"imethod type @ 0x4b2c60 = func() (int, bool)",0);
	set_name(0x4b8078,"fmt.State.Write", 0x800);
	create_struct(0x4b8078,-1,"Go_imethod");
	set_cmt(0x4b8078,"imethod type @ 0x4b3bc0 = func([]uint8) (int, error)",0);
	set_name(0x4c09a0,"reflectlite.Type.AssignableTo", 0x800);
	create_struct(0x4c09a0,-1,"Go_imethod");
	set_cmt(0x4c09a0,"imethod type @ 0x4b3080 = func(reflectlite.Type) bool",0);
	set_name(0x4c09a8,"reflectlite.Type.Comparable", 0x800);
	create_struct(0x4c09a8,-1,"Go_imethod");
	set_cmt(0x4c09a8,"imethod type @ 0x4ad560 = func() bool",0);
	set_name(0x4c09b0,"reflectlite.Type.Elem", 0x800);
	create_struct(0x4c09b0,-1,"Go_imethod");
	set_cmt(0x4c09b0,"imethod type @ 0x4ad660 = func() reflectlite.Type",0);
	set_name(0x4c09b8,"reflectlite.Type.Implements", 0x800);
	create_struct(0x4c09b8,-1,"Go_imethod");
	set_cmt(0x4c09b8,"imethod type @ 0x4b3080 = func(reflectlite.Type) bool",0);
	set_name(0x4c09c0,"reflectlite.Type.Kind", 0x800);
	create_struct(0x4c09c0,-1,"Go_imethod");
	set_cmt(0x4c09c0,"imethod type @ 0x4ad620 = func() reflectlite.Kind",0);
	set_name(0x4c09c8,"reflectlite.Type.Name", 0x800);
	create_struct(0x4c09c8,-1,"Go_imethod");
	set_cmt(0x4c09c8,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c09d0,"reflectlite.Type.PkgPath", 0x800);
	create_struct(0x4c09d0,-1,"Go_imethod");
	set_cmt(0x4c09d0,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c09d8,"reflectlite.Type.Size", 0x800);
	create_struct(0x4c09d8,-1,"Go_imethod");
	set_cmt(0x4c09d8,"imethod type @ 0x4ad7a0 = func() uintptr",0);
	set_name(0x4c09e0,"reflectlite.Type.String", 0x800);
	create_struct(0x4c09e0,-1,"Go_imethod");
	set_cmt(0x4c09e0,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c09e8,"reflectlite.Type.common", 0x800);
	create_struct(0x4c09e8,-1,"Go_imethod");
	set_cmt(0x4c09e8,"imethod type @ 0x4ad460 = func() *reflectlite.rtype",0);
	set_name(0x4c09f0,"reflectlite.Type.uncommon", 0x800);
	create_struct(0x4c09f0,-1,"Go_imethod");
	set_cmt(0x4c09f0,"imethod type @ 0x4ad4a0 = func() *reflectlite.uncommonType",0);
	set_name(0x4c63e0,"reflect.Type.Align", 0x800);
	create_struct(0x4c63e0,-1,"Go_imethod");
	set_cmt(0x4c63e0,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c63e8,"reflect.Type.AssignableTo", 0x800);
	create_struct(0x4c63e8,-1,"Go_imethod");
	set_cmt(0x4c63e8,"imethod type @ 0x4b30e0 = func(reflect.Type) bool",0);
	set_name(0x4c63f0,"reflect.Type.Bits", 0x800);
	create_struct(0x4c63f0,-1,"Go_imethod");
	set_cmt(0x4c63f0,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c63f8,"reflect.Type.ChanDir", 0x800);
	create_struct(0x4c63f8,-1,"Go_imethod");
	set_cmt(0x4c63f8,"imethod type @ 0x4ad6a0 = func() reflect.ChanDir",0);
	set_name(0x4c6400,"reflect.Type.Comparable", 0x800);
	create_struct(0x4c6400,-1,"Go_imethod");
	set_cmt(0x4c6400,"imethod type @ 0x4ad560 = func() bool",0);
	set_name(0x4c6408,"reflect.Type.ConvertibleTo", 0x800);
	create_struct(0x4c6408,-1,"Go_imethod");
	set_cmt(0x4c6408,"imethod type @ 0x4b30e0 = func(reflect.Type) bool",0);
	set_name(0x4c6410,"reflect.Type.Elem", 0x800);
	create_struct(0x4c6410,-1,"Go_imethod");
	set_cmt(0x4c6410,"imethod type @ 0x4ad720 = func() reflect.Type",0);
	set_name(0x4c6418,"reflect.Type.Field", 0x800);
	create_struct(0x4c6418,-1,"Go_imethod");
	set_cmt(0x4c6418,"imethod type @ 0x4b2f00 = func(int) reflect.StructField",0);
	set_name(0x4c6420,"reflect.Type.FieldAlign", 0x800);
	create_struct(0x4c6420,-1,"Go_imethod");
	set_cmt(0x4c6420,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c6428,"reflect.Type.FieldByIndex", 0x800);
	create_struct(0x4c6428,-1,"Go_imethod");
	set_cmt(0x4c6428,"imethod type @ 0x4b2d80 = func([]int) reflect.StructField",0);
	set_name(0x4c6430,"reflect.Type.FieldByName", 0x800);
	create_struct(0x4c6430,-1,"Go_imethod");
	set_cmt(0x4c6430,"imethod type @ 0x4b3da0 = func(string) (reflect.StructField, bool)",0);
	set_name(0x4c6438,"reflect.Type.FieldByNameFunc", 0x800);
	create_struct(0x4c6438,-1,"Go_imethod");
	set_cmt(0x4c6438,"imethod type @ 0x4b3c20 = func(func(string) bool) (reflect.StructField, bool)",0);
	set_name(0x4c6440,"reflect.Type.Implements", 0x800);
	create_struct(0x4c6440,-1,"Go_imethod");
	set_cmt(0x4c6440,"imethod type @ 0x4b30e0 = func(reflect.Type) bool",0);
	set_name(0x4c6448,"reflect.Type.In", 0x800);
	create_struct(0x4c6448,-1,"Go_imethod");
	set_cmt(0x4c6448,"imethod type @ 0x4b2f60 = func(int) reflect.Type",0);
	set_name(0x4c6450,"reflect.Type.IsVariadic", 0x800);
	create_struct(0x4c6450,-1,"Go_imethod");
	set_cmt(0x4c6450,"imethod type @ 0x4ad560 = func() bool",0);
	set_name(0x4c6458,"reflect.Type.Key", 0x800);
	create_struct(0x4c6458,-1,"Go_imethod");
	set_cmt(0x4c6458,"imethod type @ 0x4ad720 = func() reflect.Type",0);
	set_name(0x4c6460,"reflect.Type.Kind", 0x800);
	create_struct(0x4c6460,-1,"Go_imethod");
	set_cmt(0x4c6460,"imethod type @ 0x4ad6e0 = func() reflect.Kind",0);
	set_name(0x4c6468,"reflect.Type.Len", 0x800);
	create_struct(0x4c6468,-1,"Go_imethod");
	set_cmt(0x4c6468,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c6470,"reflect.Type.Method", 0x800);
	create_struct(0x4c6470,-1,"Go_imethod");
	set_cmt(0x4c6470,"imethod type @ 0x4b2ea0 = func(int) reflect.Method",0);
	set_name(0x4c6478,"reflect.Type.MethodByName", 0x800);
	create_struct(0x4c6478,-1,"Go_imethod");
	set_cmt(0x4c6478,"imethod type @ 0x4b3d40 = func(string) (reflect.Method, bool)",0);
	set_name(0x4c6480,"reflect.Type.Name", 0x800);
	create_struct(0x4c6480,-1,"Go_imethod");
	set_cmt(0x4c6480,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c6488,"reflect.Type.NumField", 0x800);
	create_struct(0x4c6488,-1,"Go_imethod");
	set_cmt(0x4c6488,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c6490,"reflect.Type.NumIn", 0x800);
	create_struct(0x4c6490,-1,"Go_imethod");
	set_cmt(0x4c6490,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c6498,"reflect.Type.NumMethod", 0x800);
	create_struct(0x4c6498,-1,"Go_imethod");
	set_cmt(0x4c6498,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c64a0,"reflect.Type.NumOut", 0x800);
	create_struct(0x4c64a0,-1,"Go_imethod");
	set_cmt(0x4c64a0,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4c64a8,"reflect.Type.Out", 0x800);
	create_struct(0x4c64a8,-1,"Go_imethod");
	set_cmt(0x4c64a8,"imethod type @ 0x4b2f60 = func(int) reflect.Type",0);
	set_name(0x4c64b0,"reflect.Type.PkgPath", 0x800);
	create_struct(0x4c64b0,-1,"Go_imethod");
	set_cmt(0x4c64b0,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c64b8,"reflect.Type.Size", 0x800);
	create_struct(0x4c64b8,-1,"Go_imethod");
	set_cmt(0x4c64b8,"imethod type @ 0x4ad7a0 = func() uintptr",0);
	set_name(0x4c64c0,"reflect.Type.String", 0x800);
	create_struct(0x4c64c0,-1,"Go_imethod");
	set_cmt(0x4c64c0,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4c64c8,"reflect.Type.common", 0x800);
	create_struct(0x4c64c8,-1,"Go_imethod");
	set_cmt(0x4c64c8,"imethod type @ 0x4ad4e0 = func() *reflect.rtype",0);
	set_name(0x4c64d0,"reflect.Type.uncommon", 0x800);
	create_struct(0x4c64d0,-1,"Go_imethod");
	set_cmt(0x4c64d0,"imethod type @ 0x4ad520 = func() *reflect.uncommonType",0);
	set_name(0x4b6c20,"error.Error", 0x800);
	create_struct(0x4b6c20,-1,"Go_imethod");
	set_cmt(0x4b6c20,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4b6ca0,"fmt.Formatter.Format", 0x800);
	create_struct(0x4b6ca0,-1,"Go_imethod");
	set_cmt(0x4b6ca0,"imethod type @ 0x4b2de0 = func(fmt.State, int32)",0);
	set_name(0x4b6d20,"fmt.GoStringer.GoString", 0x800);
	create_struct(0x4b6d20,-1,"Go_imethod");
	set_cmt(0x4b6d20,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4b6da0,"fmt.Stringer.String", 0x800);
	create_struct(0x4b6da0,-1,"Go_imethod");
	set_cmt(0x4b6da0,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4b6e20,"io.Writer.Write", 0x800);
	create_struct(0x4b6e20,-1,"Go_imethod");
	set_cmt(0x4b6e20,"imethod type @ 0x4b3bc0 = func([]uint8) (int, error)",0);
	set_name(0x4b6ea0,"main.Updater.UpdateQty", 0x800);
	create_struct(0x4b6ea0,-1,"Go_imethod");
	set_cmt(0x4b6ea0,"imethod type @ 0x4b3ce0 = func(int, int) int",0);
	set_name(0x4b7ee0,"sort.Interface.Len", 0x800);
	create_struct(0x4b7ee0,-1,"Go_imethod");
	set_cmt(0x4b7ee0,"imethod type @ 0x4ad5a0 = func() int",0);
	set_name(0x4b7ee8,"sort.Interface.Less", 0x800);
	create_struct(0x4b7ee8,-1,"Go_imethod");
	set_cmt(0x4b7ee8,"imethod type @ 0x4b3c80 = func(int, int) bool",0);
	set_name(0x4b7ef0,"sort.Interface.Swap", 0x800);
	create_struct(0x4b7ef0,-1,"Go_imethod");
	set_cmt(0x4b7ef0,"imethod type @ 0x4b2fc0 = func(int, int)",0);
	set_name(0x4b6f20,"runtime.stringer.String", 0x800);
	create_struct(0x4b6f20,-1,"Go_imethod");
	set_cmt(0x4b6f20,"imethod type @ 0x4ad760 = func() string",0);
	set_name(0x4b6fa0,"syscall.Sockaddr.sockaddr", 0x800);
	create_struct(0x4b6fa0,-1,"Go_imethod");
	set_cmt(0x4b6fa0,"imethod type @ 0x4b3b00 = func() (unsafe.Pointer, int32, error)",0);
	set_name(0x4f10b0,"moduledata_itablink.1", 0x800);
	create_qword(0x4f10b0);
	set_name(0x4f10b8,"moduledata_itablink.2", 0x800);
	create_qword(0x4f10b8);
	set_name(0x4f10c0,"moduledata_itablink.3", 0x800);
	create_qword(0x4f10c0);
	set_name(0x4f10c8,"moduledata_itablink.4", 0x800);
	create_qword(0x4f10c8);
	set_name(0x4f10d0,"moduledata_itablink.5", 0x800);
	create_qword(0x4f10d0);
	set_name(0x4f10d8,"moduledata_itablink.6", 0x800);
	create_qword(0x4f10d8);
	set_name(0x4f10e0,"moduledata_itablink.7", 0x800);
	create_qword(0x4f10e0);
	set_name(0x4f10e8,"moduledata_itablink.8", 0x800);
	create_qword(0x4f10e8);
	set_name(0x4f10f0,"moduledata_itablink.9", 0x800);
	create_qword(0x4f10f0);
	set_name(0x4f10f8,"moduledata_itablink.10", 0x800);
	create_qword(0x4f10f8);
	set_name(0x4f1100,"moduledata_itablink.11", 0x800);
	create_qword(0x4f1100);
	set_name(0x4f1108,"moduledata_itablink.12", 0x800);
	create_qword(0x4f1108);
	set_name(0x4ec900,"*errors.errorString_error", 0x800);
	create_struct(0x4ec900,-1,"Go_itab");
	set_cmt(0x4ec900,"itab for *errors.errorString implementing error",0);
	set_name(0x4ed0c0,"*fmt.pp_fmt.State", 0x800);
	create_struct(0x4ed0c0,-1,"Go_itab");
	set_cmt(0x4ed0c0,"itab for *fmt.pp implementing fmt.State",0);
	set_name(0x4ed040,"*fmtsort.SortedMap_sort.Interface", 0x800);
	create_struct(0x4ed040,-1,"Go_itab");
	set_cmt(0x4ed040,"itab for *fmtsort.SortedMap implementing sort.Interface",0);
	set_name(0x4ec920,"*poll.TimeoutError_error", 0x800);
	create_struct(0x4ec920,-1,"Go_itab");
	set_cmt(0x4ec920,"itab for *poll.TimeoutError implementing error",0);
	set_name(0x4ed8c0,"*reflectlite.rtype_reflectlite.Type", 0x800);
	create_struct(0x4ed8c0,-1,"Go_itab");
	set_cmt(0x4ed8c0,"itab for *reflectlite.rtype implementing reflectlite.Type",0);
	set_name(0x4ec940,"*main.custom_main.Updater", 0x800);
	create_struct(0x4ec940,-1,"Go_itab");
	set_cmt(0x4ec940,"itab for *main.custom implementing main.Updater",0);
	set_name(0x4ec960,"*os.File_io.Writer", 0x800);
	create_struct(0x4ec960,-1,"Go_itab");
	set_cmt(0x4ec960,"itab for *os.File implementing io.Writer",0);
	set_name(0x4ec980,"*os.PathError_error", 0x800);
	create_struct(0x4ec980,-1,"Go_itab");
	set_cmt(0x4ec980,"itab for *os.PathError implementing error",0);
	set_name(0x4edc80,"*reflect.rtype_reflect.Type", 0x800);
	create_struct(0x4edc80,-1,"Go_itab");
	set_cmt(0x4edc80,"itab for *reflect.rtype implementing reflect.Type",0);
	set_name(0x4ec9a0,"*syscall.DLLError_error", 0x800);
	create_struct(0x4ec9a0,-1,"Go_itab");
	set_cmt(0x4ec9a0,"itab for *syscall.DLLError implementing error",0);
	set_name(0x4ec9c0,"runtime.errorString_error", 0x800);
	create_struct(0x4ec9c0,-1,"Go_itab");
	set_cmt(0x4ec9c0,"itab for runtime.errorString implementing error",0);
	set_name(0x4ec9e0,"syscall.Errno_error", 0x800);
	create_struct(0x4ec9e0,-1,"Go_itab");
	set_cmt(0x4ec9e0,"itab for syscall.Errno implementing error",0);
}
