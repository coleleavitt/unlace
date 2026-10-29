__int64 __fastcall sub_43DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  sub_4B2B0(a1 + 64, a2, a3, a1 + 344);
  sub_58AF0(a1 + 344);
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4848) = 0;
  *(_QWORD *)(a1 + 4856) = 0;
  *(_QWORD *)(a1 + 4864) = a1 + 4848;
  *(_QWORD *)(a1 + 4872) = a1 + 4848;
  *(_QWORD *)(a1 + 4880) = 0;
  *(_QWORD *)(a1 + 4832) = a4;
  *(_QWORD *)(a1 + 4824) = a5;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 5456) = -1;
  *(_QWORD *)(a1 + 5464) = 0;
  *(_QWORD *)(a1 + 5552) = -1;
  *(_OWORD *)(a1 + 5472) = -1;
  *(_OWORD *)(a1 + 5488) = -1;
  *(_OWORD *)(a1 + 5504) = -1;
  *(_OWORD *)(a1 + 5520) = -1;
  *(_OWORD *)(a1 + 5536) = -1;
  qword_753F8 = a1;
  get_path();
  return qdirname();
}

