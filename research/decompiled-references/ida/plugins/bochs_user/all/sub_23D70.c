void __fastcall sub_23D70(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax

  sub_21660(a1);
  v1 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)a1 = off_72858;
  *(_OWORD *)(a1 + 920) = -1;
  *(_QWORD *)(a1 + 936) = -1;
  *(_DWORD *)(a1 + 944) = -1;
  v2 = v1 + 1;
  if ( v1 == -1 )
  {
    v3 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v3 = v1 + 1;
    if ( *(_QWORD *)(a1 + 504) < v2 )
    {
      v5 = qvector_reserve();
      *(_QWORD *)(a1 + 488) = v5;
      memset((void *)(v5 + *(_QWORD *)(a1 + 496)), 0, v2 - *(_QWORD *)(a1 + 496));
    }
    else
    {
      memset((void *)(*(_QWORD *)(a1 + 488) + v1), 0, 1u);
    }
  }
  v4 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 496) = v3;
  *(_BYTE *)(v4 + v1) = -52;
  *(_OWORD *)(a1 + 864) = -1;
  *(_QWORD *)(a1 + 912) = 0x10000000000LL;
  *(_OWORD *)(a1 + 880) = -1;
  *(_OWORD *)(a1 + 896) = 0;
  sub_215B0((_QWORD *)a1, "linux");
}

