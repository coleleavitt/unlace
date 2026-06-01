__int64 __fastcall sub_3EDA80(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v9; // r14
  unsigned __int64 *v10; // rax
  __int16 v11; // dx
  int v12; // r15d
  _WORD *v13; // rax
  __int16 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(_DWORD *, unsigned int); // rax
  int v20; // eax
  unsigned int v21; // esi
  int v22; // r14d
  int v23; // esi
  _BYTE *v24; // r8
  int v25; // et1
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(_DWORD *, unsigned int); // rax
  int v30; // eax
  __int64 v31; // rax
  __int16 v32; // [rsp+Ch] [rbp-1ACh]
  char v33; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int16 v34; // [rsp+3Eh] [rbp-17Ah]
  char v35; // [rsp+61h] [rbp-157h]
  __int16 v36; // [rsp+66h] [rbp-152h]
  char v37; // [rsp+89h] [rbp-12Fh]
  __int16 v38; // [rsp+8Eh] [rbp-12Ah]
  unsigned __int64 v39; // [rsp+178h] [rbp-40h] BYREF

  v39 = __readfsqword(0x28u);
  v6 = sub_1D2F40(a1);
  if ( (_BYTE)v6 )
  {
    v7 = v6;
    v9 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
    v10 = (unsigned __int64 *)&v33;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( &v39 != v10 );
    if ( (unsigned int)decode_insn() )
    {
      v11 = *(_WORD *)(a1 + 48);
      v12 = 0;
      v13 = &unk_422680;
      if ( v11 == unk_422680 )
        goto LABEL_10;
      do
      {
        do
        {
          ++v12;
          v13 += 3;
          if ( v12 == 4 )
            return 0;
        }
        while ( v11 != *v13 );
LABEL_10:
        v14 = v13[1];
      }
      while ( v14 || v35 != 1 || *(_WORD *)(a1 + 110) != v36 || v37 != 1 || *(_WORD *)(a1 + 150) != v38 );
      v15 = *(_QWORD *)(a1 + 848);
      if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v15 + 1) )
      {
        v32 = v14;
        v31 = qvector_reserve();
        v14 = v32;
        *(_QWORD *)(a1 + 840) = v31;
        v15 = *(_QWORD *)(a1 + 848);
      }
      v16 = *(_QWORD *)(a1 + 840) + 16 * v15;
      *(_WORD *)(v16 + 8) = 0;
      *(_QWORD *)v16 = -1;
      ++*(_QWORD *)(a1 + 848);
      *(_QWORD *)v16 = v9;
      *(_WORD *)(v16 + 8) = v14;
      v17 = *(_DWORD **)(a1 + 832);
      v18 = *(unsigned __int16 *)(a1 + 70);
      v19 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v17 + 168LL);
      if ( v19 == sub_3E59C0 )
      {
        v20 = sub_3E59C0(v17, v18);
        v21 = v34;
        v22 = v20;
      }
      else
      {
        v27 = ((__int64 (__fastcall *)(_DWORD *, __int64, double))v19)(v17, v18, 0.0);
        v17 = *(_DWORD **)(a1 + 832);
        v21 = v34;
        v22 = v27;
        v29 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v17 + 168LL);
        if ( v29 != sub_3E59C0 )
        {
          v30 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64 (__fastcall *)(_DWORD *, unsigned int), __int64, void *))v29)(
                  v17,
                  v34,
                  sub_3E59C0,
                  v28,
                  &unk_422680);
          v24 = &unk_422680;
          v23 = v30;
          goto LABEL_20;
        }
      }
      v23 = sub_3E59C0(v17, v21);
LABEL_20:
      if ( !v24[6 * v12 + 4] )
      {
        v25 = v22;
        v22 = v23;
        v23 = v25;
      }
      sub_121860(a2, v23, v22, 4);
      v26 = *a3 & 0xFFFFFFFE;
      if ( *((_BYTE *)&unk_422680 + 6 * v12 + 5) )
        v26 = *a3 | 1;
      *a3 = v26;
      return v7;
    }
  }
  return 0;
}

