__int64 __fastcall sub_365280(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rsi
  int v10; // edx
  unsigned int v11; // edx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 0xF )
  {
    v11 = v2 - 52;
    result = 0;
    if ( v11 > 4 )
      return result;
  }
  else if ( v2 <= 2 )
  {
    if ( v2 != 2 )
      return 0;
    v4 = (__int64 *)(a1 + 64);
    v5 = *(_QWORD *)(a2 + 24);
    result = sub_24E700((__int64 *)(a1 + 64), v5, 0);
    if ( (_DWORD)result )
      return (unsigned __int8)sub_295D10(*(_QWORD *)(a2 + 32), v5) ^ 1u;
    v7 = *(_QWORD *)(a2 + 32);
    v8 = *(_DWORD *)(v7 + 8);
    if ( v8 > 0xF )
    {
      if ( v8 - 52 > 4 )
        goto LABEL_18;
    }
    else if ( v8 <= 2 )
    {
      if ( v8 == 2 )
      {
        v9 = *(_QWORD *)(v7 + 24);
        if ( (unsigned int)sub_24E700(v4, v9, 0) )
          result = (unsigned __int8)sub_295D10(*(_QWORD *)(v7 + 32), v9) ^ 1u;
        else
          result = sub_365280(a1, *(_QWORD *)(v7 + 32));
        v10 = *(_DWORD *)(a1 + 8) | 1;
        goto LABEL_19;
      }
LABEL_18:
      v10 = *(_DWORD *)(a1 + 8) | 1;
LABEL_19:
      *(_DWORD *)(a1 + 8) = v10;
      return result;
    }
    result = (unsigned int)sub_24E700(v4, *(_QWORD *)(v7 + 24), 0) != 0;
    goto LABEL_18;
  }
  return (unsigned int)sub_24E700((__int64 *)(a1 + 64), *(_QWORD *)(a2 + 24), 0) != 0;
}

