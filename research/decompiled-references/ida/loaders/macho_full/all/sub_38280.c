unsigned __int64 __fastcall sub_38280(__int64 a1, __int64 a2, __int64 a3, __int64 (*a4)())
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  const char *v10; // rsi
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rsi
  _DWORD v14[3]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-9Ch]
  __m128i v16; // [rsp+10h] [rbp-98h] BYREF
  _DWORD *v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+38h] [rbp-70h]
  _DWORD v20[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v22; // [rsp+60h] [rbp-48h]
  unsigned int v23; // [rsp+64h] [rbp-44h]
  unsigned int v24; // [rsp+68h] [rbp-40h]
  unsigned int v25; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v26; // [rsp+70h] [rbp-38h]
  unsigned int v27; // [rsp+74h] [rbp-34h]
  unsigned int v28; // [rsp+78h] [rbp-30h]
  unsigned int v29; // [rsp+7Ch] [rbp-2Ch]
  unsigned __int64 v30; // [rsp+88h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  v17 = v14;
  v20[0] = 0;
  v14[0] = 0;
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_637B8, (__m128i)(unsigned __int64)v20);
  sub_27280(a1, &v16, (__int64 (*)())off_637B8, a4);
  if ( !v20[0] )
    goto LABEL_9;
  v18 = 0;
  v19 = 0;
  if ( !v21 )
  {
LABEL_3:
    v5 = v23;
    if ( !v23 )
      goto LABEL_4;
    goto LABEL_19;
  }
  if ( sub_31220(a1, &v18, v20[2], v21, (__int64)"rebase info size", 0) )
  {
    sub_29430(a1, (__int64)&v18, (void (__fastcall ***)(_QWORD, unsigned __int64, _QWORD))a2);
    goto LABEL_3;
  }
  v10 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v10 = *(const char **)(a2 + 8);
  sub_112F0((__int64)"Error loading dyld rebase info (%s)\n", v10);
  v5 = v23;
  if ( !v23 )
  {
LABEL_4:
    v6 = v25;
    if ( !v25 )
      goto LABEL_5;
    goto LABEL_23;
  }
LABEL_19:
  if ( sub_31220(a1, &v18, v22, v5, (__int64)"bind info size", 0) )
  {
    sub_29A60(a1, 0, (__int64)&v18, a2);
    goto LABEL_4;
  }
  v11 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v11 = *(const char **)(a2 + 8);
  sub_112F0((__int64)"Error loading dyld bind info (%s)\n", v11);
  v6 = v25;
  if ( !v25 )
  {
LABEL_5:
    v7 = v27;
    if ( !v27 )
      goto LABEL_6;
    goto LABEL_27;
  }
LABEL_23:
  if ( sub_31220(a1, &v18, v24, v6, (__int64)"weak bind info size", 0) )
  {
    sub_29A60(a1, 1u, (__int64)&v18, a2);
    goto LABEL_5;
  }
  v12 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v12 = *(const char **)(a2 + 8);
  sub_112F0((__int64)"Error loading dyld weak bind info (%s)\n", v12);
  v7 = v27;
  if ( !v27 )
  {
LABEL_6:
    v8 = v29;
    if ( !v29 )
      goto LABEL_7;
LABEL_13:
    sub_380C0(a1, a2, v28, v8, "export info");
    if ( !v18 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_27:
  if ( sub_31220(a1, &v18, v26, v7, (__int64)"lazy bind info size", 0) )
  {
    sub_29A60(a1, 2u, (__int64)&v18, a2);
    goto LABEL_6;
  }
  v13 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v13 = *(const char **)(a2 + 8);
  sub_112F0((__int64)"Error loading dyld lazy bind info (%s)\n", v13);
  v8 = v29;
  if ( v29 )
    goto LABEL_13;
LABEL_7:
  if ( v18 )
  {
LABEL_8:
    *(_QWORD *)&v19 = 0;
    qfree();
  }
LABEL_9:
  if ( v14[0] && v15 )
    sub_380C0(a1, a2, v14[2], v15, "dyld exports");
  return v30 - __readfsqword(0x28u);
}

