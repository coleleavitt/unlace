__int64 __fastcall sub_10570(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v6; // rax

  sub_16250();
  v1 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(a1 + 872) = 0;
  *(_QWORD *)a1 = off_20820;
  *(_QWORD *)(a1 + 888) = a1 + 872;
  *(_QWORD *)(a1 + 896) = a1 + 872;
  *(_QWORD *)(a1 + 936) = a1 + 920;
  *(_QWORD *)(a1 + 944) = a1 + 920;
  *(_QWORD *)(a1 + 880) = 0;
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 952) = 0;
  *(_DWORD *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 984) = a1 + 968;
  *(_QWORD *)(a1 + 992) = a1 + 968;
  *(_QWORD *)(a1 + 1000) = 0;
  v2 = v1 + 2;
  if ( v1 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v3 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v3 = v1 + 2;
    if ( *(_QWORD *)(a1 + 504) < v2 )
    {
      v6 = qvector_reserve();
      *(_QWORD *)(a1 + 488) = v6;
      memset((void *)(v6 + *(_QWORD *)(a1 + 496)), 0, v2 - *(_QWORD *)(a1 + 496));
    }
    else
    {
      memset((void *)(*(_QWORD *)(a1 + 488) + v1), 0, 2u);
    }
  }
  v4 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 496) = v3;
  *(_WORD *)(v4 + v1) = 204;
  sub_103A0(a1);
  return sub_10240(a1);
}

