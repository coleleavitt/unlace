__int64 __fastcall sub_C8CA0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 v5; // rcx
  _BYTE *v6; // rcx
  __int64 *i; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rsi
  _BYTE v12[32]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v13; // [rsp+20h] [rbp-148h]
  _QWORD v14[32]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v15[3]; // [rsp+150h] [rbp-18h] BYREF

  v1 = a1;
  v15[1] = __readfsqword(0x28u);
  result = 0;
  memset(v14, 0, sizeof(v14));
  if ( a1 )
  {
    do
    {
      v3 = 0;
      v4 = *(_QWORD *)(v1 + 32);
      v5 = 0;
      *(_QWORD *)(v1 + 32) = 0;
      if ( result )
      {
        while ( 1 )
        {
          v6 = v12;
          while ( *(_DWORD *)(result + 48) >= *(_DWORD *)(v1 + 48) )
          {
LABEL_7:
            *((_QWORD *)v6 + 4) = v1;
            if ( !*(_QWORD *)(v1 + 32) )
            {
              *(_QWORD *)(v1 + 32) = result;
              goto LABEL_10;
            }
            v6 = (_BYTE *)v1;
            v1 = *(_QWORD *)(v1 + 32);
          }
          while ( 1 )
          {
            *((_QWORD *)v6 + 4) = result;
            if ( !*(_QWORD *)(result + 32) )
              break;
            v6 = (_BYTE *)result;
            result = *(_QWORD *)(result + 32);
            if ( *(_DWORD *)(result + 48) >= *(_DWORD *)(v1 + 48) )
              goto LABEL_7;
          }
          *(_QWORD *)(result + 32) = v1;
LABEL_10:
          v14[v3++] = 0;
          v1 = v13;
          if ( v3 == 31 )
            break;
          result = v14[v3];
          v5 = (int)v3;
          if ( !result )
            goto LABEL_12;
        }
        v9 = v14[31];
        v10 = v12;
        while ( *(_DWORD *)(v9 + 48) >= *(_DWORD *)(v1 + 48) )
        {
LABEL_35:
          *((_QWORD *)v10 + 4) = v1;
          if ( !*(_QWORD *)(v1 + 32) )
          {
            *(_QWORD *)(v1 + 32) = v9;
            goto LABEL_38;
          }
          v10 = (_BYTE *)v1;
          v1 = *(_QWORD *)(v1 + 32);
        }
        while ( 1 )
        {
          *((_QWORD *)v10 + 4) = v9;
          v11 = *(_QWORD *)(v9 + 32);
          if ( !v11 )
            break;
          v10 = (_BYTE *)v9;
          v9 = *(_QWORD *)(v9 + 32);
          if ( *(_DWORD *)(v11 + 48) >= *(_DWORD *)(v1 + 48) )
            goto LABEL_35;
        }
        *(_QWORD *)(v9 + 32) = v1;
LABEL_38:
        v14[31] = v13;
      }
      else
      {
LABEL_12:
        v14[v5] = v1;
      }
      result = v14[0];
      v1 = v4;
    }
    while ( v4 );
    v1 = v14[1];
  }
  else
  {
    result = 0;
  }
  for ( i = &v14[2]; ; ++i )
  {
    if ( !v1 )
      goto LABEL_26;
    v8 = v12;
    if ( !result )
      break;
    while ( *(_DWORD *)(result + 48) >= *(_DWORD *)(v1 + 48) )
    {
LABEL_21:
      *((_QWORD *)v8 + 4) = v1;
      if ( !*(_QWORD *)(v1 + 32) )
      {
        *(_QWORD *)(v1 + 32) = result;
        goto LABEL_25;
      }
      v8 = (_BYTE *)v1;
      v1 = *(_QWORD *)(v1 + 32);
    }
    while ( 1 )
    {
      *((_QWORD *)v8 + 4) = result;
      if ( !*(_QWORD *)(result + 32) )
        break;
      v8 = (_BYTE *)result;
      result = *(_QWORD *)(result + 32);
      if ( *(_DWORD *)(result + 48) >= *(_DWORD *)(v1 + 48) )
        goto LABEL_21;
    }
    *(_QWORD *)(result + 32) = v1;
LABEL_25:
    result = v13;
LABEL_26:
    if ( v15 == i )
      return result;
LABEL_27:
    v1 = *i;
  }
  result = v1;
  if ( v15 != i )
    goto LABEL_27;
  return result;
}
