void __fastcall sub_E4210(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx

  v4 = *(_DWORD *)(a2 + 64);
  v5 = *(_QWORD *)a1;
  v6 = 8LL * (v4 + 2);
  if ( v4 + 3 >= *(_DWORD *)(*(_QWORD *)a1 + 144LL) )
    sub_DBD10(a1, "too many columns on %s", *(const char **)a2);
  v7 = sub_DFAD0(v5, *(_QWORD **)(a2 + 72), v6);
  if ( v7 )
  {
    v8 = *(int *)(a2 + 64);
    *(_DWORD *)(a2 + 64) = v8 + 1;
    v7[v8] = (__int64)a3;
    v7[v8 + 1] = 0;
    *(_QWORD *)(a2 + 72) = v7;
  }
  else if ( a3 )
  {
    sub_C9250(v5, a3);
  }
}
