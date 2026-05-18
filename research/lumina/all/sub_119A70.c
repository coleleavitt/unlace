__int64 __fastcall sub_119A70(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int v4; // [rsp+Ch] [rbp-Ch]

  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    v2 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v2 != 2 )
    {
LABEL_3:
      result = 0;
      if ( !(_BYTE)v2 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else
  {
    v2 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v2 != 2 )
      goto LABEL_3;
  }
  a2 = 0;
  result = sub_119750(a1, nullptr);
  if ( (_DWORD)result )
    goto LABEL_4;
  v2 = *(unsigned __int8 *)(a1 + 16);
  result = 0;
  if ( !(_BYTE)v2 )
    goto LABEL_4;
LABEL_10:
  a2 = 0;
  result = sub_10FAC0(a1, 0, v2);
LABEL_4:
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = result;
    sub_CCDE0(a1, a2, v2);
    return v4;
  }
  return result;
}
