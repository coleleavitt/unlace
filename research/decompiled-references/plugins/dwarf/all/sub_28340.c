__int64 __fastcall sub_28340(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 *a4)
{
  __int64 v4; // r14
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 144);
  v15 = __readfsqword(0x28u);
  v13 = 0;
  sub_944F0(&v13, v4, a2, a3);
  v8 = sub_94EA0(
         v4,
         a2,
         (unsigned int)&v13,
         *(_QWORD *)(a1 + 112) >> 63,
         v6,
         v7,
         v13,
         DWORD2(v13),
         v14,
         v15,
         v16,
         v17,
         v18);
  v10 = v8;
  LOBYTE(v10) = (v8 & 0x7FFFFFFFFFFFFFFFLL) != 0;
  v11 = v10;
  LOBYTE(v11) = (v8 != -1) & v10;
  if ( (_BYTE)v11 )
  {
    *a4 = v8;
    a4[1] = v9;
  }
  sub_84A10(&v13);
  return v11;
}
