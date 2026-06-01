unsigned __int64 __fastcall sub_1E420(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  size_t v14; // r15
  size_t v15; // r8
  __int64 v16; // rsi
  size_t v17; // [rsp+0h] [rbp-D8h]
  unsigned int v18; // [rsp+Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+14h] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-C0h] BYREF
  int v21; // [rsp+1Ch] [rbp-BCh] BYREF
  unsigned int v22; // [rsp+20h] [rbp-B8h] BYREF
  int v23; // [rsp+24h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD *v25; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-A0h] BYREF
  _OWORD v27[2]; // [rsp+40h] [rbp-98h] BYREF
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v29; // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-50h]
  unsigned __int64 v32; // [rsp+90h] [rbp-48h]
  unsigned __int64 v33; // [rsp+98h] [rbp-40h]

  v18 = a2;
  v33 = __readfsqword(0x28u);
  v24 = 0;
  v25 = nullptr;
  memset(v27, 0, 20);
  v2 = *(_QWORD *)qword_47A20;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v2 + 48))(qword_47A20) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, void *, __int64, unsigned int *, char *, __int64 *, unsigned int *, char *, _DWORD **, int *))(*(_QWORD *)qword_47A20 + 192LL))(
           qword_47A20,
           v18,
           v27,
           &unk_37A00,
           0x8000,
           &v19,
           (char *)v27 + 4,
           &v24,
           &v20,
           (char *)v27 + 8,
           &v25,
           &v21);
    if ( !(unsigned __int8)sub_1D810("GetFieldProps", v3) )
    {
      if ( v19 > 0x7FFF )
        word_479FE = 0;
      v29 = 0;
      src = nullptr;
      utf16_utf8();
      sub_1DC70((__int64 *)&src);
      sub_F1B0(v18, (__int64)&src);
      *(_QWORD *)((char *)v27 + 12) = qword_47A10;
      sub_F0A0(v18, v27, 20, 97);
      sub_F0A0(v18, v24, v20, 100);
      sub_1D7C0(v18, DWORD2(v27[0]), v25, v21);
      v5 = qword_47A10++;
      sub_F0A0(v5, &v18, 4, 112);
      if ( (BYTE5(v27[0]) & 1) != 0 )
      {
        v22 = 0;
        v23 = 0;
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, int *))(*(_QWORD *)qword_47A20 + 280LL))(
               qword_47A20,
               v18,
               &v22,
               &v23);
        if ( !(unsigned __int8)sub_1D810("GetRVA", v6) )
        {
          v26 = v22;
          sub_F0A0(v18, &v26, 8, 120);
          v7 = sub_F2B0() + v22;
          if ( (unsigned __int8)is_loaded() )
          {
            sub_EDC0((__int64)&v30);
            v8 = v31;
            if ( v31 > 1 )
            {
              v9 = v31 - 1;
              v10 = v31 + 1;
              v11 = v30;
              v12 = v31 + 2;
              if ( v32 < v31 + 2 )
              {
                v30 = qvector_reserve();
                v11 = v30;
              }
              v31 = v12;
              *(_BYTE *)(v11 + v10) = 0;
              *(_WORD *)(v30 + v9) = 14906;
              v8 = v31;
            }
            v13 = v29;
            if ( (_QWORD)v29 )
            {
              v14 = v29 - 1;
              if ( (_QWORD)v29 != 1 )
              {
                v15 = v29 - 1;
                if ( v8 )
                {
                  --v8;
                  v15 = v14 + v8;
                  v13 = v29 + v8;
                }
                v16 = v30;
                if ( v32 < v13 )
                {
                  v17 = v15;
                  v30 = qvector_reserve();
                  v15 = v17;
                  v16 = v30;
                }
                v31 = v13;
                *(_BYTE *)(v16 + v15) = 0;
                memcpy((void *)(v30 + v8), src, v14);
              }
            }
            set_name();
            sub_F0A0(v7, &v18, 4, 112);
            if ( v30 )
            {
              v31 = 0;
              qfree();
            }
          }
        }
      }
      if ( src )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_A7E0((__int64)"%s: invalid token.", "display_field");
  }
  return v33 - __readfsqword(0x28u);
}

