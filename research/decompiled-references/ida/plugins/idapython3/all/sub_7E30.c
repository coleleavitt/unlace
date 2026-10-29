__int64 __fastcall sub_7E30(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // [rsp+0h] [rbp-58h]
  char *v13; // [rsp+8h] [rbp-50h]
  char *v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]
  char v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]

  v17 = a2;
  v18 = a3;
  v15 = __readfsqword(0x28u);
  if ( !idapython_do_not_check_ctree )
  {
    if ( a1 == 199 )
    {
      v12 = 8;
      v13 = &a7;
      v14 = &v16;
      if ( !(_DWORD)v18 )
        return 0;
      goto LABEL_11;
    }
    if ( a1 <= 199 )
    {
      if ( (unsigned int)(a1 - 130) > 1 )
        sub_7D60((__int64)"Hex-Rays Decompiler got called from Python without being loaded");
    }
    else
    {
      if ( a1 == 391 )
        return 0;
      if ( a1 <= 391 )
      {
        if ( a1 == 200 )
          return 0;
        v7 = (unsigned int)(a1 - 256);
        if ( (unsigned int)v7 <= 0x14 )
        {
          v8 = 1048581;
          if ( _bittest64(&v8, v7) )
            return 0;
        }
LABEL_11:
        sub_7D60(
          (__int64)"Hex-Rays Decompiler got called from Python without being loaded",
          a2,
          a3,
          a4,
          a5,
          a6,
          v12,
          v13,
          v14,
          v15);
        return 0;
      }
      v10 = (unsigned int)(a1 - 444);
      if ( (unsigned int)v10 > 0x31 )
        goto LABEL_11;
      v11 = 0x2000000800001LL;
      if ( !_bittest64(&v11, v10) )
        goto LABEL_11;
    }
  }
  return 0;
}

