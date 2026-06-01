__int64 __fastcall sub_35A680(unsigned int *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 (*v3)(void); // rdx
  unsigned int v4; // r12d
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax

  v2 = *(_QWORD *)a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v3 == (char *)sub_605C0 )
  {
    v4 = a1[14];
  }
  else
  {
    v4 = v3();
    v2 = *(_QWORD *)a1;
  }
  (*(void (__fastcall **)(unsigned int *, _QWORD))(v2 + 168))(a1, v4 + 1);
  v5 = *((_QWORD *)a1 + 22) + 120LL * *((_QWORD *)a1 + 23) - 120;
  *(_QWORD *)(v5 + 32) = *a2;
  v6 = calc_func_size();
  *(_QWORD *)(v5 + 40) = v6;
  if ( v6 <= 0x1FF )
    return v4;
  v8 = *((_QWORD *)a1 + 26);
  v9 = *(_QWORD *)(v5 + 32);
  v10 = *((_QWORD *)a1 + 25);
  if ( *((_QWORD *)a1 + 27) < (unsigned __int64)(v8 + 1) )
  {
    v11 = qvector_reserve();
    *((_QWORD *)a1 + 25) = v11;
    v10 = v11;
    v8 = *((_QWORD *)a1 + 26);
  }
  *(_QWORD *)(v10 + 8 * v8) = v9;
  ++*((_QWORD *)a1 + 26);
  return v4;
}

