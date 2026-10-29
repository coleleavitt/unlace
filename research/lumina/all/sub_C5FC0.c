__int64 __fastcall sub_C5FC0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r9
  int v8; // r13d
  __int64 v9; // r10
  char v10; // dl
  __int64 v11; // rdi
  int v12; // r14d
  unsigned int v13; // ebx
  __int16 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // rax
  int v23; // ecx
  int *v24; // rax
  int v25; // r14d
  unsigned __int16 v26; // ax
  int *v27; // r13
  int v28; // r12d
  int v29; // edi
  int v30; // edi
  __int64 v31; // rbx
  __int64 v32; // [rsp+8h] [rbp-80h]
  int v33; // [rsp+8h] [rbp-80h]
  int v34; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  int v37; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 64);
  v40 = __readfsqword(0x28u);
  if ( !v4 )
    return 5130;
  v5 = *v4;
  if ( !*v4 )
    return 5130;
  v6 = (int)a2;
  v7 = a3;
  v8 = a2 + a3;
  v9 = a1;
  v10 = a4;
  v36 = v5 + 64;
  v11 = *(_QWORD *)(v5 + 8);
  v12 = (1 << v8) - (1 << a2);
  if ( v11 )
  {
    v34 = v7;
    v32 = v9;
    xmmword_241500(v11);
    v7 = v34;
    v10 = a4;
    v9 = v32;
  }
  v13 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v14 = *((_WORD *)v4 + 10);
    v15 = *((unsigned __int16 *)v4 + 9);
    if ( ((unsigned __int16)v12 & (unsigned __int16)(v15 | v14)) == 0 )
    {
LABEL_7:
      v13 = 0;
      goto LABEL_8;
    }
    if ( v8 > (int)a2 )
    {
      a2 = (unsigned __int16)v15;
      v23 = v6;
      v24 = (int *)(v5 + 64 + 4LL * (int)v6);
      do
      {
        if ( *v24 > (((int)(unsigned __int16)v15 >> v23) & 1) )
          v13 = 0;
        ++v23;
        ++v24;
      }
      while ( v8 != v23 );
      if ( !v13 )
      {
        if ( _bittest((const int *)&a2, v6) )
        {
          --*(_DWORD *)(v5 + 64 + 4LL * (int)v6);
          v14 = *((_WORD *)v4 + 10);
          LODWORD(v15) = *((unsigned __int16 *)v4 + 9);
        }
        goto LABEL_32;
      }
    }
    v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 56LL) + 24LL);
    if ( v30 < 0 )
    {
      v31 = (int)v7;
      goto LABEL_43;
    }
    v31 = (int)v7;
    v37 = 2;
    v38 = (int)v6 + 120;
    v39 = (int)v7;
    a2 = 6;
    if ( off_241210(v30, 6, &v37) != -1 )
    {
LABEL_43:
      a2 = 0;
      memset((void *)(v36 + 4 * v6), 0, 4 * v31);
      v14 = *((_WORD *)v4 + 10);
      LODWORD(v15) = *((unsigned __int16 *)v4 + 9);
LABEL_32:
      v25 = ~v12;
      v13 = 0;
      v15 = v25 & (unsigned int)v15;
      *((_WORD *)v4 + 10) = v25 & v14;
      *((_WORD *)v4 + 9) = v15;
      goto LABEL_8;
    }
    goto LABEL_40;
  }
  v15 = v10 & 4;
  if ( !(_DWORD)v15 )
  {
    if ( v8 <= (int)a2 )
    {
LABEL_17:
      v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 56LL) + 24LL);
      if ( v20 < 0
        || (v33 = v7,
            v37 = 1,
            a2 = 6,
            v38 = (int)v6 + 120,
            v39 = (int)v7,
            v21 = off_241210(v20, 6, &v37),
            LODWORD(v7) = v33,
            v21 != -1) )
      {
        *((_WORD *)v4 + 10) |= v12;
        if ( v8 > (int)v6 )
        {
          a2 = v5 + 64;
          v22 = (_DWORD *)(v36 + 4 * v6);
          v15 = v36 + 4 * ((unsigned int)(v7 - 1) + v6) + 4;
          do
            *v22++ = -1;
          while ( (_DWORD *)v15 != v22 );
        }
        goto LABEL_7;
      }
    }
    else
    {
      a2 = v5 + 64;
      v15 = v5 + 64 + 4LL * (int)v6;
      v19 = v6;
      while ( 1 )
      {
        v18 = *((unsigned __int16 *)v4 + 10);
        if ( !_bittest(&v18, v19) )
        {
          a2 = *(unsigned int *)v15;
          if ( (_DWORD)a2 )
            break;
        }
        ++v19;
        v15 += 4;
        if ( v8 == v19 )
          goto LABEL_17;
      }
    }
    goto LABEL_40;
  }
  v26 = *((_WORD *)v4 + 9);
  if ( ((unsigned __int16)v12 & v26) != 0 )
    goto LABEL_7;
  a2 = v5 + 64;
  v15 = (int)v6;
  v27 = (int *)(v5 + 64 + 4LL * (int)v6);
  if ( *v27 < 0 )
    goto LABEL_40;
  if ( *v27 || (v28 = v6 + 120, v15 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 56LL), v29 = *(_DWORD *)(v15 + 24), v29 < 0) )
  {
LABEL_39:
    *((_WORD *)v4 + 9) = v26 | v12;
    ++*v27;
    goto LABEL_8;
  }
  v37 = 0;
  v38 = v28;
  v39 = v7;
  a2 = 6;
  if ( off_241210(v29, 6, &v37) != -1 )
  {
    v26 = *((_WORD *)v4 + 9);
    goto LABEL_39;
  }
LABEL_40:
  v13 = 5;
LABEL_8:
  v16 = *(_QWORD *)(v5 + 8);
  if ( v16 )
    xmmword_241510(v16, a2, v15);
  return v13;
}
