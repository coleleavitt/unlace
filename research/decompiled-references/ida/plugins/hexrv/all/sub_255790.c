__int64 __fastcall sub_255790(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // r8
  bool v7; // cl
  bool v8; // si

  result = sub_254AA0(a1, a2);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD **)(a1 + 32);
    v4 = *(_QWORD **)(a2 + 32);
    v5 = &v3[*(_QWORD *)(a1 + 40)];
    v6 = &v4[*(_QWORD *)(a2 + 40)];
    v7 = v3 != v5;
    v8 = v4 != v6;
    if ( v3 != v5 )
    {
      while ( v8 )
      {
        if ( *v3 < *v4 )
          return 0xFFFFFFFFLL;
        if ( *v4 < *v3 )
          return 1;
        ++v3;
        ++v4;
        v7 = v5 != v3;
        v8 = v6 != v4;
        if ( v5 == v3 )
          break;
      }
    }
    if ( v3 != v5 )
      return v7 & (unsigned __int8)(v4 == v6);
    result = 0xFFFFFFFFLL;
    if ( !v8 )
      return v7 & (unsigned __int8)(v4 == v6);
  }
  return result;
}

