unsigned __int64 __fastcall sub_94910(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int128 v7; // xmm0
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-F8h]
  char v12[8]; // [rsp+18h] [rbp-E8h] BYREF
  __m128i v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h]
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v21[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v25; // [rsp+C8h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 2416) != -1 )
  {
    v13 = 0;
    if ( sub_945B0(a3, &v13, 64) )
    {
      v4 = a3[32];
      v15 = 0;
      v16 = 0;
      v14 = v4;
      v17 = 0;
      *(_QWORD *)&v21[0] = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, unsigned __int64 *, _OWORD *))(v4 + 120))(
             v13.m128i_i64[0],
             &v15,
             &v16,
             v21) )
      {
        if ( (debug & 0x400000) != 0 )
          sub_88B80((__int64)"Couldn't retrieve location list.\n");
      }
      else
      {
        v17 = 1;
      }
      v5 = v16;
      if ( (_DWORD)v16 )
      {
        v6 = 0;
        v7 = 0;
        v11 = (unsigned int)v16;
        while ( 1 )
        {
          v24 = 0;
          v21[0] = v7;
          v21[1] = v7;
          v22 = v7;
          v23 = v7;
          if ( v6 >= v5 )
          {
            sub_1D740((__int64)"Out-of-bounds index for locdescs: %lld (got %lld)\n", v6, v5);
            break;
          }
          if ( !sub_85140(v14, (__int64)v21, v15, v6) )
            break;
          v7 = 0;
          if ( (_QWORD)v22 == 1 )
          {
            v9 = a3[32];
            v20 = 0;
            v18 = 0;
            v19 = 0;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, __int128 *, char *, __int128 *, char *, char *))(v9 + 128))(
                   *((_QWORD *)&v22 + 1),
                   0,
                   &v20,
                   &v18,
                   (char *)&v18 + 8,
                   &v19,
                   (char *)&v19 + 8,
                   v12) )
            {
              break;
            }
            v10 = *(_DWORD *)(a1 + 2416);
            v7 = 0;
            if ( (unsigned __int8)v20 == v10 + 80 )
            {
              *(_DWORD *)(a2 + 24) = 0;
              break;
            }
            if ( (unsigned __int8)v20 == v10 + 112 )
            {
              *(_DWORD *)(a2 + 24) = v18;
              break;
            }
          }
          if ( v11 == ++v6 )
            break;
          v5 = v16;
        }
      }
      if ( v15 )
        (*(void (**)(void))(v14 + 488))();
    }
    sub_84A10(&v13);
  }
  return v25 - __readfsqword(0x28u);
}

