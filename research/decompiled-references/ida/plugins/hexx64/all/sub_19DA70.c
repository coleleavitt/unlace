unsigned __int64 __fastcall sub_19DA70(__int64 a1, double a2, __m128 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+2Ch] [rbp-6Ch]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h]
  int v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+64h] [rbp-34h]
  unsigned __int64 v28; // [rsp+78h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 88) == -1 )
  {
    v4 = *(_QWORD **)(a1 + 16);
    v5 = v4[35];
    if ( *(_BYTE *)(v5 + 320) || !*(_BYTE *)(*(_QWORD *)(v5 + 1496) + 148LL) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      v16 = 0;
      v7 = *(char *)(v6 + 12);
      v8 = (unsigned int)*(char *)(v6 + 13);
      v17 = 0;
      v9 = *(_QWORD *)(a1 + 16);
      v23 = 0;
      v20 = v7;
      v19 = 0;
      v18 = v9 + 96;
      v21 = 0xFFFFFFFFLL;
      v27 = 0xFFFFFFFFLL;
      v10 = *(_QWORD *)(v9 + 280);
      v22 = 0;
      v24 = v9 + 120;
      v25 = 0;
      v26 = v8;
      sub_19D620(&v16, v10, v8, v9 + 120, v11, v12, 0.0, a3);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
      v13 = (int)v21;
      *(_BYTE *)(a1 + 468) = 1;
      v14 = v22;
      *(_QWORD *)(a1 + 80) = v13;
      *(_QWORD *)(a1 + 104) = (int)v27;
      *(_DWORD *)(a1 + 88) = *(_QWORD *)(v18 + 8) - v17;
      *(_DWORD *)(a1 + 112) = *(_QWORD *)(v24 + 8) - v23;
      if ( v14 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v14);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
    }
  }
  return v28 - __readfsqword(0x28u);
}

