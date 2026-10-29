__int64 __fastcall sub_26A690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  __int64 v8; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int tinfo_size; // eax
  __int64 v18; // rbp
  int tinfo_property; // r14d
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp-8h] [rbp-40h]
  __int64 v23[7]; // [rsp+0h] [rbp-38h] BYREF

  v23[1] = __readfsqword(0x28u);
  v5 = a1;
  if ( a4 != 1 )
  {
    v8 = 2;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      tinfo_size = get_tinfo_size();
      sub_32C430(v23, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), tinfo_size, 1);
      v8 = *(_QWORD *)(a2 + 216);
      sub_246B40(a1, v8, v23, a5);
      clear_tinfo_t();
    }
    if ( a4 == -1 )
    {
      v21 = j__qalloc_or_throw(64, v8, v11, v12);
      *(_QWORD *)(v21 + 24) = a1;
      v5 = v21;
      *(_QWORD *)v21 = -1;
      *(_DWORD *)(v21 + 8) = 47;
      *(_QWORD *)(v21 + 12) = -1;
      *(_QWORD *)(v21 + 32) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_DWORD *)(v21 + 56) = 0;
    }
    else if ( *(_DWORD *)(a1 + 8) == 61 )
    {
      v18 = sub_255A30(*(__int64 **)(a1 + 24)) * a4;
      tinfo_property = get_tinfo_property();
      v20 = get_tinfo_size();
      sub_240A20(a1, *(_QWORD *)(a2 + 216), a2, v18, v20, tinfo_property, a5);
    }
    else
    {
      v13 = a4;
      v14 = sub_240F50(*(_QWORD *)(a2 + 216), a4, a2, *(_QWORD *)a3, *(_DWORD *)(a3 + 8), 1, 0);
      v16 = j__qalloc_or_throw(64, v13, v22, v15);
      *(_QWORD *)v16 = -1;
      *(_DWORD *)(v16 + 8) = 37;
      *(_QWORD *)(v16 + 12) = -1;
      *(_QWORD *)(v16 + 24) = v14;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 48) = 0;
      *(_DWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v16 + 32) = a1;
      v5 = v16;
    }
    *(_QWORD *)v5 = *(_QWORD *)a3;
    sub_2441C0(v5, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL), 0, a5);
    *(_DWORD *)(v5 + 56) |= 1u;
  }
  return v5;
}

