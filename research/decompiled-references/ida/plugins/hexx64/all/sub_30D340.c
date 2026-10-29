_DWORD *__fastcall sub_30D340(__int64 a1, __int64 a2, __int64 *a3, int *a4, double a5, __m128 a6)
{
  int v8; // eax
  int *v9; // rbx
  _DWORD *result; // rax
  unsigned int v11; // eax
  char v12; // dl
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  char *v18; // rdi
  _DWORD *v19; // rax
  int *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  __int64 v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *a4;
  v22[1] = __readfsqword(0x28u);
  v9 = a4;
  if ( (unsigned int)(v8 - 8) <= 1 )
  {
    while ( *((_BYTE *)v9 + 32) == 4 )
    {
      v9 = *((int **)v9 + 5);
      if ( (unsigned int)(*v9 - 8) > 1 )
        goto LABEL_7;
    }
    return nullptr;
  }
LABEL_7:
  if ( !v9 )
    return nullptr;
  v11 = *v9;
  if ( *v9 == 29 )
  {
LABEL_29:
    result = v9 + 8;
    if ( *((_BYTE *)v9 + 32) != 4 )
      return result;
    goto LABEL_30;
  }
  if ( v11 > 0x1D )
  {
    if ( v11 != 40 || !(unsigned __int8)sub_11FD80((char *)v9 + 48, v22, 0) || v22[0] )
      return nullptr;
    goto LABEL_29;
  }
  if ( v11 == 20 )
  {
    v18 = (char *)sub_11C8A0((__int64)v9, &v21);
    if ( !v18 )
      return nullptr;
    if ( !(unsigned __int8)sub_11FD80(v18, v22, 0) )
      return nullptr;
    if ( v22[0] != 1 )
      return nullptr;
    v22[0] = *a3;
    v19 = (_DWORD *)sub_129440(a2, v21, (__int64)v22, 0, a5, a6);
    if ( !v19 )
      return nullptr;
    if ( *v19 != 5 )
    {
      result = sub_30D1C0((__int64)v19);
      goto LABEL_38;
    }
    v20 = (int *)sub_129440(a2, (__int64)(v19 + 8), (__int64)v22, 0, a5, a6);
    if ( v20 )
    {
      result = sub_30D340(a1, a2, v22, v20);
LABEL_38:
      if ( result )
      {
        *a3 = v22[0];
        return result;
      }
    }
    return nullptr;
  }
  if ( v11 != 23 || !(unsigned __int8)sub_152630((__int64)v9, &v21) )
    return nullptr;
  v12 = *((_BYTE *)v9 + 32);
  if ( 8 * v9[9] - 1 != (_DWORD)v21 )
  {
    if ( v12 == 4 )
    {
      v13 = *((_QWORD *)v9 + 5);
      if ( *(_DWORD *)v13 == 11 )
      {
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 32) == 4 )
          {
            v14 = *(_DWORD **)(v13 + 40);
            if ( *v14 == 14 )
            {
              if ( v14 )
              {
                v15 = sub_11C8A0((__int64)v14, v22);
                if ( v15 )
                {
                  if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL), *(_DWORD *)(v15 + 4), 1) >= 0
                    && *(_BYTE *)v22[0] == 4 )
                  {
                    v16 = *(_DWORD **)(v22[0] + 8);
                    if ( *v16 == 8 )
                    {
                      if ( v16 )
                        return v16 + 8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return nullptr;
  }
  result = v9 + 8;
  if ( v12 == 4 )
  {
LABEL_30:
    v17 = *((_DWORD **)v9 + 5);
    if ( *v17 == 8 )
      return v17 + 8;
  }
  return result;
}

