unsigned __int64 __fastcall sub_8A9B0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int128 v10; // xmm0
  __int64 (__fastcall *v11)(__int64); // rax
  char v12; // al
  __int64 v14; // [rsp+0h] [rbp-A8h]
  __int64 v15; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-98h] BYREF
  int v17; // [rsp+18h] [rbp-90h]
  _OWORD v18[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 256);
  v5 = *a2;
  v20 = __readfsqword(0x28u);
  v17 = 0;
  v14 = v4;
  v15 = 0;
  v16 = 0;
  *(_QWORD *)&v18[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, unsigned __int64 *, _OWORD *))(v4 + 120))(
         v5,
         &v15,
         &v16,
         v18) )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"Couldn't retrieve location list.\n");
  }
  else
  {
    v17 = 1;
  }
  v7 = v16;
  if ( (_DWORD)v16 )
  {
    v8 = (unsigned int)v16;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v19 = 0;
      v18[0] = v10;
      v18[1] = v10;
      v18[2] = v10;
      v18[3] = v10;
      if ( v9 < v7 )
      {
        v10 = 0;
        if ( sub_85140(v14, (__int64)v18, v15, v9) )
        {
          v11 = **(__int64 (__fastcall ***)(__int64))a3;
          v12 = v11 == sub_7EF20
              ? (***(__int64 (__fastcall ****)(_QWORD, _QWORD, _OWORD *, _QWORD, double))(a3 + 16))(
                  *(_QWORD *)(a3 + 16),
                  *(_QWORD *)(a3 + 8),
                  v18,
                  (unsigned int)v9,
                  0.0)
              : ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, _QWORD, double))v11)(
                  a3,
                  a1,
                  v18,
                  (unsigned int)v9,
                  0.0);
          v10 = 0;
          if ( !v12 )
            break;
        }
        if ( v8 == ++v9 )
          break;
      }
      else
      {
        sub_1D740((__int64)"Out-of-bounds index for locdescs: %lld (got %lld)\n", v9++, v7);
        v10 = 0;
        if ( v8 == v9 )
          break;
      }
      v7 = v16;
    }
  }
  if ( v15 )
    (*(void (**)(void))(v14 + 488))();
  return v20 - __readfsqword(0x28u);
}

