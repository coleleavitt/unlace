unsigned __int64 __fastcall sub_16C20(__int64 a1)
{
  __int64 v1; // r13
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // rbx
  _BYTE **v6; // r13
  _BYTE *v7; // rsi
  char *v8; // r14
  char *v9; // r12
  __int64 v10; // rbx
  int v11; // edi
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v19; // [rsp+8h] [rbp-60h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 16);
  v21 = __readfsqword(0x28u);
  if ( !getinf_buf(1) )
    s[0] = 0;
  s1 = nullptr;
  v19 = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  s1 = (char *)qvector_reserve(&s1, 0, v3 + 1, 1);
  *(_QWORD *)&v19 = v4;
  memmove(s1, s, v5);
  s1[v5] = 0;
  v6 = *(_BYTE ***)(v1 + 24);
  v7 = *v6;
  if ( !*v6 )
  {
LABEL_23:
    if ( !under_debugger )
      interr(10336);
    BUG();
  }
  v8 = s1;
  v9 = (char *)needle;
  if ( (_QWORD)v19 )
    v9 = s1;
  v10 = 0;
  while ( strcmp(v9, &v7[*v7 == 45]) )
  {
    v7 = v6[++v10];
    if ( !v7 )
      goto LABEL_23;
  }
  if ( v8 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v8);
  }
  *(_DWORD *)(a1 + 5272) = v10;
  v11 = v10;
  if ( (_DWORD)v10 )
  {
    if ( (unsigned int)(v10 - 1) <= 1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) = &unk_29860;
      v11 = *(_DWORD *)(a1 + 5272);
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL) = &unk_29840;
    v11 = *(_DWORD *)(a1 + 5272);
  }
  v12 = (unsigned __int16 *)&unk_29720;
  while ( 1 )
  {
    v13 = *((_QWORD *)v12 + 2);
    if ( v11 != 2 )
      break;
    v14 = *v12;
    v12 += 12;
    *(_QWORD *)(16 * v14 + a1 + 128) = v13;
    if ( &unk_29840 == (_UNKNOWN *)v12 )
      goto LABEL_17;
  }
  do
  {
    v16 = *v12;
    v17 = *((_QWORD *)v12 + 1);
    v12 += 12;
    *(_QWORD *)(16 * v16 + a1 + 128) = v17;
  }
  while ( &unk_29840 != (_UNKNOWN *)v12 );
LABEL_17:
  *(_WORD *)(a1 + 5288) = netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
  if ( netnode_qsupstr(**(_QWORD **)(a1 + 5232), a1 + 5152, -1, 83) > 0 )
    return sub_151B0(a1 + 5144, 0);
  else
    return v21 - __readfsqword(0x28u);
}
