__int64 __fastcall sub_5480(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbp
  _BYTE *v5; // rsi
  char *v6; // r13
  char *v7; // rbx
  int v8; // r14d
  int v9; // ebp
  char v10; // dl
  int v11; // eax
  __int64 result; // rax
  char *v13; // r14
  char *v14; // rbx
  char *v15; // rax
  char v16; // dl
  const char *v17; // rax
  char v18; // dl
  char *v19; // rax
  char v20; // dl
  unsigned __int64 v21; // [rsp+0h] [rbp-878h]
  _BYTE v24[1023]; // [rsp+30h] [rbp-848h] BYREF
  char v25; // [rsp+42Fh] [rbp-449h] BYREF
  _BYTE v26[1023]; // [rsp+430h] [rbp-448h] BYREF
  char v27; // [rsp+82Fh] [rbp-49h] BYREF
  char v28; // [rsp+830h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+838h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v21 = a2[1];
  if ( !v21 )
  {
    v13 = v24;
    v14 = v26;
    goto LABEL_20;
  }
  v4 = 0;
  v5 = (_BYTE *)(&stru_3F0 + 16);
  v6 = v26;
  v7 = v24;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(*a2 + v4);
    v7 += (int)qsnprintf(v7, v5, " %02X", v9);
    if ( a3 )
    {
      v10 = 46;
      if ( (unsigned int)(char)v9 <= 0x7F )
      {
        v11 = isalnum(v9);
        v10 = 46;
        if ( v11 )
          v10 = v9;
      }
      if ( v6 >= &v28 )
      {
        if ( !under_debugger )
          interr(518);
LABEL_45:
        BUG();
      }
      *v6++ = v10;
      if ( v6 >= &v28 )
      {
        v27 = 0;
        v6 = &v27;
      }
    }
    v4 = ++v8;
    if ( v8 >= v21 )
      break;
    if ( (v8 & 0xF) != 0 )
    {
      v5 = (_BYTE *)(v26 - v7);
    }
    else
    {
      v7 = v24;
      result = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v24, 2);
      if ( (_BYTE)result )
        return result;
      v5 = (_BYTE *)(&stru_3F0 + 16);
    }
  }
  v13 = v7;
  v14 = v6;
  if ( v13 >= v26 )
    goto LABEL_43;
  if ( v13 != &v25 )
  {
LABEL_20:
    v15 = ")";
    while ( 1 )
    {
      v16 = *v15++;
      *v13 = v16;
      if ( !v16 )
        break;
      if ( ++v13 == &v25 )
        goto LABEL_15;
    }
    if ( !a3 )
      return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v24, 2);
    if ( v13 >= v26 )
      goto LABEL_43;
    if ( v13 != &v25 )
    {
      v17 = " // ";
      while ( 1 )
      {
        v18 = *v17++;
        *v13 = v18;
        if ( !v18 )
          break;
        if ( ++v13 == &v25 )
          goto LABEL_36;
      }
      if ( v14 < &v28 )
      {
        *v14 = 0;
        if ( v13 < v26 )
        {
          if ( v13 != &v25 )
          {
            v19 = v26;
            while ( 1 )
            {
              v20 = *v19++;
              *v13 = v20;
              if ( !v20 )
                return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v24, 2);
              if ( ++v13 == &v25 )
                goto LABEL_37;
            }
          }
          goto LABEL_37;
        }
LABEL_43:
        if ( !under_debugger )
          interr(520);
        goto LABEL_45;
      }
LABEL_41:
      if ( under_debugger )
        goto LABEL_45;
      interr(519);
      goto LABEL_43;
    }
LABEL_36:
    v25 = 0;
    if ( v14 < &v28 )
    {
LABEL_37:
      v25 = 0;
      return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v24, 2);
    }
    goto LABEL_41;
  }
LABEL_15:
  v25 = 0;
  if ( a3 )
    goto LABEL_36;
  return (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v24, 2);
}
