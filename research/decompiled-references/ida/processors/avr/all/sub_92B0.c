const char *__fastcall sub_92B0(__int64 *a1, __int64 a2, _BYTE *a3)
{
  const char *result; // rax
  int v5; // ecx
  int v6; // [rsp+Ch] [rbp-42Ch]
  __int64 v7; // [rsp+10h] [rbp-428h]

  if ( (unsigned int)qsscanf() != 2 )
    return sub_9020(a1, a3);
  if ( (_DWORD)v7 == 5062994 )
  {
    *(_DWORD *)(a1[12] + 336) = v6;
    return nullptr;
  }
  if ( (_DWORD)v7 == 5066578 )
  {
    *(_DWORD *)(a1[12] + 340) = v6 >> 1;
    return nullptr;
  }
  if ( (_DWORD)v7 == 1380992325 && *(_DWORD *)((char *)&v7 + 3) == 5066578 )
  {
    *(_DWORD *)(a1[12] + 344) = v6;
    return nullptr;
  }
  if ( v7 != 0x48435241425553LL )
    return sub_9020(a1, a3);
  *(_DWORD *)(a1[12] + 320) = v6;
  v5 = *(_DWORD *)(a1[12] + 320);
  if ( v6 == v5 || !v5 )
    return nullptr;
  result = (const char *)-1LL;
  if ( v5 == v6 / 10 )
    return nullptr;
  return result;
}

