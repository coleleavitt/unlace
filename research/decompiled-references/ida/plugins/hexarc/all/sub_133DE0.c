__int64 __fastcall sub_133DE0(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rsi
  __int64 v3; // rax
  __int64 v4[5]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4[0] = (__int64)off_4AA400;
  memset(&v4[1], 0, 32);
  v5 = 0;
  if ( (unsigned int)sub_119320(a1, v4) )
    return 0xFFFFFFFFLL;
  result = v5;
  if ( v5 )
  {
    LODWORD(v2) = *(_DWORD *)a1 & 0x100000;
    if ( (_DWORD)v2 )
    {
      v2 = &loc_100000;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 784);
      if ( v3 )
      {
        *(_DWORD *)(v3 + 48) = 63;
        LODWORD(v2) = *(_DWORD *)a1 & 0x100000;
      }
    }
    sub_60A20(a1, (unsigned int)v2 >> 20, (__int64)"deleted dest pairs");
    return v5;
  }
  return result;
}

