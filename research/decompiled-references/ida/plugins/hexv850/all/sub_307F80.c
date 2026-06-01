_DWORD *__fastcall sub_307F80(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  int v7; // eax
  __int64 v8; // rbx
  _DWORD *result; // rax
  unsigned int v10; // eax
  char v11; // dl
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  char *v17; // rdi
  __int128 v18; // rdi
  _DWORD *v19; // rax
  __int128 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v7 = *a4;
  v23[1] = __readfsqword(0x28u);
  v8 = (__int64)a4;
  if ( (unsigned int)(v7 - 8) <= 1 )
  {
    while ( *(_BYTE *)(v8 + 32) == 4 )
    {
      v8 = *(_QWORD *)(v8 + 40);
      if ( (unsigned int)(*(_DWORD *)v8 - 8) > 1 )
        goto LABEL_7;
    }
    return nullptr;
  }
LABEL_7:
  if ( !v8 )
    return nullptr;
  v10 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 == 29 )
  {
LABEL_29:
    result = (_DWORD *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) != 4 )
      return result;
    goto LABEL_30;
  }
  if ( v10 > 0x1D )
  {
    if ( v10 != 40 || !(unsigned __int8)sub_11B1C0((char *)(v8 + 48), v23, 0) || v23[0] )
      return nullptr;
    goto LABEL_29;
  }
  if ( v10 == 20 )
  {
    v17 = (char *)sub_117CE0(v8, &v22);
    if ( !v17 )
      return nullptr;
    if ( !(unsigned __int8)sub_11B1C0(v17, v23, 0) )
      return nullptr;
    if ( v23[0] != 1 )
      return nullptr;
    *((_QWORD *)&v18 + 1) = v22;
    *(_QWORD *)&v18 = a2;
    v23[0] = *a3;
    v19 = (_DWORD *)sub_124880(v18, (__int64)v23, 0);
    if ( !v19 )
      return nullptr;
    if ( *v19 != 5 )
    {
      result = sub_307E00((__int64)v19);
      goto LABEL_38;
    }
    *((_QWORD *)&v20 + 1) = v19 + 8;
    *(_QWORD *)&v20 = a2;
    v21 = sub_124880(v20, (__int64)v23, 0);
    if ( v21 )
    {
      result = (_DWORD *)sub_307F80(a1, a2, v23, v21);
LABEL_38:
      if ( result )
      {
        *a3 = v23[0];
        return result;
      }
    }
    return nullptr;
  }
  if ( v10 != 23 || !(unsigned __int8)sub_14DA70(v8, &v22) )
    return nullptr;
  v11 = *(_BYTE *)(v8 + 32);
  if ( 8 * *(_DWORD *)(v8 + 36) - 1 != (_DWORD)v22 )
  {
    if ( v11 == 4 )
    {
      v12 = *(_QWORD *)(v8 + 40);
      if ( *(_DWORD *)v12 == 11 )
      {
        if ( v12 )
        {
          if ( *(_BYTE *)(v12 + 32) == 4 )
          {
            v13 = *(_DWORD **)(v12 + 40);
            if ( *v13 == 14 )
            {
              if ( v13 )
              {
                v14 = sub_117CE0((__int64)v13, v23);
                if ( v14 )
                {
                  if ( sub_325150(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), *(unsigned int *)(v14 + 4), 1) >= 0
                    && *(_BYTE *)v23[0] == 4 )
                  {
                    v15 = *(_DWORD **)(v23[0] + 8LL);
                    if ( *v15 == 8 )
                    {
                      if ( v15 )
                        return v15 + 8;
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
  result = (_DWORD *)(v8 + 32);
  if ( v11 == 4 )
  {
LABEL_30:
    v16 = *(_DWORD **)(v8 + 40);
    if ( *v16 == 8 )
      return v16 + 8;
  }
  return result;
}

