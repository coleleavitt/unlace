__int64 __fastcall sub_D51A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // dx
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r8
  int v25; // ebp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int16 v29; // dx
  __int16 v30; // dx
  __int64 v31; // rdi
  int v32; // eax
  __int16 v33; // dx
  __int64 v34; // rdi
  int v35; // [rsp+0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  unsigned __int64 v38; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v38 = __readfsqword(0x28u);
  if ( *(unsigned __int8 *)(a1 + 28) >= (int)a2 )
    return v6;
  v7 = *(_QWORD *)(a1 + 16);
  v9 = a2;
  v10 = *(unsigned __int8 *)(a1 + 28);
  v11 = *(_QWORD *)(v7 + 16);
  if ( v11 )
  {
    xmmword_241500(v11);
    v10 = *(unsigned __int8 *)(a1 + 28);
  }
  v12 = *(_BYTE *)(v7 + 32);
  if ( v12 == (_BYTE)v10 )
  {
    if ( (_DWORD)a2 == 1 )
      goto LABEL_26;
    v37 = 1;
    HIWORD(v35) = 0;
    if ( (unsigned __int8)v10 <= 2u && (_DWORD)a2 == 4 )
    {
      v30 = *(_WORD *)(a1 + 30);
      a2 = *(unsigned int *)(a1 + 24);
      v31 = *(_QWORD *)(a1 + 16);
      LOWORD(v35) = 1;
      v36 = dword_241470;
      if ( sub_CB8F0(v31, a2, v30, (__int64)&v35, a5, a6) )
        goto LABEL_39;
    }
    else if ( (_DWORD)a2 != 4 )
    {
      v15 = dword_241470;
      LOWORD(v35) = 1;
      if ( (_DWORD)a2 == 2 )
      {
        v37 = 1;
        v36 = dword_241470 + 1;
LABEL_17:
        a2 = *(unsigned int *)(a1 + 24);
        if ( !sub_CB8F0(*(_QWORD *)(a1 + 16), a2, *(_WORD *)(a1 + 30), (__int64)&v35, a5, a6) )
        {
LABEL_37:
          *(_BYTE *)(a1 + 28) = v9;
          v6 = 0;
          *(_BYTE *)(v7 + 32) = v9;
          goto LABEL_8;
        }
        v16 = *__errno_location();
        if ( v16 != 13 )
        {
          if ( v16 > 13 )
          {
            if ( v16 != 37 && v16 != 110 && v16 != 16 )
            {
LABEL_48:
              *(_DWORD *)(a1 + 32) = v16;
              v6 = 3850;
              goto LABEL_24;
            }
          }
          else if ( v16 != 4 && v16 != 11 )
          {
            if ( v16 == 1 )
            {
              *(_DWORD *)(a1 + 32) = 1;
              v6 = 3;
              goto LABEL_24;
            }
            goto LABEL_48;
          }
        }
        v6 = 5;
LABEL_24:
        if ( v9 != 4 )
          goto LABEL_8;
        goto LABEL_25;
      }
LABEL_16:
      v37 = 510;
      v36 = v15 + 2;
      goto LABEL_17;
    }
    v6 = 5;
    if ( *(int *)(v7 + 24) > 1 )
    {
LABEL_25:
      *(_BYTE *)(a1 + 28) = 3;
      *(_BYTE *)(v7 + 32) = 3;
      goto LABEL_8;
    }
    v15 = dword_241470;
    LOWORD(v35) = 1;
    goto LABEL_16;
  }
  if ( v12 > 2u || (_DWORD)a2 != 1 )
    goto LABEL_7;
LABEL_26:
  if ( (unsigned __int8)(v12 - 1) <= 1u )
  {
    *(_BYTE *)(a1 + 28) = 1;
    v6 = 0;
    ++*(_DWORD *)(v7 + 24);
    ++*(_DWORD *)(v7 + 28);
    goto LABEL_8;
  }
  v17 = *(_WORD *)(a1 + 30);
  a2 = *(unsigned int *)(a1 + 24);
  v18 = *(_QWORD *)(a1 + 16);
  v37 = 1;
  v35 = 0;
  v36 = dword_241470;
  if ( sub_CB8F0(v18, a2, v17, (__int64)&v35, a5, a6) )
  {
LABEL_39:
    v32 = *__errno_location();
    if ( v32 != 13 )
    {
      if ( v32 > 13 )
      {
        if ( v32 != 37 && v32 != 110 && v32 != 16 )
          goto LABEL_59;
      }
      else if ( v32 != 4 && v32 != 11 )
      {
        v6 = 3;
        if ( v32 == 1 )
        {
LABEL_44:
          *(_DWORD *)(a1 + 32) = v32;
          goto LABEL_8;
        }
LABEL_59:
        v6 = 3850;
        goto LABEL_44;
      }
    }
LABEL_7:
    v6 = 5;
    goto LABEL_8;
  }
  v21 = *(_WORD *)(a1 + 30);
  v22 = *(_DWORD *)(a1 + 24);
  v23 = *(_QWORD *)(a1 + 16);
  v37 = 510;
  v36 = dword_241470 + 2;
  if ( !sub_CB8F0(v23, v22, v21, (__int64)&v35, v19, v20) )
  {
    v33 = *(_WORD *)(a1 + 30);
    a2 = *(unsigned int *)(a1 + 24);
    v34 = *(_QWORD *)(a1 + 16);
    v37 = 1;
    LOWORD(v35) = 2;
    v36 = dword_241470;
    if ( sub_CB8F0(v34, a2, v33, (__int64)&v35, v24, 2) )
    {
      v6 = 2058;
      v25 = *__errno_location();
      goto LABEL_35;
    }
    *(_BYTE *)(a1 + 28) = 1;
    ++*(_DWORD *)(v7 + 28);
    *(_DWORD *)(v7 + 24) = 1;
    goto LABEL_37;
  }
  v25 = *__errno_location();
  v28 = *(_QWORD *)(a1 + 16);
  a2 = *(unsigned int *)(a1 + 24);
  v29 = *(_WORD *)(a1 + 30);
  if ( v25 != 13 )
  {
    if ( v25 > 13 )
    {
      if ( v25 != 37 && v25 != 110 && v25 != 16 )
        goto LABEL_64;
    }
    else if ( v25 != 4 && v25 != 11 )
    {
      if ( v25 == 1 )
      {
        v6 = 3;
        v36 = dword_241470;
        v37 = 1;
        LOWORD(v35) = 2;
        sub_CB8F0(v28, a2, v29, (__int64)&v35, 2, v27);
LABEL_35:
        *(_DWORD *)(a1 + 32) = v25;
        goto LABEL_8;
      }
LABEL_64:
      v36 = dword_241470;
      v37 = 1;
      LOWORD(v35) = 2;
      v6 = 3850;
      sub_CB8F0(v28, a2, v29, (__int64)&v35, v26, v27);
      goto LABEL_35;
    }
  }
  v36 = dword_241470;
  v37 = 1;
  LOWORD(v35) = 2;
  v6 = 5;
  sub_CB8F0(v28, a2, v29, (__int64)&v35, v26, v27);
LABEL_8:
  v13 = *(_QWORD *)(v7 + 16);
  if ( v13 )
    xmmword_241510(v13, a2, v10);
  return v6;
}
