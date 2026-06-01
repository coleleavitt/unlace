unsigned __int64 __fastcall sub_1F300(__int64 a1)
{
  const td_thragent_t *v3; // rdi
  td_err_e v4; // eax
  int v5; // r12d
  __int64 i; // rax
  __int64 v7; // rbx
  const char *v9; // rax
  _QWORD cbdata_p[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-40h] BYREF
  __int128 v12; // [rsp+18h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  v3 = *(const td_thragent_t **)(a1 + 952);
  if ( v3 )
  {
    cbdata_p[0] = a1;
    cbdata_p[1] = &v11;
    v11 = 0;
    v12 = 0;
    v4 = td_ta_thr_iter(v3, (td_thr_iter_f *)callback, cbdata_p, TD_THR_ANY_STATE, -20, nullptr, 0xFFFFFFFF);
    if ( v4 )
    {
      v9 = sub_FF60(v4);
      sub_B0B0((__int64)"%s: %s\n", "td_ta_thr_iter", v9);
      if ( !v11 )
        return v13 - __readfsqword(0x28u);
      goto LABEL_7;
    }
    if ( (_QWORD)v12 )
    {
      sub_1DEC0(a1, *(unsigned int *)(v11 + 104), *(_QWORD *)(v11 + 32));
      v5 = 1;
      for ( i = 1; v5 < (unsigned __int64)v12; i = ++v5 )
      {
        v7 = 384 * i;
        sub_1ED60(a1, *(_DWORD *)(v11 + 384 * i + 104), 0);
        sub_1DEC0(a1, *(unsigned int *)(v7 + v11 + 104), *(_QWORD *)(v7 + v11 + 32));
      }
    }
    if ( v11 )
    {
LABEL_7:
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return v13 - __readfsqword(0x28u);
}

