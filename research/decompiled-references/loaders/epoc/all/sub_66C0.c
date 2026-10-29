__int64 __fastcall sub_66C0(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  char *v5; // rax
  unsigned __int64 v6; // r12
  int v7; // r8d
  const void *v8; // rsi
  unsigned __int8 v9; // r13
  unsigned __int8 *v10; // rsi
  unsigned __int8 *v11; // rdx
  int v12; // eax
  unsigned __int8 v13; // r9
  char v14; // r10
  unsigned int v15; // ecx
  _BYTE *v16; // rdi
  int v17; // ebx
  int v18; // eax
  char *v19; // r14
  char *v20; // r10
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // dl
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax
  char v25; // si
  _OWORD *v26; // rax
  unsigned __int8 v27; // cl
  char *v28; // rbp
  __int64 v29; // rdi
  unsigned __int64 v31; // rax
  int v32; // r14d
  unsigned __int8 v33; // r11
  unsigned __int8 v34; // r8
  unsigned int v35; // ecx
  _BYTE *v36; // rsi
  int v37; // r8d
  unsigned __int64 v39; // [rsp+8h] [rbp-1AA0h]
  unsigned __int8 v40; // [rsp+8h] [rbp-1AA0h]
  unsigned __int64 v41; // [rsp+10h] [rbp-1A98h]
  unsigned __int8 *v42; // [rsp+10h] [rbp-1A98h]
  _BYTE v43[512]; // [rsp+20h] [rbp-1A88h] BYREF
  _OWORD v44[2]; // [rsp+220h] [rbp-1888h] BYREF
  _OWORD v45[2]; // [rsp+240h] [rbp-1868h] BYREF
  char v46; // [rsp+260h] [rbp-1848h] BYREF
  char v47; // [rsp+1A48h] [rbp-60h] BYREF
  char v48; // [rsp+1A60h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+1A68h] [rbp-40h]

  v5 = &v46;
  v49 = __readfsqword(0x28u);
  v6 = (unsigned __int64)&a3[a4];
  do
  {
    *(_QWORD *)v5 = 0;
    v5 += 24;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != &v48 );
  memset(v44, 0, sizeof(v44));
  memset(v45, 0, sizeof(v45));
  if ( (unsigned __int64)a3 >= v6 )
  {
    sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 104);
    goto LABEL_33;
  }
  v7 = *a3;
  v8 = a3 + 1;
  if ( !(_BYTE)v7 )
  {
    v19 = (char *)(a4 - 1);
    if ( a4 - 1 > a2 )
      v19 = (char *)a2;
    memmove(a1, v8, (size_t)v19);
    goto LABEL_34;
  }
  if ( (unsigned __int8)v7 > 0x1Fu )
  {
    if ( (unsigned __int64)v8 >= v6 )
    {
      sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 143);
      goto LABEL_33;
    }
    v9 = a3[1];
    v11 = a3 + 2;
    v26 = v44;
    do
    {
      if ( v11 == (unsigned __int8 *)v6 )
      {
        sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 146);
        goto LABEL_33;
      }
      v27 = *v11;
      v26 = (_OWORD *)((char *)v26 + 1);
      ++v11;
      *((_BYTE *)v26 - 1) = v27;
    }
    while ( v26 != v45 );
    v31 = 0;
    v32 = 0;
    v40 = v7;
    do
    {
      v35 = v31 & 7;
      v36 = (char *)v44 + (v31 >> 3);
      v37 = (unsigned __int8)*v36;
      if ( _bittest(&v37, v35) )
      {
        if ( v9 == (_DWORD)v31 )
        {
          sub_54E0((__int64)"fatal error in in bytepair decompressor: got token equal to escape byte (line %d)\n", 157);
          goto LABEL_33;
        }
        if ( (unsigned __int64)v11 >= v6 || (v33 = *v11, (unsigned __int64)(v11 + 1) >= v6) )
        {
          sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 158);
          goto LABEL_33;
        }
        v34 = v11[1];
        ++v32;
        v11 += 2;
        *v36 |= 1 << v35;
        v43[2 * v31] = v33;
        v43[2 * v31 + 1] = v34;
      }
      ++v31;
    }
    while ( v31 != 256 );
    if ( v40 != v32 )
    {
      sub_54E0(
        (__int64)"fatal error in in bytepair decompressor: token bitmap doesn't match token count (line %d)\n",
        165);
      goto LABEL_33;
    }
  }
  else
  {
    if ( (unsigned __int64)v8 >= v6 )
    {
      sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 119);
      goto LABEL_33;
    }
    v41 = a2;
    v9 = a3[1];
    v10 = a3 + 2;
    v11 = &a3[3 * (v7 - 1) + 5];
    do
    {
      if ( (unsigned __int64)v10 >= v6
        || (v12 = *v10, (unsigned __int64)(v10 + 1) >= v6)
        || (v13 = v10[1], (unsigned __int64)(v10 + 2) >= v6) )
      {
        sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 123);
        goto LABEL_33;
      }
      v10 += 3;
      v14 = *(v10 - 1);
      if ( v9 == (_BYTE)v12 )
      {
        sub_54E0((__int64)"fatal error in in bytepair decompressor: got token equal to escape byte (line %d)\n", 125);
        goto LABEL_33;
      }
      v15 = v12 & 7;
      v16 = (char *)v44 + ((unsigned __int64)(unsigned __int8)v12 >> 3);
      v17 = (unsigned __int8)*v16;
      if ( _bittest(&v17, v15) )
      {
        sub_54E0((__int64)"fatal error in in bytepair decompressor: got duplicate token value (line %d)\n", 127);
        goto LABEL_33;
      }
      v18 = 2 * v12;
      *v16 |= 1 << v15;
      v43[v18] = v13;
      v43[v18 + 1] = v14;
    }
    while ( v10 != v11 );
    a2 = v41;
  }
  v19 = a1;
  v20 = &a1[a2];
  if ( (unsigned __int8 *)v6 == v11 )
  {
    LODWORD(v19) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v11 >= v6 )
    {
      sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 170);
      goto LABEL_33;
    }
    if ( *v11 != v9 )
      break;
    if ( (unsigned __int64)(v11 + 1) >= v6 )
    {
      sub_54E0((__int64)"fatal error in in bytepair decompressor: input overrun (line %d)\n", 173);
      goto LABEL_33;
    }
    v21 = v11 + 2;
    v22 = v11[1];
    if ( v19 >= v20 )
    {
      sub_54E0((__int64)"fatal error in in bytepair decompressor: output overrun (line %d)\n", 174);
      goto LABEL_33;
    }
    *v19 = v22;
    v11 = v21;
    ++v19;
LABEL_20:
    if ( v11 == (unsigned __int8 *)v6 )
    {
      LODWORD(v19) = (_DWORD)v19 - (_DWORD)a1;
      goto LABEL_34;
    }
  }
  v42 = v11 + 1;
  v39 = (unsigned __int64)v20;
  v23 = sub_6300((__int64)v43, *v11);
  v24 = 0;
  v20 = (char *)v39;
  if ( !v23[1] )
  {
LABEL_52:
    v11 = v42;
    goto LABEL_20;
  }
  while ( (unsigned __int64)v19 < v39 )
  {
    ++v19;
    v25 = *(_BYTE *)(*v23 + v24++);
    *(v19 - 1) = v25;
    if ( v24 >= v23[1] )
      goto LABEL_52;
  }
  sub_54E0((__int64)"fatal error in in bytepair decompressor: output overrun (line %d)\n", 181);
LABEL_33:
  LODWORD(v19) = -1;
LABEL_34:
  v28 = &v47;
  do
  {
    v29 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 )
    {
      *((_QWORD *)v28 + 1) = 0;
      qfree(v29);
    }
    v28 -= 24;
  }
  while ( v28 != (char *)v45 + 8 );
  return (unsigned int)v19;
}
