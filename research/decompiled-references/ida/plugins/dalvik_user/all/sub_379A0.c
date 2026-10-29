__int64 __fastcall sub_379A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  const char *v9; // r13
  const char *v10; // rbx
  const char *v11; // rax
  int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE *v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v13 = nullptr;
  v4 = v3;
  v14 = 0;
  if ( !(unsigned __int8)sub_36D30((__int64 *)&v13, a2) )
  {
    v5 = 0;
    goto LABEL_7;
  }
  if ( (_QWORD)v14 )
  {
    if ( *v13 != 91 )
      goto LABEL_4;
  }
  else if ( byte_7FAF1 != 91 )
  {
LABEL_4:
    v12 = 0;
    v5 = 0;
    goto LABEL_5;
  }
  v7 = sub_135E0(&v13, a2);
  v8 = *(_QWORD *)(v4 + 8);
  if ( !v8 || !(unsigned __int8)sub_26460((_QWORD *)(v7 + 1040), &v12, v8) )
    goto LABEL_4;
  v5 = v12;
LABEL_5:
  if ( (debug & 0x40000) != 0 )
  {
    v9 = (const char *)dstr_tinfo();
    v10 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v11 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    sub_111A0((__int64)"DEXSIP: jdwp_val_guess_array_size %s`%s tif:%s ->%d\n", v11, v10, v9, v5);
    v5 = v12;
  }
LABEL_7:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v5;
}

