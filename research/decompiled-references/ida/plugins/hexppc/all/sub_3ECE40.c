__int64 __fastcall sub_3ECE40(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r14
  unsigned __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-1B8h] BYREF
  int v11; // [rsp+8h] [rbp-1B0h]
  __int64 v12; // [rsp+10h] [rbp-1A8h] BYREF
  int v13; // [rsp+18h] [rbp-1A0h]
  __int128 v14; // [rsp+20h] [rbp-198h]
  __int64 v15; // [rsp+30h] [rbp-188h]
  __int64 v16; // [rsp+38h] [rbp-180h]
  __int64 v17; // [rsp+40h] [rbp-178h]
  char v18; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int16 v19; // [rsp+4Eh] [rbp-16Ah]
  unsigned __int16 v20; // [rsp+76h] [rbp-142h]
  unsigned __int64 v21; // [rsp+188h] [rbp-30h] BYREF

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
    return 0;
  v3 = sub_1D2F40(a1);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v15 = -1;
  v16 = 0;
  v7 = (unsigned __int64 *)&v18;
  v17 = 0;
  v14 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( v7 != &v21 );
  if ( (unsigned int)decode_insn()
    && (v16 & 0x20000FFFFLL) == 0xD9
    && *(unsigned __int16 *)(a1 + 70) == v19 + 1
    && *(unsigned __int16 *)(a1 + 110) == v20 + 1 )
  {
    v13 = a2;
    v11 = a3;
    v10 = 0x800000001LL;
    v12 = 0x800000001LL;
    sub_1D2850(a1, 5, (unsigned __int8 *)&v10, nullptr, (unsigned __int8 *)&v12);
    v8 = *(_QWORD *)(a1 + 848);
    if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v8 + 1) )
    {
      *(_QWORD *)(a1 + 840) = qvector_reserve();
      v8 = *(_QWORD *)(a1 + 848);
    }
    v9 = *(_QWORD *)(a1 + 840) + 16 * v8;
    *(_QWORD *)v9 = -1;
    *(_WORD *)(v9 + 8) = 0;
    ++*(_QWORD *)(a1 + 848);
    *(_QWORD *)v9 = v6;
    *(_WORD *)(v9 + 8) = v16;
    sub_119360((__int64)&v12);
    sub_119360((__int64)&v10);
  }
  else
  {
    return 0;
  }
  return v3;
}

