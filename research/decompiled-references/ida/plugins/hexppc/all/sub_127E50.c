__int64 __fastcall sub_127E50(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4, int a5)
{
  char v7; // r15
  char v8; // r14
  __int64 v9; // r12
  unsigned int v10; // r13d
  int v12; // eax
  __int64 v13; // rax
  char v14; // al
  char v15; // dl
  __int16 v16; // si
  int v17; // edi
  __int64 v18; // r8
  int v19; // ecx
  __int16 v20; // [rsp+Eh] [rbp-7Ah]
  int v21; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v25 = 0;
  sub_120000((__int64)&v24, a4);
  v7 = v24;
  v8 = BYTE1(v24);
  v9 = v25;
  v20 = WORD1(v24);
  v23 = v24;
  v21 = HIDWORD(v24);
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_118150((unsigned __int8 *)(a1 + 64)) )
  {
    v7 = *(_BYTE *)(a1 + 64);
    v8 = *(_BYTE *)(a1 + 65);
    v20 = *(_WORD *)(a1 + 66);
    v12 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(a1 + 64) = v23;
    v21 = v12;
    v13 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v9;
    v9 = v13;
  }
  v10 = sub_127CB0(a1, a2, a3, a5, 1);
  if ( !(_BYTE)v10 && *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
  {
    if ( sub_118150((unsigned __int8 *)(a1 + 64)) )
    {
      v14 = *(_BYTE *)(a1 + 64);
      *(_BYTE *)(a1 + 64) = v7;
      v15 = *(_BYTE *)(a1 + 65);
      v16 = *(_WORD *)(a1 + 66);
      *(_BYTE *)(a1 + 65) = v8;
      v17 = *(_DWORD *)(a1 + 68);
      v18 = *(_QWORD *)(a1 + 72);
      *(_WORD *)(a1 + 66) = v20;
      v7 = v14;
      v19 = v21;
      *(_QWORD *)(a1 + 72) = v9;
      v8 = v15;
      v21 = v17;
      v9 = v18;
      *(_DWORD *)(a1 + 68) = v19;
      v20 = v16;
    }
    else
    {
      v10 = 0;
    }
  }
  LOBYTE(v24) = v7;
  BYTE1(v24) = v8;
  WORD1(v24) = v20;
  v25 = v9;
  HIDWORD(v24) = v21;
  sub_119360((__int64)&v24);
  return v10;
}

