__int64 __fastcall sub_36CB00(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // rsi
  int v11; // edx
  unsigned int v12; // edx

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 > 0xF )
  {
    v12 = v3 - 52;
    result = 0;
    if ( v12 > 4 )
      return result;
  }
  else if ( v3 <= 2 )
  {
    if ( v3 != 2 )
      return 0;
    v5 = (__int64 *)(a1 + 64);
    v6 = *(_QWORD *)(a2 + 24);
    result = sub_255A80((__int64 *)(a1 + 64), v6, 0, a3);
    if ( (_DWORD)result )
      return (unsigned __int8)sub_29D090(*(_QWORD *)(a2 + 32), v6, a3) ^ 1u;
    v8 = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 > 0xF )
    {
      if ( v9 - 52 > 4 )
        goto LABEL_18;
    }
    else if ( v9 <= 2 )
    {
      if ( v9 == 2 )
      {
        v10 = *(_QWORD *)(v8 + 24);
        if ( (unsigned int)sub_255A80(v5, v10, 0, a3) )
          result = (unsigned __int8)sub_29D090(*(_QWORD *)(v8 + 32), v10, a3) ^ 1u;
        else
          result = sub_36CB00(a1, *(_QWORD *)(v8 + 32));
        v11 = *(_DWORD *)(a1 + 8) | 1;
        goto LABEL_19;
      }
LABEL_18:
      v11 = *(_DWORD *)(a1 + 8) | 1;
LABEL_19:
      *(_DWORD *)(a1 + 8) = v11;
      return result;
    }
    result = (unsigned int)sub_255A80(v5, *(_QWORD *)(v8 + 24), 0, a3) != 0;
    goto LABEL_18;
  }
  return (unsigned int)sub_255A80((__int64 *)(a1 + 64), *(_QWORD *)(a2 + 24), 0, a3) != 0;
}

