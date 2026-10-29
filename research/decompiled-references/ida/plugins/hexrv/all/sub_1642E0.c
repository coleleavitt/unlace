char *__fastcall sub_1642E0(__int64 *a1, char *a2)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r12
  int v5; // eax
  char *v6; // rax
  char *result; // rax
  __int64 v8; // rax
  char *v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v2 = a2;
  v3 = sub_1183E0((__int64)a2, &v9);
  if ( !v3 || (unsigned int)(*(_DWORD *)a2 - 22) <= 2 && (char *)v3 != a2 + 48 )
    return nullptr;
  v4 = sub_325910(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(unsigned int *)(v3 + 4), 1);
  v5 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 20 )
  {
    result = v9;
    *a1 = ~v4;
  }
  else
  {
    if ( v5 != 24 )
    {
      if ( v5 == 14 )
      {
        if ( *v9 != 4 )
          return nullptr;
        v4 = (int)log2ceil();
        v6 = v9;
      }
      else
      {
        if ( v5 != 22 )
          return nullptr;
        v6 = v9;
        if ( *v9 != 4 )
          return nullptr;
      }
      v2 = *((char **)v6 + 1);
      if ( (unsigned int)(*(_DWORD *)v2 - 23) > 1 || !(unsigned __int8)sub_11B8C0(v2 + 48, v10, 1u) || v4 != v10[0] )
        return nullptr;
    }
    v8 = -1;
    if ( (unsigned __int64)(int)v4 <= 0x3F )
      v8 = (1LL << v4) - 1;
    *a1 = v8;
    return v2 + 32;
  }
  return result;
}

