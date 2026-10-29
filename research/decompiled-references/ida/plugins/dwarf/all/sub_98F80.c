__int64 __fastcall sub_98F80(_QWORD *a1, __int64 (__fastcall ***a2)(_QWORD, __int64 *), int a3)
{
  int v4; // ebp
  __int64 v5; // rbx
  bool v6; // si
  bool v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v12[4]; // [rsp+10h] [rbp-148h] BYREF
  __int128 v13; // [rsp+30h] [rbp-128h]
  __int128 v14; // [rsp+40h] [rbp-118h]
  __int64 v15; // [rsp+50h] [rbp-108h]
  __int128 v16; // [rsp+58h] [rbp-100h]
  __int64 v17; // [rsp+68h] [rbp-F0h]
  __int128 v18; // [rsp+70h] [rbp-E8h]
  __int64 v19; // [rsp+A8h] [rbp-B0h]
  __int128 v20; // [rsp+B0h] [rbp-A8h]
  __int64 v21; // [rsp+C0h] [rbp-98h]
  __int128 v22; // [rsp+C8h] [rbp-90h]
  __int64 v23; // [rsp+E4h] [rbp-74h]
  __int64 v24; // [rsp+ECh] [rbp-6Ch]
  __int64 v25; // [rsp+F4h] [rbp-64h]
  unsigned __int64 v26; // [rsp+FCh] [rbp-5Ch]
  __int64 v27; // [rsp+108h] [rbp-50h]
  unsigned __int64 v28; // [rsp+118h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( (int)a1[8] <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = a1[8];
    v5 = 0;
    do
    {
      v7 = 1;
      v8 = 0;
      if ( (a3 & *(_DWORD *)(a1[7] + 4 * v5)) == a3 )
      {
        v9 = operator new(0x20u);
        *(_DWORD *)(v9 + 8) = 1;
        *(_QWORD *)v9 = off_C9528;
        v12[0] = v9;
        *(_OWORD *)(v9 + 16) = 0;
        v25 = 0x80000000LL;
        v12[3] = 0;
        v15 = 0;
        v17 = 0;
        v19 = 0;
        v21 = 0;
        v27 = 0;
        v23 = 0;
        v24 = 0;
        v26 = 0xFFFFFFFF00000000LL;
        v13 = 0;
        v14 = 0;
        v16 = 0;
        v18 = 0;
        v20 = 0;
        v22 = 0;
        if ( (unsigned __int64)(unsigned int)v5 >= a1[1] )
        {
          if ( !under_debugger )
            interr(30419);
          BUG();
        }
        if ( sub_98E20((__int64 *)(*a1 + 16LL * (unsigned int)v5), v12) )
        {
          v8 = (**a2)(a2, v12);
          v7 = v8 == 0;
        }
        else
        {
          v7 = 1;
          v8 = 0;
        }
        sub_1B750((__int64)v12);
      }
      v6 = v4 > (int)v5++ + 1;
    }
    while ( v7 && v6 );
  }
  return v8;
}

