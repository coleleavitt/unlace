__int64 __fastcall sub_85990(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 *a6)
{
  __int64 v8; // rbx
  int v10; // r15d
  __int64 v11; // rax
  __int64 result; // rax
  int name_value; // eax
  int v14; // r12d
  const char *v15; // r15
  __int64 v16; // rdi
  __int64 segm_by_sel; // rax
  _BYTE v18[8]; // [rsp+0h] [rbp-478h] BYREF
  size_t v19; // [rsp+8h] [rbp-470h]
  char v20; // [rsp+1Bh] [rbp-45Dh]
  unsigned int v21; // [rsp+1Ch] [rbp-45Ch]
  __int64 v22; // [rsp+20h] [rbp-458h]
  __int64 v23; // [rsp+28h] [rbp-450h]
  char s1[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v25; // [rsp+438h] [rbp-40h]

  v8 = a4;
  v25 = __readfsqword(0x28u);
  qstrncpy();
  v22 = 0;
  if ( (unsigned __int8)(s1[0] - 48) > 9u )
  {
    name_value = get_name_value();
    v10 = name_value;
    if ( name_value )
    {
      if ( name_value == 6 )
      {
        atos();
        *a6 = v23;
        segm_by_sel = get_segm_by_sel();
        if ( segm_by_sel )
        {
          *a6 = *(_QWORD *)(segm_by_sel + 48);
          v14 = 4 * (*(_BYTE *)(segm_by_sel + 43) != 0);
          goto LABEL_13;
        }
        goto LABEL_4;
      }
    }
    else
    {
      v15 = *(const char **)(*(_QWORD *)(a1 + 24) + 184LL);
      if ( strcmp(s1, v15) )
        return 0;
      v19 = strlen(v15);
      if ( strncmp(s1, v15, v19) )
        return 0;
      v16 = 0;
      v21 = 0;
      if ( s1[v19] )
      {
        LODWORD(v23) = 0;
        if ( (unsigned int)qsscanf() != 2 || v18[v19 + 48 + (int)v23] )
          return 0;
        v16 = v21;
        if ( v20 == 45 )
          v16 = -v21;
      }
      v10 = 1;
      v22 = *(_QWORD *)(a1 + 200) + v16;
    }
    v11 = getseg();
    if ( v11 )
      goto LABEL_12;
LABEL_4:
    *a6 = sel2para();
    *a5 = v22;
    if ( (_DWORD)v8 != 5 )
    {
      if ( (int)v8 > 5 )
      {
        if ( (unsigned int)(v8 - 6) <= 2 )
          return 1;
      }
      else if ( (_DWORD)v8 == 1 || (_DWORD)v8 == 4 )
      {
        return 1;
      }
    }
    return 0;
  }
  if ( !(unsigned __int8)atob64() )
    return 0;
  v10 = 5;
  v11 = getseg();
  if ( !v11 )
    goto LABEL_4;
LABEL_12:
  *a6 = *(_QWORD *)(v11 + 48);
  v14 = 4 * (*(_BYTE *)(v11 + 43) != 0);
  if ( (unsigned int)(v10 - 1) > 1 )
  {
LABEL_13:
    *a6 = sel2para();
    *a5 = v22;
    switch ( v8 )
    {
      case 1LL:
      case 6LL:
      case 8LL:
        return 1;
      case 4LL:
      case 5LL:
        goto LABEL_20;
      case 7LL:
        goto LABEL_21;
      default:
        return 0;
    }
  }
  v22 -= get_segm_base();
  *a6 = sel2para();
  *a5 = v22;
  switch ( v8 )
  {
    case 1LL:
    case 6LL:
    case 8LL:
      return 1;
    case 4LL:
    case 5LL:
LABEL_20:
      result = v14 | 3u;
      break;
    case 7LL:
LABEL_21:
      result = v14 | 2u;
      break;
    default:
      return 0;
  }
  return result;
}
