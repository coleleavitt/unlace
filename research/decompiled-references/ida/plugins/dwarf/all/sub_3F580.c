unsigned __int64 __fastcall sub_3F580(__int64 a1, __int64 a2, __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r9d
  int v12; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // [rsp+0h] [rbp-A8h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 *v25; // [rsp+10h] [rbp-98h]
  unsigned __int16 *v26; // [rsp+18h] [rbp-90h]
  int v27; // [rsp+20h] [rbp-88h]
  int v28; // [rsp+28h] [rbp-80h]
  __int16 v29; // [rsp+2Eh] [rbp-7Ah]
  int v30; // [rsp+30h] [rbp-78h]
  int v31; // [rsp+38h] [rbp-70h]
  bool v32; // [rsp+3Ch] [rbp-6Ch] BYREF
  bool v33; // [rsp+3Dh] [rbp-6Bh] BYREF
  unsigned __int16 v34; // [rsp+3Eh] [rbp-6Ah] BYREF
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  __int128 v38; // [rsp+58h] [rbp-50h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 160);
  v27 = a1;
  v29 = a3;
  v39 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 88);
  v24 = v6;
  v35 = 0;
  v25 = &v36;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *))(v7 + 32))(a5, &v36, &v35) )
  {
    v23 = &v37;
    v26 = &v34;
    while ( 2 )
    {
      v37 = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(v7 + 56))(v36, v26, v23) )
      {
        v8 = (const char *)(*(__int64 (__fastcall **)(__int64))(v7 + 464))(v37);
        sub_1D740((__int64)"ERROR: %s\n", v8);
      }
      switch ( v34 )
      {
        case 1u:
          v16 = operator new(0xA8u);
          v37 = 0;
          v10 = v16;
          v38 = 0;
          sub_3E9E0(v16, v36, 1, a2, (__int64)v23, 0);
          *(_QWORD *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7D08;
          *(_OWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 2u:
        case 0x13u:
          v10 = operator new(0xA8u);
          sub_3E9E0(v10, v36, v34, a2, a4, 0);
          *(_QWORD *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7EB8;
          *(_OWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 4u:
          v10 = operator new(0xA8u);
          sub_3E9E0(v10, v36, 4, a2, a4, 0);
          *(_QWORD *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7D98;
          *(_OWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 5u:
          v18 = operator new(0x90u);
          v37 = 0;
          v10 = v18;
          v38 = 0;
          sub_3E9E0(v18, v36, 5, a2, (__int64)v23, 0);
          *(_QWORD *)v10 = &off_C7F00;
          goto LABEL_7;
        case 0xBu:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 11, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7B30;
          goto LABEL_7;
        case 0xDu:
          if ( (unsigned __int8)sub_2C350(a2, v36, 0x3Fu, &v32) && v32
            || (unsigned __int8)sub_2C350(a2, v36, 0x3Cu, &v33) && v33 )
          {
            goto LABEL_12;
          }
          if ( v29 == 23 )
          {
            v22 = operator new(0xC0u);
            v37 = 0;
            v10 = v22;
            v38 = 0;
            sub_3E9E0(v22, v36, 13, a2, (__int64)v23, 0);
            *(_QWORD *)(v10 + 184) = -1;
            *(_OWORD *)(v10 + 152) = 0;
            *(_WORD *)(v10 + 144) = 0;
            *(_QWORD *)v10 = &off_C7A58;
            *(_OWORD *)(v10 + 168) = -1;
          }
          else
          {
LABEL_26:
            v19 = operator new(0xC0u);
            v37 = 0;
            v10 = v19;
            v38 = 0;
            sub_3E9E0(v19, v36, v34, a2, (__int64)v23, 0);
            *(_QWORD *)(v10 + 184) = -1;
            *(_WORD *)(v10 + 144) = 0;
            *(_OWORD *)(v10 + 152) = 0;
            *(_QWORD *)v10 = &off_C7E70;
            *(_OWORD *)(v10 + 168) = -1;
          }
LABEL_7:
          if ( v10 )
          {
            v12 = a4;
            if ( *(_WORD *)(v10 + 140) != 11 )
            {
              if ( *(_QWORD *)(v10 + 48) > 1u || (v21 = sub_3B4F0(v10), v12 = v21 + 40, !v21) )
                v12 = v10 + 40;
            }
            sub_3F580(
              v27,
              a2,
              v34,
              v12,
              v36,
              v11,
              (_DWORD)v23,
              v24,
              (_DWORD)v25,
              (_DWORD)v26,
              v27,
              v28,
              v30,
              v31,
              v35,
              v36,
              v37,
              v38,
              *((__int64 *)&v38 + 1));
          }
LABEL_12:
          if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64 *, __int64 *))(v7 + 24))(
                 v24,
                 v36,
                 *(_QWORD *)(a2 + 112) >> 63,
                 v25,
                 &v35) )
          {
            return v39 - __readfsqword(0x28u);
          }
          continue;
        case 0xFu:
        case 0x10u:
        case 0x1Fu:
        case 0x42u:
          v9 = operator new(0x90u);
          v37 = 0;
          v10 = v9;
          v38 = 0;
          sub_3E9E0(v9, v36, v34, a2, (__int64)v23, 0);
          *(_QWORD *)v10 = &off_C7C30;
          goto LABEL_7;
        case 0x15u:
          v15 = operator new(0xB0u);
          v37 = 0;
          v10 = v15;
          v38 = 0;
          sub_3E9E0(v15, v36, 21, a2, (__int64)v23, 0);
          *(_QWORD *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7F48;
          *(_DWORD *)(v10 + 168) = 0;
          *(_OWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 0x16u:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 22, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7BE8;
          goto LABEL_7;
        case 0x17u:
          v10 = operator new(0xA8u);
          sub_3E9E0(v10, v36, 23, a2, a4, 0);
          *(_QWORD *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7E28;
          *(_OWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 0x1Cu:
          v37 = 0;
          sub_2C6A0(a2, v36, 0x4Cu, v23);
          if ( !(_BYTE)v37 )
            goto LABEL_26;
          goto LABEL_12;
        case 0x1Eu:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 30, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7AE8;
          goto LABEL_7;
        case 0x24u:
          v20 = operator new(0xA0u);
          v37 = 0;
          v10 = v20;
          v38 = 0;
          sub_3E9E0(v20, v36, 36, a2, (__int64)v23, 0);
          *(_BYTE *)(v10 + 144) = 0;
          *(_QWORD *)v10 = &off_C7BA0;
          *(_QWORD *)(v10 + 152) = 0;
          goto LABEL_7;
        case 0x26u:
        case 0x35u:
        case 0x37u:
          v14 = operator new(0x90u);
          v37 = 0;
          v10 = v14;
          v38 = 0;
          sub_3E9E0(v14, v36, v34, a2, (__int64)v23, 0);
          *(_QWORD *)v10 = &off_C7C78;
          goto LABEL_7;
        case 0x28u:
          v17 = operator new(0x98u);
          v37 = 0;
          v10 = v17;
          v38 = 0;
          sub_3E9E0(v17, v36, 13, a2, (__int64)v23, 0);
          *(_QWORD *)v10 = &off_C7D50;
          *(_QWORD *)(v10 + 144) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_7;
        case 0x2Eu:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 46, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7F90;
          goto LABEL_7;
        case 0x39u:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 57, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7AA0;
          goto LABEL_7;
        case 0x3Bu:
          v10 = operator new(0x90u);
          sub_3E9E0(v10, v36, 59, a2, a4, 0);
          *(_QWORD *)v10 = &off_C7CC0;
          goto LABEL_7;
        default:
          goto LABEL_12;
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

