__int64 __fastcall sub_27D30(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // [rsp+0h] [rbp-138h] BYREF
  __int128 v21; // [rsp+8h] [rbp-130h]
  __int128 v22; // [rsp+18h] [rbp-120h]
  __int64 v23; // [rsp+28h] [rbp-110h]
  int v24; // [rsp+30h] [rbp-108h]
  __int64 v25; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-F0h]
  __int128 v27; // [rsp+58h] [rbp-E0h]
  __int64 v28; // [rsp+68h] [rbp-D0h]
  int v29; // [rsp+70h] [rbp-C8h]
  __int64 v30; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+88h] [rbp-B0h]
  __int128 v32; // [rsp+98h] [rbp-A0h]
  __int64 v33; // [rsp+A8h] [rbp-90h]
  int v34; // [rsp+B0h] [rbp-88h]
  __int64 idati; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-70h]
  __int128 v37; // [rsp+D8h] [rbp-60h]
  __int64 v38; // [rsp+E8h] [rbp-50h]
  int v39; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+F8h] [rbp-40h]

  v1 = *(unsigned __int8 *)(a1 + 112);
  v40 = __readfsqword(0x28u);
  if ( !(_BYTE)v1 )
  {
    v30 = 0;
    *(_QWORD *)&v36 = "Block_layout";
    WORD4(v36) = 256;
    idati = get_idati();
    if ( !(unsigned __int8)create_tinfo() )
      goto LABEL_52;
    if ( get_tinfo_tid() == -1 )
      goto LABEL_52;
    clear_tinfo_t();
    v30 = 0;
    WORD4(v36) = 256;
    *(_QWORD *)&v36 = "Block_descriptor_1";
    idati = get_idati();
    if ( !(unsigned __int8)create_tinfo() )
      goto LABEL_52;
    if ( get_tinfo_tid() == -1 )
      goto LABEL_52;
    clear_tinfo_t();
    v30 = 0;
    WORD4(v36) = 256;
    *(_QWORD *)&v36 = "Block_descriptor_2";
    idati = get_idati();
    if ( !(unsigned __int8)create_tinfo()
      || get_tinfo_tid() == -1
      || (clear_tinfo_t(),
          v30 = 0,
          WORD4(v36) = 256,
          *(_QWORD *)&v36 = "Block_descriptor_3",
          idati = get_idati(),
          !(unsigned __int8)create_tinfo())
      || get_tinfo_tid() == -1 )
    {
LABEL_52:
      sub_EC40();
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
      v20 = 0;
      v23 = 0;
      v24 = 1;
      v25 = 0;
      v28 = 0;
      v29 = 1;
      v30 = 0;
      v33 = 0;
      v34 = 1;
      idati = 0;
      v38 = 0;
      v39 = 1;
      v21 = 0;
      v22 = 0;
      v26 = 0;
      v27 = 0;
      v31 = 0;
      v32 = 0;
      v36 = 0;
      v37 = 0;
      if ( (unsigned __int8)sub_ED00((__int64)&v20, (__int64 *)(a1 + 16), (__int64 *)(a1 + 48)) )
      {
        if ( (unsigned __int8)sub_ED00((__int64)&v25, (__int64 *)(a1 + 24), (__int64 *)(a1 + 56)) )
        {
          if ( (unsigned __int8)sub_ED00((__int64)&v30, (__int64 *)(a1 + 32), (__int64 *)(a1 + 64)) )
          {
            if ( (unsigned __int8)sub_ED00((__int64)&idati, (__int64 *)(a1 + 40), (__int64 *)(a1 + 72)) )
            {
              if ( (unsigned __int8)sub_EE40((_QWORD *)(a1 + 80), &v20, "flags") )
              {
                if ( (unsigned __int8)sub_EE40((_QWORD *)(a1 + 88), &v20, "invoke") )
                {
                  if ( (unsigned __int8)sub_EE40((_QWORD *)(a1 + 96), &v20, "descriptor") )
                  {
                    v3 = sub_EE40((_QWORD *)(a1 + 104), &idati, "signature");
                    if ( (_BYTE)v3 )
                    {
                      *(_BYTE *)(a1 + 112) = 1;
                      v1 = v3;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v4 = idati;
      if ( idati )
      {
        v5 = v36;
        v6 = 0;
        if ( (_QWORD)v36 )
        {
          do
          {
            v7 = (_QWORD *)(v4 + 144 * v6);
            clear_tinfo_t();
            if ( v7[5] )
            {
              v7[6] = 0;
              qfree();
            }
            if ( v7[2] )
            {
              v7[3] = 0;
              qfree();
            }
            ++v6;
            v4 = idati;
          }
          while ( v5 != v6 );
        }
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      v8 = v30;
      if ( v30 )
      {
        v9 = v31;
        v10 = 0;
        if ( (_QWORD)v31 )
        {
          do
          {
            v11 = (_QWORD *)(v8 + 144 * v10);
            clear_tinfo_t();
            if ( v11[5] )
            {
              v11[6] = 0;
              qfree();
            }
            if ( v11[2] )
            {
              v11[3] = 0;
              qfree();
            }
            ++v10;
            v8 = v30;
          }
          while ( v9 != v10 );
        }
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      v12 = v25;
      if ( v25 )
      {
        v13 = v26;
        v14 = 0;
        if ( (_QWORD)v26 )
        {
          do
          {
            v15 = (_QWORD *)(v12 + 144 * v14);
            clear_tinfo_t();
            if ( v15[5] )
            {
              v15[6] = 0;
              qfree();
            }
            if ( v15[2] )
            {
              v15[3] = 0;
              qfree();
            }
            ++v14;
            v12 = v25;
          }
          while ( v13 != v14 );
        }
        *(_QWORD *)&v26 = 0;
        qfree();
      }
      v16 = v20;
      if ( v20 )
      {
        v17 = v21;
        v18 = 0;
        if ( (_QWORD)v21 )
        {
          do
          {
            v19 = (_QWORD *)(v16 + 144 * v18);
            clear_tinfo_t();
            if ( v19[5] )
            {
              v19[6] = 0;
              qfree();
            }
            if ( v19[2] )
            {
              v19[3] = 0;
              qfree();
            }
            ++v18;
            v16 = v20;
          }
          while ( v17 != v18 );
        }
        *(_QWORD *)&v21 = 0;
        qfree();
      }
    }
  }
  return v1;
}
