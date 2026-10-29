__int64 __fastcall sub_24BFF0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, char a5, double a6)
{
  bool v8; // zf
  __int64 v10; // rbx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[8]; // [rsp+10h] [rbp-40h] BYREF

  v8 = *(_BYTE *)(a2 + 48) == 0;
  v17[1] = __readfsqword(0x28u);
  if ( v8 )
  {
    v12 = 3;
    v13 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, a4, 0, a6);
    if ( (unsigned int)get_tinfo_property() != 1 )
    {
      v12 = (__int64)a4;
      v13 = sub_244E70(v13, (__int64)a4, v14, v15);
    }
    v10 = j__qalloc_or_throw(64, v12, v14, v15);
    *(_QWORD *)(v10 + 32) = sub_240F50(*(_QWORD *)(a1 + 328), 0, 0, -1, 0, 1, 0);
    *(_QWORD *)v10 = -1;
    *(_DWORD *)(v10 + 8) = a3;
    *(_QWORD *)(v10 + 12) = -1;
    *(_QWORD *)(v10 + 24) = v13;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    *(_QWORD *)v10 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    v17[0] = 0;
    v10 = (__int64)sub_24B3A0(a1, a2, 0, a4, v17, 0, a6);
    clear_tinfo_t();
  }
  sub_2495A0(v10, *(_QWORD *)(a1 + 328), a3, a6);
  if ( a5 )
  {
    sub_32C270(v17, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 68));
    v10 = (__int64)sub_24AA50(a1, *(__int64 **)(a2 + 24), a2 + 64, v17, v10, a6);
    clear_tinfo_t();
  }
  return v10;
}

