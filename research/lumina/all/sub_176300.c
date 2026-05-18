void __fastcall sub_176300(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rsi
  int v15; // ebx
  _QWORD v16[3]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v17; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v22; // [rsp+58h] [rbp-B0h]
  char v23[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+C8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[12] - 1;
  a1[12] = v2;
  if ( !v2 )
  {
    v3 = a1[13];
    if ( v3 )
    {
      while ( 1 )
      {
        v10 = sub_1871B0(v3);
        v3 = *(_DWORD *)(v10 + 48);
        v11 = v10;
        if ( *(_DWORD *)(v10 + 88) != -1 )
        {
          a1[12] += 32;
          sub_177980(v16, 0, 1);
          v12 = v21;
          v13 = *(_DWORD *)(v11 + 88);
          v14 = v20;
          v15 = v18;
          if ( v22 < v21 + 1 )
          {
            v20 = sub_1987B0(&v20, v20, v21 + 1, 4);
            v14 = v20;
            v12 = v21;
          }
          *(_DWORD *)(v14 + 4 * v12) = v15;
          ++v21;
          v23[0] = 2;
          v25 = 0;
          v24 = 0;
          sub_176730(v23, a2);
          v6 = v18;
          v7 = v17;
          if ( v19 < v18 + 1 )
          {
            v17 = sub_1987B0(&v17, v17, v18 + 1, 32);
            v7 = v17;
            v6 = v18;
          }
          v8 = v7 + 32 * v6;
          *(_BYTE *)v8 = 2;
          *(_QWORD *)(v8 + 24) = 0;
          *(_OWORD *)(v8 + 8) = 0;
          sub_176730(v8, v23);
          ++v18;
          sub_176520(v23);
          sub_1761C0(v16, 0, nullptr, v13);
          sub_177AE0(v16);
          v9 = a1[12] == 32;
          a1[12] -= 32;
          if ( !v9 )
            break;
        }
        if ( !v3 )
        {
          v3 = a1[12];
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      if ( a1 )
      {
        if ( !v3 )
        {
          sub_17A9C0(*((_QWORD *)a1 + 2));
          operator delete(a1, 0x38u);
        }
      }
    }
  }
}
