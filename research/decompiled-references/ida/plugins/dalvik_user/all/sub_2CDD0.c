__int64 __fastcall sub_2CDD0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // ebp
  _DWORD *v8; // r12
  char *v9; // r14
  _BOOL4 v10; // r13d
  int v11; // r15d
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  char **v14; // rbp
  char *v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  char *v21; // rbp
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  const char *v33; // rcx
  char v34[4]; // [rsp+4h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+18h] [rbp-A0h]
  __m128i v38[2]; // [rsp+30h] [rbp-88h] BYREF
  char *v39; // [rsp+58h] [rbp-60h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( (unsigned int)(a3 - 1) > 5 )
    return (unsigned int)-1;
  v7 = a3;
  if ( *(_BYTE *)(a1 + 792) )
  {
    switch ( (int)a3 )
    {
      case 2:
        v33 = "RESMOD_OVER";
        break;
      case 3:
        v33 = "RESMOD_OUT";
        break;
      case 4:
        v33 = "RESMOD_SRCINTO";
        break;
      case 5:
        v33 = "RESMOD_SRCOVER";
        break;
      case 6:
        v33 = "RESMOD_SRCOUT";
        break;
      default:
        v33 = "RESMOD_INTO";
        break;
    }
    sub_58110(
      a1,
      (unsigned int)"dalvik_debmod_t::dbg_set_resume_mode(tid=%d, resmod=%s(%d))\n",
      a2,
      (_DWORD)v33,
      a3,
      a6);
  }
  v8 = sub_27B80(a1, a2, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_1ABE0(a1, v38, *((_QWORD *)v8 + 1))
    && (unsigned __int8)sub_2CA10((_QWORD *)(a1 + 1040), &v35, v38)
    && v35 == -1 )
  {
    sub_58110(
      a1,
      (unsigned int)"dalvik_debmod_t::dbg_set_resume_mode ignore resmod, unknown location\n",
      v26,
      v27,
      v28,
      v29);
    return (unsigned int)-1;
  }
  v36 = 0;
  v37 = 0;
  v9 = *((char **)v8 + 1);
  v10 = v7 > 3;
  v39 = v9;
  if ( v7 == 1 || v7 == 4 )
    v11 = 0;
  else
    v11 = 2 - (v7 == 5 || v7 == 2);
  v36 = qvector_reserve();
  v12 = v37 + 1;
  v13 = v36 + 40 * v37;
  *(_BYTE *)v13 = 10;
  *(_QWORD *)(v13 + 8) = v9;
  *(_DWORD *)(v13 + 16) = v10;
  *(_DWORD *)(v13 + 20) = v11;
  *(_QWORD *)&v37 = v12;
  if ( v7 == 1 )
  {
    v14 = off_7D4E0;
    do
    {
      v15 = *v14;
      v16 = v12;
      v17 = v36;
      ++v12;
      v39 = *v14;
      if ( *((_QWORD *)&v37 + 1) < v12 )
      {
        v25 = qvector_reserve();
        v16 = v37;
        v36 = v25;
        v17 = v25;
        v12 = v37 + 1;
      }
      ++v14;
      v18 = v17 + 40 * v16;
      *(_BYTE *)v18 = 6;
      *(_QWORD *)(v18 + 8) = v15;
      *(_DWORD *)(v18 + 16) = 0;
      *(_DWORD *)(v18 + 20) = v11;
      *(_QWORD *)&v37 = v12;
    }
    while ( v14 != (char **)&unk_7D500 );
  }
  LODWORD(v39) = 1;
  v19 = v36;
  v20 = v12 + 1;
  v21 = v39;
  if ( *((_QWORD *)&v37 + 1) < v12 + 1 )
  {
    v30 = qvector_reserve();
    v12 = v37;
    v36 = v30;
    v19 = v30;
    v20 = v37 + 1;
  }
  v22 = v19 + 40 * v12;
  *(_QWORD *)(v22 + 8) = v21;
  *(_BYTE *)v22 = 1;
  *(_DWORD *)(v22 + 16) = v10;
  *(_DWORD *)(v22 + 20) = v11;
  *(_QWORD *)&v37 = v20;
  if ( (unsigned __int8)sub_50D40(a1 + 864, v34, 1, 2, &v36) && (unsigned __int8)sub_4A5E0(a1 + 864) )
  {
    sub_190F0(*(_QWORD **)(a1 + 1480));
    *(_QWORD *)(a1 + 1480) = 0;
    v31 = *(_QWORD **)(a1 + 1528);
    *(_QWORD *)(a1 + 1488) = a1 + 1472;
    *(_QWORD *)(a1 + 1496) = a1 + 1472;
    *(_QWORD *)(a1 + 1504) = 0;
    sub_18E30(v31);
    *(_QWORD *)(a1 + 1528) = 0;
    v32 = *(_QWORD **)(a1 + 1576);
    *(_QWORD *)(a1 + 1536) = a1 + 1520;
    *(_QWORD *)(a1 + 1544) = a1 + 1520;
    *(_QWORD *)(a1 + 1552) = 0;
    sub_18B70(v32);
    *(_QWORD *)(a1 + 1576) = 0;
    *(_QWORD *)(a1 + 1584) = a1 + 1568;
    *(_QWORD *)(a1 + 1592) = a1 + 1568;
    *(_QWORD *)(a1 + 1600) = 0;
    *(_DWORD *)(a1 + 1820) = 2;
    v23 = 1;
  }
  else
  {
    v23 = ~*(unsigned __int8 *)(a1 + 920);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v23;
}

