__int64 __fastcall sub_269F60(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, double a6)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp-10h] [rbp-38h]
  __int64 v16; // [rsp-8h] [rbp-30h]

  v6 = a1;
  if ( a5 )
  {
    v8 = a5;
    v9 = *(_QWORD *)(a2 + 216);
    if ( a1 )
    {
      v10 = 35;
      if ( a5 < 0 )
      {
        v8 = -a5;
        v10 = 36;
      }
      v11 = sub_240F50(v9, v8, a2, a3, a4, 1, 0);
      v13 = j__qalloc_or_throw(64, v16, v12, v15);
      *(_QWORD *)v13 = -1;
      v6 = v13;
      *(_DWORD *)(v13 + 8) = v10;
      *(_QWORD *)(v13 + 12) = -1;
      *(_QWORD *)(v13 + 24) = a1;
      *(_QWORD *)(v13 + 32) = v11;
      *(_QWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0;
      *(_DWORD *)(v13 + 56) = 0;
      sub_2441C0(v13, *(_QWORD *)(v9 + 112), 0, a6);
      *(_DWORD *)(v6 + 56) |= 1u;
    }
    else
    {
      return sub_240F50(v9, a5, a2, a3, a4, 1, 0);
    }
  }
  return v6;
}

