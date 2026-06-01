__int64 __fastcall sub_1AAA0(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 segm_base; // r14
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax

  v10 = *(_DWORD *)(a1 + 96);
  if ( v10 != a4 && v10 != a3 )
    goto LABEL_14;
  v11 = *(_QWORD *)(a1 + 56);
  if ( !a5 )
    v11 = *(_QWORD *)(a1 + 56) << 16;
  v12 = *(_QWORD *)(a1 + 88) + v11;
  v13 = (__int64 *)getseg(v12);
  if ( !v13 )
  {
    v13 = (__int64 *)getseg(*(_QWORD *)(a1 + 88));
    if ( !v13 )
    {
LABEL_14:
      sub_5A70((__int64)"File relocation information is invalid");
      return 0;
    }
  }
  *(_QWORD *)(a2 + 16) = v13[6];
  if ( *(_DWORD *)(a1 + 96) == a3 )
    segm_base = get_segm_base(v13);
  else
    segm_base = *v13;
  v15 = v12 - segm_base;
  v16 = 15;
  *(_QWORD *)(a2 + 24) = v15;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) == 15 )
  {
    v16 = 31;
    if ( !a5 )
      goto LABEL_10;
LABEL_15:
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 1;
    v17 = (unsigned __int16)v15;
    *(_DWORD *)(a2 + 4) = 2 * *(unsigned __int8 *)(a1 + 100);
    goto LABEL_11;
  }
  if ( a5 )
    goto LABEL_15;
LABEL_10:
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)a2 = 7;
  v17 = v15 >> 16;
  *(_DWORD *)(a2 + 4) = 2 * *(unsigned __int8 *)(a1 + 100);
LABEL_11:
  v18 = *(_QWORD *)(a1 + 32);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
    a1,
    v18,
    v17,
    v16,
    0,
    1);
  if ( *(_DWORD *)(a1 + 96) == a4 )
  {
    v20 = *(_DWORD *)(a2 + 4);
    if ( (v20 & 1) != 0 )
    {
      v21 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v23 = *(_QWORD *)(a2 + 16);
      v21 = 0;
      if ( v23 != -1 )
      {
        v24 = sel2para(v23, v18);
        v20 = *(_DWORD *)(a2 + 4);
        v21 = 16 * v24;
      }
    }
    v22 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = segm_base;
    *(_DWORD *)(a2 + 4) = v20 | 1;
    *(_QWORD *)(a2 + 24) = v21 + v22 - segm_base;
    set_fixup(*(_QWORD *)(a1 + 32), a2);
  }
  return 1;
}
